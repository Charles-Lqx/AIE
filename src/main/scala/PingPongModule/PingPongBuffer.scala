package PingPongModule

import spinal.lib._
import spinal.core._
import spinal.lib.fsm._

import spinal.core.sim._

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


  // we want to run PingPongBuffer by recognizing the narrow pulse of startSignal
  // so we define a internalClockDomain for it
  val startReceiveClockDomainConfig = ClockDomainConfig(clockEdge = RISING,
    resetKind = ASYNC,
    resetActiveLevel = HIGH)
  val startReceiveClockDomain: ClockDomain = ClockDomain(clock = inputStartSignal,
    reset = !ClockDomain.current.readResetWire || outputInterrupt,
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


  // define two streamFifo for store input data as buffer function
  val bufferFifoA, bufferFifoB = StreamFifo(Bits(dataWidth bits), bufferSize)


  // use StateMachine to manage pingPongBuffer
  val pingPongBufferStateMachine = new StateMachine {
    val writeFifoA = makeInstantEntry().setName("writeFifoA")
    val writeFifiBReadFifoA, writeFifiAReadFifoB = new State

    writeFifoA
      .whenIsActive {
        // if start Signal valid, start to run pingPong buffer input process
        when(startReceiveArea.startReceiveSignal) {
          bufferFifoA.io.push << inputStreamInterface

          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)

          outputStreamInterface.valid := False
          outputStreamInterface.payload := B(0, dataWidth bits)

          when(bufferFifoA.io.occupancy === inputBufferDepth) {
            outputStartSignal := True
            outputInterrupt := True
            bufferFifoA.io.push.valid := False
            bufferFifoA.io.push.payload := B(0, dataWidth bits)
            inputStreamInterface.ready := False
            goto(writeFifiBReadFifoA)
          }
        } otherwise {
          // if start Signal invalid, connect the bufferFifo interface to the state which not receive data
          bufferFifoA.io.push.valid := False
          bufferFifoA.io.push.payload := B(0, dataWidth bits)

          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)

          inputStreamInterface.ready := False

          outputStreamInterface.valid := False
          outputStreamInterface.payload := B(0, dataWidth bits)
        }
      }
    writeFifiBReadFifoA
      .whenIsActive {
        outputInterrupt := False
        outputStartSignal := False
        outputStreamInterface << bufferFifoA.io.pop
        // if start Signal valid, start to run pingPong buffer input process
        when(startReceiveArea.startReceiveSignal) {
          bufferFifoB.io.push << inputStreamInterface

          bufferFifoA.io.push.valid := False
          bufferFifoA.io.push.payload := B(0, dataWidth bits)

          when(lastBurstCompleteArea.lastBurstCompleteSignal && bufferFifoB.io.occupancy === inputBufferDepth) {
            outputStartSignal := True
            goto(writeFifiAReadFifoB)
          }
          when(bufferFifoB.io.occupancy === inputBufferDepth) {
            bufferFifoB.io.push.valid := False
            bufferFifoB.io.push.payload := B(0, dataWidth bits)
            inputStreamInterface.ready := False
            outputInterrupt := True
          }
          when(outputInterrupt) {
            outputInterrupt := False
          }
        } otherwise {
          // if start Signal invalid, connect the bufferFifo interface to the state which not receive data
          bufferFifoA.io.push.valid := False
          bufferFifoA.io.push.payload := B(0, dataWidth bits)

          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)

          inputStreamInterface.ready := False
        }
      }
    writeFifiAReadFifoB
      .whenIsActive {
        outputStartSignal := False
        outputInterrupt := False
        outputStreamInterface << bufferFifoB.io.pop
        // if start Signal valid, start to run pingPong buffer input process
        when(startReceiveArea.startReceiveSignal) {
          bufferFifoA.io.push << inputStreamInterface

          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)

          when(lastBurstCompleteArea.lastBurstCompleteSignal && bufferFifoA.io.occupancy === inputBufferDepth) {
            outputStartSignal := True
            goto(writeFifiBReadFifoA)
          }
          when(bufferFifoA.io.occupancy === inputBufferDepth) {
            bufferFifoA.io.push.valid := False
            bufferFifoA.io.push.payload := B(0, dataWidth bits)
            inputStreamInterface.ready := False
            outputInterrupt := True
          }
          when(outputInterrupt) {
            outputInterrupt := False
          }
        } otherwise {
          // if start Signal invalid, connect the bufferFifo interface to the state which not receive data
          bufferFifoA.io.push.valid := False
          bufferFifoA.io.push.payload := B(0, dataWidth bits)

          bufferFifoB.io.push.valid := False
          bufferFifoB.io.push.payload := B(0, dataWidth bits)

          inputStreamInterface.ready := False
        }
      }
  }

  outputBufferDepth := inputBufferDepth

}


object TestPingPongBuffer extends App {
  SimConfig.withWave.withConfig(SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
    .compile(PingPongBuffer().setDefinitionName("PingPongBuffer"))
    .doSim{ dut =>
      // TODO: set a simulation case to test this module
    }
}
