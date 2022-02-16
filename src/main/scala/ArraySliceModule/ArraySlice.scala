package ArraySliceModule

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._

import scala.collection.mutable._

import spinal.core.sim._

case class ArraySlice(dataWidth: Int, pathNumb: Int, mapSizeWidth: Int, blockSizeWidth: Int, maxWidth: Int, maxHeight: Int) extends Component {
  require(maxWidth % pathNumb == 0, "maxWidth should be divisible by pathNumb !")

  // define io port

  val arrayDataType = Bits(dataWidth bits)

  val arrayData: Stream[Bits] = slave Stream arrayDataType
  val mapWidth: UInt = in UInt(mapSizeWidth bits)
  val mapHeight: UInt = in UInt(mapSizeWidth bits)
  val blockWidth = in UInt(blockSizeWidth bits)
  val blockHeight = in UInt(blockSizeWidth bits)

  val sliceData: Vec[Stream[Bits]] = Vec(master Stream arrayDataType, pathNumb)


  // represent io port

  def inputStreamArrayData: Stream[Bits] = arrayData

  def inputFeatureMapWidth: UInt = mapWidth

  def inputFeatureMapHeight: UInt = mapHeight

  def outputFeatureMapWidth: UInt = blockWidth

  def outputFeatureMapHeight: UInt = blockHeight

  def outputStreamDataGroup: Vec[Stream[Bits]] = sliceData


  // compute the mem information
  val memWidth = maxWidth / pathNumb
  val memDepth = memWidth * maxHeight


  // define the mem we need
  val memGroup = ArrayBuffer.fill(pathNumb)(Mem(arrayDataType, Array.fill(memDepth)(B(0, dataWidth bits))))

  // define the counter to indicate mem state
  val fullMemCounter = Counter(pathNumb)
  val handshakeCounter = Counter(memDepth)

  // define stateMachine to indicate the data storage
  val arraySliceStateMachine = new StateMachine {
    val idle: State = StateEntryPoint()
    val receiveData: State = State()

    idle.whenIsActive{

    }

  }

}
