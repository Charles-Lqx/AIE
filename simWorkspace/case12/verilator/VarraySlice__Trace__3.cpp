// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_25(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_25\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3259);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_82),8);
    tracep->chgBit(oldp+1,(((0x7fU & ((IData)(6U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_82) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                             + (0x3fU 
                                                & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                   << 1U)))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_83),8);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(5U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_83) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                             + (0x3fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_84),8);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_84) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_85),8);
    tracep->chgBit(oldp+7,(((0x3fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_85) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                             + (0x7fU 
                                                & ((IData)(5U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.realValue_0_86),8);
    tracep->chgBit(oldp+9,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_86) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_87),8);
    tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_87) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_10) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_10)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_10)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_10)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_10)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_10)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_10)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_10)))))));
    tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.realValue1_0_10),8);
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_0_11));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_1_11));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_2_11));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_3_11));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_4_11));
    tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.debug_5_11));
    tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.debug_6_11));
    tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.debug_7_11));
    tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_88),8);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_88) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_89),8);
    tracep->chgBit(oldp+25,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_89) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_90),8);
    tracep->chgBit(oldp+27,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_90) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_91),8);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_91) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_92),8);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_92) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_93),8);
    tracep->chgBit(oldp+33,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_93) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.realValue_0_94),8);
    tracep->chgBit(oldp+35,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_94) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.realValue_0_95),8);
    tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_95) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_11) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_11)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_11)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_11)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_11)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_11)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_11)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_11)))))));
    tracep->chgBit(oldp+39,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_3_ready)))));
    tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.realValue1_0_11),8);
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_0_12));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_1_12));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_2_12));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_3_12));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_4_12));
    tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.debug_5_12));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.debug_6_12));
    tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.debug_7_12));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_96),8);
    tracep->chgBit(oldp+50,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_96) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_97),8);
    tracep->chgBit(oldp+52,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_97) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_98),8);
    tracep->chgBit(oldp+54,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_98) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_99),8);
    tracep->chgBit(oldp+56,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_99) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.realValue_0_100),8);
    tracep->chgBit(oldp+58,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_100) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.realValue_0_101),8);
    tracep->chgBit(oldp+60,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_101) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_26(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_26\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3320);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_102),8);
    tracep->chgBit(oldp+1,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_102) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_103),8);
    tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_103) 
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
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_12) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_12)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_12)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_12)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_12)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_12)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_12)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_12)))))));
    tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid) 
                            & (IData)(vlSelf->outputStreamArrayData_4_ready))));
    tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.realValue1_0_12),8);
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_0_13));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_1_13));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_2_13));
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_3_13));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_4_13));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_5_13));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_6_13));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_7_13));
    tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_104),8);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_104) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_105),8);
    tracep->chgBit(oldp+18,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_105) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_106),8);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_106) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_107),8);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_107) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_108),8);
    tracep->chgBit(oldp+24,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_108) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_109),8);
    tracep->chgBit(oldp+26,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_109) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.realValue_0_110),8);
    tracep->chgBit(oldp+28,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_110) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.realValue_0_111),8);
    tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_111) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_13) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_13)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_13)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_13)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_13)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_13)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_13)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_13)))))));
    tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.realValue1_0_13),8);
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_0_14));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_1_14));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_2_14));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_3_14));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_4_14));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_5_14));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_6_14));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_7_14));
    tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_112),8);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_112) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_113),8);
    tracep->chgBit(oldp+44,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_113) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_114),8);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_114) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_115),8);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_115) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_116),8);
    tracep->chgBit(oldp+50,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_116) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_117),8);
    tracep->chgBit(oldp+52,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_117) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_118),8);
    tracep->chgBit(oldp+54,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_118) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_119),8);
    tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_119) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_14) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_14)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_14)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_14)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_14)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_14)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_14)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_14)))))));
    tracep->chgBit(oldp+58,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_4_ready)))));
}

void VarraySlice___024root__trace_chg_sub_27(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_27\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3379);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue1_0_14),8);
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_0_15));
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_1_15));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_2_15));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_3_15));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_4_15));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_5_15));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_6_15));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_7_15));
    tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_120),8);
    tracep->chgBit(oldp+10,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_120) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_121),8);
    tracep->chgBit(oldp+12,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_121) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_122),8);
    tracep->chgBit(oldp+14,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_122) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_123),8);
    tracep->chgBit(oldp+16,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_123) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_124),8);
    tracep->chgBit(oldp+18,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_124) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_125),8);
    tracep->chgBit(oldp+20,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_125) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_126),8);
    tracep->chgBit(oldp+22,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_126) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_127),8);
    tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_127) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_15) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_15)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_15)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_15)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_15)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_15)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_15)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_15)))))));
    tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_5_ready))));
    tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.realValue1_0_15),8);
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_0_16));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_1_16));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_2_16));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_3_16));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_4_16));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_5_16));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_6_16));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_7_16));
    tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.realValue_0_128),8);
    tracep->chgBit(oldp+37,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_128) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.realValue_0_129),8);
    tracep->chgBit(oldp+39,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_129) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.realValue_0_130),8);
    tracep->chgBit(oldp+41,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_130) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+42,(vlSymsp->TOP__arraySlice.realValue_0_131),8);
    tracep->chgBit(oldp+43,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_131) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_132),8);
    tracep->chgBit(oldp+45,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_132) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_133),8);
    tracep->chgBit(oldp+47,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_133) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_134),8);
    tracep->chgBit(oldp+49,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_134) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_135),8);
    tracep->chgBit(oldp+51,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_135) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_16) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_16)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_16)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_16)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_16)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_16)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_16)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_16)))))));
    tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.realValue1_0_16),8);
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_0_17));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_1_17));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_2_17));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_3_17));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_4_17));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_5_17));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_6_17));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_7_17));
    tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.realValue_0_136),8);
    tracep->chgBit(oldp+63,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_136) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_137),8);
    tracep->chgBit(oldp+65,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_137) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_138),8);
    tracep->chgBit(oldp+67,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_138) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.realValue_0_139),8);
    tracep->chgBit(oldp+69,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_139) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_28(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_28\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3449);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_140),8);
    tracep->chgBit(oldp+1,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_140) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_141),8);
    tracep->chgBit(oldp+3,(((0x3fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_141) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                             + (0x7fU 
                                                & ((IData)(5U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_142),8);
    tracep->chgBit(oldp+5,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_142) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_143),8);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_143) 
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
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_17) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_17)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_17)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_17)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_17)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_17)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_17)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_17)))))));
    tracep->chgBit(oldp+9,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                            (0x1fffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                            & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                               & (IData)(vlSelf->outputStreamArrayData_5_ready)))));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue1_0_17),8);
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_0_18));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_1_18));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_2_18));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_3_18));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_4_18));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_5_18));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_6_18));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_7_18));
    tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_144),8);
    tracep->chgBit(oldp+20,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_144) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_145),8);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_145) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_146),8);
    tracep->chgBit(oldp+24,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_146) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_147),8);
    tracep->chgBit(oldp+26,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_147) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.realValue_0_148),8);
    tracep->chgBit(oldp+28,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_148) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.realValue_0_149),8);
    tracep->chgBit(oldp+30,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_149) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+31,(vlSymsp->TOP__arraySlice.realValue_0_150),8);
    tracep->chgBit(oldp+32,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_150) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+33,(vlSymsp->TOP__arraySlice.realValue_0_151),8);
    tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_151) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_18) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_18)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_18)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_18)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_18)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_18)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_18)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_18)))))));
    tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_6_ready))));
    tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.realValue1_0_18),8);
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_0_19));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_1_19));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_2_19));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_3_19));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_4_19));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_5_19));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_6_19));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_7_19));
    tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_152),8);
    tracep->chgBit(oldp+47,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_152) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_153),8);
    tracep->chgBit(oldp+49,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_153) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_154),8);
    tracep->chgBit(oldp+51,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_154) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_155),8);
    tracep->chgBit(oldp+53,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_155) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_156),8);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_156) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_157),8);
    tracep->chgBit(oldp+57,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_157) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_158),8);
    tracep->chgBit(oldp+59,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_158) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+60,(vlSymsp->TOP__arraySlice.realValue_0_159),8);
    tracep->chgBit(oldp+61,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_159) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_29(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_29\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3511);
    // Body
    tracep->chgBit(oldp+0,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_19) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_19)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_19)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_19)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_19)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_19)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_19)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_19)))))));
    tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.realValue1_0_19),8);
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_0_20));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_1_20));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_2_20));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_3_20));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_4_20));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_5_20));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_6_20));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_7_20));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_160),8);
    tracep->chgBit(oldp+11,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_160) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.realValue_0_161),8);
    tracep->chgBit(oldp+13,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_161) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.realValue_0_162),8);
    tracep->chgBit(oldp+15,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_162) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_163),8);
    tracep->chgBit(oldp+17,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_163) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_164),8);
    tracep->chgBit(oldp+19,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_164) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_165),8);
    tracep->chgBit(oldp+21,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_165) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_166),8);
    tracep->chgBit(oldp+23,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_166) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_167),8);
    tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_167) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_20) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_20)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_20)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_20)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_20)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_20)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_20)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_20)))))));
    tracep->chgBit(oldp+27,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_6_ready)))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue1_0_20),8);
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_0_21));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_1_21));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_2_21));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_3_21));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_4_21));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_5_21));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_6_21));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_7_21));
    tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_168),8);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_168) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_169),8);
    tracep->chgBit(oldp+40,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_169) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_170),8);
    tracep->chgBit(oldp+42,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_170) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_171),8);
    tracep->chgBit(oldp+44,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_171) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_172),8);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_172) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_173),8);
    tracep->chgBit(oldp+48,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_173) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_174),8);
    tracep->chgBit(oldp+50,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_174) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_175),8);
    tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_175) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_21) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_21)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_21)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_21)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_21)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_21)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_21)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_21)))))));
    tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_7_ready))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue1_0_21),8);
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_0_22));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_1_22));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_2_22));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_3_22));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_4_22));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_5_22));
    tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.debug_6_22));
    tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.debug_7_22));
    tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_176),8);
    tracep->chgBit(oldp+65,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_176) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_177),8);
    tracep->chgBit(oldp+67,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_177) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_30(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_30\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3579);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_178),8);
    tracep->chgBit(oldp+1,(((0x7fU & ((IData)(6U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_178) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                             + (0x3fU 
                                                & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                   << 1U)))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_179),8);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(5U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_179) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                             + (0x3fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_180),8);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_180) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_181),8);
    tracep->chgBit(oldp+7,(((0x3fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_181) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                             + (0x7fU 
                                                & ((IData)(5U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.realValue_0_182),8);
    tracep->chgBit(oldp+9,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_182) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_183),8);
    tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_183) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_22) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_22)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_22)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_22)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_22)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_22)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_22)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_22)))))));
    tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.realValue1_0_22),8);
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_0_23));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_1_23));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_2_23));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_3_23));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_4_23));
    tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.debug_5_23));
    tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.debug_6_23));
    tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.debug_7_23));
    tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_184),8);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_184) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_185),8);
    tracep->chgBit(oldp+25,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_185) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_186),8);
    tracep->chgBit(oldp+27,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_186) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_187),8);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_187) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_188),8);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_188) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_189),8);
    tracep->chgBit(oldp+33,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_189) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.realValue_0_190),8);
    tracep->chgBit(oldp+35,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_190) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.realValue_0_191),8);
    tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_191) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_23) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_23)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_23)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_23)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_23)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_23)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_23)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_23)))))));
    tracep->chgBit(oldp+39,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_7_ready)))));
    tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.realValue1_0_23),8);
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_0_24));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_1_24));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_2_24));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_3_24));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_4_24));
    tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.debug_5_24));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.debug_6_24));
    tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.debug_7_24));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_192),8);
    tracep->chgBit(oldp+50,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_192) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_193),8);
    tracep->chgBit(oldp+52,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_193) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_194),8);
    tracep->chgBit(oldp+54,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_194) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_195),8);
    tracep->chgBit(oldp+56,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_195) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.realValue_0_196),8);
    tracep->chgBit(oldp+58,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_196) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.realValue_0_197),8);
    tracep->chgBit(oldp+60,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_197) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_31(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_31\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3640);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_198),8);
    tracep->chgBit(oldp+1,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_198) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_199),8);
    tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_199) 
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
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_24) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_24)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_24)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_24)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_24)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_24)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_24)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_24)))))));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_0_25));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_1_25));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_2_25));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_3_25));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_4_25));
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_5_25));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_6_25));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_7_25));
    tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_200),8);
    tracep->chgBit(oldp+14,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_200) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_201),8);
    tracep->chgBit(oldp+16,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_201) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_202),8);
    tracep->chgBit(oldp+18,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_202) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_203),8);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_203) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_204),8);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_204) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_205),8);
    tracep->chgBit(oldp+24,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_205) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_206),8);
    tracep->chgBit(oldp+26,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_206) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.realValue_0_207),8);
    tracep->chgBit(oldp+28,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_207) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.realValue1_0_24),8);
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_0_26));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_1_26));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_2_26));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_3_26));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_4_26));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_5_26));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_6_26));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_7_26));
    tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.realValue_0_208),8);
    tracep->chgBit(oldp+39,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_208) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.realValue_0_209),8);
    tracep->chgBit(oldp+41,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_209) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+42,(vlSymsp->TOP__arraySlice.realValue_0_210),8);
    tracep->chgBit(oldp+43,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_210) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_211),8);
    tracep->chgBit(oldp+45,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_211) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_212),8);
    tracep->chgBit(oldp+47,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_212) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_213),8);
    tracep->chgBit(oldp+49,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_213) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_214),8);
    tracep->chgBit(oldp+51,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_214) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_215),8);
    tracep->chgBit(oldp+53,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_215) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+54,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_26) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_26)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_26)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_26)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_26)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_26)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_26)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_26)))))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue1_0_25),8);
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_0_27));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_1_27));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_2_27));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_3_27));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_4_27));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_5_27));
    tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.debug_6_27));
    tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.debug_7_27));
    tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_216),8);
    tracep->chgBit(oldp+65,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_216) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_217),8);
    tracep->chgBit(oldp+67,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_217) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_32(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_32\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3708);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_218),8);
    tracep->chgBit(oldp+1,(((0x7fU & ((IData)(6U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_218) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                             + (0x3fU 
                                                & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                   << 1U)))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_219),8);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(5U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_219) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                             + (0x3fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_220),8);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_220) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_221),8);
    tracep->chgBit(oldp+7,(((0x3fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_221) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                             + (0x7fU 
                                                & ((IData)(5U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.realValue_0_222),8);
    tracep->chgBit(oldp+9,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0xffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_222) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_223),8);
    tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_223) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_27) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_27)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_27)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_27)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_27)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_27)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_27)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_27)))))));
    tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.realValue1_0_26),8);
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_0_28));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_1_28));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_2_28));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_3_28));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_4_28));
    tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.debug_5_28));
    tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.debug_6_28));
    tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.debug_7_28));
    tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_224),8);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_224) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_225),8);
    tracep->chgBit(oldp+25,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_225) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_226),8);
    tracep->chgBit(oldp+27,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_226) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_227),8);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_227) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_228),8);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_228) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_229),8);
    tracep->chgBit(oldp+33,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_229) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.realValue_0_230),8);
    tracep->chgBit(oldp+35,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_230) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.realValue_0_231),8);
    tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_231) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_28) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_28)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_28)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_28)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_28)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_28)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_28)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_28)))))));
    tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.realValue1_0_27),8);
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_0_29));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_1_29));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_2_29));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_3_29));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_4_29));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_5_29));
    tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.debug_6_29));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.debug_7_29));
    tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_232),8);
    tracep->chgBit(oldp+49,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_232) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_233),8);
    tracep->chgBit(oldp+51,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_233) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_234),8);
    tracep->chgBit(oldp+53,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_234) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_235),8);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_235) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_236),8);
    tracep->chgBit(oldp+57,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_236) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_237),8);
    tracep->chgBit(oldp+59,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_237) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+60,(vlSymsp->TOP__arraySlice.realValue_0_238),8);
    tracep->chgBit(oldp+61,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_238) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}
