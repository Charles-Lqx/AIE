package ArraySliceModule

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._

import scala.collection.mutable._

import spinal.core.sim._

// config class
case class ArraySliceConfig(W: Int, H: Int, M: Int, N: Int)


case class ArraySlice(dataWidth: Int, arraySliceConfig: ArraySliceConfig) extends Component {

  // define io port

  val arrayDataType = Bits(dataWidth bits)

  val IFMData: Stream[Bits] = slave Stream arrayDataType
  val w: UInt = in UInt (log2Up(arraySliceConfig.W) bits)
  val h: UInt = in UInt (log2Up(arraySliceConfig.H) bits)
  val a = in UInt (log2Up(arraySliceConfig.H / arraySliceConfig.M) bits)
  val b = in UInt (log2Up(arraySliceConfig.W / arraySliceConfig.N) bits)

  val OFMData: Vec[Stream[Bits]] = Vec(master Stream arrayDataType, arraySliceConfig.N)


  // register for timing
  val wReg = RegNext(w) init w.getAllTrue
  val hReg = RegNext(h) init h.getAllTrue
  val aReg = RegNext(a) init a.getAllTrue
  val bReg = RegNext(b) init b.getAllTrue

  // represent io port

  def inputStreamArrayData: Stream[Bits] = IFMData

  def inputFeatureMapWidth: UInt = wReg

  def inputFeatureMapHeight: UInt = hReg

  def outputFeatureMapHeight: UInt = aReg

  def outputFeatureMapWidth: UInt = bReg

  def outputStreamArrayData: Vec[Stream[Bits]] = OFMData


  // initial state
  inputStreamArrayData.ready := False
  (0 until arraySliceConfig.N).foreach { n =>
    outputStreamArrayData(n).valid := False
    outputStreamArrayData(n).payload := B(0).resized
  }

  // record handshake times
  val handshakeTimes = ArrayBuffer.fill(arraySliceConfig.N)(Counter((arraySliceConfig.W * arraySliceConfig.H) / (arraySliceConfig.M * arraySliceConfig.N)))

  // define the mem we need
  val fifoGroup: ArrayBuffer[StreamFifo[Bits]] =
    ArrayBuffer.fill(arraySliceConfig.W)(StreamFifo(arrayDataType, arraySliceConfig.H))

  // define the counter to indicate which memory will be used
  val selectWriteFifo = Reg(UInt(log2Up(arraySliceConfig.W) bits))
  val selectReadFifo = ArrayBuffer.fill(arraySliceConfig.N)(Reg(UInt(log2Up(arraySliceConfig.W) bits)))

  val canSelectNext = RegInit(False)
  val holdReadOp = ArrayBuffer.fill(arraySliceConfig.N)(RegInit(False))
  val writeSelectRound = RegInit(False).clearWhen(writeSelectRound)

  // decide real fifo depth which be used
  def realFifoDepth: Int = {
    val realDepth = inputFeatureMapHeight.toInt
    val res = realDepth % (outputFeatureMapHeight.toInt * arraySliceConfig.M)
    if (res != 0) {
      Seq(arraySliceConfig.H, realDepth + outputFeatureMapHeight.toInt * arraySliceConfig.M - res).min
    } else {
      Seq(arraySliceConfig.H, realDepth).min
    }
  }

  // decide the number of fifo which be used
  def realFifoNumb: Int = {
    val realNumb = inputFeatureMapWidth.toInt
    val res = realNumb % (outputFeatureMapWidth.toInt * arraySliceConfig.N)
    if (res != 0) {
      Seq(arraySliceConfig.W, realNumb + outputFeatureMapWidth.toInt * arraySliceConfig.N - res).min
    } else {
      Seq(arraySliceConfig.W, realNumb).min
    }
  }

  // decide which fifo can be read
  def realSelectFifo(n: Int): Int = selectReadFifo(n).toInt + outputFeatureMapWidth.toInt * n
  //  val handshakeCounter: Counter = Counter(maxHeight)

  // define stateMachine to indicate the data storage
  val arraySliceStateMachine: StateMachine = new StateMachine {
    val writeDataOnly: State = StateEntryPoint()
    val readDataOnly, readWriteData: State = State()

    writeDataOnly.whenIsActive {
      // write data logic

      //        when(U(realFifoDepth).resized <= U(arraySliceConfig.H).resized && U(realFifoNumb).resized <= U(arraySliceConfig.W).resized) {

      when(fifoGroup(selectWriteFifo.toInt).io.occupancy < inputFeatureMapHeight) {
        fifoGroup(selectWriteFifo.toInt).io.push << inputStreamArrayData
      }
      //              .elsewhen(fifoGroup(selectWriteFifo.toInt).io.occupancy >= outputFeatureMapHeight && fifoGroup(selectWriteFifo.toInt).io.occupancy < U(realFifoDepth)){
      //                fifoGroup(selectWriteFifo.toInt).io.push.valid := True
      //                fifoGroup(selectWriteFifo.toInt).io.push.payload := B(0).resized
      //              }

      //            when(fifoGroup(selectWriteFifo.toInt).io.occupancy === U(realFifoDepth).resized) {
      when(fifoGroup(selectWriteFifo.toInt).io.occupancy === inputFeatureMapHeight) {
        //              when(selectWriteFifo === U(realFifoNumb - 1).resized) {selectWriteFifo := U(0).resized}
        when(selectWriteFifo === inputFeatureMapWidth - U(1).resized) {
          when((selectWriteFifo + U(1).resized) % (U(arraySliceConfig.N) * outputFeatureMapWidth).resized =/= U(0).resized) {
            writeSelectRound := True
          }
          selectWriteFifo := U(0).resized
        }.otherwise {
          selectWriteFifo := selectWriteFifo + U(1).resized
        }
      }

      val canReadData = ((selectWriteFifo + U(1).resized) % (U(arraySliceConfig.N) * outputFeatureMapWidth).resized === U(0).resized &&
        fifoGroup(selectWriteFifo.toInt).io.occupancy === U(realFifoDepth)) ||
        writeSelectRound

      when(canReadData) {
        goto(readWriteData)
      }

    }

    readWriteData.whenIsActive {
      // read data logic
      (0 until arraySliceConfig.N).foreach { n =>
        when(U(realSelectFifo(n)) < inputFeatureMapWidth) {
          when(!holdReadOp(n) && fifoGroup(realSelectFifo(n)).io.occupancy =/= U(0).resized) {
            fifoGroup(selectReadFifo(n).toInt + outputFeatureMapWidth.toInt * n).io.pop >> outputStreamArrayData(n)
          }

          // selection logic
          when(canSelectNext && fifoGroup(realSelectFifo(n)).io.occupancy =/= U(0).resized) {
            when(handshakeTimes(n) === outputFeatureMapWidth * outputFeatureMapHeight) {
              selectReadFifo(n) := selectReadFifo(n) - outputFeatureMapWidth
              canSelectNext := False
            }.otherwise {
              selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              canSelectNext := False
            }
          }

          when(fifoGroup(realSelectFifo(n)).io.occupancy === U(0).resized) {
            when(canSelectNext) {
              when(handshakeTimes(n) === outputFeatureMapWidth * outputFeatureMapHeight) {
                selectReadFifo(n) := selectReadFifo(n) + U(arraySliceConfig.N - 1).resized * outputFeatureMapWidth + U(1).resized
                holdReadOp(n) := True
                canSelectNext := False
              }.otherwise {
                selectReadFifo(n) := selectReadFifo(n) + U(1).resized
                canSelectNext := False
              }
            }.otherwise {
              outputStreamArrayData(n).valid := True
            }
          }

        } elsewhen (U(realSelectFifo(n)) >= inputFeatureMapWidth) {
          outputStreamArrayData(n).valid := True
          when(canSelectNext) {
            when(handshakeTimes(n) === outputFeatureMapWidth * outputFeatureMapHeight){
              selectReadFifo(n) := U(0).resized
              canSelectNext := False
            }otherwise {
              selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              canSelectNext := False
            }
          }
        }

        when(outputStreamArrayData(n).fire) {
          handshakeTimes(n).increment()
        }

        when(handshakeTimes(n) === outputFeatureMapWidth * outputFeatureMapHeight) {
          handshakeTimes.clear()
        }

        // control the selection of fifo
        when(handshakeTimes(n) % (outputFeatureMapHeight - U(1).resized) === U(0).resized && outputStreamArrayData(n).fire) {
          canSelectNext := True
        }

      }

      // write data logic
      when(fifoGroup(selectWriteFifo.toInt).io.occupancy < inputFeatureMapHeight) {
        fifoGroup(selectWriteFifo.toInt).io.push << inputStreamArrayData
      }

      when(fifoGroup(selectWriteFifo.toInt).io.occupancy === inputFeatureMapHeight) {
        when(selectWriteFifo === inputFeatureMapWidth - U(1).resized) {
          when((selectWriteFifo + U(1).resized) % (U(arraySliceConfig.N) * outputFeatureMapWidth).resized =/= U(0).resized) {
            writeSelectRound := True
          }
          selectWriteFifo := U(0).resized
        }.otherwise {
          selectWriteFifo := selectWriteFifo + U(1).resized
        }
      }
      // TODO: describe full state transform
      // state transform logic
      val allReadHold: Bool = Bool((0 until arraySliceConfig.N).forall(p => (holdReadOp(p) === True).toBoolean))

      val nextPatchDataReady = Bool((0 until arraySliceConfig.N).forall(p => ((selectWriteFifo - selectReadFifo(p)) >= U(arraySliceConfig.N) * outputFeatureMapWidth).toBoolean))

      when(allReadHold && nextPatchDataReady) {
        (0 until arraySliceConfig.N).foreach(p => holdReadOp(p) := False)
      }

      val selectPtrMatch: Bool = Bool((0 until arraySliceConfig.N).forall(p => (selectWriteFifo === selectReadFifo(p)).toBoolean))


    }

  }

}
