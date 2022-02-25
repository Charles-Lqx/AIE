// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_38(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_38\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4416,(vlSymsp->TOP__arraySlice.realValue_0_277),8);
    tracep->fullBit(oldp+4417,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_277) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4418,(vlSymsp->TOP__arraySlice.realValue_0_278),8);
    tracep->fullBit(oldp+4419,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_278) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4420,(vlSymsp->TOP__arraySlice.realValue_0_279),8);
    tracep->fullBit(oldp+4421,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_279) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4422,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_34) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_34)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_34)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_34)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_34)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_34)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_34)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_34)))))));
    tracep->fullCData(oldp+4423,(vlSymsp->TOP__arraySlice.realValue1_0_33),8);
    tracep->fullBit(oldp+4424,(vlSymsp->TOP__arraySlice.debug_0_35));
    tracep->fullBit(oldp+4425,(vlSymsp->TOP__arraySlice.debug_1_35));
    tracep->fullBit(oldp+4426,(vlSymsp->TOP__arraySlice.debug_2_35));
    tracep->fullBit(oldp+4427,(vlSymsp->TOP__arraySlice.debug_3_35));
    tracep->fullBit(oldp+4428,(vlSymsp->TOP__arraySlice.debug_4_35));
    tracep->fullBit(oldp+4429,(vlSymsp->TOP__arraySlice.debug_5_35));
    tracep->fullBit(oldp+4430,(vlSymsp->TOP__arraySlice.debug_6_35));
    tracep->fullBit(oldp+4431,(vlSymsp->TOP__arraySlice.debug_7_35));
    tracep->fullCData(oldp+4432,(vlSymsp->TOP__arraySlice.realValue_0_280),8);
    tracep->fullBit(oldp+4433,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_280) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4434,(vlSymsp->TOP__arraySlice.realValue_0_281),8);
    tracep->fullBit(oldp+4435,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_281) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4436,(vlSymsp->TOP__arraySlice.realValue_0_282),8);
    tracep->fullBit(oldp+4437,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_282) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4438,(vlSymsp->TOP__arraySlice.realValue_0_283),8);
    tracep->fullBit(oldp+4439,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_283) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4440,(vlSymsp->TOP__arraySlice.realValue_0_284),8);
    tracep->fullBit(oldp+4441,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_284) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4442,(vlSymsp->TOP__arraySlice.realValue_0_285),8);
    tracep->fullBit(oldp+4443,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_285) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4444,(vlSymsp->TOP__arraySlice.realValue_0_286),8);
    tracep->fullBit(oldp+4445,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_286) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4446,(vlSymsp->TOP__arraySlice.realValue_0_287),8);
    tracep->fullBit(oldp+4447,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_287) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4448,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_35) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_35)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_35)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_35)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_35)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_35)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_35)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_35)))))));
    tracep->fullCData(oldp+4449,(vlSymsp->TOP__arraySlice.realValue1_0_34),8);
    tracep->fullBit(oldp+4450,(vlSymsp->TOP__arraySlice.debug_0_36));
    tracep->fullBit(oldp+4451,(vlSymsp->TOP__arraySlice.debug_1_36));
    tracep->fullBit(oldp+4452,(vlSymsp->TOP__arraySlice.debug_2_36));
    tracep->fullBit(oldp+4453,(vlSymsp->TOP__arraySlice.debug_3_36));
    tracep->fullBit(oldp+4454,(vlSymsp->TOP__arraySlice.debug_4_36));
    tracep->fullBit(oldp+4455,(vlSymsp->TOP__arraySlice.debug_5_36));
    tracep->fullBit(oldp+4456,(vlSymsp->TOP__arraySlice.debug_6_36));
    tracep->fullBit(oldp+4457,(vlSymsp->TOP__arraySlice.debug_7_36));
    tracep->fullCData(oldp+4458,(vlSymsp->TOP__arraySlice.realValue_0_288),8);
    tracep->fullBit(oldp+4459,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_288) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4460,(vlSymsp->TOP__arraySlice.realValue_0_289),8);
    tracep->fullBit(oldp+4461,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_289) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4462,(vlSymsp->TOP__arraySlice.realValue_0_290),8);
    tracep->fullBit(oldp+4463,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_290) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4464,(vlSymsp->TOP__arraySlice.realValue_0_291),8);
    tracep->fullBit(oldp+4465,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_291) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4466,(vlSymsp->TOP__arraySlice.realValue_0_292),8);
    tracep->fullBit(oldp+4467,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_292) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4468,(vlSymsp->TOP__arraySlice.realValue_0_293),8);
    tracep->fullBit(oldp+4469,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_293) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4470,(vlSymsp->TOP__arraySlice.realValue_0_294),8);
    tracep->fullBit(oldp+4471,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_294) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4472,(vlSymsp->TOP__arraySlice.realValue_0_295),8);
    tracep->fullBit(oldp+4473,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_295) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4474,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_36) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_36)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_36)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_36)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_36)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_36)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_36)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_36)))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_39(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_39\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4475,(vlSymsp->TOP__arraySlice.realValue1_0_35),8);
    tracep->fullBit(oldp+4476,(vlSymsp->TOP__arraySlice.debug_0_37));
    tracep->fullBit(oldp+4477,(vlSymsp->TOP__arraySlice.debug_1_37));
    tracep->fullBit(oldp+4478,(vlSymsp->TOP__arraySlice.debug_2_37));
    tracep->fullBit(oldp+4479,(vlSymsp->TOP__arraySlice.debug_3_37));
    tracep->fullBit(oldp+4480,(vlSymsp->TOP__arraySlice.debug_4_37));
    tracep->fullBit(oldp+4481,(vlSymsp->TOP__arraySlice.debug_5_37));
    tracep->fullBit(oldp+4482,(vlSymsp->TOP__arraySlice.debug_6_37));
    tracep->fullBit(oldp+4483,(vlSymsp->TOP__arraySlice.debug_7_37));
    tracep->fullCData(oldp+4484,(vlSymsp->TOP__arraySlice.realValue_0_296),8);
    tracep->fullBit(oldp+4485,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_296) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4486,(vlSymsp->TOP__arraySlice.realValue_0_297),8);
    tracep->fullBit(oldp+4487,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_297) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4488,(vlSymsp->TOP__arraySlice.realValue_0_298),8);
    tracep->fullBit(oldp+4489,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_298) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4490,(vlSymsp->TOP__arraySlice.realValue_0_299),8);
    tracep->fullBit(oldp+4491,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_299) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4492,(vlSymsp->TOP__arraySlice.realValue_0_300),8);
    tracep->fullBit(oldp+4493,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_300) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4494,(vlSymsp->TOP__arraySlice.realValue_0_301),8);
    tracep->fullBit(oldp+4495,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_301) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4496,(vlSymsp->TOP__arraySlice.realValue_0_302),8);
    tracep->fullBit(oldp+4497,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_302) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4498,(vlSymsp->TOP__arraySlice.realValue_0_303),8);
    tracep->fullBit(oldp+4499,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_303) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4500,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_37) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_37)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_37)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_37)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_37)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_37)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_37)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_37)))))));
    tracep->fullCData(oldp+4501,(vlSymsp->TOP__arraySlice.realValue1_0_36),8);
    tracep->fullBit(oldp+4502,(vlSymsp->TOP__arraySlice.debug_0_38));
    tracep->fullBit(oldp+4503,(vlSymsp->TOP__arraySlice.debug_1_38));
    tracep->fullBit(oldp+4504,(vlSymsp->TOP__arraySlice.debug_2_38));
    tracep->fullBit(oldp+4505,(vlSymsp->TOP__arraySlice.debug_3_38));
    tracep->fullBit(oldp+4506,(vlSymsp->TOP__arraySlice.debug_4_38));
    tracep->fullBit(oldp+4507,(vlSymsp->TOP__arraySlice.debug_5_38));
    tracep->fullBit(oldp+4508,(vlSymsp->TOP__arraySlice.debug_6_38));
    tracep->fullBit(oldp+4509,(vlSymsp->TOP__arraySlice.debug_7_38));
    tracep->fullCData(oldp+4510,(vlSymsp->TOP__arraySlice.realValue_0_304),8);
    tracep->fullBit(oldp+4511,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_304) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4512,(vlSymsp->TOP__arraySlice.realValue_0_305),8);
    tracep->fullBit(oldp+4513,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_305) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4514,(vlSymsp->TOP__arraySlice.realValue_0_306),8);
    tracep->fullBit(oldp+4515,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_306) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4516,(vlSymsp->TOP__arraySlice.realValue_0_307),8);
    tracep->fullBit(oldp+4517,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_307) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4518,(vlSymsp->TOP__arraySlice.realValue_0_308),8);
    tracep->fullBit(oldp+4519,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_308) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4520,(vlSymsp->TOP__arraySlice.realValue_0_309),8);
    tracep->fullBit(oldp+4521,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_309) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4522,(vlSymsp->TOP__arraySlice.realValue_0_310),8);
    tracep->fullBit(oldp+4523,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_310) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4524,(vlSymsp->TOP__arraySlice.realValue_0_311),8);
    tracep->fullBit(oldp+4525,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_311) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4526,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_38) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_38)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_38)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_38)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_38)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_38)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_38)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_38)))))));
    tracep->fullCData(oldp+4527,(vlSymsp->TOP__arraySlice.realValue1_0_37),8);
    tracep->fullBit(oldp+4528,(vlSymsp->TOP__arraySlice.debug_0_39));
    tracep->fullBit(oldp+4529,(vlSymsp->TOP__arraySlice.debug_1_39));
    tracep->fullBit(oldp+4530,(vlSymsp->TOP__arraySlice.debug_2_39));
    tracep->fullBit(oldp+4531,(vlSymsp->TOP__arraySlice.debug_3_39));
    tracep->fullBit(oldp+4532,(vlSymsp->TOP__arraySlice.debug_4_39));
    tracep->fullBit(oldp+4533,(vlSymsp->TOP__arraySlice.debug_5_39));
    tracep->fullBit(oldp+4534,(vlSymsp->TOP__arraySlice.debug_6_39));
    tracep->fullBit(oldp+4535,(vlSymsp->TOP__arraySlice.debug_7_39));
    tracep->fullCData(oldp+4536,(vlSymsp->TOP__arraySlice.realValue_0_312),8);
    tracep->fullBit(oldp+4537,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_312) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4538,(vlSymsp->TOP__arraySlice.realValue_0_313),8);
    tracep->fullBit(oldp+4539,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_313) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4540,(vlSymsp->TOP__arraySlice.realValue_0_314),8);
    tracep->fullBit(oldp+4541,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_314) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4542,(vlSymsp->TOP__arraySlice.realValue_0_315),8);
    tracep->fullBit(oldp+4543,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_315) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_40(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_40\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4544,(vlSymsp->TOP__arraySlice.realValue_0_316),8);
    tracep->fullBit(oldp+4545,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_316) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4546,(vlSymsp->TOP__arraySlice.realValue_0_317),8);
    tracep->fullBit(oldp+4547,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_317) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4548,(vlSymsp->TOP__arraySlice.realValue_0_318),8);
    tracep->fullBit(oldp+4549,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_318) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4550,(vlSymsp->TOP__arraySlice.realValue_0_319),8);
    tracep->fullBit(oldp+4551,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_319) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4552,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_39) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_39)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_39)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_39)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_39)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_39)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_39)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_39)))))));
    tracep->fullCData(oldp+4553,(vlSymsp->TOP__arraySlice.realValue1_0_38),8);
    tracep->fullBit(oldp+4554,(vlSymsp->TOP__arraySlice.debug_0_40));
    tracep->fullBit(oldp+4555,(vlSymsp->TOP__arraySlice.debug_1_40));
    tracep->fullBit(oldp+4556,(vlSymsp->TOP__arraySlice.debug_2_40));
    tracep->fullBit(oldp+4557,(vlSymsp->TOP__arraySlice.debug_3_40));
    tracep->fullBit(oldp+4558,(vlSymsp->TOP__arraySlice.debug_4_40));
    tracep->fullBit(oldp+4559,(vlSymsp->TOP__arraySlice.debug_5_40));
    tracep->fullBit(oldp+4560,(vlSymsp->TOP__arraySlice.debug_6_40));
    tracep->fullBit(oldp+4561,(vlSymsp->TOP__arraySlice.debug_7_40));
    tracep->fullCData(oldp+4562,(vlSymsp->TOP__arraySlice.realValue_0_320),8);
    tracep->fullBit(oldp+4563,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_320) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4564,(vlSymsp->TOP__arraySlice.realValue_0_321),8);
    tracep->fullBit(oldp+4565,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_321) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4566,(vlSymsp->TOP__arraySlice.realValue_0_322),8);
    tracep->fullBit(oldp+4567,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_322) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4568,(vlSymsp->TOP__arraySlice.realValue_0_323),8);
    tracep->fullBit(oldp+4569,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_323) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4570,(vlSymsp->TOP__arraySlice.realValue_0_324),8);
    tracep->fullBit(oldp+4571,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_324) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4572,(vlSymsp->TOP__arraySlice.realValue_0_325),8);
    tracep->fullBit(oldp+4573,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_325) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4574,(vlSymsp->TOP__arraySlice.realValue_0_326),8);
    tracep->fullBit(oldp+4575,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_326) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4576,(vlSymsp->TOP__arraySlice.realValue_0_327),8);
    tracep->fullBit(oldp+4577,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_327) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4578,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_40) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_40)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_40)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_40)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_40)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_40)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_40)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_40)))))));
    tracep->fullCData(oldp+4579,(vlSymsp->TOP__arraySlice.realValue1_0_39),8);
    tracep->fullBit(oldp+4580,(vlSymsp->TOP__arraySlice.debug_0_41));
    tracep->fullBit(oldp+4581,(vlSymsp->TOP__arraySlice.debug_1_41));
    tracep->fullBit(oldp+4582,(vlSymsp->TOP__arraySlice.debug_2_41));
    tracep->fullBit(oldp+4583,(vlSymsp->TOP__arraySlice.debug_3_41));
    tracep->fullBit(oldp+4584,(vlSymsp->TOP__arraySlice.debug_4_41));
    tracep->fullBit(oldp+4585,(vlSymsp->TOP__arraySlice.debug_5_41));
    tracep->fullBit(oldp+4586,(vlSymsp->TOP__arraySlice.debug_6_41));
    tracep->fullBit(oldp+4587,(vlSymsp->TOP__arraySlice.debug_7_41));
    tracep->fullCData(oldp+4588,(vlSymsp->TOP__arraySlice.realValue_0_328),8);
    tracep->fullBit(oldp+4589,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_328) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4590,(vlSymsp->TOP__arraySlice.realValue_0_329),8);
    tracep->fullBit(oldp+4591,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_329) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4592,(vlSymsp->TOP__arraySlice.realValue_0_330),8);
    tracep->fullBit(oldp+4593,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_330) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4594,(vlSymsp->TOP__arraySlice.realValue_0_331),8);
    tracep->fullBit(oldp+4595,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_331) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4596,(vlSymsp->TOP__arraySlice.realValue_0_332),8);
    tracep->fullBit(oldp+4597,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_332) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4598,(vlSymsp->TOP__arraySlice.realValue_0_333),8);
    tracep->fullBit(oldp+4599,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_333) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4600,(vlSymsp->TOP__arraySlice.realValue_0_334),8);
    tracep->fullBit(oldp+4601,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_334) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4602,(vlSymsp->TOP__arraySlice.realValue_0_335),8);
    tracep->fullBit(oldp+4603,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_335) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4604,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_41) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_41)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_41)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_41)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_41)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_41)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_41)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_41)))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_41(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_41\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4605,(vlSymsp->TOP__arraySlice.realValue1_0_40),8);
    tracep->fullBit(oldp+4606,(vlSymsp->TOP__arraySlice.debug_0_42));
    tracep->fullBit(oldp+4607,(vlSymsp->TOP__arraySlice.debug_1_42));
    tracep->fullBit(oldp+4608,(vlSymsp->TOP__arraySlice.debug_2_42));
    tracep->fullBit(oldp+4609,(vlSymsp->TOP__arraySlice.debug_3_42));
    tracep->fullBit(oldp+4610,(vlSymsp->TOP__arraySlice.debug_4_42));
    tracep->fullBit(oldp+4611,(vlSymsp->TOP__arraySlice.debug_5_42));
    tracep->fullBit(oldp+4612,(vlSymsp->TOP__arraySlice.debug_6_42));
    tracep->fullBit(oldp+4613,(vlSymsp->TOP__arraySlice.debug_7_42));
    tracep->fullCData(oldp+4614,(vlSymsp->TOP__arraySlice.realValue_0_336),8);
    tracep->fullBit(oldp+4615,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_336) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4616,(vlSymsp->TOP__arraySlice.realValue_0_337),8);
    tracep->fullBit(oldp+4617,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_337) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4618,(vlSymsp->TOP__arraySlice.realValue_0_338),8);
    tracep->fullBit(oldp+4619,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_338) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4620,(vlSymsp->TOP__arraySlice.realValue_0_339),8);
    tracep->fullBit(oldp+4621,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_339) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4622,(vlSymsp->TOP__arraySlice.realValue_0_340),8);
    tracep->fullBit(oldp+4623,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_340) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4624,(vlSymsp->TOP__arraySlice.realValue_0_341),8);
    tracep->fullBit(oldp+4625,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_341) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4626,(vlSymsp->TOP__arraySlice.realValue_0_342),8);
    tracep->fullBit(oldp+4627,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_342) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4628,(vlSymsp->TOP__arraySlice.realValue_0_343),8);
    tracep->fullBit(oldp+4629,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_343) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4630,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_42) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_42)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_42)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_42)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_42)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_42)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_42)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_42)))))));
    tracep->fullCData(oldp+4631,(vlSymsp->TOP__arraySlice.realValue1_0_41),8);
    tracep->fullBit(oldp+4632,(vlSymsp->TOP__arraySlice.debug_0_43));
    tracep->fullBit(oldp+4633,(vlSymsp->TOP__arraySlice.debug_1_43));
    tracep->fullBit(oldp+4634,(vlSymsp->TOP__arraySlice.debug_2_43));
    tracep->fullBit(oldp+4635,(vlSymsp->TOP__arraySlice.debug_3_43));
    tracep->fullBit(oldp+4636,(vlSymsp->TOP__arraySlice.debug_4_43));
    tracep->fullBit(oldp+4637,(vlSymsp->TOP__arraySlice.debug_5_43));
    tracep->fullBit(oldp+4638,(vlSymsp->TOP__arraySlice.debug_6_43));
    tracep->fullBit(oldp+4639,(vlSymsp->TOP__arraySlice.debug_7_43));
    tracep->fullCData(oldp+4640,(vlSymsp->TOP__arraySlice.realValue_0_344),8);
    tracep->fullBit(oldp+4641,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_344) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4642,(vlSymsp->TOP__arraySlice.realValue_0_345),8);
    tracep->fullBit(oldp+4643,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_345) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4644,(vlSymsp->TOP__arraySlice.realValue_0_346),8);
    tracep->fullBit(oldp+4645,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_346) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4646,(vlSymsp->TOP__arraySlice.realValue_0_347),8);
    tracep->fullBit(oldp+4647,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_347) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4648,(vlSymsp->TOP__arraySlice.realValue_0_348),8);
    tracep->fullBit(oldp+4649,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_348) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4650,(vlSymsp->TOP__arraySlice.realValue_0_349),8);
    tracep->fullBit(oldp+4651,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_349) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4652,(vlSymsp->TOP__arraySlice.realValue_0_350),8);
    tracep->fullBit(oldp+4653,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_350) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4654,(vlSymsp->TOP__arraySlice.realValue_0_351),8);
    tracep->fullBit(oldp+4655,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_351) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4656,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4657,(vlSymsp->TOP__arraySlice.realValue1_0_42),8);
    tracep->fullBit(oldp+4658,(vlSymsp->TOP__arraySlice.debug_0_44));
    tracep->fullBit(oldp+4659,(vlSymsp->TOP__arraySlice.debug_1_44));
    tracep->fullBit(oldp+4660,(vlSymsp->TOP__arraySlice.debug_2_44));
    tracep->fullBit(oldp+4661,(vlSymsp->TOP__arraySlice.debug_3_44));
    tracep->fullBit(oldp+4662,(vlSymsp->TOP__arraySlice.debug_4_44));
    tracep->fullBit(oldp+4663,(vlSymsp->TOP__arraySlice.debug_5_44));
    tracep->fullBit(oldp+4664,(vlSymsp->TOP__arraySlice.debug_6_44));
    tracep->fullBit(oldp+4665,(vlSymsp->TOP__arraySlice.debug_7_44));
    tracep->fullCData(oldp+4666,(vlSymsp->TOP__arraySlice.realValue_0_352),8);
    tracep->fullBit(oldp+4667,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_352) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4668,(vlSymsp->TOP__arraySlice.realValue_0_353),8);
    tracep->fullBit(oldp+4669,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_353) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4670,(vlSymsp->TOP__arraySlice.realValue_0_354),8);
    tracep->fullBit(oldp+4671,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_354) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4672,(vlSymsp->TOP__arraySlice.realValue_0_355),8);
    tracep->fullBit(oldp+4673,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_355) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_42(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_42\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4674,(vlSymsp->TOP__arraySlice.realValue_0_356),8);
    tracep->fullBit(oldp+4675,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_356) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4676,(vlSymsp->TOP__arraySlice.realValue_0_357),8);
    tracep->fullBit(oldp+4677,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_357) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4678,(vlSymsp->TOP__arraySlice.realValue_0_358),8);
    tracep->fullBit(oldp+4679,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_358) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4680,(vlSymsp->TOP__arraySlice.realValue_0_359),8);
    tracep->fullBit(oldp+4681,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_359) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4682,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4683,(vlSymsp->TOP__arraySlice.realValue1_0_43),8);
    tracep->fullBit(oldp+4684,(vlSymsp->TOP__arraySlice.debug_0_45));
    tracep->fullBit(oldp+4685,(vlSymsp->TOP__arraySlice.debug_1_45));
    tracep->fullBit(oldp+4686,(vlSymsp->TOP__arraySlice.debug_2_45));
    tracep->fullBit(oldp+4687,(vlSymsp->TOP__arraySlice.debug_3_45));
    tracep->fullBit(oldp+4688,(vlSymsp->TOP__arraySlice.debug_4_45));
    tracep->fullBit(oldp+4689,(vlSymsp->TOP__arraySlice.debug_5_45));
    tracep->fullBit(oldp+4690,(vlSymsp->TOP__arraySlice.debug_6_45));
    tracep->fullBit(oldp+4691,(vlSymsp->TOP__arraySlice.debug_7_45));
    tracep->fullCData(oldp+4692,(vlSymsp->TOP__arraySlice.realValue_0_360),8);
    tracep->fullBit(oldp+4693,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_360) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4694,(vlSymsp->TOP__arraySlice.realValue_0_361),8);
    tracep->fullBit(oldp+4695,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_361) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4696,(vlSymsp->TOP__arraySlice.realValue_0_362),8);
    tracep->fullBit(oldp+4697,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_362) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4698,(vlSymsp->TOP__arraySlice.realValue_0_363),8);
    tracep->fullBit(oldp+4699,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_363) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4700,(vlSymsp->TOP__arraySlice.realValue_0_364),8);
    tracep->fullBit(oldp+4701,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_364) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4702,(vlSymsp->TOP__arraySlice.realValue_0_365),8);
    tracep->fullBit(oldp+4703,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_365) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4704,(vlSymsp->TOP__arraySlice.realValue_0_366),8);
    tracep->fullBit(oldp+4705,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_366) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4706,(vlSymsp->TOP__arraySlice.realValue_0_367),8);
    tracep->fullBit(oldp+4707,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_367) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4708,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4709,(vlSymsp->TOP__arraySlice.realValue1_0_44),8);
    tracep->fullBit(oldp+4710,(vlSymsp->TOP__arraySlice.debug_0_46));
    tracep->fullBit(oldp+4711,(vlSymsp->TOP__arraySlice.debug_1_46));
    tracep->fullBit(oldp+4712,(vlSymsp->TOP__arraySlice.debug_2_46));
    tracep->fullBit(oldp+4713,(vlSymsp->TOP__arraySlice.debug_3_46));
    tracep->fullBit(oldp+4714,(vlSymsp->TOP__arraySlice.debug_4_46));
    tracep->fullBit(oldp+4715,(vlSymsp->TOP__arraySlice.debug_5_46));
    tracep->fullBit(oldp+4716,(vlSymsp->TOP__arraySlice.debug_6_46));
    tracep->fullBit(oldp+4717,(vlSymsp->TOP__arraySlice.debug_7_46));
    tracep->fullCData(oldp+4718,(vlSymsp->TOP__arraySlice.realValue_0_368),8);
    tracep->fullBit(oldp+4719,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_368) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4720,(vlSymsp->TOP__arraySlice.realValue_0_369),8);
    tracep->fullBit(oldp+4721,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_369) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4722,(vlSymsp->TOP__arraySlice.realValue_0_370),8);
    tracep->fullBit(oldp+4723,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_370) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4724,(vlSymsp->TOP__arraySlice.realValue_0_371),8);
    tracep->fullBit(oldp+4725,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_371) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4726,(vlSymsp->TOP__arraySlice.realValue_0_372),8);
    tracep->fullBit(oldp+4727,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_372) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4728,(vlSymsp->TOP__arraySlice.realValue_0_373),8);
    tracep->fullBit(oldp+4729,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_373) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4730,(vlSymsp->TOP__arraySlice.realValue_0_374),8);
    tracep->fullBit(oldp+4731,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_374) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4732,(vlSymsp->TOP__arraySlice.realValue_0_375),8);
    tracep->fullBit(oldp+4733,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_375) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4734,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_43(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_43\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4735,(vlSymsp->TOP__arraySlice.realValue1_0_45),8);
    tracep->fullBit(oldp+4736,(vlSymsp->TOP__arraySlice.debug_0_47));
    tracep->fullBit(oldp+4737,(vlSymsp->TOP__arraySlice.debug_1_47));
    tracep->fullBit(oldp+4738,(vlSymsp->TOP__arraySlice.debug_2_47));
    tracep->fullBit(oldp+4739,(vlSymsp->TOP__arraySlice.debug_3_47));
    tracep->fullBit(oldp+4740,(vlSymsp->TOP__arraySlice.debug_4_47));
    tracep->fullBit(oldp+4741,(vlSymsp->TOP__arraySlice.debug_5_47));
    tracep->fullBit(oldp+4742,(vlSymsp->TOP__arraySlice.debug_6_47));
    tracep->fullBit(oldp+4743,(vlSymsp->TOP__arraySlice.debug_7_47));
    tracep->fullCData(oldp+4744,(vlSymsp->TOP__arraySlice.realValue_0_376),8);
    tracep->fullBit(oldp+4745,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_376) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4746,(vlSymsp->TOP__arraySlice.realValue_0_377),8);
    tracep->fullBit(oldp+4747,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_377) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4748,(vlSymsp->TOP__arraySlice.realValue_0_378),8);
    tracep->fullBit(oldp+4749,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_378) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4750,(vlSymsp->TOP__arraySlice.realValue_0_379),8);
    tracep->fullBit(oldp+4751,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_379) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4752,(vlSymsp->TOP__arraySlice.realValue_0_380),8);
    tracep->fullBit(oldp+4753,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_380) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4754,(vlSymsp->TOP__arraySlice.realValue_0_381),8);
    tracep->fullBit(oldp+4755,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_381) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4756,(vlSymsp->TOP__arraySlice.realValue_0_382),8);
    tracep->fullBit(oldp+4757,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_382) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4758,(vlSymsp->TOP__arraySlice.realValue_0_383),8);
    tracep->fullBit(oldp+4759,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_383) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4760,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4761,(vlSymsp->TOP__arraySlice.realValue1_0_46),8);
    tracep->fullBit(oldp+4762,(vlSymsp->TOP__arraySlice.debug_0_48));
    tracep->fullBit(oldp+4763,(vlSymsp->TOP__arraySlice.debug_1_48));
    tracep->fullBit(oldp+4764,(vlSymsp->TOP__arraySlice.debug_2_48));
    tracep->fullBit(oldp+4765,(vlSymsp->TOP__arraySlice.debug_3_48));
    tracep->fullBit(oldp+4766,(vlSymsp->TOP__arraySlice.debug_4_48));
    tracep->fullBit(oldp+4767,(vlSymsp->TOP__arraySlice.debug_5_48));
    tracep->fullBit(oldp+4768,(vlSymsp->TOP__arraySlice.debug_6_48));
    tracep->fullBit(oldp+4769,(vlSymsp->TOP__arraySlice.debug_7_48));
    tracep->fullCData(oldp+4770,(vlSymsp->TOP__arraySlice.realValue_0_384),8);
    tracep->fullBit(oldp+4771,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_384) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4772,(vlSymsp->TOP__arraySlice.realValue_0_385),8);
    tracep->fullBit(oldp+4773,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_385) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4774,(vlSymsp->TOP__arraySlice.realValue_0_386),8);
    tracep->fullBit(oldp+4775,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_386) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4776,(vlSymsp->TOP__arraySlice.realValue_0_387),8);
    tracep->fullBit(oldp+4777,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_387) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4778,(vlSymsp->TOP__arraySlice.realValue_0_388),8);
    tracep->fullBit(oldp+4779,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_388) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4780,(vlSymsp->TOP__arraySlice.realValue_0_389),8);
    tracep->fullBit(oldp+4781,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_389) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4782,(vlSymsp->TOP__arraySlice.realValue_0_390),8);
    tracep->fullBit(oldp+4783,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_390) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4784,(vlSymsp->TOP__arraySlice.realValue_0_391),8);
    tracep->fullBit(oldp+4785,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_391) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4786,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4787,(vlSymsp->TOP__arraySlice.realValue1_0_47),8);
    tracep->fullBit(oldp+4788,(vlSymsp->TOP__arraySlice.debug_0_49));
    tracep->fullBit(oldp+4789,(vlSymsp->TOP__arraySlice.debug_1_49));
    tracep->fullBit(oldp+4790,(vlSymsp->TOP__arraySlice.debug_2_49));
    tracep->fullBit(oldp+4791,(vlSymsp->TOP__arraySlice.debug_3_49));
    tracep->fullBit(oldp+4792,(vlSymsp->TOP__arraySlice.debug_4_49));
    tracep->fullBit(oldp+4793,(vlSymsp->TOP__arraySlice.debug_5_49));
    tracep->fullBit(oldp+4794,(vlSymsp->TOP__arraySlice.debug_6_49));
    tracep->fullBit(oldp+4795,(vlSymsp->TOP__arraySlice.debug_7_49));
    tracep->fullCData(oldp+4796,(vlSymsp->TOP__arraySlice.realValue_0_392),8);
    tracep->fullBit(oldp+4797,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_392) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4798,(vlSymsp->TOP__arraySlice.realValue_0_393),8);
    tracep->fullBit(oldp+4799,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_393) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4800,(vlSymsp->TOP__arraySlice.realValue_0_394),8);
    tracep->fullBit(oldp+4801,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_394) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4802,(vlSymsp->TOP__arraySlice.realValue_0_395),8);
    tracep->fullBit(oldp+4803,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_395) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_44(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_44\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4804,(vlSymsp->TOP__arraySlice.realValue_0_396),8);
    tracep->fullBit(oldp+4805,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_396) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4806,(vlSymsp->TOP__arraySlice.realValue_0_397),8);
    tracep->fullBit(oldp+4807,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_397) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4808,(vlSymsp->TOP__arraySlice.realValue_0_398),8);
    tracep->fullBit(oldp+4809,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_398) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4810,(vlSymsp->TOP__arraySlice.realValue_0_399),8);
    tracep->fullBit(oldp+4811,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_399) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4812,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4813,((((IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l341) 
                                 == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__hReg) 
                                              - (IData)(1U)))) 
                                & ((IData)(vlSelf->inputStreamArrayData_valid) 
                                   & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready)))));
    tracep->fullBit(oldp+4814,(vlSymsp->TOP__arraySlice.debug_0_50));
    tracep->fullBit(oldp+4815,(vlSymsp->TOP__arraySlice.debug_1_50));
    tracep->fullBit(oldp+4816,(vlSymsp->TOP__arraySlice.debug_2_50));
    tracep->fullBit(oldp+4817,(vlSymsp->TOP__arraySlice.debug_3_50));
    tracep->fullBit(oldp+4818,(vlSymsp->TOP__arraySlice.debug_4_50));
    tracep->fullBit(oldp+4819,(vlSymsp->TOP__arraySlice.debug_5_50));
    tracep->fullBit(oldp+4820,(vlSymsp->TOP__arraySlice.debug_6_50));
    tracep->fullBit(oldp+4821,(vlSymsp->TOP__arraySlice.debug_7_50));
    tracep->fullCData(oldp+4822,(vlSymsp->TOP__arraySlice.realValue_0_400),8);
    tracep->fullBit(oldp+4823,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_400) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4824,(vlSymsp->TOP__arraySlice.realValue_0_401),8);
    tracep->fullBit(oldp+4825,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_401) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4826,(vlSymsp->TOP__arraySlice.realValue_0_402),8);
    tracep->fullBit(oldp+4827,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_402) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4828,(vlSymsp->TOP__arraySlice.realValue_0_403),8);
    tracep->fullBit(oldp+4829,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_403) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4830,(vlSymsp->TOP__arraySlice.realValue_0_404),8);
    tracep->fullBit(oldp+4831,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_404) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4832,(vlSymsp->TOP__arraySlice.realValue_0_405),8);
    tracep->fullBit(oldp+4833,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_405) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4834,(vlSymsp->TOP__arraySlice.realValue_0_406),8);
    tracep->fullBit(oldp+4835,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_406) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4836,(vlSymsp->TOP__arraySlice.realValue_0_407),8);
    tracep->fullBit(oldp+4837,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_407) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4838,((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4839,(vlSymsp->TOP__arraySlice.debug_0_51));
    tracep->fullBit(oldp+4840,(vlSymsp->TOP__arraySlice.debug_1_51));
    tracep->fullBit(oldp+4841,(vlSymsp->TOP__arraySlice.debug_2_51));
    tracep->fullBit(oldp+4842,(vlSymsp->TOP__arraySlice.debug_3_51));
    tracep->fullBit(oldp+4843,(vlSymsp->TOP__arraySlice.debug_4_51));
    tracep->fullBit(oldp+4844,(vlSymsp->TOP__arraySlice.debug_5_51));
    tracep->fullBit(oldp+4845,(vlSymsp->TOP__arraySlice.debug_6_51));
    tracep->fullBit(oldp+4846,(vlSymsp->TOP__arraySlice.debug_7_51));
    tracep->fullCData(oldp+4847,(vlSymsp->TOP__arraySlice.realValue_0_408),8);
    tracep->fullBit(oldp+4848,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_408) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4849,(vlSymsp->TOP__arraySlice.realValue_0_409),8);
    tracep->fullBit(oldp+4850,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_409) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4851,(vlSymsp->TOP__arraySlice.realValue_0_410),8);
    tracep->fullBit(oldp+4852,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_410) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4853,(vlSymsp->TOP__arraySlice.realValue_0_411),8);
    tracep->fullBit(oldp+4854,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_411) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4855,(vlSymsp->TOP__arraySlice.realValue_0_412),8);
    tracep->fullBit(oldp+4856,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_412) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4857,(vlSymsp->TOP__arraySlice.realValue_0_413),8);
    tracep->fullBit(oldp+4858,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_413) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4859,(vlSymsp->TOP__arraySlice.realValue_0_414),8);
    tracep->fullBit(oldp+4860,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_414) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4861,(vlSymsp->TOP__arraySlice.realValue_0_415),8);
    tracep->fullBit(oldp+4862,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_415) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4863,(((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
}
