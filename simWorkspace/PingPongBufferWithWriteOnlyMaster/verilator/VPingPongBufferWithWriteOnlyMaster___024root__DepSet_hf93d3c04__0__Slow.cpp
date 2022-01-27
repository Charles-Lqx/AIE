// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"
#include "VPingPongBufferWithWriteOnlyMaster___024root.h"

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root___settle__TOP__3(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->full_aw_payload_len = (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__burstLengthReg) 
                                            - (IData)(1U)));
    vlSelf->full_aw_payload_addr = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_finalAddressReg;
    vlSelf->full_aw_valid = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlAwValidSignal;
    vlSelf->interruptOut = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState;
    vlSelf->full_b_ready = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlBReady;
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root___settle__TOP__4(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->full_w_payload_last = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast;
    vlSelf->full_w_payload_data = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wdata;
    vlSelf->full_w_valid = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wvalid;
    vlSelf->streamIn_ready = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_s_axis_ready;
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___settle__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__4(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);
VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___settle__TOP__PingPongBufferWithWriteOnlyMaster__6(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___settle__TOP__PingPongBufferWithWriteOnlyMaster__7(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);
VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___settle__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__5(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root___eval_settle(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root___eval_settle\n"); );
    // Body
    VPingPongBufferWithWriteOnlyMaster___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___settle__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__4((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater));
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___settle__TOP__PingPongBufferWithWriteOnlyMaster__6((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___settle__TOP__PingPongBufferWithWriteOnlyMaster__7((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster));
    VPingPongBufferWithWriteOnlyMaster___024root___settle__TOP__4(vlSelf);
    VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___settle__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__5((&vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater));
}
