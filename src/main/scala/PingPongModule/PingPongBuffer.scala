package PingPongModule

import Axi4Module.Axi4Full.{Axi4WriteOnlyMaster, Axi4WriteOnlyMasterSpecRenamer}
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

  def outputInterruptSignal: Bool = interruptOut

  def outputStreamInterface: Stream[Bits] = streamOut

  def outputStartSignal: Bool = startOut

  def outputBufferDepth: UInt = bufferDepthOut

  def inputInterruptSignal: Bool = interruptIn


  // define two streamFifo for store input data as buffer function
  val bufferFifoA, bufferFifoB = StreamFifo(Bits(dataWidth bits), bufferSize)

  // define counter to record the input and output data handshake times
  val inCounter = Counter(bufferSize)
  val outCounter = Counter(bufferSize)

  // a pointer to indicate which buffer will be write and read
  val isWriteBufferA = RegInit(True)
  val isReadBufferA = RegInit(True)

  // according to the inputBufferDepth, define a signal for indicating whether willOverflow
  val inCounterWillOverflow = inCounter === inputBufferDepth - U(1).resized && inputStreamInterface.fire
  val outCounterWillOverflow = outCounter === inputBufferDepth - U(1).resized && outputStreamInterface.fire

  when(inputStreamInterface.fire){inCounter.increment()}
  when(outputStreamInterface.fire){outCounter.increment()}
  when(inCounterWillOverflow){
    isWriteBufferA := ~isWriteBufferA
    inCounter.clear()
  }
  when(outCounterWillOverflow){
    isReadBufferA := ~isReadBufferA
    outCounter.clear()
  }


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

  val realStartSignal = startReceiveArea.startReceiveSignal || inCounter === inputBufferDepth - U(1).resized

  // define this clockDomain for monitor whether last burst complete(can start next burst)
  val lastBurstCompleteClockDomainConfig = ClockDomainConfig(clockEdge = RISING,
    resetKind = ASYNC,
    resetActiveLevel = HIGH)
  val lastBurstCompleteClockDomain: ClockDomain = ClockDomain(clock = inputInterruptSignal,
    reset = !ClockDomain.current.readResetWire || outputStartSignal,
    config = startReceiveClockDomainConfig
  )
  val lastBurstCompleteArea = new ClockingArea(lastBurstCompleteClockDomain) {
    val lastBurstCompleteSignal: Bool = RegNext(True) init (False)
  }.setName("")
  lastBurstCompleteArea.lastBurstCompleteSignal.addTag(crossClockDomain)



  // indicate the state which is the first clockEdge after reset
  val isAfterResetState = RegInit(True)
  when(ClockDomain.current.readResetWire) {
    isAfterResetState := False
  }

  // val currentState = UInt(2 bits)


  bufferFifoA.io.push.valid := False
  bufferFifoA.io.push.payload := inputStreamInterface.payload

  bufferFifoB.io.push.valid := False
  bufferFifoB.io.push.payload := inputStreamInterface.payload

  bufferFifoA.io.pop.ready := False
  bufferFifoB.io.pop.ready := False

  outputStreamInterface.valid := False
  outputStreamInterface.payload := bufferFifoA.io.pop.payload

  inputStreamInterface.ready := False


  // use StateMachine to manage pingPongBuffer
  val pingPongBufferStateMachine = new StateMachine {
    val EMPTY = StateEntryPoint()
    val HALF, FULL = State()

    EMPTY.onEntry{when(isAfterResetState){outputInterruptSignalState := True}}
    EMPTY.whenIsActive {
      outputInterruptSignalState := False
      // if start Signal valid, start to run pingPong buffer input process
      when(realStartSignal && isWriteBufferA) {
        bufferFifoA.io.push << inputStreamInterface
        when(inCounterWillOverflow) {
          outputInterruptSignalState := True
          goto(HALF)
        }
      }
      when(realStartSignal && !isWriteBufferA) {
        bufferFifoB.io.push << inputStreamInterface
        when(inCounterWillOverflow) {
          outputInterruptSignalState := True
          goto(HALF)
        }
      }
    }
    EMPTY.onExit(startReceiveResetSignal := True)

    HALF.whenIsActive {
      outputInterruptSignalState := False
      // state transform logic
      when(inCounterWillOverflow && outCounterWillOverflow) {
        startReceiveResetSignal := True
        outputInterruptSignalState := True
        goto(HALF)
      }.elsewhen(inCounterWillOverflow){goto(FULL)}
       .elsewhen(outCounterWillOverflow){goto(EMPTY)}

      // pop logic
      when(isReadBufferA){outputStreamInterface << bufferFifoA.io.pop}
      when(!isReadBufferA){outputStreamInterface << bufferFifoB.io.pop}

      // start push logic
      when(realStartSignal && isWriteBufferA) {bufferFifoA.io.push << inputStreamInterface}
      when(realStartSignal && !isWriteBufferA) {bufferFifoB.io.push << inputStreamInterface}
    }

    FULL.whenIsActive {
      when(isReadBufferA) {
        outputStreamInterface << bufferFifoA.io.pop
        when(outCounterWillOverflow) {
          outputInterruptSignalState := True
          goto(HALF)
        }
      }
      when(!isWriteBufferA) {
        outputStreamInterface << bufferFifoB.io.pop
        when(outCounterWillOverflow) {
          outputInterruptSignalState := True
          goto(HALF)
        }
      }
    }
    FULL.onExit(startReceiveResetSignal := True)
  }

  // get stateMachine's state for outside
  // addPrePopTask(() => currentState.assignFromBits(pingPongBufferStateMachine.stateReg.asBits))

  outputBufferDepth := inputBufferDepth

  val outputStartSignalState = RegInit(False)
  when(isAfterResetState){outputStartSignalState := True}.otherwise(outputStartSignalState := lastBurstCompleteArea.lastBurstCompleteSignal)
  outputStartSignal := outputStartSignalState

  val outputInterruptSignalState = RegInit(False)
  outputInterruptSignal := outputInterruptSignalState
}
