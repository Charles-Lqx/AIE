package AIE.ArraySliceModule

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._

import spinal.core.sim._
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
  val handshakeTimes = ArrayBuffer.fill(N)(Counter(0, W * H))

  // define the mem we need
  val fifoGroup: ArrayBuffer[StreamFifo[Bits]] =
    ArrayBuffer.fill(W)(StreamFifo(arrayDataType, H))

  // define the counter to indicate which memory will be used
  val selectWriteFifo = Reg(UInt(log2Up(W) bits)).init(U(0).resized).allowUnsetRegToAvoidLatch
  val selectReadFifo = ArrayBuffer.fill(N)(Reg(UInt(log2Up(W) bits)).init(U(0).resized).allowUnsetRegToAvoidLatch)

  val holdReadOp = ArrayBuffer.fill(N)(RegInit(False))
  val allowPadding = ArrayBuffer.fill(N)(RegInit(True))
  val outSliceNumb = ArrayBuffer.fill(N)(Counter(0, H))
  val writeAround = RegInit(False)
  val readAround = ArrayBuffer.fill(N)(RegInit(False))

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
    val realFifoDepthValue = UInt()
    val realDepth = h
    val res = realDepth % (a * U(M).resized)
    when(res =/= U(0).resized) {
      when(U(H).resized <= realDepth + a * U(M).resized - res) {
        realFifoDepthValue := U(H).resized
      }.otherwise(realFifoDepthValue := (realDepth + a * U(M).resized - res).resized)
    }.otherwise {
      when(U(H).resized <= realDepth) {
        realFifoDepthValue := U(H).resized
      }
        .otherwise(realFifoDepthValue := realDepth.resized)
    }
    realFifoDepthValue
  }

  // decide the number of fifo which be used
  def realFifoNumb: UInt = {
    val realFifoNumbValue = UInt()
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
    val returnStream = Stream(arrayDataType)
    pushValids(index) := returnStream.valid
    pushPayloads(index) := returnStream.payload
    returnStream.ready := pushReadys(index)
    returnStream
  }

  def selectFifoPop(index: UInt): Stream[Bits] = {
    val popValids = Vec(fifoGroup.map(_.io.pop.valid).toSeq)
    val popPayloads = Vec(fifoGroup.map(_.io.pop.payload).toSeq)
    val popReadys = Vec(fifoGroup.map(_.io.pop.ready).toSeq)
    val returnStream = Stream(arrayDataType)
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

  // define some indicate function
  def allReadHold: Bool = Vec(holdReadOp) === Vec(True, N)

  def nextPatchDataReady: Bool = {
    val dataReady = Vec(Bool(false), N)
    (0 until N).foreach { p =>
      when(selectWriteFifo >= realReadFifo(p)) {
        when(selectWriteFifo - realReadFifo(p) >= U(N - p).resized * b) {
          dataReady(p) := True
        }
          .otherwise {
            dataReady(p) := False
          }
      }.otherwise {
        when(realFifoNumb - realReadFifo(p) + selectWriteFifo >= U(N - p).resized * b) {
          dataReady(p) := True
        }
          .otherwise {
            dataReady(p) := False
          }
      }
    }
    dataReady.simPublic().setName("debug")
    dataReady === Vec(True, N)
  }

  //TODO: FIX (now :a case not satisfy)
  def banWriteFifo: Bool = {
    val banWriteFlag = Vec(Bool(), N)
    (0 until N).foreach { p =>
      when(selectWriteFifo === (selectReadFifo(p) - selectReadFifo(p) % b).resized) {
        when(writeAround ^ readAround(p)) {
          banWriteFlag(p) := True
        }.otherwise{
          banWriteFlag(p) := False
        }
      }
        .otherwise {
          banWriteFlag(p) := False
        }
    }
    banWriteFlag =/= Vec(False, N)
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

      when(selectFifoOccupancy(selectWriteFifo) === h - U(1).resized && ifmData.fire) {
        when(selectWriteFifo === w - U(1).resized) {
          selectWriteFifo := U(0).resized
          writeAround := ~writeAround
        }.otherwise {
          selectWriteFifo := selectWriteFifo + U(1).resized
        }
      }
      when(nextPatchDataReady) {
        goto(readWriteData)
        (0 until N).foreach { p =>
          when(holdReadOp(p)) {
            holdReadOp(p) := False
          }
          when(!allowPadding(p)) {
            allowPadding(p) := True
          }
        }
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
          when(!holdReadOp(n)) {
            when(selectFifoOccupancy(realReadFifo(n)) > U(1).resized && ofmData(n).fire) {
              when(handshakeTimes(n) === b * a - U(1).resized) {
                selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
                outSliceNumb(n).increment()
              }.elsewhen((handshakeTimes(n).value + U(1).resized) % a === U(0).resized) {
                selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              }
            }

            when(selectFifoOccupancy(realReadFifo(n)) === U(1).resized && ofmData(n).fire) {
              when(handshakeTimes(n) === b * a - U(1).resized) {

                when((outSliceNumb(n).value + U(1).resized) < (realFifoDepth / a).resized) {
                  selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
                  outSliceNumb(n).increment()
                }.otherwise {
                  selectReadFifo(n) := selectReadFifo(n) + U(N - 1).resized * b + U(1).resized
                  outSliceNumb(n).clear()
                  when(!(allReadHold && nextPatchDataReady)) {
                    holdReadOp(n) := True
                  }
                  when((selectReadFifo(n) + U(N - 1).resized * b + U(1).resized + b * U(n).resized) >= w) {
                    allowPadding(n) := False
                  }
                }
              }.elsewhen((handshakeTimes(n).value + U(1).resized) % a === U(0).resized) {
                selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              }
            }
            when(selectFifoOccupancy(realReadFifo(n)) === U(0).resized) {
              when(handshakeTimes(n) === b * a - U(1).resized && ofmData(n).fire) {

                when((outSliceNumb(n).value + U(1).resized).resized < (realFifoDepth / a).resized) {
                  selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
                  outSliceNumb(n).increment()
                }.otherwise {
                  selectReadFifo(n) := selectReadFifo(n) + U(N - 1).resized * b + U(1).resized
                  outSliceNumb(n).clear()
                  when(!(allReadHold && nextPatchDataReady)) {
                    holdReadOp(n) := True
                  }
                  when((selectReadFifo(n) + U(N - 1).resized * b + U(1).resized + b * U(n).resized) >= w) {
                    allowPadding(n) := False
                  }
                }
              }.elsewhen((handshakeTimes(n).value + U(1).resized) % a === U(0).resized && ofmData(n).fire) {
                selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              }
              ofmData(n).valid := True

            }


          }
        }.elsewhen(allowPadding(n) && realReadFifo(n) >= w) {
          ofmData(n).valid := True
          when(handshakeTimes(n) === b * a - U(1).resized && ofmData(n).fire) {
            when((outSliceNumb(n).value + U(1).resized).resized < (realFifoDepth / a).resized) {
              selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
              outSliceNumb(n).increment()
            }.otherwise {
              selectReadFifo(n) := U(0).resized
              readAround(n) := ~readAround(n)
              outSliceNumb(n).clear()
              when(!(allReadHold && nextPatchDataReady)) {
                holdReadOp(n) := True
              }
            }
          }.elsewhen((handshakeTimes(n).value + U(1).resized) % a === U(0).resized && ofmData(n).fire) {
            selectReadFifo(n) := selectReadFifo(n) + U(1).resized
          }
        }


        when(ofmData(n).fire) {
          when(handshakeTimes(n) === b * a - U(1).resized) {
            handshakeTimes(n).clear()
          } otherwise {
            handshakeTimes(n).increment()
          }

        }

      }

      // write data logic
      when(!banWriteFifo) {
        when(selectFifoOccupancy(selectWriteFifo) < h) {
          selectFifoPush(selectWriteFifo) << ifmData
        }

        when(selectFifoOccupancy(selectWriteFifo) === h - U(1).resized && ifmData.fire) {
          when(selectWriteFifo === w - U(1).resized) {
            selectWriteFifo := U(0).resized
            writeAround := ~writeAround
          }.otherwise {
            selectWriteFifo := selectWriteFifo + U(1).resized
          }
        }
      }

      // state transform logic

      when(allReadHold && nextPatchDataReady) {
        (0 until N).foreach(p => holdReadOp(p) := False)
      }

      when(allReadHold && !nextPatchDataReady && !banWriteFifo) {
        goto(writeDataOnly)
      }

      when(banWriteFifo) {
        goto(readDataOnly)
        (0 until N).foreach { p =>
          when(!allowPadding(p)) {
            allowPadding(p) := True
          }
        }
      }

    }

    readDataOnly.whenIsActive {

      // read data logic
      (0 until N).foreach { n =>
        when(realReadFifo(n) < w) {
          when(!holdReadOp(n) && selectFifoOccupancy(realReadFifo(n)) =/= U(0).resized) {
            selectFifoPop(realReadFifo(n)) >> ofmData(n)
          }

          // selection logic
          when(!holdReadOp(n)) {
            when(selectFifoOccupancy(realReadFifo(n)) > U(1).resized && ofmData(n).fire) {
              when(handshakeTimes(n) === b * a - U(1).resized) {
                selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
                outSliceNumb(n).increment()
              }.elsewhen((handshakeTimes(n).value + U(1).resized) % a === U(0).resized) {
                selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              }
            }

            when(selectFifoOccupancy(realReadFifo(n)) === U(1).resized && ofmData(n).fire) {
              when(handshakeTimes(n) === b * a - U(1).resized) {

                when((outSliceNumb(n).value + U(1).resized) < (realFifoDepth / a).resized) {
                  selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
                  outSliceNumb(n).increment()
                }.otherwise {
                  selectReadFifo(n) := selectReadFifo(n) + U(N - 1).resized * b + U(1).resized
                  outSliceNumb(n).clear()
                  when(!(allReadHold && nextPatchDataReady)) {
                    holdReadOp(n) := True
                  }
                  when((selectReadFifo(n) + U(N - 1).resized * b + U(1).resized + b * U(n).resized) >= w) {
                    allowPadding(n) := False
                  }
                }
              }.elsewhen((handshakeTimes(n).value + U(1).resized) % a === U(0).resized) {
                selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              }
            }
            when(selectFifoOccupancy(realReadFifo(n)) === U(0).resized) {
              when(handshakeTimes(n) === b * a - U(1).resized && ofmData(n).fire) {

                when((outSliceNumb(n).value + U(1).resized).resized < (realFifoDepth / a).resized) {
                  selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
                  outSliceNumb(n).increment()
                }.otherwise {
                  selectReadFifo(n) := selectReadFifo(n) + U(N - 1).resized * b + U(1).resized
                  outSliceNumb(n).clear()
                  when(!(allReadHold && nextPatchDataReady)) {
                    holdReadOp(n) := True
                  }
                  when((selectReadFifo(n) + U(N - 1).resized * b + U(1).resized + b * U(n).resized) >= w) {
                    allowPadding(n) := False
                  }
                }
              }.elsewhen((handshakeTimes(n).value + U(1).resized) % a === U(0).resized && ofmData(n).fire) {
                selectReadFifo(n) := selectReadFifo(n) + U(1).resized
              }
              ofmData(n).valid := True

            }


          }
        }.elsewhen(allowPadding(n) && realReadFifo(n) >= w) {
          ofmData(n).valid := True
          when(handshakeTimes(n) === b * a - U(1).resized && ofmData(n).fire) {
            when((outSliceNumb(n).value + U(1).resized).resized < (realFifoDepth / a).resized) {
              selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
              outSliceNumb(n).increment()
            }.otherwise {
              selectReadFifo(n) := U(0).resized
              readAround(n) := ~readAround(n)
              outSliceNumb(n).clear()
              when(!(allReadHold && nextPatchDataReady)) {
                holdReadOp(n) := True
              }
            }
          }.elsewhen((handshakeTimes(n).value + U(1).resized) % a === U(0).resized && ofmData(n).fire) {
            selectReadFifo(n) := selectReadFifo(n) + U(1).resized
          }
        }


        when(ofmData(n).fire) {
          when(handshakeTimes(n) === b * a - U(1).resized) {
            handshakeTimes(n).clear()
          } otherwise {
            handshakeTimes(n).increment()
          }

        }

      }
      // state transform logic
      when(allReadHold && nextPatchDataReady) {
        (0 until N).foreach { p =>
          holdReadOp(p) := False
          when(!allowPadding(p)) {
            allowPadding(p) := True
          }
        }
        goto(readWriteData)
      }
    }
  }
  // for debug
  val stateIndicate = UInt()
  addPrePopTask(() => stateIndicate.assignFromBits(arraySliceStateMachine.stateReg.asBits))


}
