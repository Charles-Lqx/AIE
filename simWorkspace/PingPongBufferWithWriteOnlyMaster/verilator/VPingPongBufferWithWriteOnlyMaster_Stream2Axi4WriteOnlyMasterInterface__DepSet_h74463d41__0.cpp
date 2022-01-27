// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__1(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__axi4Interface_isBurstComplete;
    CData/*7:0*/ __Vdlyvdim0__streamFifo_3__DOT__logic_ram__v0;
    IData/*31:0*/ __Vdlyvval__streamFifo_3__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__streamFifo_3__DOT__logic_ram__v0;
    // Body
    __Vdly__axi4Interface_isBurstComplete = vlSelf->__PVT__axi4Interface_isBurstComplete;
    __Vdlyvset__streamFifo_3__DOT__logic_ram__v0 = 0U;
    vlSelf->__PVT__m_axi_wlast_regNext = vlSelf->__PVT__m_axi_wlast;
    if (vlSelf->__PVT__streamFifo_3_io_pop_ready) {
        vlSelf->__PVT__streamFifo_3_io_pop_rData = vlSelf->__PVT__streamFifo_3__DOT___zz_logic_ram_port0;
    }
    __Vdly__axi4Interface_isBurstComplete = ((IData)(vlSymsp->TOP.full_b_valid) 
                                             & (IData)(vlSelf->__PVT__axi4Interface_controlBReady));
    if (vlSelf->__PVT__axi4Interface_isBurstComplete) {
        __Vdly__axi4Interface_isBurstComplete = 0U;
    }
    if (vlSelf->__PVT__streamFifo_3__DOT___zz_1) {
        __Vdlyvval__streamFifo_3__DOT__logic_ram__v0 
            = vlSelf->__PVT__streamFifo_3_io_push_payload;
        __Vdlyvset__streamFifo_3__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__streamFifo_3__DOT__logic_ram__v0 
            = vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_value;
    }
    vlSelf->__PVT__axi4Interface_isBurstComplete = __Vdly__axi4Interface_isBurstComplete;
    vlSelf->__PVT__streamFifo_3__DOT___zz_logic_ram_port0 
        = vlSelf->__PVT__streamFifo_3__DOT__logic_ram
        [vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_valueNext];
    if (__Vdlyvset__streamFifo_3__DOT__logic_ram__v0) {
        vlSelf->__PVT__streamFifo_3__DOT__logic_ram[__Vdlyvdim0__streamFifo_3__DOT__logic_ram__v0] 
            = __Vdlyvval__streamFifo_3__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__2(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__2\n"); );
    // Init
    IData/*31:0*/ __Vdly__axi4Interface_finalAddressReg;
    // Body
    __Vdly__axi4Interface_finalAddressReg = vlSelf->__PVT__axi4Interface_finalAddressReg;
    if (vlSymsp->TOP.aresetn) {
        if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l159) {
            __Vdly__axi4Interface_finalAddressReg = vlSymsp->TOP.startAddr;
        }
        if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l164) {
            __Vdly__axi4Interface_finalAddressReg = 
                (vlSelf->__PVT__axi4Interface_finalAddressReg 
                 + vlSelf->__PVT__offsetAddressReg);
        }
        vlSelf->__PVT___zz_axi4Interface_isInitialIterate_2 
            = vlSelf->__PVT___zz_axi4Interface_isInitialIterate_1;
        if (((IData)(vlSymsp->TOP.full_b_valid) & (IData)(vlSelf->__PVT__axi4Interface_controlBReady))) {
            vlSelf->__PVT__axi4Interface_isRefreshAddr = 1U;
        }
        if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l159) {
            vlSelf->__PVT__axi4Interface_isRefreshAddr = 0U;
        }
        if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l164) {
            vlSelf->__PVT__axi4Interface_isRefreshAddr = 0U;
        }
        if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l131) {
            if (vlSelf->__PVT__axi4Interface_full_aw_fire) {
                vlSelf->__PVT__axi4Interface_controlAwValidSignal = 0U;
            } else if (vlSelf->__PVT__axi4Interface_newBurst) {
                vlSelf->__PVT__axi4Interface_controlAwValidSignal = 1U;
            }
        }
        if (vlSelf->__PVT__streamFifo_3_io_pop_ready) {
            vlSelf->__PVT__streamFifo_3_io_pop_rValid 
                = vlSelf->__PVT__streamFifo_3_io_pop_valid;
        }
        vlSelf->__PVT___zz_m_axi_wlast_2 = vlSelf->__PVT___zz_m_axi_wlast_1;
        vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_2 
            = vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_1;
        if (((IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_pushing) 
             != (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_popping))) {
            vlSelf->__PVT__streamFifo_3__DOT__logic_risingOccupancy 
                = vlSelf->__PVT__streamFifo_3__DOT__logic_pushing;
        }
        vlSelf->__PVT__burstLengthReg = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferDepthReg;
        vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_value 
            = vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_valueNext;
        vlSelf->__PVT__streamFifo_3__DOT___zz_io_pop_valid 
            = ((IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_valueNext) 
               == (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_value));
        vlSelf->__PVT__axi4Interface_finalAddressReg 
            = __Vdly__axi4Interface_finalAddressReg;
        if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l159) {
            vlSelf->__PVT__offsetAddressReg = vlSymsp->TOP.offset;
        }
    } else {
        __Vdly__axi4Interface_finalAddressReg = 0U;
        vlSelf->__PVT___zz_axi4Interface_isInitialIterate_2 = 0U;
        vlSelf->__PVT__axi4Interface_isRefreshAddr = 1U;
        vlSelf->__PVT__axi4Interface_controlAwValidSignal = 0U;
        vlSelf->__PVT__streamFifo_3_io_pop_rValid = 0U;
        vlSelf->__PVT___zz_m_axi_wlast_2 = 0U;
        vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_2 = 0U;
        vlSelf->__PVT__streamFifo_3__DOT__logic_risingOccupancy = 0U;
        vlSelf->__PVT__burstLengthReg = 0xffU;
        vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_value = 0U;
        vlSelf->__PVT__streamFifo_3__DOT___zz_io_pop_valid = 0U;
        vlSelf->__PVT__axi4Interface_finalAddressReg 
            = __Vdly__axi4Interface_finalAddressReg;
        vlSelf->__PVT__offsetAddressReg = 0U;
    }
    vlSelf->axi4Interface_isInitialIterate = (0U == (IData)(vlSelf->__PVT___zz_axi4Interface_isInitialIterate_2));
    if (vlSymsp->TOP.aresetn) {
        if (((IData)(vlSymsp->TOP.full_b_valid) & (IData)(vlSelf->__PVT__axi4Interface_controlBReady))) {
            vlSelf->__PVT__axi4Interface_newBurst = 1U;
        }
        if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l131) {
            if (vlSelf->__PVT__axi4Interface_full_aw_fire) {
                vlSelf->__PVT__axi4Interface_newBurst = 0U;
            }
        }
    } else {
        vlSelf->__PVT__axi4Interface_newBurst = 1U;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__3(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__3\n"); );
    // Body
    vlSelf->__PVT__m_axi_wlast = ((IData)(vlSelf->__PVT___zz_m_axi_wlast_2) 
                                  == (0xffU & ((IData)(vlSelf->__PVT__burstLengthReg) 
                                               - (IData)(1U))));
    if (vlSymsp->TOP.aresetn) {
        vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_valueNext;
        if (vlSelf->__PVT__m_axi_wvalid) {
            vlSelf->__PVT__axi4Interface_controlBReady = 1U;
        }
        if (vlSelf->__PVT__axi4Interface_full_b_fire_6) {
            vlSelf->__PVT__axi4Interface_controlBReady = 0U;
        }
    } else {
        vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__axi4Interface_controlBReady = 0U;
    }
    vlSelf->__PVT__streamFifo_3__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_value));
    vlSelf->__PVT__streamFifo_3__DOT__logic_full = 
        ((IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_ptrMatch) 
         & (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_risingOccupancy));
    vlSelf->__PVT__streamFifo_3_io_pop_valid = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_ptrMatch) 
                                                     & (~ (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_risingOccupancy)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__streamFifo_3__DOT___zz_io_pop_valid) 
                                                       & (~ (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_full))))));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___combo__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__7(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___combo__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__7\n"); );
    // Init
    CData/*0:0*/ __PVT___zz_axi4Interface_isInitialIterate;
    CData/*0:0*/ __PVT___zz_8;
    // Body
    vlSelf->__PVT__axi4Interface_full_aw_fire = ((IData)(vlSelf->__PVT__axi4Interface_controlAwValidSignal) 
                                                 & (IData)(vlSymsp->TOP.full_aw_ready));
    if (((IData)(vlSymsp->TOP.full_b_valid) & (IData)(vlSelf->__PVT__axi4Interface_controlBReady))) {
        vlSelf->__PVT__axi4Interface_full_b_fire_6 = 1U;
        vlSelf->__PVT___zz_1 = 0U;
        vlSelf->__PVT___zz_1 = 1U;
        vlSelf->__PVT___zz_5 = 0U;
        vlSelf->__PVT___zz_5 = 1U;
        __PVT___zz_axi4Interface_isInitialIterate = 0U;
        __PVT___zz_axi4Interface_isInitialIterate = 1U;
    } else {
        vlSelf->__PVT__axi4Interface_full_b_fire_6 = 0U;
        vlSelf->__PVT___zz_1 = 0U;
        vlSelf->__PVT___zz_5 = 0U;
        __PVT___zz_axi4Interface_isInitialIterate = 0U;
    }
    __PVT___zz_8 = 0U;
    if ((((IData)(vlSelf->__PVT___zz_axi4Interface_isInitialIterate_2) 
          == (IData)(vlSymsp->TOP.pathNumb)) & ((IData)(vlSymsp->TOP.full_b_valid) 
                                                & (IData)(vlSelf->__PVT__axi4Interface_controlBReady)))) {
        __PVT___zz_8 = 1U;
    }
    vlSelf->__PVT___zz_4 = (1U & (((~ (IData)(vlSelf->__PVT__m_axi_wlast)) 
                                   & (IData)(vlSelf->__PVT__m_axi_wlast_regNext)) 
                                  | (~ (IData)(vlSymsp->TOP.aresetn))));
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l131 = 
        ((IData)(vlSymsp->TOP.aresetn) & (IData)(vlSelf->__PVT__startSendSignal));
    vlSelf->__PVT___zz_axi4Interface_isInitialIterate_1 
        = (0xffU & ((IData)(vlSelf->__PVT___zz_axi4Interface_isInitialIterate_2) 
                    + (IData)(__PVT___zz_axi4Interface_isInitialIterate)));
    if (__PVT___zz_8) {
        vlSelf->__PVT___zz_axi4Interface_isInitialIterate_1 = 0U;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__8(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__8\n"); );
    // Body
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l159 = 
        (((IData)(vlSelf->__PVT__axi4Interface_isRefreshAddr) 
          & (IData)(vlSelf->__PVT__startSendSignal)) 
         & (IData)(vlSelf->axi4Interface_isInitialIterate));
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l164 = 
        (((IData)(vlSelf->__PVT__axi4Interface_isRefreshAddr) 
          & (IData)(vlSelf->__PVT__startSendSignal)) 
         & (~ (IData)(vlSelf->axi4Interface_isInitialIterate)));
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l187 = 
        (((IData)(vlSelf->__PVT___zz_m_axi_wlast_2) 
          < (IData)(vlSelf->__PVT__burstLengthReg)) 
         & (IData)(vlSelf->__PVT__startSendSignal));
    vlSelf->__PVT__when_Axi4WriteOnlyMaster_l105 = 
        (((IData)(vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_2) 
          < (IData)(vlSelf->__PVT__burstLengthReg)) 
         & (IData)(vlSelf->__PVT__startSendSignal));
    vlSelf->__PVT__m_axi_wdata = vlSelf->__PVT__streamFifo_3__DOT___zz_logic_ram_port0;
    if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l187) {
        vlSelf->__PVT__m_axi_wdata = vlSelf->__PVT__streamFifo_3_io_pop_rData;
        vlSelf->__PVT__m_axi_wvalid = 0U;
        vlSelf->__PVT__m_axi_wvalid = vlSelf->__PVT__streamFifo_3_io_pop_rValid;
    } else {
        vlSelf->__PVT__m_axi_wvalid = 0U;
    }
    vlSelf->__PVT__s_axis_ready = 0U;
    if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l105) {
        vlSelf->__PVT__s_axis_ready = (1U & (~ (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_full)));
        vlSelf->__PVT__streamFifo_3_io_push_payload 
            = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_payload;
        vlSelf->__PVT__streamFifo_3_io_push_payload 
            = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_payload;
        vlSelf->__PVT__streamFifo_3_io_push_valid = 0U;
        vlSelf->__PVT__streamFifo_3_io_push_valid = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_valid;
    } else {
        vlSelf->__PVT__streamFifo_3_io_push_payload 
            = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_payload;
        vlSelf->__PVT__streamFifo_3_io_push_valid = 0U;
    }
    vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105 = 0U;
    if (((IData)(vlSelf->__PVT__streamFifo_3_io_push_valid) 
         & (~ (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_full)))) {
        vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105 = 1U;
        vlSelf->__PVT__streamFifo_3__DOT__logic_pushing = 1U;
    } else {
        vlSelf->__PVT__streamFifo_3__DOT__logic_pushing = 0U;
    }
    vlSelf->__PVT__streamFifo_3__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__streamFifo_3__DOT__logic_pushing) {
        vlSelf->__PVT__streamFifo_3__DOT___zz_1 = 1U;
        vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_value) 
                    + (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___combo__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__9(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___combo__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__9\n"); );
    // Init
    CData/*0:0*/ __PVT___zz_m_axi_wlast;
    // Body
    vlSelf->__PVT__streamFifo_3_io_pop_ready = 0U;
    if (vlSelf->__PVT__when_Axi4WriteOnlyMaster_l187) {
        vlSelf->__PVT__streamFifo_3_io_pop_ready = vlSymsp->TOP.full_w_ready;
        if ((1U & (~ (IData)(vlSelf->__PVT__streamFifo_3_io_pop_rValid)))) {
            vlSelf->__PVT__streamFifo_3_io_pop_ready = 1U;
        }
    }
    __PVT___zz_m_axi_wlast = 0U;
    if (((IData)(vlSelf->__PVT__m_axi_wvalid) & (IData)(vlSymsp->TOP.full_w_ready))) {
        __PVT___zz_m_axi_wlast = 1U;
    }
    vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_1 
        = (((0x100U == (IData)(vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_2)) 
            & (IData)(vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105))
            ? 0U : (0x1ffU & ((IData)(vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_2) 
                              + (IData)(vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105))));
    if (vlSelf->__PVT___zz_5) {
        vlSelf->__PVT___zz_when_Axi4WriteOnlyMaster_l105_1 = 0U;
    }
    vlSelf->__PVT__streamFifo_3__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__streamFifo_3_io_pop_valid) 
           & (IData)(vlSelf->__PVT__streamFifo_3_io_pop_ready));
    vlSelf->__PVT___zz_m_axi_wlast_1 = (((0x100U == (IData)(vlSelf->__PVT___zz_m_axi_wlast_2)) 
                                         & (IData)(__PVT___zz_m_axi_wlast))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(vlSelf->__PVT___zz_m_axi_wlast_2) 
                                                    + (IData)(__PVT___zz_m_axi_wlast))));
    if (vlSelf->__PVT___zz_1) {
        vlSelf->__PVT___zz_m_axi_wlast_1 = 0U;
    }
    vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__streamFifo_3__DOT__logic_popping) {
        vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_value) 
                    + (IData)(vlSelf->__PVT__streamFifo_3__DOT__logic_popPtr_willIncrement)));
}
