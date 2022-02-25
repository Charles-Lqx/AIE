// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_45(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_45\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+5166,(vlSymsp->TOP__arraySlice.realValue_0_347),8);
    tracep->fullBit(oldp+5167,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_347) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5168,(vlSymsp->TOP__arraySlice.realValue_0_348),8);
    tracep->fullBit(oldp+5169,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_348) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5170,(vlSymsp->TOP__arraySlice.realValue_0_349),8);
    tracep->fullBit(oldp+5171,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_349) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5172,(vlSymsp->TOP__arraySlice.realValue_0_350),8);
    tracep->fullBit(oldp+5173,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_350) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5174,(vlSymsp->TOP__arraySlice.realValue_0_351),8);
    tracep->fullBit(oldp+5175,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_351) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5176,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_43) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_43)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_43)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_43)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_43)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_43)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_43)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_43)))))));
    tracep->fullCData(oldp+5177,(vlSymsp->TOP__arraySlice.realValue1_0_42),8);
    tracep->fullBit(oldp+5178,(vlSymsp->TOP__arraySlice.debug_0_44));
    tracep->fullBit(oldp+5179,(vlSymsp->TOP__arraySlice.debug_1_44));
    tracep->fullBit(oldp+5180,(vlSymsp->TOP__arraySlice.debug_2_44));
    tracep->fullBit(oldp+5181,(vlSymsp->TOP__arraySlice.debug_3_44));
    tracep->fullBit(oldp+5182,(vlSymsp->TOP__arraySlice.debug_4_44));
    tracep->fullBit(oldp+5183,(vlSymsp->TOP__arraySlice.debug_5_44));
    tracep->fullBit(oldp+5184,(vlSymsp->TOP__arraySlice.debug_6_44));
    tracep->fullBit(oldp+5185,(vlSymsp->TOP__arraySlice.debug_7_44));
    tracep->fullCData(oldp+5186,(vlSymsp->TOP__arraySlice.realValue_0_352),8);
    tracep->fullBit(oldp+5187,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_352) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5188,(vlSymsp->TOP__arraySlice.realValue_0_353),8);
    tracep->fullBit(oldp+5189,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_353) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5190,(vlSymsp->TOP__arraySlice.realValue_0_354),8);
    tracep->fullBit(oldp+5191,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_354) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5192,(vlSymsp->TOP__arraySlice.realValue_0_355),8);
    tracep->fullBit(oldp+5193,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_355) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5194,(vlSymsp->TOP__arraySlice.realValue_0_356),8);
    tracep->fullBit(oldp+5195,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_356) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5196,(vlSymsp->TOP__arraySlice.realValue_0_357),8);
    tracep->fullBit(oldp+5197,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_357) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5198,(vlSymsp->TOP__arraySlice.realValue_0_358),8);
    tracep->fullBit(oldp+5199,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_358) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5200,(vlSymsp->TOP__arraySlice.realValue_0_359),8);
    tracep->fullBit(oldp+5201,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_359) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5202,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_44) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_44)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_44)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_44)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_44)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_44)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_44)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_44)))))));
    tracep->fullCData(oldp+5203,(vlSymsp->TOP__arraySlice.realValue1_0_43),8);
    tracep->fullBit(oldp+5204,(vlSymsp->TOP__arraySlice.debug_0_45));
    tracep->fullBit(oldp+5205,(vlSymsp->TOP__arraySlice.debug_1_45));
    tracep->fullBit(oldp+5206,(vlSymsp->TOP__arraySlice.debug_2_45));
    tracep->fullBit(oldp+5207,(vlSymsp->TOP__arraySlice.debug_3_45));
    tracep->fullBit(oldp+5208,(vlSymsp->TOP__arraySlice.debug_4_45));
    tracep->fullBit(oldp+5209,(vlSymsp->TOP__arraySlice.debug_5_45));
    tracep->fullBit(oldp+5210,(vlSymsp->TOP__arraySlice.debug_6_45));
    tracep->fullBit(oldp+5211,(vlSymsp->TOP__arraySlice.debug_7_45));
    tracep->fullCData(oldp+5212,(vlSymsp->TOP__arraySlice.realValue_0_360),8);
    tracep->fullBit(oldp+5213,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_360) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5214,(vlSymsp->TOP__arraySlice.realValue_0_361),8);
    tracep->fullBit(oldp+5215,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_361) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5216,(vlSymsp->TOP__arraySlice.realValue_0_362),8);
    tracep->fullBit(oldp+5217,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_362) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5218,(vlSymsp->TOP__arraySlice.realValue_0_363),8);
    tracep->fullBit(oldp+5219,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_363) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5220,(vlSymsp->TOP__arraySlice.realValue_0_364),8);
    tracep->fullBit(oldp+5221,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_364) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5222,(vlSymsp->TOP__arraySlice.realValue_0_365),8);
    tracep->fullBit(oldp+5223,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_365) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5224,(vlSymsp->TOP__arraySlice.realValue_0_366),8);
    tracep->fullBit(oldp+5225,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_366) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5226,(vlSymsp->TOP__arraySlice.realValue_0_367),8);
    tracep->fullBit(oldp+5227,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_367) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_46(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_46\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+5228,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_45) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_45)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_45)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_45)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_45)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_45)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_45)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_45)))))));
    tracep->fullCData(oldp+5229,(vlSymsp->TOP__arraySlice.realValue1_0_44),8);
    tracep->fullBit(oldp+5230,(vlSymsp->TOP__arraySlice.debug_0_46));
    tracep->fullBit(oldp+5231,(vlSymsp->TOP__arraySlice.debug_1_46));
    tracep->fullBit(oldp+5232,(vlSymsp->TOP__arraySlice.debug_2_46));
    tracep->fullBit(oldp+5233,(vlSymsp->TOP__arraySlice.debug_3_46));
    tracep->fullBit(oldp+5234,(vlSymsp->TOP__arraySlice.debug_4_46));
    tracep->fullBit(oldp+5235,(vlSymsp->TOP__arraySlice.debug_5_46));
    tracep->fullBit(oldp+5236,(vlSymsp->TOP__arraySlice.debug_6_46));
    tracep->fullBit(oldp+5237,(vlSymsp->TOP__arraySlice.debug_7_46));
    tracep->fullCData(oldp+5238,(vlSymsp->TOP__arraySlice.realValue_0_368),8);
    tracep->fullBit(oldp+5239,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_368) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5240,(vlSymsp->TOP__arraySlice.realValue_0_369),8);
    tracep->fullBit(oldp+5241,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_369) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5242,(vlSymsp->TOP__arraySlice.realValue_0_370),8);
    tracep->fullBit(oldp+5243,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_370) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5244,(vlSymsp->TOP__arraySlice.realValue_0_371),8);
    tracep->fullBit(oldp+5245,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_371) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5246,(vlSymsp->TOP__arraySlice.realValue_0_372),8);
    tracep->fullBit(oldp+5247,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_372) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5248,(vlSymsp->TOP__arraySlice.realValue_0_373),8);
    tracep->fullBit(oldp+5249,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_373) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5250,(vlSymsp->TOP__arraySlice.realValue_0_374),8);
    tracep->fullBit(oldp+5251,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_374) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5252,(vlSymsp->TOP__arraySlice.realValue_0_375),8);
    tracep->fullBit(oldp+5253,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_375) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5254,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_46) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_46)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_46)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_46)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_46)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_46)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_46)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_46)))))));
    tracep->fullCData(oldp+5255,(vlSymsp->TOP__arraySlice.realValue1_0_45),8);
    tracep->fullBit(oldp+5256,(vlSymsp->TOP__arraySlice.debug_0_47));
    tracep->fullBit(oldp+5257,(vlSymsp->TOP__arraySlice.debug_1_47));
    tracep->fullBit(oldp+5258,(vlSymsp->TOP__arraySlice.debug_2_47));
    tracep->fullBit(oldp+5259,(vlSymsp->TOP__arraySlice.debug_3_47));
    tracep->fullBit(oldp+5260,(vlSymsp->TOP__arraySlice.debug_4_47));
    tracep->fullBit(oldp+5261,(vlSymsp->TOP__arraySlice.debug_5_47));
    tracep->fullBit(oldp+5262,(vlSymsp->TOP__arraySlice.debug_6_47));
    tracep->fullBit(oldp+5263,(vlSymsp->TOP__arraySlice.debug_7_47));
    tracep->fullCData(oldp+5264,(vlSymsp->TOP__arraySlice.realValue_0_376),8);
    tracep->fullBit(oldp+5265,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_376) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5266,(vlSymsp->TOP__arraySlice.realValue_0_377),8);
    tracep->fullBit(oldp+5267,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_377) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5268,(vlSymsp->TOP__arraySlice.realValue_0_378),8);
    tracep->fullBit(oldp+5269,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_378) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5270,(vlSymsp->TOP__arraySlice.realValue_0_379),8);
    tracep->fullBit(oldp+5271,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_379) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5272,(vlSymsp->TOP__arraySlice.realValue_0_380),8);
    tracep->fullBit(oldp+5273,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_380) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5274,(vlSymsp->TOP__arraySlice.realValue_0_381),8);
    tracep->fullBit(oldp+5275,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_381) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5276,(vlSymsp->TOP__arraySlice.realValue_0_382),8);
    tracep->fullBit(oldp+5277,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_382) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5278,(vlSymsp->TOP__arraySlice.realValue_0_383),8);
    tracep->fullBit(oldp+5279,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_383) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5280,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_47) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_47)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_47)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_47)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_47)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_47)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_47)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_47)))))));
    tracep->fullCData(oldp+5281,(vlSymsp->TOP__arraySlice.realValue1_0_46),8);
    tracep->fullBit(oldp+5282,(vlSymsp->TOP__arraySlice.debug_0_48));
    tracep->fullBit(oldp+5283,(vlSymsp->TOP__arraySlice.debug_1_48));
    tracep->fullBit(oldp+5284,(vlSymsp->TOP__arraySlice.debug_2_48));
    tracep->fullBit(oldp+5285,(vlSymsp->TOP__arraySlice.debug_3_48));
    tracep->fullBit(oldp+5286,(vlSymsp->TOP__arraySlice.debug_4_48));
    tracep->fullBit(oldp+5287,(vlSymsp->TOP__arraySlice.debug_5_48));
    tracep->fullBit(oldp+5288,(vlSymsp->TOP__arraySlice.debug_6_48));
    tracep->fullBit(oldp+5289,(vlSymsp->TOP__arraySlice.debug_7_48));
    tracep->fullCData(oldp+5290,(vlSymsp->TOP__arraySlice.realValue_0_384),8);
    tracep->fullBit(oldp+5291,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_384) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5292,(vlSymsp->TOP__arraySlice.realValue_0_385),8);
    tracep->fullBit(oldp+5293,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_385) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5294,(vlSymsp->TOP__arraySlice.realValue_0_386),8);
    tracep->fullBit(oldp+5295,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_386) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_47(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_47\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+5296,(vlSymsp->TOP__arraySlice.realValue_0_387),8);
    tracep->fullBit(oldp+5297,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_387) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5298,(vlSymsp->TOP__arraySlice.realValue_0_388),8);
    tracep->fullBit(oldp+5299,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_388) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5300,(vlSymsp->TOP__arraySlice.realValue_0_389),8);
    tracep->fullBit(oldp+5301,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_389) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5302,(vlSymsp->TOP__arraySlice.realValue_0_390),8);
    tracep->fullBit(oldp+5303,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_390) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5304,(vlSymsp->TOP__arraySlice.realValue_0_391),8);
    tracep->fullBit(oldp+5305,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_391) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5306,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5307,(vlSymsp->TOP__arraySlice.realValue1_0_47),8);
    tracep->fullBit(oldp+5308,(vlSymsp->TOP__arraySlice.debug_0_49));
    tracep->fullBit(oldp+5309,(vlSymsp->TOP__arraySlice.debug_1_49));
    tracep->fullBit(oldp+5310,(vlSymsp->TOP__arraySlice.debug_2_49));
    tracep->fullBit(oldp+5311,(vlSymsp->TOP__arraySlice.debug_3_49));
    tracep->fullBit(oldp+5312,(vlSymsp->TOP__arraySlice.debug_4_49));
    tracep->fullBit(oldp+5313,(vlSymsp->TOP__arraySlice.debug_5_49));
    tracep->fullBit(oldp+5314,(vlSymsp->TOP__arraySlice.debug_6_49));
    tracep->fullBit(oldp+5315,(vlSymsp->TOP__arraySlice.debug_7_49));
    tracep->fullCData(oldp+5316,(vlSymsp->TOP__arraySlice.realValue_0_392),8);
    tracep->fullBit(oldp+5317,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_392) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5318,(vlSymsp->TOP__arraySlice.realValue_0_393),8);
    tracep->fullBit(oldp+5319,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_393) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5320,(vlSymsp->TOP__arraySlice.realValue_0_394),8);
    tracep->fullBit(oldp+5321,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_394) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5322,(vlSymsp->TOP__arraySlice.realValue_0_395),8);
    tracep->fullBit(oldp+5323,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_395) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5324,(vlSymsp->TOP__arraySlice.realValue_0_396),8);
    tracep->fullBit(oldp+5325,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_396) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5326,(vlSymsp->TOP__arraySlice.realValue_0_397),8);
    tracep->fullBit(oldp+5327,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_397) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5328,(vlSymsp->TOP__arraySlice.realValue_0_398),8);
    tracep->fullBit(oldp+5329,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_398) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5330,(vlSymsp->TOP__arraySlice.realValue_0_399),8);
    tracep->fullBit(oldp+5331,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_399) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5332,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+5333,((((IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l341) 
                                 == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__hReg) 
                                              - (IData)(1U)))) 
                                & ((IData)(vlSelf->inputStreamArrayData_valid) 
                                   & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready)))));
    tracep->fullBit(oldp+5334,(vlSymsp->TOP__arraySlice.debug_0_50));
    tracep->fullBit(oldp+5335,(vlSymsp->TOP__arraySlice.debug_1_50));
    tracep->fullBit(oldp+5336,(vlSymsp->TOP__arraySlice.debug_2_50));
    tracep->fullBit(oldp+5337,(vlSymsp->TOP__arraySlice.debug_3_50));
    tracep->fullBit(oldp+5338,(vlSymsp->TOP__arraySlice.debug_4_50));
    tracep->fullBit(oldp+5339,(vlSymsp->TOP__arraySlice.debug_5_50));
    tracep->fullBit(oldp+5340,(vlSymsp->TOP__arraySlice.debug_6_50));
    tracep->fullBit(oldp+5341,(vlSymsp->TOP__arraySlice.debug_7_50));
    tracep->fullCData(oldp+5342,(vlSymsp->TOP__arraySlice.realValue_0_400),8);
    tracep->fullBit(oldp+5343,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_400) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5344,(vlSymsp->TOP__arraySlice.realValue_0_401),8);
    tracep->fullBit(oldp+5345,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_401) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5346,(vlSymsp->TOP__arraySlice.realValue_0_402),8);
    tracep->fullBit(oldp+5347,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_402) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5348,(vlSymsp->TOP__arraySlice.realValue_0_403),8);
    tracep->fullBit(oldp+5349,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_403) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5350,(vlSymsp->TOP__arraySlice.realValue_0_404),8);
    tracep->fullBit(oldp+5351,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_404) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5352,(vlSymsp->TOP__arraySlice.realValue_0_405),8);
    tracep->fullBit(oldp+5353,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_405) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5354,(vlSymsp->TOP__arraySlice.realValue_0_406),8);
    tracep->fullBit(oldp+5355,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_406) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_48(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_48\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+5356,(vlSymsp->TOP__arraySlice.realValue_0_407),8);
    tracep->fullBit(oldp+5357,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_407) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5358,((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+5359,(vlSymsp->TOP__arraySlice.debug_0_51));
    tracep->fullBit(oldp+5360,(vlSymsp->TOP__arraySlice.debug_1_51));
    tracep->fullBit(oldp+5361,(vlSymsp->TOP__arraySlice.debug_2_51));
    tracep->fullBit(oldp+5362,(vlSymsp->TOP__arraySlice.debug_3_51));
    tracep->fullBit(oldp+5363,(vlSymsp->TOP__arraySlice.debug_4_51));
    tracep->fullBit(oldp+5364,(vlSymsp->TOP__arraySlice.debug_5_51));
    tracep->fullBit(oldp+5365,(vlSymsp->TOP__arraySlice.debug_6_51));
    tracep->fullBit(oldp+5366,(vlSymsp->TOP__arraySlice.debug_7_51));
    tracep->fullCData(oldp+5367,(vlSymsp->TOP__arraySlice.realValue_0_408),8);
    tracep->fullBit(oldp+5368,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_408) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5369,(vlSymsp->TOP__arraySlice.realValue_0_409),8);
    tracep->fullBit(oldp+5370,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_409) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5371,(vlSymsp->TOP__arraySlice.realValue_0_410),8);
    tracep->fullBit(oldp+5372,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_410) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5373,(vlSymsp->TOP__arraySlice.realValue_0_411),8);
    tracep->fullBit(oldp+5374,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_411) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5375,(vlSymsp->TOP__arraySlice.realValue_0_412),8);
    tracep->fullBit(oldp+5376,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_412) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5377,(vlSymsp->TOP__arraySlice.realValue_0_413),8);
    tracep->fullBit(oldp+5378,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_413) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5379,(vlSymsp->TOP__arraySlice.realValue_0_414),8);
    tracep->fullBit(oldp+5380,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_414) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5381,(vlSymsp->TOP__arraySlice.realValue_0_415),8);
    tracep->fullBit(oldp+5382,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_415) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5383,(((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
                                                == 
                                                (0xffU 
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
                                                   - 
                                                   VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                              ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_5)))) 
                                       | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           == (0xffU 
                                               & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                  - 
                                                  VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                             ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_6)))) 
                                      | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                          == (0xffU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 - 
                                                 VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                            ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_7))))))));
    tracep->fullCData(oldp+5384,(0U),2);
    tracep->fullCData(oldp+5385,(1U),2);
    tracep->fullCData(oldp+5386,(2U),2);
    tracep->fullCData(oldp+5387,(3U),2);
    tracep->fullIData(oldp+5388,(vlSymsp->TOP__arraySlice.__PVT__arrayDataType),32);
    tracep->fullBit(oldp+5389,(0U));
}
