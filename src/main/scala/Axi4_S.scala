import spinal.lib._
import spinal.core._

// define a config class for Axi_M_Write
case class Axi4_S_Config(addressWidth: Int,
                         dataWidth: Int,
                         dataNumber: Int,
                         useStrb: Boolean = true,
                         useKeep: Boolean = true,
                         useLast: Boolean = true,
                         useId: Boolean = true,
                         useDest: Boolean = true,
                         useUser: Boolean = true,
                         tIdWidth: Int = -1,
                         tDestWidth: Int = -1,
                         tUserWidth: Int = -1
                        ) {
  // when use the ID, DEST, USER signal, some condition shoud be met
  if (useId) {
    require(tIdWidth >= 0, "You shoud set the tIdWidth in this config !")
  }

  if (useDest) {
    require(tDestWidth >= 0, "You shoud set the tDestWidth in this config !")
  }

  if (useUser) {
    require(tUserWidth >= 0, "You shoud set the tUserWidth in this config !")
  }

  val dataType = HardType(Bits(dataWidth bits))

}

case class Axi4_S_Bus(config: Axi4_S_Config) extends Bundle {
  // define some interface signals which we need to define this interface
  val tData = Bits(config.dataWidth * config.dataNumber bits)
  val tStrb = if (config.useStrb) Bits(config.dataNumber bits) else null
  val tKeep = if (config.useKeep) Bits(config.dataNumber bits) else null
  val tLast = if (config.useLast) Bool() else null
  val tId = if (config.useId) Bits(config.tIdWidth bits) else null
  val tDest = if (config.useDest) Bits(config.tDestWidth bits) else null
  val tUser = if (config.useUser) Bits(config.tUserWidth bits) else null

}

case class Axi4_S(config: Axi4_S_Config) extends Bundle {
  val axi4_s_interface = Stream(Axi4_S_Bus(config))
}

object Axi4_S_SpecRenamer {
  def apply(that: Axi4_S): Unit = {

  }
}
