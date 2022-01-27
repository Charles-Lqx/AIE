// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster___024root.h"

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root___initial__TOP__1(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->full_w_payload_strb = 0xfU;
    vlSelf->full_aw_payload_prot = 0U;
    vlSelf->full_aw_payload_qos = 0U;
    vlSelf->full_aw_payload_cache = 0U;
    vlSelf->full_aw_payload_burst = 1U;
    vlSelf->full_aw_payload_size = 2U;
    vlSelf->full_aw_payload_region = 0U;
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root___eval_initial(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___eval_initial\n"); );
    // Body
    VPingPongBufferWithWriteOnlyMaster___024root___initial__TOP__1(vlSelf);
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
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root___final(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___final\n"); );
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root___ctor_var_reset(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->streamIn_valid = VL_RAND_RESET_I(1);
    vlSelf->streamIn_ready = VL_RAND_RESET_I(1);
    vlSelf->streamIn_payload = VL_RAND_RESET_I(32);
    vlSelf->startIn = VL_RAND_RESET_I(1);
    vlSelf->bufferDepthIn = VL_RAND_RESET_I(8);
    vlSelf->interruptOut = VL_RAND_RESET_I(1);
    vlSelf->startAddr = VL_RAND_RESET_I(32);
    vlSelf->offset = VL_RAND_RESET_I(32);
    vlSelf->pathNumb = VL_RAND_RESET_I(8);
    vlSelf->full_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->full_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->full_aw_payload_addr = VL_RAND_RESET_I(32);
    vlSelf->full_aw_payload_region = VL_RAND_RESET_I(4);
    vlSelf->full_aw_payload_len = VL_RAND_RESET_I(8);
    vlSelf->full_aw_payload_size = VL_RAND_RESET_I(3);
    vlSelf->full_aw_payload_burst = VL_RAND_RESET_I(2);
    vlSelf->full_aw_payload_cache = VL_RAND_RESET_I(4);
    vlSelf->full_aw_payload_qos = VL_RAND_RESET_I(4);
    vlSelf->full_aw_payload_prot = VL_RAND_RESET_I(3);
    vlSelf->full_w_valid = VL_RAND_RESET_I(1);
    vlSelf->full_w_ready = VL_RAND_RESET_I(1);
    vlSelf->full_w_payload_data = VL_RAND_RESET_I(32);
    vlSelf->full_w_payload_strb = VL_RAND_RESET_I(4);
    vlSelf->full_w_payload_last = VL_RAND_RESET_I(1);
    vlSelf->full_b_valid = VL_RAND_RESET_I(1);
    vlSelf->full_b_ready = VL_RAND_RESET_I(1);
    vlSelf->full_b_payload_resp = VL_RAND_RESET_I(2);
    vlSelf->aresetn = VL_RAND_RESET_I(1);
    vlSelf->aclk = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT__outputStartSignalReg = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater___zz_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
