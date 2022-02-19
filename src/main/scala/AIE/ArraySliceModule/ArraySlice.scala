package AIE.ArraySliceModule

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._

import scala.collection.mutable._


// config class
case class ArraySliceConfig(W: Int, H: Int, M: Int, N: Int)


case class ArraySlice(dataWidth: Int, arraySliceConfig: ArraySliceConfig) extends Component {

  // define io port

  val arrayDataType = Bits(dataWidth bits)

  val inputStreamArrayData: Stream[Bits] = slave Stream arrayDataType
  val inputFeatureMapWidth: UInt = in UInt (log2Up(arraySliceConfig.W) bits)
  val inputFeatureMapHeight: UInt = in UInt (log2Up(arraySliceConfig.H) bits)
  val outputFeatureMapHeight = in UInt (log2Up(arraySliceConfig.H / arraySliceConfig.M) bits)
  val outputFeatureMapWidth = in UInt (log2Up(arraySliceConfig.W / arraySliceConfig.N) bits)

  val outputStreamArrayData: Vec[Stream[Bits]] = Vec(master Stream arrayDataType, arraySliceConfig.N)


  // register for timing
  val wReg = RegNext(inputFeatureMapWidth) init inputFeatureMapWidth.getAllTrue
  val hReg = RegNext(inputFeatureMapHeight) init inputFeatureMapHeight.getAllTrue
  val aReg = RegNext(outputFeatureMapHeight) init outputFeatureMapHeight.getAllTrue
  val bReg = RegNext(outputFeatureMapWidth) init outputFeatureMapWidth.getAllTrue

  // represent io port

  def ifmData: Stream[Bits] = inputStreamArrayData

  def w: UInt = wReg

  def h: UInt = hReg

  def a: UInt = aReg

  def b: UInt = bReg

  def ofmData: Vec[Stream[Bits]] = outputStreamArrayData

  // represent parameter
  def W: Int = arraySliceConfig.W

  def H: Int = arraySliceConfig.H

  def M: Int = arraySliceConfig.M

  def N: Int = arraySliceConfig.N


  // record handshake times
  val handshakeTimes = ArrayBuffer.fill(N)(Counter(0, (W * H) / (M * N)))

  // define the mem we need
  val fifoGroup: ArrayBuffer[StreamFifo[Bits]] =
    ArrayBuffer.fill(W)(StreamFifo(arrayDataType, H))

  // define the counter to indicate which memory will be used
  val selectWriteFifo = Reg(UInt(log2Up(W) bits)).init(U(0).resized).allowUnsetRegToAvoidLatch
  val selectReadFifo = ArrayBuffer.fill(N)(Reg(UInt(log2Up(W) bits)).init(U(0).resized).allowUnsetRegToAvoidLatch)

  val canSelectNext: Bool = RegInit(False)
  when(canSelectNext){
    canSelectNext := False
  }
  val holdReadOp = ArrayBuffer.fill(N)(RegInit(False))
  val writeSelectRound: Bool = RegInit(False)
  when(writeSelectRound){
    writeSelectRound := False
  }

  // initial state
  ifmData.ready := False
  (0 until N).foreach { n =>
    ofmData(n).valid := False
    ofmData(n).payload := B(0).resized
  }
  (0 until W).foreach { n =>
    fifoGroup(n).io.push.valid := False
    fifoGroup(n).io.push.payload := B(0).resized
    fifoGroup(n).io.pop.ready := False
  }

  // decide real fifo depth which be used
  def realFifoDepth: UInt = {
    val realFifoDepthValue = UInt(log2Up(H) bits)
    val realDepth = h
    val res = realDepth % (a * U(M).resized)
    when(res =/= U(0).resized) {
      when(U(H).resized <= realDepth + a * U(M).resized - res) {
        realFifoDepthValue := U(H).resized
      }
        .otherwise(realFifoDepthValue := realDepth + a * U(M).resized - res)
    } otherwise {
      when(U(H).resized <= realDepth) {
        realFifoDepthValue := U(H).resized
      }
        .otherwise(realFifoDepthValue := realDepth)
    }
    realFifoDepthValue
  }

  // decide the number of fifo which be used
  def realFifoNumb: UInt = {
    val realFifoNumbValue = UInt(log2Up(W) bits)
    val realNumb = w
    val res = realNumb % (b * U(N).resized)
    when(res =/= U(0).resized) {
      when(U(W).resized <= realNumb + b * U(N).resized - res) {
        realFifoNumbValue := U(W).resized
      }
        .otherwise(realFifoNumbValue := (realNumb + b * U(N).resized - res).resized)
    } otherwise {
      when(U(W).resized <= realNumb) {
        realFifoNumbValue := U(W).resized
      }
        .otherwise(realFifoNumbValue := realNumb.resized)
    }
    realFifoNumbValue
  }

  // decide which fifo can be read
  def realReadFifo(n: Int): UInt = selectReadFifo(n) + b * U(n).resized

  // select the fifo we need
  def selectFifoPush(index: UInt): Stream[Bits] = {
    val pushValids = Vec(fifoGroup.map(_.io.push.valid).toSeq)
    val pushPayloads = Vec(fifoGroup.map(_.io.push.payload).toSeq)
    val pushReadys = Vec(fifoGroup.map(_.io.push.ready).toSeq)
    val returnStream = Stream (arrayDataType)
    pushValids(index) := returnStream.valid
    pushPayloads(index) := returnStream.payload
    returnStream.ready := pushReadys(index)
    returnStream
  }

  def selectFifoPop(index: UInt): Stream[Bits] = {
    val popValids = Vec(fifoGroup.map(_.io.pop.valid).toSeq)
    val popPayloads = Vec(fifoGroup.map(_.io.pop.payload).toSeq)
    val popReadys = Vec(fifoGroup.map(_.io.pop.ready).toSeq)
    val returnStream = Stream (arrayDataType)
    returnStream.valid := popValids(index)
    returnStream.payload := popPayloads(index)
    popReadys(index) := returnStream.ready

    returnStream
  }

  def selectFifoOccupancy(index: UInt): UInt = {
    val fifoOccupancys = Vec(fifoGroup.map(_.io.occupancy).toSeq)
    val returnOccupancy = fifoOccupancys(index)
    returnOccupancy
  }

  // define stateMachine to indicate the data storage
  val arraySliceStateMachine: StateMachine = new StateMachine {
    val writeDataOnly: State = StateEntryPoint()
    val readDataOnly, readWriteData: State = State()

    writeDataOnly.whenIsActive {

      // write data logic
      when(selectFifoOccupancy(selectWriteFifo) < h) {
        selectFifoPush(selectWriteFifo) << ifmData
      }

      when(selectFifoOccupancy(selectWriteFifo) === h) {
        when(selectWriteFifo === w - U(1).resized) {
          when((selectWriteFifo + U(1).resized) % (U(N) * b).resized =/= U(0).resized) {
            writeSelectRound := True
          }
          selectWriteFifo := U(0).resized
        }.otherwise {
          selectWriteFifo := selectWriteFifo + U(1).resized
        }
      }

      val canReadData = ((selectWriteFifo + U(1).resized) % (U(N) * b).resized === U(0).resized &&
        selectFifoOccupancy(selectWriteFifo) === h) ||
        writeSelectRound

      when(canReadData) {
        goto(readWriteData)
      }

    }

    readWriteData.whenIsActive {
      // read data logic
      (0 until N).foreach { n =>
        when(realReadFifo(n) < w) {
          when(!holdReadOp(n) && selectFifoOccupancy(realReadFifo(n)) =/= U(0).resized) {
            selectFifoPop(realReadFifo(n)) >> ofmData(n)
          }

          // selection logic
          when(canSelectNext && selectFifoOccupancy(realReadFifo(n)) =/= U(0).resized) {
            when(handshakeTimes(n) === b * a) {
              selectReadFifo(n) := selectReadFifo(n) - b
            }.otherwise {
              selectReadFifo(n) := selectReadFifo(n) + U(1).resized
            }
          }

          when(selectFifoOccupancy(realReadFifo(n)) === U(0).resized) {
            when(canSelectNext) {
              when(handshakeTimes(n) === b * a) {
                selectReadFifo(n) := selectReadFifo(n) + U(N - 1).resized * b + U(1).resized
                holdReadOp(n) := True
              }.otherwise {
                selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              }
            }.otherwise {
              ofmData(n).valid := True
            }
          }

        } elsewhen (realReadFifo(n) >= w) {
          ofmData(n).valid := True
          when(canSelectNext) {
            when(handshakeTimes(n) === b * a) {
              selectReadFifo(n) := U(0).resized
            } otherwise {
              selectReadFifo(n) := selectReadFifo(n) + U(1).resized
            }
          }
        }

        when(ofmData(n).fire) {
          handshakeTimes(n).increment()
        }

        when(handshakeTimes(n) === b * a) {
          handshakeTimes(n).clear()
        }

        // control the selection of fifo
        when((handshakeTimes(n).value + U(1).resized) % a === U(0).resized && ofmData(n).fire) {
          canSelectNext := True
        }

      }

      // write data logic
      when(!notWriteFifo) {
        when(selectFifoOccupancy(selectWriteFifo) < h) {
          selectFifoPush(selectWriteFifo) << ifmData
        }

        when(selectFifoOccupancy(selectWriteFifo) === h) {
          when(selectWriteFifo === w - U(1).resized) {
            when((selectWriteFifo + U(1).resized) % (U(N) * b).resized =/= U(0).resized) {
              writeSelectRound := True
            }
            selectWriteFifo := U(0).resized
          }.otherwise {
            selectWriteFifo := selectWriteFifo + U(1).resized
          }
        }
      }

      // state transform logic

      // define some indicate function
      def allReadHold: Bool = Vec(holdReadOp) === Vec(True, N)

      def nextPatchDataReady: Bool = {
        val dataReady = Vec(Bool(false), N)
        (0 until N).foreach { p =>
          when(selectWriteFifo > realReadFifo(p)) {
            when(selectWriteFifo - realReadFifo(p) >= U(N).resized * b) {
              dataReady(p) := True
            }
              .otherwise {
                dataReady(p) := False
              }
          }.otherwise {
            when(realFifoNumb - realReadFifo(p) + selectWriteFifo >= U(N).resized * b) {
              dataReady(p) := True
            }
              .otherwise {
                dataReady(p) := False
              }
          }
        }
        dataReady === Vec(True, N)
      }

      def notWriteFifo: Bool = {
        val notWriteFlag = Vec(Bool(), N)
        (0 until N).foreach { p =>
          when(selectWriteFifo === (realReadFifo(p) - realReadFifo(p) % b).resized) {
            notWriteFlag(p) := True
          }
            .otherwise {
              notWriteFlag(p) := True
            }
        }
        notWriteFlag === Vec(False, N)
      }

      def willFullOrEmpty: Bool = {
        val flag = Bool()
        when(allReadHold && selectReadFifo(0) === selectWriteFifo) {
          flag := True
        }
          .otherwise {
            flag := False
          }
        flag
      }

      def fifoEmpty: Bool = {
        val emptyFlag = Bool(false)
        when(willFullOrEmpty && selectFifoOccupancy(selectWriteFifo + U(1).resized) === U(0).resized) {
          emptyFlag := True
        }
        emptyFlag
      }

      def fifoFull: Bool = {
        val fullFlag = Bool(false)
        when(willFullOrEmpty && selectFifoOccupancy(selectWriteFifo + U(1).resized) =/= U(0).resized) {
          fullFlag := True
        }
        fullFlag
      }

      when(allReadHold && nextPatchDataReady) {
        (0 until N).foreach(p => holdReadOp(p) := False)
      }

      // state transform

      when(fifoEmpty){
        goto(writeDataOnly)
      }
      when(fifoFull){
        goto(readDataOnly)
      }

    }

    readDataOnly.whenIsActive{

      // read data logic
      (0 until N).foreach { n =>
        when(realReadFifo(n) < w) {
          when(!holdReadOp(n) && selectFifoOccupancy(realReadFifo(n)) =/= U(0).resized) {
            selectFifoPop(realReadFifo(n)) >> ofmData(n)
          }

          // selection logic
          when(canSelectNext && selectFifoOccupancy(realReadFifo(n)) =/= U(0).resized) {
            when(handshakeTimes(n) === b * a) {
              selectReadFifo(n) := selectReadFifo(n) - b
            }.otherwise {
              selectReadFifo(n) := selectReadFifo(n) + U(1).resized
            }
          }

          when(selectFifoOccupancy(realReadFifo(n)) === U(0).resized) {
            when(canSelectNext) {
              when(handshakeTimes(n) === b * a) {
                selectReadFifo(n) := selectReadFifo(n) + U(N - 1).resized * b + U(1).resized
                holdReadOp(n) := True
              }.otherwise {
                selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              }
            }.otherwise {
              ofmData(n).valid := True
            }
          }

        } elsewhen (realReadFifo(n) >= w) {
          ofmData(n).valid := True
          when(canSelectNext) {
            when(handshakeTimes(n) === b * a) {
              selectReadFifo(n) := U(0).resized
            } otherwise {
              selectReadFifo(n) := selectReadFifo(n) + U(1).resized
            }
          }
        }

        when(ofmData(n).fire) {
          handshakeTimes(n).increment()
        }

        when(handshakeTimes(n) === b * a) {
          handshakeTimes(n).clear()
        }

        // control the selection of fifo
        when((handshakeTimes(n).value + U(1).resized).resized % a === U(0).resized && ofmData(n).fire) {
          canSelectNext := True
        }

      }
    }


  }

}
