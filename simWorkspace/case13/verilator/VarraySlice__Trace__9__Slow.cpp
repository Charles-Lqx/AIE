// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_37(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_37\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+4648,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_187) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4649,(vlSymsp->TOP__arraySlice.realValue_0_188),8);
    tracep->fullBit(oldp+4650,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_188) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4651,(vlSymsp->TOP__arraySlice.realValue_0_189),8);
    tracep->fullBit(oldp+4652,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_189) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4653,(vlSymsp->TOP__arraySlice.realValue_0_190),8);
    tracep->fullBit(oldp+4654,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_190) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4655,(vlSymsp->TOP__arraySlice.realValue_0_191),8);
    tracep->fullBit(oldp+4656,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_191) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4657,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4658,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                                (0x1fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_7_ready)))));
    tracep->fullCData(oldp+4659,(vlSymsp->TOP__arraySlice.realValue1_0_23),7);
    tracep->fullBit(oldp+4660,(vlSymsp->TOP__arraySlice.debug_0_24));
    tracep->fullBit(oldp+4661,(vlSymsp->TOP__arraySlice.debug_1_24));
    tracep->fullBit(oldp+4662,(vlSymsp->TOP__arraySlice.debug_2_24));
    tracep->fullBit(oldp+4663,(vlSymsp->TOP__arraySlice.debug_3_24));
    tracep->fullBit(oldp+4664,(vlSymsp->TOP__arraySlice.debug_4_24));
    tracep->fullBit(oldp+4665,(vlSymsp->TOP__arraySlice.debug_5_24));
    tracep->fullBit(oldp+4666,(vlSymsp->TOP__arraySlice.debug_6_24));
    tracep->fullBit(oldp+4667,(vlSymsp->TOP__arraySlice.debug_7_24));
    tracep->fullCData(oldp+4668,(vlSymsp->TOP__arraySlice.realValue_0_192),8);
    tracep->fullBit(oldp+4669,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_192) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4670,(vlSymsp->TOP__arraySlice.realValue_0_193),8);
    tracep->fullBit(oldp+4671,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_193) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4672,(vlSymsp->TOP__arraySlice.realValue_0_194),8);
    tracep->fullBit(oldp+4673,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_194) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4674,(vlSymsp->TOP__arraySlice.realValue_0_195),8);
    tracep->fullBit(oldp+4675,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_195) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4676,(vlSymsp->TOP__arraySlice.realValue_0_196),8);
    tracep->fullBit(oldp+4677,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_196) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4678,(vlSymsp->TOP__arraySlice.realValue_0_197),8);
    tracep->fullBit(oldp+4679,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_197) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4680,(vlSymsp->TOP__arraySlice.realValue_0_198),8);
    tracep->fullBit(oldp+4681,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_198) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4682,(vlSymsp->TOP__arraySlice.realValue_0_199),8);
    tracep->fullBit(oldp+4683,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_199) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4684,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4685,(vlSymsp->TOP__arraySlice.debug_0_25));
    tracep->fullBit(oldp+4686,(vlSymsp->TOP__arraySlice.debug_1_25));
    tracep->fullBit(oldp+4687,(vlSymsp->TOP__arraySlice.debug_2_25));
    tracep->fullBit(oldp+4688,(vlSymsp->TOP__arraySlice.debug_3_25));
    tracep->fullBit(oldp+4689,(vlSymsp->TOP__arraySlice.debug_4_25));
    tracep->fullBit(oldp+4690,(vlSymsp->TOP__arraySlice.debug_5_25));
    tracep->fullBit(oldp+4691,(vlSymsp->TOP__arraySlice.debug_6_25));
    tracep->fullBit(oldp+4692,(vlSymsp->TOP__arraySlice.debug_7_25));
    tracep->fullCData(oldp+4693,(vlSymsp->TOP__arraySlice.realValue_0_200),8);
    tracep->fullBit(oldp+4694,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_200) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4695,(vlSymsp->TOP__arraySlice.realValue_0_201),8);
    tracep->fullBit(oldp+4696,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_201) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4697,(vlSymsp->TOP__arraySlice.realValue_0_202),8);
    tracep->fullBit(oldp+4698,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_202) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4699,(vlSymsp->TOP__arraySlice.realValue_0_203),8);
    tracep->fullBit(oldp+4700,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_203) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4701,(vlSymsp->TOP__arraySlice.realValue_0_204),8);
    tracep->fullBit(oldp+4702,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_204) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4703,(vlSymsp->TOP__arraySlice.realValue_0_205),8);
    tracep->fullBit(oldp+4704,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_205) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4705,(vlSymsp->TOP__arraySlice.realValue_0_206),8);
    tracep->fullBit(oldp+4706,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_206) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_38(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_38\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4707,(vlSymsp->TOP__arraySlice.realValue_0_207),8);
    tracep->fullBit(oldp+4708,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_207) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4709,(vlSymsp->TOP__arraySlice.realValue1_0_24),7);
    tracep->fullBit(oldp+4710,(vlSymsp->TOP__arraySlice.debug_0_26));
    tracep->fullBit(oldp+4711,(vlSymsp->TOP__arraySlice.debug_1_26));
    tracep->fullBit(oldp+4712,(vlSymsp->TOP__arraySlice.debug_2_26));
    tracep->fullBit(oldp+4713,(vlSymsp->TOP__arraySlice.debug_3_26));
    tracep->fullBit(oldp+4714,(vlSymsp->TOP__arraySlice.debug_4_26));
    tracep->fullBit(oldp+4715,(vlSymsp->TOP__arraySlice.debug_5_26));
    tracep->fullBit(oldp+4716,(vlSymsp->TOP__arraySlice.debug_6_26));
    tracep->fullBit(oldp+4717,(vlSymsp->TOP__arraySlice.debug_7_26));
    tracep->fullCData(oldp+4718,(vlSymsp->TOP__arraySlice.realValue_0_208),8);
    tracep->fullBit(oldp+4719,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_208) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4720,(vlSymsp->TOP__arraySlice.realValue_0_209),8);
    tracep->fullBit(oldp+4721,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_209) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4722,(vlSymsp->TOP__arraySlice.realValue_0_210),8);
    tracep->fullBit(oldp+4723,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_210) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4724,(vlSymsp->TOP__arraySlice.realValue_0_211),8);
    tracep->fullBit(oldp+4725,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_211) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4726,(vlSymsp->TOP__arraySlice.realValue_0_212),8);
    tracep->fullBit(oldp+4727,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_212) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4728,(vlSymsp->TOP__arraySlice.realValue_0_213),8);
    tracep->fullBit(oldp+4729,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_213) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4730,(vlSymsp->TOP__arraySlice.realValue_0_214),8);
    tracep->fullBit(oldp+4731,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_214) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4732,(vlSymsp->TOP__arraySlice.realValue_0_215),8);
    tracep->fullBit(oldp+4733,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_215) 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_26) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_26)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_26)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_26)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_26)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_26)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_26)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_26)))))));
    tracep->fullCData(oldp+4735,(vlSymsp->TOP__arraySlice.realValue1_0_25),7);
    tracep->fullBit(oldp+4736,(vlSymsp->TOP__arraySlice.debug_0_27));
    tracep->fullBit(oldp+4737,(vlSymsp->TOP__arraySlice.debug_1_27));
    tracep->fullBit(oldp+4738,(vlSymsp->TOP__arraySlice.debug_2_27));
    tracep->fullBit(oldp+4739,(vlSymsp->TOP__arraySlice.debug_3_27));
    tracep->fullBit(oldp+4740,(vlSymsp->TOP__arraySlice.debug_4_27));
    tracep->fullBit(oldp+4741,(vlSymsp->TOP__arraySlice.debug_5_27));
    tracep->fullBit(oldp+4742,(vlSymsp->TOP__arraySlice.debug_6_27));
    tracep->fullBit(oldp+4743,(vlSymsp->TOP__arraySlice.debug_7_27));
    tracep->fullCData(oldp+4744,(vlSymsp->TOP__arraySlice.realValue_0_216),8);
    tracep->fullBit(oldp+4745,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_216) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4746,(vlSymsp->TOP__arraySlice.realValue_0_217),8);
    tracep->fullBit(oldp+4747,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_217) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4748,(vlSymsp->TOP__arraySlice.realValue_0_218),8);
    tracep->fullBit(oldp+4749,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_218) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4750,(vlSymsp->TOP__arraySlice.realValue_0_219),8);
    tracep->fullBit(oldp+4751,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_219) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4752,(vlSymsp->TOP__arraySlice.realValue_0_220),8);
    tracep->fullBit(oldp+4753,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_220) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4754,(vlSymsp->TOP__arraySlice.realValue_0_221),8);
    tracep->fullBit(oldp+4755,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_221) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4756,(vlSymsp->TOP__arraySlice.realValue_0_222),8);
    tracep->fullBit(oldp+4757,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_222) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4758,(vlSymsp->TOP__arraySlice.realValue_0_223),8);
    tracep->fullBit(oldp+4759,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_223) 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_27) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_27)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_27)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_27)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_27)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_27)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_27)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_27)))))));
    tracep->fullCData(oldp+4761,(vlSymsp->TOP__arraySlice.realValue1_0_26),7);
    tracep->fullBit(oldp+4762,(vlSymsp->TOP__arraySlice.debug_0_28));
    tracep->fullBit(oldp+4763,(vlSymsp->TOP__arraySlice.debug_1_28));
    tracep->fullBit(oldp+4764,(vlSymsp->TOP__arraySlice.debug_2_28));
    tracep->fullBit(oldp+4765,(vlSymsp->TOP__arraySlice.debug_3_28));
    tracep->fullBit(oldp+4766,(vlSymsp->TOP__arraySlice.debug_4_28));
    tracep->fullBit(oldp+4767,(vlSymsp->TOP__arraySlice.debug_5_28));
    tracep->fullBit(oldp+4768,(vlSymsp->TOP__arraySlice.debug_6_28));
    tracep->fullBit(oldp+4769,(vlSymsp->TOP__arraySlice.debug_7_28));
    tracep->fullCData(oldp+4770,(vlSymsp->TOP__arraySlice.realValue_0_224),8);
    tracep->fullBit(oldp+4771,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_224) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4772,(vlSymsp->TOP__arraySlice.realValue_0_225),8);
    tracep->fullBit(oldp+4773,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_225) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4774,(vlSymsp->TOP__arraySlice.realValue_0_226),8);
    tracep->fullBit(oldp+4775,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_226) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_39(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_39\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4776,(vlSymsp->TOP__arraySlice.realValue_0_227),8);
    tracep->fullBit(oldp+4777,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_227) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4778,(vlSymsp->TOP__arraySlice.realValue_0_228),8);
    tracep->fullBit(oldp+4779,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_228) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4780,(vlSymsp->TOP__arraySlice.realValue_0_229),8);
    tracep->fullBit(oldp+4781,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_229) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4782,(vlSymsp->TOP__arraySlice.realValue_0_230),8);
    tracep->fullBit(oldp+4783,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_230) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4784,(vlSymsp->TOP__arraySlice.realValue_0_231),8);
    tracep->fullBit(oldp+4785,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_231) 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_28) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_28)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_28)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_28)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_28)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_28)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_28)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_28)))))));
    tracep->fullCData(oldp+4787,(vlSymsp->TOP__arraySlice.realValue1_0_27),7);
    tracep->fullBit(oldp+4788,(vlSymsp->TOP__arraySlice.debug_0_29));
    tracep->fullBit(oldp+4789,(vlSymsp->TOP__arraySlice.debug_1_29));
    tracep->fullBit(oldp+4790,(vlSymsp->TOP__arraySlice.debug_2_29));
    tracep->fullBit(oldp+4791,(vlSymsp->TOP__arraySlice.debug_3_29));
    tracep->fullBit(oldp+4792,(vlSymsp->TOP__arraySlice.debug_4_29));
    tracep->fullBit(oldp+4793,(vlSymsp->TOP__arraySlice.debug_5_29));
    tracep->fullBit(oldp+4794,(vlSymsp->TOP__arraySlice.debug_6_29));
    tracep->fullBit(oldp+4795,(vlSymsp->TOP__arraySlice.debug_7_29));
    tracep->fullCData(oldp+4796,(vlSymsp->TOP__arraySlice.realValue_0_232),8);
    tracep->fullBit(oldp+4797,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_232) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4798,(vlSymsp->TOP__arraySlice.realValue_0_233),8);
    tracep->fullBit(oldp+4799,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_233) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4800,(vlSymsp->TOP__arraySlice.realValue_0_234),8);
    tracep->fullBit(oldp+4801,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_234) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4802,(vlSymsp->TOP__arraySlice.realValue_0_235),8);
    tracep->fullBit(oldp+4803,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_235) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4804,(vlSymsp->TOP__arraySlice.realValue_0_236),8);
    tracep->fullBit(oldp+4805,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_236) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4806,(vlSymsp->TOP__arraySlice.realValue_0_237),8);
    tracep->fullBit(oldp+4807,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_237) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4808,(vlSymsp->TOP__arraySlice.realValue_0_238),8);
    tracep->fullBit(oldp+4809,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_238) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4810,(vlSymsp->TOP__arraySlice.realValue_0_239),8);
    tracep->fullBit(oldp+4811,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_239) 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_29) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_29)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_29)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_29)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_29)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_29)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_29)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_29)))))));
    tracep->fullCData(oldp+4813,(vlSymsp->TOP__arraySlice.realValue1_0_28),7);
    tracep->fullBit(oldp+4814,(vlSymsp->TOP__arraySlice.debug_0_30));
    tracep->fullBit(oldp+4815,(vlSymsp->TOP__arraySlice.debug_1_30));
    tracep->fullBit(oldp+4816,(vlSymsp->TOP__arraySlice.debug_2_30));
    tracep->fullBit(oldp+4817,(vlSymsp->TOP__arraySlice.debug_3_30));
    tracep->fullBit(oldp+4818,(vlSymsp->TOP__arraySlice.debug_4_30));
    tracep->fullBit(oldp+4819,(vlSymsp->TOP__arraySlice.debug_5_30));
    tracep->fullBit(oldp+4820,(vlSymsp->TOP__arraySlice.debug_6_30));
    tracep->fullBit(oldp+4821,(vlSymsp->TOP__arraySlice.debug_7_30));
    tracep->fullCData(oldp+4822,(vlSymsp->TOP__arraySlice.realValue_0_240),8);
    tracep->fullBit(oldp+4823,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_240) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4824,(vlSymsp->TOP__arraySlice.realValue_0_241),8);
    tracep->fullBit(oldp+4825,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_241) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4826,(vlSymsp->TOP__arraySlice.realValue_0_242),8);
    tracep->fullBit(oldp+4827,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_242) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4828,(vlSymsp->TOP__arraySlice.realValue_0_243),8);
    tracep->fullBit(oldp+4829,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_243) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4830,(vlSymsp->TOP__arraySlice.realValue_0_244),8);
    tracep->fullBit(oldp+4831,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_244) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4832,(vlSymsp->TOP__arraySlice.realValue_0_245),8);
    tracep->fullBit(oldp+4833,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_245) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4834,(vlSymsp->TOP__arraySlice.realValue_0_246),8);
    tracep->fullBit(oldp+4835,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_246) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4836,(vlSymsp->TOP__arraySlice.realValue_0_247),8);
    tracep->fullBit(oldp+4837,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_247) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
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
    tracep->fullBit(oldp+4838,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_30) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_30)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_30)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_30)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_30)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_30)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_30)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_30)))))));
    tracep->fullCData(oldp+4839,(vlSymsp->TOP__arraySlice.realValue1_0_29),7);
    tracep->fullBit(oldp+4840,(vlSymsp->TOP__arraySlice.debug_0_31));
    tracep->fullBit(oldp+4841,(vlSymsp->TOP__arraySlice.debug_1_31));
    tracep->fullBit(oldp+4842,(vlSymsp->TOP__arraySlice.debug_2_31));
    tracep->fullBit(oldp+4843,(vlSymsp->TOP__arraySlice.debug_3_31));
    tracep->fullBit(oldp+4844,(vlSymsp->TOP__arraySlice.debug_4_31));
    tracep->fullBit(oldp+4845,(vlSymsp->TOP__arraySlice.debug_5_31));
    tracep->fullBit(oldp+4846,(vlSymsp->TOP__arraySlice.debug_6_31));
    tracep->fullBit(oldp+4847,(vlSymsp->TOP__arraySlice.debug_7_31));
    tracep->fullCData(oldp+4848,(vlSymsp->TOP__arraySlice.realValue_0_248),8);
    tracep->fullBit(oldp+4849,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_248) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4850,(vlSymsp->TOP__arraySlice.realValue_0_249),8);
    tracep->fullBit(oldp+4851,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_249) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4852,(vlSymsp->TOP__arraySlice.realValue_0_250),8);
    tracep->fullBit(oldp+4853,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_250) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4854,(vlSymsp->TOP__arraySlice.realValue_0_251),8);
    tracep->fullBit(oldp+4855,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_251) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4856,(vlSymsp->TOP__arraySlice.realValue_0_252),8);
    tracep->fullBit(oldp+4857,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_252) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4858,(vlSymsp->TOP__arraySlice.realValue_0_253),8);
    tracep->fullBit(oldp+4859,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_253) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4860,(vlSymsp->TOP__arraySlice.realValue_0_254),8);
    tracep->fullBit(oldp+4861,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_254) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4862,(vlSymsp->TOP__arraySlice.realValue_0_255),8);
    tracep->fullBit(oldp+4863,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_255) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4864,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_31) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_31)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_31)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_31)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_31)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_31)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_31)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_31)))))));
    tracep->fullCData(oldp+4865,(vlSymsp->TOP__arraySlice.realValue1_0_30),7);
    tracep->fullBit(oldp+4866,(vlSymsp->TOP__arraySlice.debug_0_32));
    tracep->fullBit(oldp+4867,(vlSymsp->TOP__arraySlice.debug_1_32));
    tracep->fullBit(oldp+4868,(vlSymsp->TOP__arraySlice.debug_2_32));
    tracep->fullBit(oldp+4869,(vlSymsp->TOP__arraySlice.debug_3_32));
    tracep->fullBit(oldp+4870,(vlSymsp->TOP__arraySlice.debug_4_32));
    tracep->fullBit(oldp+4871,(vlSymsp->TOP__arraySlice.debug_5_32));
    tracep->fullBit(oldp+4872,(vlSymsp->TOP__arraySlice.debug_6_32));
    tracep->fullBit(oldp+4873,(vlSymsp->TOP__arraySlice.debug_7_32));
    tracep->fullCData(oldp+4874,(vlSymsp->TOP__arraySlice.realValue_0_256),8);
    tracep->fullBit(oldp+4875,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_256) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4876,(vlSymsp->TOP__arraySlice.realValue_0_257),8);
    tracep->fullBit(oldp+4877,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_257) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4878,(vlSymsp->TOP__arraySlice.realValue_0_258),8);
    tracep->fullBit(oldp+4879,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_258) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4880,(vlSymsp->TOP__arraySlice.realValue_0_259),8);
    tracep->fullBit(oldp+4881,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_259) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4882,(vlSymsp->TOP__arraySlice.realValue_0_260),8);
    tracep->fullBit(oldp+4883,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_260) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4884,(vlSymsp->TOP__arraySlice.realValue_0_261),8);
    tracep->fullBit(oldp+4885,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_261) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4886,(vlSymsp->TOP__arraySlice.realValue_0_262),8);
    tracep->fullBit(oldp+4887,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_262) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4888,(vlSymsp->TOP__arraySlice.realValue_0_263),8);
    tracep->fullBit(oldp+4889,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_263) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4890,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_32) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_32)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_32)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_32)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_32)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_32)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_32)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_32)))))));
    tracep->fullCData(oldp+4891,(vlSymsp->TOP__arraySlice.realValue1_0_31),7);
    tracep->fullBit(oldp+4892,(vlSymsp->TOP__arraySlice.debug_0_33));
    tracep->fullBit(oldp+4893,(vlSymsp->TOP__arraySlice.debug_1_33));
    tracep->fullBit(oldp+4894,(vlSymsp->TOP__arraySlice.debug_2_33));
    tracep->fullBit(oldp+4895,(vlSymsp->TOP__arraySlice.debug_3_33));
    tracep->fullBit(oldp+4896,(vlSymsp->TOP__arraySlice.debug_4_33));
    tracep->fullBit(oldp+4897,(vlSymsp->TOP__arraySlice.debug_5_33));
    tracep->fullBit(oldp+4898,(vlSymsp->TOP__arraySlice.debug_6_33));
    tracep->fullBit(oldp+4899,(vlSymsp->TOP__arraySlice.debug_7_33));
    tracep->fullCData(oldp+4900,(vlSymsp->TOP__arraySlice.realValue_0_264),8);
    tracep->fullBit(oldp+4901,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_264) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4902,(vlSymsp->TOP__arraySlice.realValue_0_265),8);
    tracep->fullBit(oldp+4903,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_265) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4904,(vlSymsp->TOP__arraySlice.realValue_0_266),8);
    tracep->fullBit(oldp+4905,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_266) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_41(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_41\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4906,(vlSymsp->TOP__arraySlice.realValue_0_267),8);
    tracep->fullBit(oldp+4907,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_267) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4908,(vlSymsp->TOP__arraySlice.realValue_0_268),8);
    tracep->fullBit(oldp+4909,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_268) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4910,(vlSymsp->TOP__arraySlice.realValue_0_269),8);
    tracep->fullBit(oldp+4911,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_269) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4912,(vlSymsp->TOP__arraySlice.realValue_0_270),8);
    tracep->fullBit(oldp+4913,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_270) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4914,(vlSymsp->TOP__arraySlice.realValue_0_271),8);
    tracep->fullBit(oldp+4915,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_271) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4916,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_33) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_33)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_33)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_33)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_33)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_33)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_33)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_33)))))));
    tracep->fullCData(oldp+4917,(vlSymsp->TOP__arraySlice.realValue1_0_32),7);
    tracep->fullBit(oldp+4918,(vlSymsp->TOP__arraySlice.debug_0_34));
    tracep->fullBit(oldp+4919,(vlSymsp->TOP__arraySlice.debug_1_34));
    tracep->fullBit(oldp+4920,(vlSymsp->TOP__arraySlice.debug_2_34));
    tracep->fullBit(oldp+4921,(vlSymsp->TOP__arraySlice.debug_3_34));
    tracep->fullBit(oldp+4922,(vlSymsp->TOP__arraySlice.debug_4_34));
    tracep->fullBit(oldp+4923,(vlSymsp->TOP__arraySlice.debug_5_34));
    tracep->fullBit(oldp+4924,(vlSymsp->TOP__arraySlice.debug_6_34));
    tracep->fullBit(oldp+4925,(vlSymsp->TOP__arraySlice.debug_7_34));
    tracep->fullCData(oldp+4926,(vlSymsp->TOP__arraySlice.realValue_0_272),8);
    tracep->fullBit(oldp+4927,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_272) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4928,(vlSymsp->TOP__arraySlice.realValue_0_273),8);
    tracep->fullBit(oldp+4929,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_273) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4930,(vlSymsp->TOP__arraySlice.realValue_0_274),8);
    tracep->fullBit(oldp+4931,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_274) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4932,(vlSymsp->TOP__arraySlice.realValue_0_275),8);
    tracep->fullBit(oldp+4933,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_275) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4934,(vlSymsp->TOP__arraySlice.realValue_0_276),8);
    tracep->fullBit(oldp+4935,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_276) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4936,(vlSymsp->TOP__arraySlice.realValue_0_277),8);
    tracep->fullBit(oldp+4937,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_277) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4938,(vlSymsp->TOP__arraySlice.realValue_0_278),8);
    tracep->fullBit(oldp+4939,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_278) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4940,(vlSymsp->TOP__arraySlice.realValue_0_279),8);
    tracep->fullBit(oldp+4941,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_279) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4942,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4943,(vlSymsp->TOP__arraySlice.realValue1_0_33),7);
    tracep->fullBit(oldp+4944,(vlSymsp->TOP__arraySlice.debug_0_35));
    tracep->fullBit(oldp+4945,(vlSymsp->TOP__arraySlice.debug_1_35));
    tracep->fullBit(oldp+4946,(vlSymsp->TOP__arraySlice.debug_2_35));
    tracep->fullBit(oldp+4947,(vlSymsp->TOP__arraySlice.debug_3_35));
    tracep->fullBit(oldp+4948,(vlSymsp->TOP__arraySlice.debug_4_35));
    tracep->fullBit(oldp+4949,(vlSymsp->TOP__arraySlice.debug_5_35));
    tracep->fullBit(oldp+4950,(vlSymsp->TOP__arraySlice.debug_6_35));
    tracep->fullBit(oldp+4951,(vlSymsp->TOP__arraySlice.debug_7_35));
    tracep->fullCData(oldp+4952,(vlSymsp->TOP__arraySlice.realValue_0_280),8);
    tracep->fullBit(oldp+4953,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_280) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4954,(vlSymsp->TOP__arraySlice.realValue_0_281),8);
    tracep->fullBit(oldp+4955,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_281) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4956,(vlSymsp->TOP__arraySlice.realValue_0_282),8);
    tracep->fullBit(oldp+4957,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_282) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4958,(vlSymsp->TOP__arraySlice.realValue_0_283),8);
    tracep->fullBit(oldp+4959,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_283) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4960,(vlSymsp->TOP__arraySlice.realValue_0_284),8);
    tracep->fullBit(oldp+4961,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_284) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4962,(vlSymsp->TOP__arraySlice.realValue_0_285),8);
    tracep->fullBit(oldp+4963,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_285) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4964,(vlSymsp->TOP__arraySlice.realValue_0_286),8);
    tracep->fullBit(oldp+4965,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_286) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4966,(vlSymsp->TOP__arraySlice.realValue_0_287),8);
    tracep->fullBit(oldp+4967,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_287) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
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
    tracep->fullBit(oldp+4968,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4969,(vlSymsp->TOP__arraySlice.realValue1_0_34),7);
    tracep->fullBit(oldp+4970,(vlSymsp->TOP__arraySlice.debug_0_36));
    tracep->fullBit(oldp+4971,(vlSymsp->TOP__arraySlice.debug_1_36));
    tracep->fullBit(oldp+4972,(vlSymsp->TOP__arraySlice.debug_2_36));
    tracep->fullBit(oldp+4973,(vlSymsp->TOP__arraySlice.debug_3_36));
    tracep->fullBit(oldp+4974,(vlSymsp->TOP__arraySlice.debug_4_36));
    tracep->fullBit(oldp+4975,(vlSymsp->TOP__arraySlice.debug_5_36));
    tracep->fullBit(oldp+4976,(vlSymsp->TOP__arraySlice.debug_6_36));
    tracep->fullBit(oldp+4977,(vlSymsp->TOP__arraySlice.debug_7_36));
    tracep->fullCData(oldp+4978,(vlSymsp->TOP__arraySlice.realValue_0_288),8);
    tracep->fullBit(oldp+4979,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_288) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4980,(vlSymsp->TOP__arraySlice.realValue_0_289),8);
    tracep->fullBit(oldp+4981,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_289) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4982,(vlSymsp->TOP__arraySlice.realValue_0_290),8);
    tracep->fullBit(oldp+4983,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_290) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4984,(vlSymsp->TOP__arraySlice.realValue_0_291),8);
    tracep->fullBit(oldp+4985,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_291) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4986,(vlSymsp->TOP__arraySlice.realValue_0_292),8);
    tracep->fullBit(oldp+4987,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_292) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4988,(vlSymsp->TOP__arraySlice.realValue_0_293),8);
    tracep->fullBit(oldp+4989,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_293) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4990,(vlSymsp->TOP__arraySlice.realValue_0_294),8);
    tracep->fullBit(oldp+4991,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_294) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4992,(vlSymsp->TOP__arraySlice.realValue_0_295),8);
    tracep->fullBit(oldp+4993,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_295) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4994,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4995,(vlSymsp->TOP__arraySlice.realValue1_0_35),7);
    tracep->fullBit(oldp+4996,(vlSymsp->TOP__arraySlice.debug_0_37));
    tracep->fullBit(oldp+4997,(vlSymsp->TOP__arraySlice.debug_1_37));
    tracep->fullBit(oldp+4998,(vlSymsp->TOP__arraySlice.debug_2_37));
    tracep->fullBit(oldp+4999,(vlSymsp->TOP__arraySlice.debug_3_37));
    tracep->fullBit(oldp+5000,(vlSymsp->TOP__arraySlice.debug_4_37));
    tracep->fullBit(oldp+5001,(vlSymsp->TOP__arraySlice.debug_5_37));
    tracep->fullBit(oldp+5002,(vlSymsp->TOP__arraySlice.debug_6_37));
    tracep->fullBit(oldp+5003,(vlSymsp->TOP__arraySlice.debug_7_37));
    tracep->fullCData(oldp+5004,(vlSymsp->TOP__arraySlice.realValue_0_296),8);
    tracep->fullBit(oldp+5005,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_296) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5006,(vlSymsp->TOP__arraySlice.realValue_0_297),8);
    tracep->fullBit(oldp+5007,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_297) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5008,(vlSymsp->TOP__arraySlice.realValue_0_298),8);
    tracep->fullBit(oldp+5009,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_298) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5010,(vlSymsp->TOP__arraySlice.realValue_0_299),8);
    tracep->fullBit(oldp+5011,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_299) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5012,(vlSymsp->TOP__arraySlice.realValue_0_300),8);
    tracep->fullBit(oldp+5013,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_300) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5014,(vlSymsp->TOP__arraySlice.realValue_0_301),8);
    tracep->fullBit(oldp+5015,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_301) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5016,(vlSymsp->TOP__arraySlice.realValue_0_302),8);
    tracep->fullBit(oldp+5017,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_302) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5018,(vlSymsp->TOP__arraySlice.realValue_0_303),8);
    tracep->fullBit(oldp+5019,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_303) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5020,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5021,(vlSymsp->TOP__arraySlice.realValue1_0_36),7);
    tracep->fullBit(oldp+5022,(vlSymsp->TOP__arraySlice.debug_0_38));
    tracep->fullBit(oldp+5023,(vlSymsp->TOP__arraySlice.debug_1_38));
    tracep->fullBit(oldp+5024,(vlSymsp->TOP__arraySlice.debug_2_38));
    tracep->fullBit(oldp+5025,(vlSymsp->TOP__arraySlice.debug_3_38));
    tracep->fullBit(oldp+5026,(vlSymsp->TOP__arraySlice.debug_4_38));
    tracep->fullBit(oldp+5027,(vlSymsp->TOP__arraySlice.debug_5_38));
    tracep->fullBit(oldp+5028,(vlSymsp->TOP__arraySlice.debug_6_38));
    tracep->fullBit(oldp+5029,(vlSymsp->TOP__arraySlice.debug_7_38));
    tracep->fullCData(oldp+5030,(vlSymsp->TOP__arraySlice.realValue_0_304),8);
    tracep->fullBit(oldp+5031,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_304) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5032,(vlSymsp->TOP__arraySlice.realValue_0_305),8);
    tracep->fullBit(oldp+5033,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_305) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5034,(vlSymsp->TOP__arraySlice.realValue_0_306),8);
    tracep->fullBit(oldp+5035,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_306) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_43(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_43\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+5036,(vlSymsp->TOP__arraySlice.realValue_0_307),8);
    tracep->fullBit(oldp+5037,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_307) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5038,(vlSymsp->TOP__arraySlice.realValue_0_308),8);
    tracep->fullBit(oldp+5039,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_308) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5040,(vlSymsp->TOP__arraySlice.realValue_0_309),8);
    tracep->fullBit(oldp+5041,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_309) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5042,(vlSymsp->TOP__arraySlice.realValue_0_310),8);
    tracep->fullBit(oldp+5043,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_310) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5044,(vlSymsp->TOP__arraySlice.realValue_0_311),8);
    tracep->fullBit(oldp+5045,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_311) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5046,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5047,(vlSymsp->TOP__arraySlice.realValue1_0_37),7);
    tracep->fullBit(oldp+5048,(vlSymsp->TOP__arraySlice.debug_0_39));
    tracep->fullBit(oldp+5049,(vlSymsp->TOP__arraySlice.debug_1_39));
    tracep->fullBit(oldp+5050,(vlSymsp->TOP__arraySlice.debug_2_39));
    tracep->fullBit(oldp+5051,(vlSymsp->TOP__arraySlice.debug_3_39));
    tracep->fullBit(oldp+5052,(vlSymsp->TOP__arraySlice.debug_4_39));
    tracep->fullBit(oldp+5053,(vlSymsp->TOP__arraySlice.debug_5_39));
    tracep->fullBit(oldp+5054,(vlSymsp->TOP__arraySlice.debug_6_39));
    tracep->fullBit(oldp+5055,(vlSymsp->TOP__arraySlice.debug_7_39));
    tracep->fullCData(oldp+5056,(vlSymsp->TOP__arraySlice.realValue_0_312),8);
    tracep->fullBit(oldp+5057,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_312) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5058,(vlSymsp->TOP__arraySlice.realValue_0_313),8);
    tracep->fullBit(oldp+5059,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_313) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5060,(vlSymsp->TOP__arraySlice.realValue_0_314),8);
    tracep->fullBit(oldp+5061,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_314) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5062,(vlSymsp->TOP__arraySlice.realValue_0_315),8);
    tracep->fullBit(oldp+5063,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_315) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5064,(vlSymsp->TOP__arraySlice.realValue_0_316),8);
    tracep->fullBit(oldp+5065,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_316) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5066,(vlSymsp->TOP__arraySlice.realValue_0_317),8);
    tracep->fullBit(oldp+5067,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_317) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5068,(vlSymsp->TOP__arraySlice.realValue_0_318),8);
    tracep->fullBit(oldp+5069,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_318) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5070,(vlSymsp->TOP__arraySlice.realValue_0_319),8);
    tracep->fullBit(oldp+5071,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_319) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5072,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5073,(vlSymsp->TOP__arraySlice.realValue1_0_38),7);
    tracep->fullBit(oldp+5074,(vlSymsp->TOP__arraySlice.debug_0_40));
    tracep->fullBit(oldp+5075,(vlSymsp->TOP__arraySlice.debug_1_40));
    tracep->fullBit(oldp+5076,(vlSymsp->TOP__arraySlice.debug_2_40));
    tracep->fullBit(oldp+5077,(vlSymsp->TOP__arraySlice.debug_3_40));
    tracep->fullBit(oldp+5078,(vlSymsp->TOP__arraySlice.debug_4_40));
    tracep->fullBit(oldp+5079,(vlSymsp->TOP__arraySlice.debug_5_40));
    tracep->fullBit(oldp+5080,(vlSymsp->TOP__arraySlice.debug_6_40));
    tracep->fullBit(oldp+5081,(vlSymsp->TOP__arraySlice.debug_7_40));
    tracep->fullCData(oldp+5082,(vlSymsp->TOP__arraySlice.realValue_0_320),8);
    tracep->fullBit(oldp+5083,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_320) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5084,(vlSymsp->TOP__arraySlice.realValue_0_321),8);
    tracep->fullBit(oldp+5085,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_321) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5086,(vlSymsp->TOP__arraySlice.realValue_0_322),8);
    tracep->fullBit(oldp+5087,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_322) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5088,(vlSymsp->TOP__arraySlice.realValue_0_323),8);
    tracep->fullBit(oldp+5089,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_323) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5090,(vlSymsp->TOP__arraySlice.realValue_0_324),8);
    tracep->fullBit(oldp+5091,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_324) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5092,(vlSymsp->TOP__arraySlice.realValue_0_325),8);
    tracep->fullBit(oldp+5093,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_325) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5094,(vlSymsp->TOP__arraySlice.realValue_0_326),8);
    tracep->fullBit(oldp+5095,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_326) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5096,(vlSymsp->TOP__arraySlice.realValue_0_327),8);
    tracep->fullBit(oldp+5097,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_327) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
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
    tracep->fullBit(oldp+5098,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5099,(vlSymsp->TOP__arraySlice.realValue1_0_39),7);
    tracep->fullBit(oldp+5100,(vlSymsp->TOP__arraySlice.debug_0_41));
    tracep->fullBit(oldp+5101,(vlSymsp->TOP__arraySlice.debug_1_41));
    tracep->fullBit(oldp+5102,(vlSymsp->TOP__arraySlice.debug_2_41));
    tracep->fullBit(oldp+5103,(vlSymsp->TOP__arraySlice.debug_3_41));
    tracep->fullBit(oldp+5104,(vlSymsp->TOP__arraySlice.debug_4_41));
    tracep->fullBit(oldp+5105,(vlSymsp->TOP__arraySlice.debug_5_41));
    tracep->fullBit(oldp+5106,(vlSymsp->TOP__arraySlice.debug_6_41));
    tracep->fullBit(oldp+5107,(vlSymsp->TOP__arraySlice.debug_7_41));
    tracep->fullCData(oldp+5108,(vlSymsp->TOP__arraySlice.realValue_0_328),8);
    tracep->fullBit(oldp+5109,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_328) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5110,(vlSymsp->TOP__arraySlice.realValue_0_329),8);
    tracep->fullBit(oldp+5111,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_329) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5112,(vlSymsp->TOP__arraySlice.realValue_0_330),8);
    tracep->fullBit(oldp+5113,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_330) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5114,(vlSymsp->TOP__arraySlice.realValue_0_331),8);
    tracep->fullBit(oldp+5115,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_331) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5116,(vlSymsp->TOP__arraySlice.realValue_0_332),8);
    tracep->fullBit(oldp+5117,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_332) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5118,(vlSymsp->TOP__arraySlice.realValue_0_333),8);
    tracep->fullBit(oldp+5119,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_333) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5120,(vlSymsp->TOP__arraySlice.realValue_0_334),8);
    tracep->fullBit(oldp+5121,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_334) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5122,(vlSymsp->TOP__arraySlice.realValue_0_335),8);
    tracep->fullBit(oldp+5123,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_335) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5124,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5125,(vlSymsp->TOP__arraySlice.realValue1_0_40),7);
    tracep->fullBit(oldp+5126,(vlSymsp->TOP__arraySlice.debug_0_42));
    tracep->fullBit(oldp+5127,(vlSymsp->TOP__arraySlice.debug_1_42));
    tracep->fullBit(oldp+5128,(vlSymsp->TOP__arraySlice.debug_2_42));
    tracep->fullBit(oldp+5129,(vlSymsp->TOP__arraySlice.debug_3_42));
    tracep->fullBit(oldp+5130,(vlSymsp->TOP__arraySlice.debug_4_42));
    tracep->fullBit(oldp+5131,(vlSymsp->TOP__arraySlice.debug_5_42));
    tracep->fullBit(oldp+5132,(vlSymsp->TOP__arraySlice.debug_6_42));
    tracep->fullBit(oldp+5133,(vlSymsp->TOP__arraySlice.debug_7_42));
    tracep->fullCData(oldp+5134,(vlSymsp->TOP__arraySlice.realValue_0_336),8);
    tracep->fullBit(oldp+5135,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_336) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5136,(vlSymsp->TOP__arraySlice.realValue_0_337),8);
    tracep->fullBit(oldp+5137,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_337) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5138,(vlSymsp->TOP__arraySlice.realValue_0_338),8);
    tracep->fullBit(oldp+5139,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_338) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5140,(vlSymsp->TOP__arraySlice.realValue_0_339),8);
    tracep->fullBit(oldp+5141,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_339) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5142,(vlSymsp->TOP__arraySlice.realValue_0_340),8);
    tracep->fullBit(oldp+5143,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_340) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5144,(vlSymsp->TOP__arraySlice.realValue_0_341),8);
    tracep->fullBit(oldp+5145,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_341) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5146,(vlSymsp->TOP__arraySlice.realValue_0_342),8);
    tracep->fullBit(oldp+5147,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_342) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5148,(vlSymsp->TOP__arraySlice.realValue_0_343),8);
    tracep->fullBit(oldp+5149,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_343) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5150,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5151,(vlSymsp->TOP__arraySlice.realValue1_0_41),7);
    tracep->fullBit(oldp+5152,(vlSymsp->TOP__arraySlice.debug_0_43));
    tracep->fullBit(oldp+5153,(vlSymsp->TOP__arraySlice.debug_1_43));
    tracep->fullBit(oldp+5154,(vlSymsp->TOP__arraySlice.debug_2_43));
    tracep->fullBit(oldp+5155,(vlSymsp->TOP__arraySlice.debug_3_43));
    tracep->fullBit(oldp+5156,(vlSymsp->TOP__arraySlice.debug_4_43));
    tracep->fullBit(oldp+5157,(vlSymsp->TOP__arraySlice.debug_5_43));
    tracep->fullBit(oldp+5158,(vlSymsp->TOP__arraySlice.debug_6_43));
    tracep->fullBit(oldp+5159,(vlSymsp->TOP__arraySlice.debug_7_43));
    tracep->fullCData(oldp+5160,(vlSymsp->TOP__arraySlice.realValue_0_344),8);
    tracep->fullBit(oldp+5161,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_344) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5162,(vlSymsp->TOP__arraySlice.realValue_0_345),8);
    tracep->fullBit(oldp+5163,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_345) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+5164,(vlSymsp->TOP__arraySlice.realValue_0_346),8);
    tracep->fullBit(oldp+5165,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_346) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}
