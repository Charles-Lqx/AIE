// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h"

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__1(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__1\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0;
    IData/*31:0*/ __Vdlyvval__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvdim0__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0;
    IData/*31:0*/ __Vdlyvval__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0;
    // Body
    __Vdlyvset__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0 = 0U;
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rData 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0;
    }
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rData 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0;
    }
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1) {
        __Vdlyvval__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload;
        __Vdlyvset__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value;
    }
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1) {
        __Vdlyvval__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload;
        __Vdlyvset__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveSignal_regNext 
        = vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveSignal;
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0 
        = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram
        [vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext];
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0 
        = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram
        [vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext];
    if (__Vdlyvset__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram[__Vdlyvdim0__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0] 
            = __Vdlyvval__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0;
    }
    if (__Vdlyvset__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram[__Vdlyvdim0__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0] 
            = __Vdlyvval__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__5(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__5\n"); );
    // Body
    vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveSignal 
        = (1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT___zz_1)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__8(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__8\n"); );
    // Body
    vlSelf->__PVT__pingPongBuffer_1__DOT__lastBurstCompleteSignal 
        = (1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT___zz_2)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__10(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__10\n"); );
    // Body
    vlSelf->__PVT__pingPongBuffer_1__DOT__realStartSignal 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveSignal) 
           | (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveSignal_regNext));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__12(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__12\n"); );
    // Body
    vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__realStartSignal) 
           & (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA));
    vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__realStartSignal) 
           & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA)));
    vlSelf->__PVT__pingPongBuffer_1_s_axis_ready = 0U;
    if ((1U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146) {
            vlSelf->__PVT__pingPongBuffer_1_s_axis_ready 
                = (1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)));
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153) {
            vlSelf->__PVT__pingPongBuffer_1_s_axis_ready 
                = (1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)));
        }
    } else if ((2U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146) {
            vlSelf->__PVT__pingPongBuffer_1_s_axis_ready 
                = (1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)));
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153) {
            vlSelf->__PVT__pingPongBuffer_1_s_axis_ready 
                = (1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)));
        }
    }
}
