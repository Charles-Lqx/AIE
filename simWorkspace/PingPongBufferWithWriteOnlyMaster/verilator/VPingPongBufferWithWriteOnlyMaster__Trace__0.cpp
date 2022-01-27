// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"


void VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_sub_0(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep);
void VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_sub_1(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep);

void VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_top_0\n"); );
    // Init
    VPingPongBufferWithWriteOnlyMaster___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPingPongBufferWithWriteOnlyMaster___024root*>(voidSelf);
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
    VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_sub_1((&vlSymsp->TOP), tracep);
}

void VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_sub_0(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_isBurstComplete));
        tracep->chgIData(oldp+1,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+2,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0),32);
        tracep->chgBit(oldp+3,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__startReceiveSignal_regNext));
        tracep->chgIData(oldp+4,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rData),32);
        tracep->chgIData(oldp+5,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rData),32);
        tracep->chgIData(oldp+6,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT___zz_logic_ram_port0),32);
        tracep->chgBit(oldp+7,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast_regNext));
        tracep->chgIData(oldp+8,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_rData),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+9,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlAwValidSignal));
        tracep->chgIData(oldp+11,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_finalAddressReg),32);
        tracep->chgCData(oldp+12,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__burstLengthReg) 
                                            - (IData)(1U)))),8);
        tracep->chgBit(oldp+13,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast));
        tracep->chgBit(oldp+14,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlBReady));
        tracep->chgBit(oldp+15,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_valid));
        tracep->chgIData(oldp+16,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_payload),32);
        tracep->chgBit(oldp+17,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputStartSignalReg));
        tracep->chgCData(oldp+18,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferDepthReg),8);
        tracep->chgBit(oldp+19,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))));
        tracep->chgBit(oldp+20,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid));
        tracep->chgSData(oldp+21,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy) 
                                     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch)) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value))))),9);
        tracep->chgSData(oldp+22,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch)) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))))),9);
        tracep->chgBit(oldp+23,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))));
        tracep->chgBit(oldp+24,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid));
        tracep->chgSData(oldp+25,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy) 
                                     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch)) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value))))),9);
        tracep->chgSData(oldp+26,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch)) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))))),9);
        tracep->chgCData(oldp+27,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_value),8);
        tracep->chgBit(oldp+28,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_value))));
        tracep->chgCData(oldp+29,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_value),8);
        tracep->chgBit(oldp+30,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_value))));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isWriteBufferA));
        tracep->chgBit(oldp+32,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isReadBufferA));
        tracep->chgBit(oldp+33,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isAfterResetState));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rValid));
        tracep->chgBit(oldp+35,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rValid)))));
        tracep->chgBit(oldp+36,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rValid));
        tracep->chgBit(oldp+37,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rValid)))));
        tracep->chgBit(oldp+38,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart));
        tracep->chgCData(oldp+39,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg),2);
        tracep->chgBit(oldp+40,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__canReadData));
        tracep->chgBit(oldp+41,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__readyForNextTransfer));
        tracep->chgBit(oldp+42,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l226));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l231));
        tracep->chgBit(oldp+44,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isReadBufferA)))));
        tracep->chgBit(oldp+45,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isWriteBufferA)))));
        tracep->chgQData(oldp+46,(((2U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
                                    ? ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
                                        ? 0x46554c4c20ULL
                                        : 0x48414c4620ULL)
                                    : ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
                                        ? 0x454d505459ULL
                                        : 0x424f4f5420ULL))),40);
        tracep->chgCData(oldp+48,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value),8);
        tracep->chgBit(oldp+49,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))));
        tracep->chgCData(oldp+50,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value),8);
        tracep->chgBit(oldp+51,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value))));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+53,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy));
        tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full));
        tracep->chgCData(oldp+56,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)))),8);
        tracep->chgCData(oldp+57,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value),8);
        tracep->chgBit(oldp+58,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))));
        tracep->chgCData(oldp+59,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value),8);
        tracep->chgBit(oldp+60,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value))));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+62,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy));
        tracep->chgBit(oldp+63,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full));
        tracep->chgCData(oldp+65,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)))),8);
        tracep->chgBit(oldp+66,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_full)))));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_valid));
        tracep->chgSData(oldp+68,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_risingOccupancy) 
                                     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_ptrMatch)) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value))))),9);
        tracep->chgSData(oldp+69,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_ptrMatch)) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value))))),9);
        tracep->chgCData(oldp+70,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__burstLengthReg),8);
        tracep->chgBit(oldp+71,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_newBurst));
        tracep->chgBit(oldp+72,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_isRefreshAddr));
        tracep->chgIData(oldp+73,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__offsetAddressReg),32);
        tracep->chgBit(oldp+74,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_rValid));
        tracep->chgBit(oldp+75,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_rValid)))));
        tracep->chgCData(oldp+76,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value),8);
        tracep->chgBit(oldp+77,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value))));
        tracep->chgCData(oldp+78,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value),8);
        tracep->chgBit(oldp+79,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value))));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_risingOccupancy));
        tracep->chgBit(oldp+82,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+83,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_full));
        tracep->chgCData(oldp+84,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value)))),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgBit(oldp+85,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_value)) 
                                 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_willIncrement))));
        tracep->chgBit(oldp+86,(((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
                                 & (1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))));
        tracep->chgBit(oldp+87,(((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
                                 & (3U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))));
        tracep->chgBit(oldp+88,(((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
                                 & (1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))));
        tracep->chgBit(oldp+89,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+90,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+91,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_willIncrement))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+92,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_value)) 
                                 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_willIncrement))));
        tracep->chgBit(oldp+93,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_valid) 
                                 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready))));
        tracep->chgBit(oldp+94,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+95,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+96,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_push_valid) 
                                 & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_full)))));
        tracep->chgBit(oldp+97,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+98,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid));
        tracep->chgIData(oldp+99,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload),32);
        tracep->chgBit(oldp+100,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid));
        tracep->chgIData(oldp+101,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload),32);
        tracep->chgBit(oldp+102,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_willIncrement));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_willClear));
        tracep->chgCData(oldp+104,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_valueNext),8);
        tracep->chgBit(oldp+105,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__startReceiveResetSignal));
        tracep->chgCData(oldp+107,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext),2);
        tracep->chgBit(oldp+108,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l166));
        tracep->chgQData(oldp+109,(((2U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext))
                                     ? ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext))
                                         ? 0x46554c4c20ULL
                                         : 0x48414c4620ULL)
                                     : ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext))
                                         ? 0x454d505459ULL
                                         : 0x424f4f5420ULL))),40);
        tracep->chgBit(oldp+111,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+112,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext),8);
        tracep->chgBit(oldp+113,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing));
        tracep->chgBit(oldp+114,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+115,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext),8);
        tracep->chgBit(oldp+116,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing));
        tracep->chgBit(oldp+117,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_ready));
        tracep->chgBit(oldp+118,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l131));
        tracep->chgBit(oldp+119,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_full_aw_fire));
        tracep->chgBit(oldp+120,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+121,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_valueNext),8);
        tracep->chgBit(oldp+122,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popping));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+123,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wvalid));
        tracep->chgIData(oldp+124,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wdata),32);
        tracep->chgBit(oldp+125,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready));
        tracep->chgBit(oldp+126,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready));
        tracep->chgBit(oldp+128,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_willIncrement));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_willClear));
        tracep->chgCData(oldp+130,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_valueNext),8);
        tracep->chgBit(oldp+131,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow));
        tracep->chgBit(oldp+132,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pipedBufferAPop_ready));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready));
        tracep->chgBit(oldp+134,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+135,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext),8);
        tracep->chgBit(oldp+136,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping));
        tracep->chgBit(oldp+137,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+138,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext),8);
        tracep->chgBit(oldp+139,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping));
        tracep->chgBit(oldp+140,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_push_valid));
        tracep->chgIData(oldp+141,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_push_payload),32);
        tracep->chgBit(oldp+142,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l105));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l159));
        tracep->chgBit(oldp+144,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l164));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l187));
        tracep->chgBit(oldp+146,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+147,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_valueNext),8);
        tracep->chgBit(oldp+148,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushing));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        tracep->chgBit(oldp+149,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_s_axis_ready));
    }
}

void VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_sub_1(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_sub_1\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 151);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153));
    }
    tracep->chgBit(oldp+2,(vlSelf->streamIn_valid));
    tracep->chgBit(oldp+3,(vlSelf->streamIn_ready));
    tracep->chgIData(oldp+4,(vlSelf->streamIn_payload),32);
    tracep->chgBit(oldp+5,(vlSelf->startIn));
    tracep->chgCData(oldp+6,(vlSelf->bufferDepthIn),8);
    tracep->chgBit(oldp+7,(vlSelf->interruptOut));
    tracep->chgIData(oldp+8,(vlSelf->startAddr),32);
    tracep->chgIData(oldp+9,(vlSelf->offset),32);
    tracep->chgCData(oldp+10,(vlSelf->pathNumb),8);
    tracep->chgBit(oldp+11,(vlSelf->full_aw_valid));
    tracep->chgBit(oldp+12,(vlSelf->full_aw_ready));
    tracep->chgIData(oldp+13,(vlSelf->full_aw_payload_addr),32);
    tracep->chgCData(oldp+14,(vlSelf->full_aw_payload_region),4);
    tracep->chgCData(oldp+15,(vlSelf->full_aw_payload_len),8);
    tracep->chgCData(oldp+16,(vlSelf->full_aw_payload_size),3);
    tracep->chgCData(oldp+17,(vlSelf->full_aw_payload_burst),2);
    tracep->chgCData(oldp+18,(vlSelf->full_aw_payload_cache),4);
    tracep->chgCData(oldp+19,(vlSelf->full_aw_payload_qos),4);
    tracep->chgCData(oldp+20,(vlSelf->full_aw_payload_prot),3);
    tracep->chgBit(oldp+21,(vlSelf->full_w_valid));
    tracep->chgBit(oldp+22,(vlSelf->full_w_ready));
    tracep->chgIData(oldp+23,(vlSelf->full_w_payload_data),32);
    tracep->chgCData(oldp+24,(vlSelf->full_w_payload_strb),4);
    tracep->chgBit(oldp+25,(vlSelf->full_w_payload_last));
    tracep->chgBit(oldp+26,(vlSelf->full_b_valid));
    tracep->chgBit(oldp+27,(vlSelf->full_b_ready));
    tracep->chgCData(oldp+28,(vlSelf->full_b_payload_resp),2);
    tracep->chgBit(oldp+29,(vlSelf->aresetn));
    tracep->chgBit(oldp+30,(vlSelf->aclk));
    tracep->chgBit(oldp+31,(((IData)(vlSelf->streamIn_valid) 
                             & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_s_axis_ready))));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__startReceiveSignal));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__realStartSignal));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
    tracep->chgBit(oldp+35,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) 
                             != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping))));
    tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) 
                             != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping))));
    tracep->chgBit(oldp+37,(((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast)) 
                             & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast_regNext))));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__startSendSignal));
    tracep->chgBit(oldp+39,(((IData)(vlSelf->full_b_valid) 
                             & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlBReady))));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.axi4Interface_isInitialIterate));
    tracep->chgBit(oldp+41,((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT___zz_axi4Interface_isInitialIterate_2) 
                              == (IData)(vlSelf->pathNumb)) 
                             & ((IData)(vlSelf->full_b_valid) 
                                & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlBReady)))));
    tracep->chgBit(oldp+42,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wvalid) 
                             & (IData)(vlSelf->full_w_ready))));
    tracep->chgBit(oldp+43,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushing) 
                             != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popping))));
}

void VPingPongBufferWithWriteOnlyMaster___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_cleanup\n"); );
    // Init
    VPingPongBufferWithWriteOnlyMaster___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPingPongBufferWithWriteOnlyMaster___024root*>(voidSelf);
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
