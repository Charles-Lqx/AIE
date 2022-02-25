// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_41(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_41\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4290);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_399),8);
    tracep->chgBit(oldp+1,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_399) 
                                          - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                             + (0x7fU 
                                                & ((IData)(7U) 
                                                   * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+2,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_49) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_49)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_49)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_49)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_49)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_49)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_49)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_49)))))));
    tracep->chgBit(oldp+3,((((IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l341) 
                             == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__hReg) 
                                          - (IData)(1U)))) 
                            & ((IData)(vlSelf->inputStreamArrayData_valid) 
                               & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready)))));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_0_50));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_1_50));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_2_50));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_3_50));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_4_50));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_5_50));
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_6_50));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_7_50));
    tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.realValue_0_400),8);
    tracep->chgBit(oldp+13,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_400) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.realValue_0_401),8);
    tracep->chgBit(oldp+15,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_401) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_402),8);
    tracep->chgBit(oldp+17,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_402) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_403),8);
    tracep->chgBit(oldp+19,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_403) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_404),8);
    tracep->chgBit(oldp+21,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_404) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_405),8);
    tracep->chgBit(oldp+23,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_405) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_406),8);
    tracep->chgBit(oldp+25,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_406) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_407),8);
    tracep->chgBit(oldp+27,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_407) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+28,((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                   & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                             & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_50) 
                                      & (IData)(vlSymsp->TOP__arraySlice.debug_1_50)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.debug_2_50)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.debug_3_50)) 
                                   & (IData)(vlSymsp->TOP__arraySlice.debug_4_50)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.debug_5_50)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.debug_6_50)) 
                                & (IData)(vlSymsp->TOP__arraySlice.debug_7_50)))));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_0_51));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_1_51));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_2_51));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_3_51));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_4_51));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_5_51));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_6_51));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_7_51));
    tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_408),8);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_408) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_409),8);
    tracep->chgBit(oldp+40,(((0x7fU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_409) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_410),8);
    tracep->chgBit(oldp+42,(((0x7fU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_410) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_411),8);
    tracep->chgBit(oldp+44,(((0x7fU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_411) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_412),8);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_412) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_413),8);
    tracep->chgBit(oldp+48,(((0x3fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_413) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_414),8);
    tracep->chgBit(oldp+50,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0xffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_414) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_415),8);
    tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_415) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+53,(((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                   & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                              & (~ ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_51) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_1_51)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_2_51)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_3_51)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.debug_4_51)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.debug_5_51)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.debug_6_51)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.debug_7_51)))) 
                             & (~ ((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           == (0xffU 
                                               & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0) 
                                                  - 
                                                  VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                             ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_0))) 
                                         | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                             == (0xffU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                    - 
                                                    VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                            & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_1)))) 
                                        | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                            == (0xffU 
                                                & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                   - 
                                                   VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                              ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_2)))) 
                                       | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           == (0xffU 
                                               & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  - 
                                                  VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                             ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_3)))) 
                                      | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                          == (0xffU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                 - 
                                                 VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                            ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_4)))) 
                                     | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                         == (0xffU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                           ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_5)))) 
                                    | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                        == (0xffU & 
                                            ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                             - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                       & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                          ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_6)))) 
                                   | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                       == (0xffU & 
                                           ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                            - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                      & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                         ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_7))))))));
}

void VarraySlice___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_cleanup\n"); );
    // Init
    VarraySlice___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VarraySlice___024root*>(voidSelf);
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
