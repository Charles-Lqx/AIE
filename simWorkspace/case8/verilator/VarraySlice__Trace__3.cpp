// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_24(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_24\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3434);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushing));
        tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popping));
        tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popping))));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushing));
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popping));
        tracep->chgBit(oldp+10,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popping))));
        tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushing));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popping));
        tracep->chgBit(oldp+17,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popping))));
        tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushing));
        tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popping));
        tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popping))));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushing));
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popping));
        tracep->chgBit(oldp+31,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popping))));
    }
    tracep->chgBit(oldp+32,(vlSelf->inputStreamArrayData_valid));
    tracep->chgBit(oldp+33,(vlSelf->inputStreamArrayData_ready));
    tracep->chgIData(oldp+34,(vlSelf->inputStreamArrayData_payload),32);
    tracep->chgCData(oldp+35,(vlSelf->inputFeatureMapWidth),7);
    tracep->chgCData(oldp+36,(vlSelf->inputFeatureMapHeight),7);
    tracep->chgCData(oldp+37,(vlSelf->outputFeatureMapHeight),4);
    tracep->chgCData(oldp+38,(vlSelf->outputFeatureMapWidth),4);
    tracep->chgBit(oldp+39,(vlSelf->outputStreamArrayData_0_valid));
    tracep->chgBit(oldp+40,(vlSelf->outputStreamArrayData_0_ready));
    tracep->chgIData(oldp+41,(vlSelf->outputStreamArrayData_0_payload),32);
    tracep->chgBit(oldp+42,(vlSelf->outputStreamArrayData_1_valid));
    tracep->chgBit(oldp+43,(vlSelf->outputStreamArrayData_1_ready));
    tracep->chgIData(oldp+44,(vlSelf->outputStreamArrayData_1_payload),32);
    tracep->chgBit(oldp+45,(vlSelf->outputStreamArrayData_2_valid));
    tracep->chgBit(oldp+46,(vlSelf->outputStreamArrayData_2_ready));
    tracep->chgIData(oldp+47,(vlSelf->outputStreamArrayData_2_payload),32);
    tracep->chgBit(oldp+48,(vlSelf->outputStreamArrayData_3_valid));
    tracep->chgBit(oldp+49,(vlSelf->outputStreamArrayData_3_ready));
    tracep->chgIData(oldp+50,(vlSelf->outputStreamArrayData_3_payload),32);
    tracep->chgBit(oldp+51,(vlSelf->outputStreamArrayData_4_valid));
    tracep->chgBit(oldp+52,(vlSelf->outputStreamArrayData_4_ready));
    tracep->chgIData(oldp+53,(vlSelf->outputStreamArrayData_4_payload),32);
    tracep->chgBit(oldp+54,(vlSelf->outputStreamArrayData_5_valid));
    tracep->chgBit(oldp+55,(vlSelf->outputStreamArrayData_5_ready));
    tracep->chgIData(oldp+56,(vlSelf->outputStreamArrayData_5_payload),32);
    tracep->chgBit(oldp+57,(vlSelf->outputStreamArrayData_6_valid));
    tracep->chgBit(oldp+58,(vlSelf->outputStreamArrayData_6_ready));
    tracep->chgIData(oldp+59,(vlSelf->outputStreamArrayData_6_payload),32);
    tracep->chgBit(oldp+60,(vlSelf->outputStreamArrayData_7_valid));
    tracep->chgBit(oldp+61,(vlSelf->outputStreamArrayData_7_ready));
    tracep->chgIData(oldp+62,(vlSelf->outputStreamArrayData_7_payload),32);
    tracep->chgBit(oldp+63,(vlSelf->clk));
    tracep->chgBit(oldp+64,(vlSelf->resetn));
    tracep->chgBit(oldp+65,(((IData)(vlSelf->inputStreamArrayData_valid) 
                             & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready))));
    tracep->chgBit(oldp+66,((((IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l208) 
                              == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__hReg) 
                                           - (IData)(1U)))) 
                             & ((IData)(vlSelf->inputStreamArrayData_valid) 
                                & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready)))));
    tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.debug_0));
    tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.debug_1));
    tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.debug_2));
    tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.debug_3));
    tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.debug_4));
    tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.debug_5));
    tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.debug_6));
    tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.debug_7));
    tracep->chgCData(oldp+75,(vlSymsp->TOP__arraySlice.realValue_0),8);
    tracep->chgBit(oldp+76,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+77,(vlSymsp->TOP__arraySlice.realValue_0_1),8);
    tracep->chgBit(oldp+78,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_1) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+79,(vlSymsp->TOP__arraySlice.realValue_0_2),8);
    tracep->chgBit(oldp+80,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_2) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+81,(vlSymsp->TOP__arraySlice.realValue_0_3),8);
    tracep->chgBit(oldp+82,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_3) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.realValue_0_4),8);
    tracep->chgBit(oldp+84,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_4) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+85,(vlSymsp->TOP__arraySlice.realValue_0_5),8);
    tracep->chgBit(oldp+86,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_5) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+87,(vlSymsp->TOP__arraySlice.realValue_0_6),8);
    tracep->chgBit(oldp+88,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_6) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+89,(vlSymsp->TOP__arraySlice.realValue_0_7),8);
    tracep->chgBit(oldp+90,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_7) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+91,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_0_ready))));
    tracep->chgCData(oldp+92,(vlSymsp->TOP__arraySlice.realValue1_0),8);
    tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.debug_0_1));
    tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.debug_1_1));
    tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.debug_2_1));
    tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.debug_3_1));
    tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.debug_4_1));
    tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.debug_5_1));
    tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.debug_6_1));
    tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.debug_7_1));
    tracep->chgCData(oldp+101,(vlSymsp->TOP__arraySlice.realValue_0_8),8);
    tracep->chgBit(oldp+102,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                              (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_8) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+103,(vlSymsp->TOP__arraySlice.realValue_0_9),8);
    tracep->chgBit(oldp+104,(((0x7fU & ((IData)(7U) 
                                        * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                              <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_9) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+105,(vlSymsp->TOP__arraySlice.realValue_0_10),8);
    tracep->chgBit(oldp+106,(((0x7fU & ((IData)(6U) 
                                        * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                              <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_10) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+107,(vlSymsp->TOP__arraySlice.realValue_0_11),8);
    tracep->chgBit(oldp+108,(((0x7fU & ((IData)(5U) 
                                        * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                              <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_11) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+109,(vlSymsp->TOP__arraySlice.realValue_0_12),8);
    tracep->chgBit(oldp+110,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 2U)) <= 
                              (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_12) 
                                         - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                            + (0x7fU 
                                               & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                  << 2U)))) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+111,(vlSymsp->TOP__arraySlice.realValue_0_13),8);
    tracep->chgBit(oldp+112,(((0x3fU & ((IData)(3U) 
                                        * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                              <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_13) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+113,(vlSymsp->TOP__arraySlice.realValue_0_14),8);
    tracep->chgBit(oldp+114,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 1U)) <= 
                              (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_14) 
                                         - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                            + (0x7fU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+115,(vlSymsp->TOP__arraySlice.realValue_0_15),8);
    tracep->chgBit(oldp+116,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                              <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_15) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_25(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_25\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3551);
    // Body
    tracep->chgBit(oldp+0,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_1) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_1)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_1)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_1)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_1)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_1)))))));
    tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.realValue1_0_1),8);
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_0_2));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_1_2));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_2_2));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_3_2));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_4_2));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_5_2));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_6_2));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_7_2));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_16),8);
    tracep->chgBit(oldp+11,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_16) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.realValue_0_17),8);
    tracep->chgBit(oldp+13,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_17) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.realValue_0_18),8);
    tracep->chgBit(oldp+15,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_18) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_19),8);
    tracep->chgBit(oldp+17,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_19) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_20),8);
    tracep->chgBit(oldp+19,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_20) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_21),8);
    tracep->chgBit(oldp+21,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_21) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_22),8);
    tracep->chgBit(oldp+23,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_22) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_23),8);
    tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_23) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+26,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_2) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_2)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_2)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_2)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_2)))))));
    tracep->chgBit(oldp+27,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_0_ready)))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue1_0_2),8);
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_0_3));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_1_3));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_2_3));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_3_3));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_4_3));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_5_3));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_6_3));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_7_3));
    tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_24),8);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_24) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_25),8);
    tracep->chgBit(oldp+40,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_25) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_26),8);
    tracep->chgBit(oldp+42,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_26) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_27),8);
    tracep->chgBit(oldp+44,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_27) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_28),8);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_28) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_29),8);
    tracep->chgBit(oldp+48,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_29) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_30),8);
    tracep->chgBit(oldp+50,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_30) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_31),8);
    tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_31) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+53,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_3) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_3)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_3)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_3)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_3)))))));
    tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_1_ready))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue1_0_3),8);
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_0_4));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_1_4));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_2_4));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_3_4));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_4_4));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_5_4));
    tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.debug_6_4));
    tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.debug_7_4));
    tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_32),8);
    tracep->chgBit(oldp+65,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_32) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_33),8);
    tracep->chgBit(oldp+67,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_33) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_26(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_26\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3619);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_34),8);
    tracep->chgBit(oldp+1,(((0x7fU & ((IData)(6U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_34) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                             + (0x3fU 
                                                & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                   << 1U)))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_35),8);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(5U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_35) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                             + (0x3fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_36),8);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_36) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_37),8);
    tracep->chgBit(oldp+7,(((0x3fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_37) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                             + (0x7fU 
                                                & ((IData)(5U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.realValue_0_38),8);
    tracep->chgBit(oldp+9,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_38) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_39),8);
    tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_39) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+12,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_4) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_4)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_4)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_4)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_4)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_4)))))));
    tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.realValue1_0_4),8);
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_0_5));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_1_5));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_2_5));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_3_5));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_4_5));
    tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.debug_5_5));
    tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.debug_6_5));
    tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.debug_7_5));
    tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_40),8);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_40) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_41),8);
    tracep->chgBit(oldp+25,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_41) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_42),8);
    tracep->chgBit(oldp+27,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_42) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_43),8);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_43) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_44),8);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_44) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_45),8);
    tracep->chgBit(oldp+33,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_45) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.realValue_0_46),8);
    tracep->chgBit(oldp+35,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_46) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.realValue_0_47),8);
    tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_47) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+38,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_5) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_5)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_5)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_5)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_5)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_5)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_5)))))));
    tracep->chgBit(oldp+39,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_1_ready)))));
    tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.realValue1_0_5),8);
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_0_6));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_1_6));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_2_6));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_3_6));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_4_6));
    tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.debug_5_6));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.debug_6_6));
    tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.debug_7_6));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_48),8);
    tracep->chgBit(oldp+50,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_48) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_49),8);
    tracep->chgBit(oldp+52,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_49) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_50),8);
    tracep->chgBit(oldp+54,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_50) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_51),8);
    tracep->chgBit(oldp+56,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_51) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.realValue_0_52),8);
    tracep->chgBit(oldp+58,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_52) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.realValue_0_53),8);
    tracep->chgBit(oldp+60,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_53) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_27(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_27\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3680);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_54),8);
    tracep->chgBit(oldp+1,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_54) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_55),8);
    tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_55) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                             + (0x7fU 
                                                & ((IData)(7U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+4,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_6) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_6)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_6)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_6)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_6)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_6)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_6)))))));
    tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid) 
                            & (IData)(vlSelf->outputStreamArrayData_2_ready))));
    tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.realValue1_0_6),8);
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_0_7));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_1_7));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_2_7));
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_3_7));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_4_7));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_5_7));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_6_7));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_7_7));
    tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_56),8);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_56) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_57),8);
    tracep->chgBit(oldp+18,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_57) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_58),8);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_58) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_59),8);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_59) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_60),8);
    tracep->chgBit(oldp+24,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_60) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_61),8);
    tracep->chgBit(oldp+26,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_61) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.realValue_0_62),8);
    tracep->chgBit(oldp+28,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_62) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.realValue_0_63),8);
    tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_63) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+31,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_7) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_7)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_7)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_7)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_7)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_7)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_7)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_7)))))));
    tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.realValue1_0_7),8);
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_0_8));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_1_8));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_2_8));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_3_8));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_4_8));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_5_8));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_6_8));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_7_8));
    tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_64),8);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_64) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_65),8);
    tracep->chgBit(oldp+44,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_65) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_66),8);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_66) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_67),8);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_67) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_68),8);
    tracep->chgBit(oldp+50,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_68) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_69),8);
    tracep->chgBit(oldp+52,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_69) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_70),8);
    tracep->chgBit(oldp+54,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_70) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_71),8);
    tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_71) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+57,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_8) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_8)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_8)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_8)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_8)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_8)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_8)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_8)))))));
    tracep->chgBit(oldp+58,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_2_ready)))));
}

void VarraySlice___024root__trace_chg_sub_28(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_28\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3739);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue1_0_8),8);
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_0_9));
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_1_9));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_2_9));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_3_9));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_4_9));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_5_9));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_6_9));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_7_9));
    tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_72),8);
    tracep->chgBit(oldp+10,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_72) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_73),8);
    tracep->chgBit(oldp+12,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_73) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_74),8);
    tracep->chgBit(oldp+14,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_74) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_75),8);
    tracep->chgBit(oldp+16,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_75) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_76),8);
    tracep->chgBit(oldp+18,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_76) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_77),8);
    tracep->chgBit(oldp+20,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_77) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_78),8);
    tracep->chgBit(oldp+22,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_78) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_79),8);
    tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_79) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+25,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_9) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_9)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_9)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_9)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_9)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_9)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_9)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_9)))))));
    tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_3_ready))));
    tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.realValue1_0_9),8);
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_0_10));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_1_10));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_2_10));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_3_10));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_4_10));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_5_10));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_6_10));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_7_10));
    tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.realValue_0_80),8);
    tracep->chgBit(oldp+37,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_80) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.realValue_0_81),8);
    tracep->chgBit(oldp+39,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_81) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.realValue_0_82),8);
    tracep->chgBit(oldp+41,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_82) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+42,(vlSymsp->TOP__arraySlice.realValue_0_83),8);
    tracep->chgBit(oldp+43,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_83) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_84),8);
    tracep->chgBit(oldp+45,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_84) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_85),8);
    tracep->chgBit(oldp+47,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_85) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_86),8);
    tracep->chgBit(oldp+49,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_86) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_87),8);
    tracep->chgBit(oldp+51,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_87) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+52,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_10) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_10)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_10)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_10)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_10)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_10)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_10)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_10)))))));
    tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.realValue1_0_10),8);
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_0_11));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_1_11));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_2_11));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_3_11));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_4_11));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_5_11));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_6_11));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_7_11));
    tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.realValue_0_88),8);
    tracep->chgBit(oldp+63,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_88) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_89),8);
    tracep->chgBit(oldp+65,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_89) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_90),8);
    tracep->chgBit(oldp+67,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_90) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.realValue_0_91),8);
    tracep->chgBit(oldp+69,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_91) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_29(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_29\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3809);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_92),8);
    tracep->chgBit(oldp+1,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_92) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_93),8);
    tracep->chgBit(oldp+3,(((0x3fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_93) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                             + (0x7fU 
                                                & ((IData)(5U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_94),8);
    tracep->chgBit(oldp+5,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_94) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_95),8);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_95) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                             + (0x7fU 
                                                & ((IData)(7U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+8,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_11) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_11)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_11)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_11)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_11)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_11)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_11)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_11)))))));
    tracep->chgBit(oldp+9,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                            (0x1fffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                            & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid) 
                               & (IData)(vlSelf->outputStreamArrayData_3_ready)))));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue1_0_11),8);
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_0_12));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_1_12));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_2_12));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_3_12));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_4_12));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_5_12));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_6_12));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_7_12));
    tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_96),8);
    tracep->chgBit(oldp+20,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_96) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_97),8);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_97) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_98),8);
    tracep->chgBit(oldp+24,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_98) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_99),8);
    tracep->chgBit(oldp+26,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_99) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.realValue_0_100),8);
    tracep->chgBit(oldp+28,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_100) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.realValue_0_101),8);
    tracep->chgBit(oldp+30,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_101) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+31,(vlSymsp->TOP__arraySlice.realValue_0_102),8);
    tracep->chgBit(oldp+32,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_102) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+33,(vlSymsp->TOP__arraySlice.realValue_0_103),8);
    tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_103) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+35,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_12) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_12)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_12)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_12)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_12)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_12)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_12)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_12)))))));
    tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_4_ready))));
    tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.realValue1_0_12),8);
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_0_13));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_1_13));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_2_13));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_3_13));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_4_13));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_5_13));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_6_13));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_7_13));
    tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_104),8);
    tracep->chgBit(oldp+47,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_104) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_105),8);
    tracep->chgBit(oldp+49,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_105) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_106),8);
    tracep->chgBit(oldp+51,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_106) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_107),8);
    tracep->chgBit(oldp+53,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_107) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_108),8);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_108) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_109),8);
    tracep->chgBit(oldp+57,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_109) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_110),8);
    tracep->chgBit(oldp+59,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_110) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+60,(vlSymsp->TOP__arraySlice.realValue_0_111),8);
    tracep->chgBit(oldp+61,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_111) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_30(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_30\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3871);
    // Body
    tracep->chgBit(oldp+0,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_13) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_13)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_13)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_13)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_13)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_13)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_13)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_13)))))));
    tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.realValue1_0_13),8);
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_0_14));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_1_14));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_2_14));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_3_14));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_4_14));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_5_14));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_6_14));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_7_14));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_112),8);
    tracep->chgBit(oldp+11,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_112) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.realValue_0_113),8);
    tracep->chgBit(oldp+13,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_113) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.realValue_0_114),8);
    tracep->chgBit(oldp+15,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_114) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_115),8);
    tracep->chgBit(oldp+17,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_115) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_116),8);
    tracep->chgBit(oldp+19,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_116) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_117),8);
    tracep->chgBit(oldp+21,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_117) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_118),8);
    tracep->chgBit(oldp+23,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_118) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_119),8);
    tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_119) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+26,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_14) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_14)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_14)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_14)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_14)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_14)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_14)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_14)))))));
    tracep->chgBit(oldp+27,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_4_ready)))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue1_0_14),8);
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_0_15));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_1_15));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_2_15));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_3_15));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_4_15));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_5_15));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_6_15));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_7_15));
    tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_120),8);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_120) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_121),8);
    tracep->chgBit(oldp+40,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_121) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_122),8);
    tracep->chgBit(oldp+42,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_122) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_123),8);
    tracep->chgBit(oldp+44,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_123) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_124),8);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_124) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_125),8);
    tracep->chgBit(oldp+48,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_125) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_126),8);
    tracep->chgBit(oldp+50,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_126) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_127),8);
    tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_127) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+53,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_15) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_15)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_15)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_15)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_15)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_15)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_15)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_15)))))));
    tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_5_ready))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue1_0_15),8);
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_0_16));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_1_16));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_2_16));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_3_16));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_4_16));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_5_16));
    tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.debug_6_16));
    tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.debug_7_16));
    tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_128),8);
    tracep->chgBit(oldp+65,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_128) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_129),8);
    tracep->chgBit(oldp+67,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_129) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_31(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_31\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3939);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_130),8);
    tracep->chgBit(oldp+1,(((0x7fU & ((IData)(6U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_130) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                             + (0x3fU 
                                                & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                   << 1U)))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_131),8);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(5U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_131) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                             + (0x3fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_132),8);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_132) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_133),8);
    tracep->chgBit(oldp+7,(((0x3fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_133) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                             + (0x7fU 
                                                & ((IData)(5U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.realValue_0_134),8);
    tracep->chgBit(oldp+9,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_134) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_135),8);
    tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_135) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+12,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_16) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_16)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_16)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_16)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_16)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_16)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_16)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_16)))))));
    tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.realValue1_0_16),8);
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_0_17));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_1_17));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_2_17));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_3_17));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_4_17));
    tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.debug_5_17));
    tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.debug_6_17));
    tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.debug_7_17));
    tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_136),8);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_136) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_137),8);
    tracep->chgBit(oldp+25,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_137) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_138),8);
    tracep->chgBit(oldp+27,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_138) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_139),8);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_139) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_140),8);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_140) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_141),8);
    tracep->chgBit(oldp+33,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_141) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.realValue_0_142),8);
    tracep->chgBit(oldp+35,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_142) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.realValue_0_143),8);
    tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_143) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+38,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_17) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_17)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_17)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_17)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_17)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_17)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_17)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_17)))))));
    tracep->chgBit(oldp+39,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_5_ready)))));
    tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.realValue1_0_17),8);
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_0_18));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_1_18));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_2_18));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_3_18));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_4_18));
    tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.debug_5_18));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.debug_6_18));
    tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.debug_7_18));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_144),8);
    tracep->chgBit(oldp+50,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_144) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_145),8);
    tracep->chgBit(oldp+52,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_145) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_146),8);
    tracep->chgBit(oldp+54,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_146) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_147),8);
    tracep->chgBit(oldp+56,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_147) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.realValue_0_148),8);
    tracep->chgBit(oldp+58,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_148) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.realValue_0_149),8);
    tracep->chgBit(oldp+60,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_149) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}
