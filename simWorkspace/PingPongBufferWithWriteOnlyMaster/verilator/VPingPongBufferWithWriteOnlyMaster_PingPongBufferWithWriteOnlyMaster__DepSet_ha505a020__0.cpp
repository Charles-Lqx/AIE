// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__2(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__2\n"); );
    // Body
    vlSelf->__Vdly__pingPongBuffer_1__DOT__isWriteBufferA 
        = vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA;
    vlSelf->__Vdly__pingPongBuffer_1__DOT__isReadBufferA 
        = vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA;
    vlSelf->__Vdly__pingPongBuffer_1__DOT__outputStartSignalReg 
        = vlSelf->__PVT__pingPongBuffer_1__DOT__outputStartSignalReg;
    if (vlSymsp->TOP.aresetn) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_value 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_valueNext;
        vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_value 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_valueNext;
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rValid 
                = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid;
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rValid 
                = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid;
        }
        if (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) 
             != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping))) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy 
                = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing;
        }
        if (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) 
             != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping))) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy 
                = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing;
        }
    } else {
        vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_value = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_value = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rValid = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rValid = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy = 0U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VPingPongBufferWithWriteOnlyMaster__ConstPool__TABLE_h7f6c5772_0;

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__3(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__3\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    if (vlSymsp->TOP.aresetn) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid 
            = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext) 
               == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value));
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid 
            = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext) 
               == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value));
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
            vlSelf->__Vdly__pingPongBuffer_1__DOT__isWriteBufferA 
                = (1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA)));
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l226) {
            vlSelf->__Vdly__pingPongBuffer_1__DOT__outputStartSignalReg 
                = vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer;
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l231) {
            vlSelf->__Vdly__pingPongBuffer_1__DOT__outputStartSignalReg 
                = vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer;
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__outputStartSignalReg) {
            vlSelf->__Vdly__pingPongBuffer_1__DOT__outputStartSignalReg = 0U;
        }
        vlSelf->__PVT__pingPongBuffer_1__DOT__outputStartSignalReg 
            = vlSelf->__Vdly__pingPongBuffer_1__DOT__outputStartSignalReg;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext;
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
            vlSelf->__Vdly__pingPongBuffer_1__DOT__isReadBufferA 
                = (1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA)));
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__isAfterResetState) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer = 1U;
        }
        if ((1U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = 0U;
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146) {
                if (vlSelf->__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
                    vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
                }
            }
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153) {
                if (vlSelf->__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
                    vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = 0U;
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l166) {
                vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA) {
                if (vlSelf->__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
                    vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
                }
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA)))) {
                if (vlSelf->__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
                    vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
                }
            }
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__lastBurstCompleteSignal) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer = 1U;
        }
        if (((1U != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
             & (1U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))) {
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__isAfterResetState) {
                vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
            }
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l226) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer = 0U;
        }
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l231) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer = 0U;
        }
    } else {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid = 0U;
        vlSelf->__Vdly__pingPongBuffer_1__DOT__isWriteBufferA = 1U;
        vlSelf->__Vdly__pingPongBuffer_1__DOT__outputStartSignalReg = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__outputStartSignalReg 
            = vlSelf->__Vdly__pingPongBuffer_1__DOT__outputStartSignalReg;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value = 0U;
        vlSelf->__Vdly__pingPongBuffer_1__DOT__isReadBufferA = 1U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer = 0U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA 
        = vlSelf->__Vdly__pingPongBuffer_1__DOT__isReadBufferA;
    vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA 
        = vlSelf->__Vdly__pingPongBuffer_1__DOT__isWriteBufferA;
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value));
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value));
    if (vlSymsp->TOP.aresetn) {
        if (vlSymsp->TOP.aresetn) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__isAfterResetState = 0U;
        }
        vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext;
    } else {
        vlSelf->__PVT__pingPongBuffer_1__DOT__isAfterResetState = 1U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg = 0U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
           & (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy));
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
           & (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy));
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid 
        = (1U & ((~ ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full))))));
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid 
        = (1U & ((~ ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full))))));
    vlSelf->__PVT__pingPongBuffer_1_m_axis_payload 
        = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rData;
    if ((1U != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA) {
                vlSelf->__PVT__pingPongBuffer_1_m_axis_payload 
                    = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rData;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA)))) {
                vlSelf->__PVT__pingPongBuffer_1_m_axis_payload 
                    = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rData;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA) {
                vlSelf->__PVT__pingPongBuffer_1_m_axis_payload 
                    = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rData;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA)))) {
                vlSelf->__PVT__pingPongBuffer_1_m_axis_payload 
                    = vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rData;
            }
        }
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__canReadData 
        = ((2U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
           | (3U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)));
    vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
        if ((2U != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
            if ((3U != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
                vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = 1U;
            }
        }
    }
    __Vtableidx1 = ((0x40U & ((~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA)) 
                              << 6U)) | (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rValid) 
                                          << 5U) | 
                                         ((0x10U & 
                                           ((~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA)) 
                                            << 4U)) 
                                          | (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rValid) 
                                              << 3U) 
                                             | (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA) 
                                                 << 2U) 
                                                | (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))))));
    vlSelf->__PVT__pingPongBuffer_1_m_axis_valid = 
        VPingPongBufferWithWriteOnlyMaster__ConstPool__TABLE_h7f6c5772_0
        [__Vtableidx1];
    vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l226 
        = (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer) 
            & (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__canReadData)) 
           & (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA));
    vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l231 
        = (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer) 
            & (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__canReadData)) 
           & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__4(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___sequent__TOP__PingPongBufferWithWriteOnlyMaster__4\n"); );
    // Body
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferDepthReg 
        = ((IData)(vlSymsp->TOP.aresetn) ? (IData)(vlSymsp->TOP.bufferDepthIn)
            : 0xffU);
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___combo__TOP__PingPongBufferWithWriteOnlyMaster__9(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___combo__TOP__PingPongBufferWithWriteOnlyMaster__9\n"); );
    // Body
    vlSelf->__PVT__pingPongBuffer_1__DOT___zz_2 = (1U 
                                                   & ((~ (IData)(vlSymsp->TOP.aresetn)) 
                                                      | (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__outputStartSignalReg)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__11(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___multiclk__TOP__PingPongBufferWithWriteOnlyMaster__11\n"); );
    // Body
    vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_willIncrement = 0U;
    if (((IData)(vlSelf->__PVT__pingPongBuffer_1_m_axis_valid) 
         & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready))) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_willIncrement = 1U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferAPop_ready = 0U;
    if ((1U != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA) {
                vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferAPop_ready 
                    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready;
            }
            vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA)))) {
                vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready 
                    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA) {
                vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferAPop_ready 
                    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready;
            }
            vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA)))) {
                vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready 
                    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready;
            }
        } else {
            vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready = 0U;
        }
    } else {
        vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready = 0U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow 
        = (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_value) 
            == (0xffU & ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferDepthReg) 
                         - (IData)(1U)))) & ((IData)(vlSelf->__PVT__pingPongBuffer_1_m_axis_valid) 
                                             & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready)));
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready 
        = vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferAPop_ready;
    if ((1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rValid)))) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready = 1U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready 
        = vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready;
    if ((1U & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rValid)))) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready = 1U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_willClear = 0U;
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_willClear = 1U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid) 
           & (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready));
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid) 
           & (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready));
    vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_valueNext 
        = (0xffU & ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_value) 
                    + (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_willIncrement)));
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_willClear) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_valueNext = 0U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value) 
                    + (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement)));
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value) 
                    + (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement)));
}

extern const VlUnpacked<CData/*1:0*/, 1024> VPingPongBufferWithWriteOnlyMaster__ConstPool__TABLE_he8bf3f0c_0;

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___combo__TOP__PingPongBufferWithWriteOnlyMaster__13(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___combo__TOP__PingPongBufferWithWriteOnlyMaster__13\n"); );
    // Init
    SData/*9:0*/ __Vtableidx2;
    // Body
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload 
        = vlSymsp->TOP.streamIn_payload;
    if ((1U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload 
                = vlSymsp->TOP.streamIn_payload;
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid = 0U;
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid 
                = vlSymsp->TOP.streamIn_valid;
        } else {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid = 0U;
        }
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload 
            = vlSymsp->TOP.streamIn_payload;
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload 
                = vlSymsp->TOP.streamIn_payload;
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid = 0U;
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid 
                = vlSymsp->TOP.streamIn_valid;
        } else {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid = 0U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload 
                = vlSymsp->TOP.streamIn_payload;
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid = 0U;
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid 
                = vlSymsp->TOP.streamIn_valid;
        } else {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid = 0U;
        }
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload 
            = vlSymsp->TOP.streamIn_payload;
        if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153) {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload 
                = vlSymsp->TOP.streamIn_payload;
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid = 0U;
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid 
                = vlSymsp->TOP.streamIn_valid;
        } else {
            vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid = 0U;
        }
    } else {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload 
            = vlSymsp->TOP.streamIn_payload;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid = 0U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_willIncrement = 0U;
    if (((IData)(vlSymsp->TOP.streamIn_valid) & (IData)(vlSelf->__PVT__pingPongBuffer_1_s_axis_ready))) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_willIncrement = 1U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow 
            = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_value) 
               == (0xffU & ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferDepthReg) 
                            - (IData)(1U))));
    } else {
        vlSelf->__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow = 0U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)));
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)));
    vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_willClear = 0U;
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_willClear = 1U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l166 
            = vlSelf->__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow;
    } else {
        vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l166 = 0U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1 = 1U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1 = 1U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_valueNext 
        = (0xffU & ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_value) 
                    + (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_willIncrement)));
    if (vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_willClear) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_valueNext = 0U;
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart) 
                     << 9U) | ((0x100U & ((~ (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA)) 
                                          << 8U)) | 
                               (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA) 
                                 << 7U) | (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l166) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146) 
                                                        << 2U) 
                                                       | (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)))))))));
    vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext 
        = VPingPongBufferWithWriteOnlyMaster__ConstPool__TABLE_he8bf3f0c_0
        [__Vtableidx2];
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
                    + (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement)));
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
                    + (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement)));
    vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveResetSignal = 0U;
    if ((1U != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
            if (vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l166) {
                vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveResetSignal = 1U;
            }
        }
    }
    if (((1U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
         & (1U != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveResetSignal = 1U;
    }
    if (((3U == (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
         & (3U != (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveResetSignal = 1U;
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT___zz_1 = (1U 
                                                   & ((~ (IData)(vlSymsp->TOP.aresetn)) 
                                                      | (IData)(vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveResetSignal)));
}
