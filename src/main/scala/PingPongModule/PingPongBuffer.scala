package PingPongModule

import Axi4Module.Axi4Full.Axi4WriteOnlyMaster
import spinal.lib._
import spinal.core._
import spinal.lib.fsm._
import spinal.core.sim._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4WriteOnly}

import scala.collection.mutable.ArrayBuffer

case class PingPongBuffer(dataWidth: Int = 32, bufferSize: Int = 256) extends Component {
  // define this Component's port

  // slave side
  val streamIn = slave Stream Bits(dataWidth bits)
  val startIn = in Bool()
  val bufferDepthIn = in UInt (8 bits)
  val interruptOut = out Bool()
  // master side
  val streamOut = master Stream Bits(dataWidth bits)
  val startOut = out Bool()
  val bufferDepthOut = out UInt (8 bits)
  val interruptIn = in Bool()

  def inputStreamInterface: Stream[Bits] = streamIn

  def inputStartSignal: Bool = startIn

  def inputBufferDepth: UInt = bufferDepthIn

  def outputInterrupt: Bool = interruptOut

  def outputStreamInterface: Stream[Bits] = streamOut

  def outputStartSignal: Bool = startOut

  def outputBufferDepth: UInt = bufferDepthOut

  def inputInterrupt: Bool = interruptIn


  // define two streamFifo for store input data as buffer function
  val bufferFifoA, bufferFifoB = StreamFifo(Bits(dataWidth bits), bufferSize)

  // we want to run PingPongBuffer by recognizing the narrow pulse of startSignal
  // so we define a internalClockDomain for it
  val startReceiveClockDomainConfig = ClockDomainConfig(clockEdge = RISING,
    resetKind = ASYNC,
    resetActiveLevel = HIGH)
  val startReceiveResetSignal = Bool(false)
  val startReceiveClockDomain: ClockDomain = ClockDomain(clock = inputStartSignal,
    reset = !ClockDomain.current.readResetWire || startReceiveResetSignal,
    config = startReceiveClockDomainConfig
  )
  val startReceiveArea = new ClockingArea(startReceiveClockDomain) {
    val startReceiveSignal: Bool = RegNext(True) init (False)
  }.setName("")
  startReceiveArea.startReceiveSignal.addTag(crossClockDomain)

  // define this clockDomain for monitor whether last burst complete(can start next burst)
  val lastBurstCompleteClockDomainConfig = ClockDomainConfig(clockEdge = RISING,
    resetKind = ASYNC,
    resetActiveLevel = HIGH)
  val lastBurstCompleteClockDomain: ClockDomain = ClockDomain(clock = inputInterrupt,
    reset = !ClockDomain.current.readResetWire || outputStartSignal,
    config = startReceiveClockDomainConfig
  )
  val lastBurstCompleteArea = new ClockingArea(lastBurstCompleteClockDomain) {
    val lastBurstCompleteSignal: Bool = RegNext(True) init (False)
  }.setName("")
  lastBurstCompleteArea.lastBurstCompleteSignal.addTag(crossClockDomain)

  // define two register to control outputInterrupt and outputStartSignal
  val controlOutputInterrupt = RegInit(False)
  val controlOutputStartSignal = RegInit(False)

  val currentState = UInt(2 bits)

  // certain startFifoASignal/startFifoBSignal be valid when it need
  val activeFifoA = currentState =/= U(1, 2 bits)
  val activeFifoB = currentState === U(1, 2 bits)
  // startFifo Signal
  val startFifoASignal = (startReceiveArea.startReceiveSignal || bufferFifoA.io.occupancy === inputBufferDepth - U(1, 8 bits)) && activeFifoA
  val startFifoBSignal = (startReceiveArea.startReceiveSignal || bufferFifoB.io.occupancy === inputBufferDepth - U(1, 8 bits)) && activeFifoB


  // use StateMachine to manage pingPongBuffer
  val pingPongBufferStateMachine = new StateMachine {
    val writeFifoA = makeInstantEntry().setName("writeFifoA")
    val writeFifoBReadFifoA, writeFifoAReadFifoB = new State

    writeFifoA
      .whenIsActive {
        // if start Signal valid, start to run pingPong buffer input process
        when(startFifoASignal) {
          bufferFifoA.io.push << inputStreamInterface

          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)

          outputStreamInterface.valid := False
          outputStreamInterface.payload := B(0, dataWidth bits)

          bufferFifoA.io.pop.ready := False
          bufferFifoB.io.pop.ready := False

          when(bufferFifoA.io.occupancy >= inputBufferDepth - U(1, 8 bits)) {
            startReceiveResetSignal := True
          }
          when(bufferFifoA.io.occupancy === inputBufferDepth - U(1, 8 bits) && bufferFifoA.io.push.fire) {
            controlOutputStartSignal := True
            controlOutputInterrupt := True
            goto(writeFifoBReadFifoA)
          }

        } otherwise {
          // if start Signal invalid, connect the bufferFifo interface to the state which not receive data

          bufferFifoA.io.push.valid := False
          bufferFifoA.io.push.payload := B(0, dataWidth bits)
          inputStreamInterface.ready := False


          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)


          bufferFifoA.io.pop.ready := False
          bufferFifoB.io.pop.ready := False

          outputStreamInterface.valid := False
          outputStreamInterface.payload := B(0, dataWidth bits)
        }
      }
    writeFifoBReadFifoA
      .whenIsActive {
        when(controlOutputInterrupt) {
          controlOutputInterrupt := False
        }
        when(controlOutputStartSignal) {
          controlOutputStartSignal := False
        }

        outputStreamInterface << bufferFifoA.io.pop

        bufferFifoB.io.pop.ready := False
        // if start Signal valid, start to run pingPong buffer input process
        when(startFifoBSignal) {
          bufferFifoB.io.push << inputStreamInterface

          bufferFifoA.io.push.valid := False
          bufferFifoA.io.push.payload := B(0, dataWidth bits)

          when(bufferFifoB.io.occupancy >= inputBufferDepth - U(1, 8 bits)) {
            startReceiveResetSignal := True
          }
          when(bufferFifoB.io.occupancy === inputBufferDepth - U(1, 8 bits) && bufferFifoB.io.push.fire
            && lastBurstCompleteArea.lastBurstCompleteSignal) {
            controlOutputStartSignal := True
            controlOutputInterrupt := True
            goto(writeFifoAReadFifoB)
          }

        } otherwise {
          // when the bufferFifo data is ready but the slave are not ready, it should wait
          when(bufferFifoB.io.occupancy === inputBufferDepth && lastBurstCompleteArea.lastBurstCompleteSignal) {
            controlOutputStartSignal := True
            controlOutputInterrupt := True
            goto(writeFifoAReadFifoB)
          }
          // if start Signal invalid, connect the bufferFifo interface to the state which not receive data
          bufferFifoA.io.push.valid := False
          bufferFifoA.io.push.payload := B(0, dataWidth bits)


          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)
          inputStreamInterface.ready := False


        }
      }
    writeFifoAReadFifoB
      .whenIsActive {
        when(controlOutputInterrupt) {
          controlOutputInterrupt := False
        }
        when(controlOutputStartSignal) {
          controlOutputStartSignal := False
        }

        outputStreamInterface << bufferFifoB.io.pop
        bufferFifoA.io.pop.ready := False
        // if start Signal valid, start to run pingPong buffer input process
        when(startFifoASignal) {
          bufferFifoA.io.push << inputStreamInterface

          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)

          when(bufferFifoA.io.occupancy >= inputBufferDepth - U(1, 8 bits)) {
            startReceiveResetSignal := True
          }
          when(bufferFifoA.io.occupancy === inputBufferDepth - U(1, 8 bits) && bufferFifoA.io.push.fire
            && lastBurstCompleteArea.lastBurstCompleteSignal) {
            controlOutputStartSignal := True
            controlOutputInterrupt := True
            goto(writeFifoBReadFifoA)
          }

        } otherwise {
          // when the bufferFifo data is ready but the slave are not ready, it should wait
          when(bufferFifoA.io.occupancy === inputBufferDepth && lastBurstCompleteArea.lastBurstCompleteSignal) {
            controlOutputStartSignal := True
            controlOutputInterrupt := True
            goto(writeFifoBReadFifoA)
          }
          // if start Signal invalid, connect the bufferFifo interface to the state which not receive data
          bufferFifoA.io.push.valid := False
          bufferFifoA.io.push.payload := B(0, dataWidth bits)
          inputStreamInterface.ready := False


          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)

        }
      }
  }

  // get stateMachine's state for outside
  addPrePopTask(() => currentState.assignFromBits(pingPongBufferStateMachine.stateReg.asBits))

  outputBufferDepth := inputBufferDepth
  outputStartSignal := controlOutputStartSignal
  outputInterrupt := controlOutputInterrupt

}

case class Stream2Axi4WriteOnlyMasterInterface(addressWidth: Int = 32, maxBurstLen: Int = 256, dataWidth: Int = 32) extends Component {
  val axi4Interface = Axi4WriteOnlyMaster(addressWidth, maxBurstLen, dataWidth)
  ClockDomain.current.clock.setName("aclk")
  ClockDomain.current.reset.setName("aresetn")
}

case class PingPongBufferWithWriteOnlyMater(addressWidth: Int = 32, maxBurstLen: Int = 256, dataWidth: Int = 32) extends Component {
  val streamIn = slave Stream Bits(dataWidth bits)
  val startIn = in Bool()
  val bufferDepthIn = in UInt (8 bits)
  val interruptOut = out Bool()

  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = dataWidth,
    useId = false,
    useLock = false
  )

  val full = master(Axi4WriteOnly(config))
  val offset = in UInt (addressWidth bits)

  val pingPongBuffer = PingPongBuffer(dataWidth, maxBurstLen)
  val writeOnlyMater = Stream2Axi4WriteOnlyMasterInterface(addressWidth, maxBurstLen, dataWidth)

  pingPongBuffer.streamIn << streamIn
  pingPongBuffer.startIn := startIn
  pingPongBuffer.bufferDepthIn := bufferDepthIn
  interruptOut := pingPongBuffer.outputInterrupt

  pingPongBuffer.streamOut >> writeOnlyMater.axi4Interface.StreamInterface
  writeOnlyMater.axi4Interface.start := pingPongBuffer.startOut
  writeOnlyMater.axi4Interface.burstLen := pingPongBuffer.bufferDepthOut
  pingPongBuffer.inputInterrupt := writeOnlyMater.axi4Interface.transInterrupt

  writeOnlyMater.axi4Interface.full >> full
  writeOnlyMater.axi4Interface.offset := offset
}

object TestPingPongBuffer extends App {
  SimConfig.withWave.withConfig(SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
    .compile(PingPongBufferWithWriteOnlyMater(32, 128, 32).setDefinitionName("PingPongBufferWithWriteOnlyMaster"))
    .doSim { dut =>
      import scala.util.Random

      val testCase = ArrayBuffer[BigInt]()
      val writeData = ArrayBuffer[BigInt]()

      dut.streamIn.valid #= false
      dut.streamIn.payload #= 0
      dut.startIn #= false
      dut.bufferDepthIn #= 64

      dut.full.w.ready #= false
      dut.full.aw.ready #= false
      dut.full.b.resp #= 0
      dut.full.b.valid #= false


      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(15)
      dut.clockDomain.waitSampling()

      sleep(20)
      dut.startIn #= true
      sleep(5)
      dut.startIn #= false

      def doSim(): Unit = {
        if (dut.interruptOut.toBoolean) {
          sleep(5)
          dut.startIn #= true
          sleep(5)
          dut.startIn #= false
        }
        dut.streamIn.valid #= Random.nextBoolean()
        dut.streamIn.payload #= Random.nextInt(256)

        val readySignal = Random.nextBoolean()
        dut.full.aw.ready #= readySignal
        dut.full.w.ready #= readySignal
        if (dut.full.w.payload.last.toBoolean && dut.full.w.valid.toBoolean
          && dut.full.w.ready.toBoolean) {
          dut.full.b.valid #= true
        }
        if (dut.full.b.valid.toBoolean) {
          dut.full.b.valid #= false
        }

        if (dut.streamIn.valid.toBoolean && dut.streamIn.ready.toBoolean) {
          testCase += dut.streamIn.payload.toBigInt
        }
        if (dut.full.w.valid.toBoolean && dut.full.w.ready.toBoolean) {
          writeData += dut.full.w.payload.data.toBigInt
        }

        dut.clockDomain.waitSampling()
      }

      for (i <- 0 to 256 * 10) {
        if (i != 100) {
          doSim()
        } else {
          println(s"the testCase is :${testCase.mkString(",")}")
          println(s"the writeData is ${writeData.mkString(",")}")
        }
      }
    }
}
