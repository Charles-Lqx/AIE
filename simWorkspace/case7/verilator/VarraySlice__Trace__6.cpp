// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_49(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_49\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5506);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_388),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_388) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_389),9);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_389) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_390),9);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_390) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_391),9);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_391) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
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
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_48) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_48)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_48)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_48)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_48)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_48)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_48)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_48)))))));
    tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.realValue1_0_47),8);
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_0_49));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_1_49));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_2_49));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_3_49));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_4_49));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_5_49));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_6_49));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_7_49));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_392),9);
    tracep->chgBit(oldp+19,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_392) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_393),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_393) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_394),9);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_394) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_395),9);
    tracep->chgBit(oldp+25,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_395) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_396),9);
    tracep->chgBit(oldp+27,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_396) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_397),9);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_397) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_398),9);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_398) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_399),9);
    tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_399) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+34,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->chgBit(oldp+35,((((IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l341) 
                              == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__hReg) 
                                           - (IData)(1U)))) 
                             & ((IData)(vlSelf->inputStreamArrayData_valid) 
                                & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready)))));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_0_50));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_1_50));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_2_50));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_3_50));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_4_50));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_5_50));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_6_50));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_7_50));
    tracep->chgSData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_400),9);
    tracep->chgBit(oldp+45,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_400) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_401),9);
    tracep->chgBit(oldp+47,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_401) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_402),9);
    tracep->chgBit(oldp+49,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_402) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_403),9);
    tracep->chgBit(oldp+51,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_403) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_404),9);
    tracep->chgBit(oldp+53,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_404) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_405),9);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_405) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_406),9);
    tracep->chgBit(oldp+57,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_406) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_407),9);
    tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_407) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_50(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_50\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5566);
    // Body
    tracep->chgBit(oldp+0,((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_0_51));
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_1_51));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_2_51));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_3_51));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_4_51));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_5_51));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_6_51));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_7_51));
    tracep->chgSData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_408),9);
    tracep->chgBit(oldp+10,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_408) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_409),9);
    tracep->chgBit(oldp+12,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_409) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_410),9);
    tracep->chgBit(oldp+14,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_410) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_411),9);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_411) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_412),9);
    tracep->chgBit(oldp+18,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_412) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_413),9);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_413) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_414),9);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_414) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_415),9);
    tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_415) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+25,(((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
                                           == (0x1ffU 
                                               & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0) 
                                                  - 
                                                  VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                             ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_0))) 
                                         | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                             == (0x1ffU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                    - 
                                                    VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                            & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_1)))) 
                                        | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                            == (0x1ffU 
                                                & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                   - 
                                                   VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                              ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_2)))) 
                                       | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           == (0x1ffU 
                                               & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  - 
                                                  VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                             ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_3)))) 
                                      | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                          == (0x1ffU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                 - 
                                                 VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                            ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_4)))) 
                                     | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                         == (0x1ffU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                - VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                           ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_5)))) 
                                    | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                        == (0x1ffU 
                                            & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               - VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                       & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                          ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_6)))) 
                                   | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                       == (0x1ffU & 
                                           ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                            - VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
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
