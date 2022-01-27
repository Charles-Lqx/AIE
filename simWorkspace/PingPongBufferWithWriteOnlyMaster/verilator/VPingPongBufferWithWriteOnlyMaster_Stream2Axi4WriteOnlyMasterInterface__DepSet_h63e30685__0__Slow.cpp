// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface.h"

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___ctor_var_reset(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__burstLen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__startAddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__offset = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pathNumb = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s_axis_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axis_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axis_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_axi_awregion = VL_RAND_RESET_I(4);
    vlSelf->__PVT__m_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__m_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->__PVT__m_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->__PVT__m_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->__PVT__m_axi_awqos = VL_RAND_RESET_I(4);
    vlSelf->__PVT__m_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->__PVT__m_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__m_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__transInterrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aresetn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aclk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3_io_push_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3_io_push_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__streamFifo_3_io_pop_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3_io_pop_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4Interface_transferDataType = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_m_axi_wlast_1 = VL_RAND_RESET_I(9);
    vlSelf->__PVT___zz_m_axi_wlast_2 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__m_axi_wlast_regNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__startSendSignal = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_1 = VL_RAND_RESET_I(9);
    vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_2 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__burstLengthReg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l105 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4Interface_newBurst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4Interface_controlAwValidSignal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l131 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4Interface_full_aw_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_axi4Interface_isInitialIterate_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT___zz_axi4Interface_isInitialIterate_2 = VL_RAND_RESET_I(8);
    vlSelf->axi4Interface_isInitialIterate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4Interface_isRefreshAddr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__offsetAddressReg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4Interface_finalAddressReg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l159 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l164 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l187 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3_io_pop_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3_io_pop_rData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4Interface_controlBReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4Interface_full_b_fire_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__streamFifo_3__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    vlSelf->__PVT__streamFifo_3__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3__DOT__logic_pushing = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3__DOT__logic_popping = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3__DOT__logic_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__streamFifo_3__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__PVT__streamFifo_3__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
}
