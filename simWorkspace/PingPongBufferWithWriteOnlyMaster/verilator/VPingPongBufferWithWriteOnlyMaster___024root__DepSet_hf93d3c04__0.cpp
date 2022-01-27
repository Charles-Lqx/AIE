// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"
#include "VPingPongBufferWithWriteOnlyMaster___024root.h"

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster___024root___sequent__TOP__2(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->interruptOut = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState;
    vlSelf->full_aw_payload_addr = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_finalAddressReg;
    vlSelf->full_aw_valid = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlAwValidSignal;
    vlSelf->full_aw_payload_len = (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__burstLengthReg) 
                                            - (IData)(1U)));
    vlSelf->full_w_payload_last = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast;
    vlSelf->full_b_ready = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlBReady;
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster___024root___multiclk__TOP__5(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___multiclk__TOP__5\n"); );
    // Body
    vlSelf->full_w_payload_data = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wdata;
    vlSelf->full_w_valid = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wvalid;
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster___024root___multiclk__TOP__6(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___multiclk__TOP__6\n"); );
    // Body
    vlSelf->streamIn_ready = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_s_axis_ready;
}

void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__1(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__1(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__2(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__3(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__2(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__3(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__4(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__5(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__8(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__6(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___combo__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__7(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___combo__TOP__PingPongBufferWithWriteOnlyMaster__9(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__10(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__8(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__11(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__12(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___combo__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__9(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);
void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___combo__TOP__PingPongBufferWithWriteOnlyMaster__13(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);

void VPingPongBufferWithWriteOnlyMaster___024root___eval(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->aclk) & (~ (IData)(vlSelf->__Vclklast__TOP__aclk)))) {
        VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__1((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__1((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater));
    }
    if ((((IData)(vlSelf->aclk) & (~ (IData)(vlSelf->__Vclklast__TOP__aclk))) 
         | ((~ (IData)(vlSelf->aresetn)) & (IData)(vlSelf->__Vclklast__TOP__aresetn)))) {
        VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__2((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__3((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__2((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater));
        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__3((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater));
        VPingPongBufferWithWriteOnlyMaster___024root___sequent__TOP__2(vlSelf);
        VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__4((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1))) 
         | ((IData)(vlSelf->startIn) & (~ (IData)(vlSelf->__Vclklast__TOP__startIn))))) {
        VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__5((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT__axi4Interface_isBurstComplete) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT__axi4Interface_isBurstComplete))) 
         | ((IData)(vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_2) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_2))))) {
        VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__8((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4))) 
         | ((IData)(vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg))))) {
        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__6((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater));
    }
    VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___combo__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__7((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater));
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___combo__TOP__PingPongBufferWithWriteOnlyMaster__9((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
    if (((((IData)(vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1) 
           & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1))) 
          | ((IData)(vlSelf->aclk) & (~ (IData)(vlSelf->__Vclklast__TOP__aclk)))) 
         | ((IData)(vlSelf->startIn) & (~ (IData)(vlSelf->__Vclklast__TOP__startIn))))) {
        VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__10((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
    }
    if ((((((IData)(vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4))) 
           | ((IData)(vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg) 
              & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg)))) 
          | ((IData)(vlSelf->aclk) & (~ (IData)(vlSelf->__Vclklast__TOP__aclk)))) 
         | ((~ (IData)(vlSelf->aresetn)) & (IData)(vlSelf->__Vclklast__TOP__aresetn)))) {
        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__8((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VPingPongBufferWithWriteOnlyMaster___024root___multiclk__TOP__5(vlSelf);
        VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__11((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
    }
    if ((((((IData)(vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1))) 
           | ((IData)(vlSelf->aclk) & (~ (IData)(vlSelf->__Vclklast__TOP__aclk)))) 
          | ((~ (IData)(vlSelf->aresetn)) & (IData)(vlSelf->__Vclklast__TOP__aresetn))) 
         | ((IData)(vlSelf->startIn) & (~ (IData)(vlSelf->__Vclklast__TOP__startIn))))) {
        VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__12((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        VPingPongBufferWithWriteOnlyMaster___024root___multiclk__TOP__6(vlSelf);
    }
    VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___combo__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__9((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater));
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___combo__TOP__PingPongBufferWithWriteOnlyMaster__13((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
    // Final
    vlSelf->__Vclklast__TOP__aclk = vlSelf->aclk;
    vlSelf->__Vclklast__TOP__aresetn = vlSelf->aresetn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1 
        = vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1;
    vlSelf->__Vclklast__TOP__startIn = vlSelf->startIn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT__axi4Interface_isBurstComplete 
        = vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT__axi4Interface_isBurstComplete;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_2 
        = vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4 
        = vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg 
        = vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg;
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT___zz_1;
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT__axi4Interface_isBurstComplete 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_isBurstComplete;
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_2 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT___zz_2;
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT___zz_4;
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputStartSignalReg;
}

VL_INLINE_OPT QData VPingPongBufferWithWriteOnlyMaster___024root___change_request_1(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT___zz_1 ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_1)
         | (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT___zz_2 ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_2)
         | (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputStartSignalReg ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT__outputStartSignalReg)
         | (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT___zz_4 ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater___zz_4)
         | (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_isBurstComplete ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__axi4Interface_isBurstComplete));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT___zz_1 ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_1))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:567: pingPongBuffer_1._zz_1\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT___zz_2 ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_2))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:571: pingPongBuffer_1._zz_2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputStartSignalReg ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT__outputStartSignalReg))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:593: pingPongBuffer_1.outputStartSignalReg\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT___zz_4 ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater___zz_4))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:187: _zz_4\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_isBurstComplete ^ vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__axi4Interface_isBurstComplete))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:230: axi4Interface_isBurstComplete\n"); );
    // Final
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_1 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT___zz_1;
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_2 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT___zz_2;
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT__outputStartSignalReg 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputStartSignalReg;
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater___zz_4 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT___zz_4;
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__axi4Interface_isBurstComplete 
        = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_isBurstComplete;
    return __req;
}
