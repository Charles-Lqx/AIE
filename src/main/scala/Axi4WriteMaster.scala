import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi._


/**
 * this is a stream to axi4 interface define
 *
 * @param addressWidth The width of address which we use to write data to ddr
 * @param number       The total number of data from fifo in each transfer in a burst
 * @param len          The total number of data transfers within a burst.
 * @param widthPerData The width of each data from fifo
 */
case class Axi4WriteMaster(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Bundle {

  require(len > 0 & len <= 256, "the define of the number of transfer in a burst is illegal !")
  // -------------------set the config information--------------------
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = widthPerData,
    idWidth = 1
  )

  // ------------------declare the interface we need-------------------
  val fifo = slave Stream Bits(widthPerData bits)
  val t = master(Axi4(config))

  def fifoStreamInterface: Stream[Bits] = fifo

  def writeMasterInterface: Axi4 = t

  // --------------------the interconnection logic---------------------

  // ----------------fifo to Axi4WriteMaster channel map-------------------

  // record the times of handshake between fifo and Axi4WriteMaster interface
  val handshakeCounter: Counter = Counter(0, len)

  // register the fifo data (or fifo data buffer)

  val fifoDataBuffer: Bits = RegInit(B(0, widthPerData * len bits))

  // handshake between fifo and Axi4WriteMaster
  when(fifoStreamInterface.fire) {
    fifoDataBuffer(handshakeCounter * U(widthPerData), widthPerData bits) := fifoStreamInterface.payload
    handshakeCounter.increment()
  }

  fifoStreamInterface.ready := False
  when(!handshakeCounter.willOverflowIfInc) {
    fifoStreamInterface.ready := True
  }

  // when the write channel complete a burst, the buffer can receive next burst data from fifo

  import Axi4.resp._

  when(writeCounter.willOverflowIfInc & writeMasterInterface.b.payload.resp === OKAY) {
    handshakeCounter.clear()
  }


  // ----------------------the write address channel map----------------------

  // compute the start address for each transfer in each burst
  val address =
    RegNextWhen(Axi4.incr(address,
      writeMasterInterface.aw.burst,
      writeMasterInterface.aw.len,
      writeMasterInterface.aw.size,
      config.bytePerWord),
      writeMasterInterface.aw.fire) init (U(0, addressWidth bits))
  // handshake logic
  writeMasterInterface.aw.valid := writeMasterInterface.w.valid


  // data logic
  val initialAddress = Reg(UInt(addressWidth bits)) init (U(0, addressWidth bits))

  /* the writeMasterInterface's aw channel's addr port
     should give a startAddress for each burst
   */
  when(writeCounter === U(0)) {
    initialAddress := address
  }
  // when a burst complete, the start address should change
  when(writeCounter.willOverflowIfInc) {
    writeMasterInterface.aw.payload.addr := address
  } otherwise {
    writeMasterInterface.aw.payload.addr := initialAddress
  }

  // other logic

  import Axi4.burst._

  writeMasterInterface.aw.payload.id := U(0, config.idWidth bits)
  writeMasterInterface.aw.payload.region := B(0, 4 bits)
  writeMasterInterface.aw.payload.burst := INCR
  writeMasterInterface.aw.payload.len := U(len - 1, 8 bits)
  writeMasterInterface.aw.payload.size := U(config.bytePerWord, 3 bits)
  writeMasterInterface.aw.payload.lock := B(0, 1 bits)
  writeMasterInterface.aw.payload.cache := B(0, 4 bits)
  writeMasterInterface.aw.payload.qos := B(0, 4 bits)
  writeMasterInterface.aw.payload.prot := B(0, 3 bits)

  // --------------------------the write channel map--------------------------

  // record the times of write op in write channel
  val writeCounter = Counter(0, len)

  // data logic
  writeMasterInterface.w.payload.data := B(0, widthPerData bits)
  when(writeMasterInterface.w.valid) {
    writeMasterInterface.w.payload.data := fifoDataBuffer(writeCounter * widthPerData, widthPerData bits)
  }
  when(writeMasterInterface.w.fire) {
    writeCounter.increment()
  }

  // handshake logic
  writeMasterInterface.w.valid := False
  when(handshakeCounter > U(0) & !writeCounter.willOverflowIfInc) {
    writeMasterInterface.w.valid := True
  }
  // when a burst complete reset counter for next burst
  when(writeCounter.willOverflowIfInc) {
    writeCounter.clear()
  }

  // other logic
  writeMasterInterface.w.setStrb()
  writeMasterInterface.w.last := writeCounter === U(len - 1)

  // ------------------------The write respond map---------------------------
  // in this interface, noting to do


  // --------------------The read address channel map -----------------------
  // in this interface, we not read the slave, so we can set the default value for this channel
  writeMasterInterface.ar.payload.addr := U(0, addressWidth bits)
  writeMasterInterface.ar.payload.id := U(0, config.idWidth bits)
  writeMasterInterface.ar.payload.region := B(0, 4 bits)
  writeMasterInterface.ar.payload.burst := INCR
  writeMasterInterface.ar.payload.len := U(len - 1, 8 bits)
  writeMasterInterface.ar.payload.size := U(config.bytePerWord, 3 bits)
  writeMasterInterface.ar.payload.lock := B(0, 1 bits)
  writeMasterInterface.ar.payload.cache := B(0, 4 bits)
  writeMasterInterface.ar.payload.qos := B(0, 4 bits)
  writeMasterInterface.ar.payload.prot := B(0, 3 bits)
  writeMasterInterface.ar.valid := False

  // ------------------------The read channel map-----------------------------
  // in this interface, noting to do
}


object Axi4WriteMasterSpecRenamer {
  def apply(that: Axi4WriteMaster): Unit = {
    def doIt() = {
      that.flatten.foreach { port =>
        port.setName(port.getName().replace("_payload_", ""))
        port.setName(port.getName().replace("_valid", "Valid"))
        port.setName(port.getName().replace("_ready", "Ready"))
        port.setName(port.getName().replace("fifo_payload", "fifoPayload"))
        if (port.getName().startsWith("io_t_")) port.getName().replaceFirst("io_t_", "")
        if (port.getName().startsWith("io_fifo_")) port.getName().replaceFirst("io_fifo_", "fifo")
      }
    }

    if (Component.current == that.component) {
      that.component.addPrePopTask(() => doIt)
    } else {
      doIt
    }
  }


}