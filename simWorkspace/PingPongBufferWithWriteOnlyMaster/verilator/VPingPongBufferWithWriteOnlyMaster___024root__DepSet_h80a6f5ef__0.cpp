// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster___024root.h"

QData VPingPongBufferWithWriteOnlyMaster___024root___change_request_1(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf);

VL_INLINE_OPT QData VPingPongBufferWithWriteOnlyMaster___024root___change_request(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___change_request\n"); );
    // Body
    return (VPingPongBufferWithWriteOnlyMaster___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void VPingPongBufferWithWriteOnlyMaster___024root___eval_debug_assertions(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->streamIn_valid & 0xfeU))) {
        Verilated::overWidthError("streamIn_valid");}
    if (VL_UNLIKELY((vlSelf->startIn & 0xfeU))) {
        Verilated::overWidthError("startIn");}
    if (VL_UNLIKELY((vlSelf->full_aw_ready & 0xfeU))) {
        Verilated::overWidthError("full_aw_ready");}
    if (VL_UNLIKELY((vlSelf->full_w_ready & 0xfeU))) {
        Verilated::overWidthError("full_w_ready");}
    if (VL_UNLIKELY((vlSelf->full_b_valid & 0xfeU))) {
        Verilated::overWidthError("full_b_valid");}
    if (VL_UNLIKELY((vlSelf->full_b_payload_resp & 0xfcU))) {
        Verilated::overWidthError("full_b_payload_resp");}
    if (VL_UNLIKELY((vlSelf->aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((vlSelf->aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
}
#endif  // VL_DEBUG
