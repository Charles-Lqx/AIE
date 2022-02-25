// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_36(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_36\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullSData(oldp+4701,(vlSymsp->TOP__arraySlice.realValue_0_142),9);
    tracep->fullBit(oldp+4702,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_142) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4703,(vlSymsp->TOP__arraySlice.realValue_0_143),9);
    tracep->fullBit(oldp+4704,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_143) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4705,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4706,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                                (0x3fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_5_ready)))));
    tracep->fullCData(oldp+4707,(vlSymsp->TOP__arraySlice.realValue1_0_17),8);
    tracep->fullBit(oldp+4708,(vlSymsp->TOP__arraySlice.debug_0_18));
    tracep->fullBit(oldp+4709,(vlSymsp->TOP__arraySlice.debug_1_18));
    tracep->fullBit(oldp+4710,(vlSymsp->TOP__arraySlice.debug_2_18));
    tracep->fullBit(oldp+4711,(vlSymsp->TOP__arraySlice.debug_3_18));
    tracep->fullBit(oldp+4712,(vlSymsp->TOP__arraySlice.debug_4_18));
    tracep->fullBit(oldp+4713,(vlSymsp->TOP__arraySlice.debug_5_18));
    tracep->fullBit(oldp+4714,(vlSymsp->TOP__arraySlice.debug_6_18));
    tracep->fullBit(oldp+4715,(vlSymsp->TOP__arraySlice.debug_7_18));
    tracep->fullSData(oldp+4716,(vlSymsp->TOP__arraySlice.realValue_0_144),9);
    tracep->fullBit(oldp+4717,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_144) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4718,(vlSymsp->TOP__arraySlice.realValue_0_145),9);
    tracep->fullBit(oldp+4719,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_145) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4720,(vlSymsp->TOP__arraySlice.realValue_0_146),9);
    tracep->fullBit(oldp+4721,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_146) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4722,(vlSymsp->TOP__arraySlice.realValue_0_147),9);
    tracep->fullBit(oldp+4723,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_147) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4724,(vlSymsp->TOP__arraySlice.realValue_0_148),9);
    tracep->fullBit(oldp+4725,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_148) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4726,(vlSymsp->TOP__arraySlice.realValue_0_149),9);
    tracep->fullBit(oldp+4727,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_149) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4728,(vlSymsp->TOP__arraySlice.realValue_0_150),9);
    tracep->fullBit(oldp+4729,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_150) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4730,(vlSymsp->TOP__arraySlice.realValue_0_151),9);
    tracep->fullBit(oldp+4731,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_151) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4732,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4733,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_6_ready))));
    tracep->fullCData(oldp+4734,(vlSymsp->TOP__arraySlice.realValue1_0_18),8);
    tracep->fullBit(oldp+4735,(vlSymsp->TOP__arraySlice.debug_0_19));
    tracep->fullBit(oldp+4736,(vlSymsp->TOP__arraySlice.debug_1_19));
    tracep->fullBit(oldp+4737,(vlSymsp->TOP__arraySlice.debug_2_19));
    tracep->fullBit(oldp+4738,(vlSymsp->TOP__arraySlice.debug_3_19));
    tracep->fullBit(oldp+4739,(vlSymsp->TOP__arraySlice.debug_4_19));
    tracep->fullBit(oldp+4740,(vlSymsp->TOP__arraySlice.debug_5_19));
    tracep->fullBit(oldp+4741,(vlSymsp->TOP__arraySlice.debug_6_19));
    tracep->fullBit(oldp+4742,(vlSymsp->TOP__arraySlice.debug_7_19));
    tracep->fullSData(oldp+4743,(vlSymsp->TOP__arraySlice.realValue_0_152),9);
    tracep->fullBit(oldp+4744,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_152) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4745,(vlSymsp->TOP__arraySlice.realValue_0_153),9);
    tracep->fullBit(oldp+4746,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_153) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4747,(vlSymsp->TOP__arraySlice.realValue_0_154),9);
    tracep->fullBit(oldp+4748,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_154) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4749,(vlSymsp->TOP__arraySlice.realValue_0_155),9);
    tracep->fullBit(oldp+4750,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_155) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4751,(vlSymsp->TOP__arraySlice.realValue_0_156),9);
    tracep->fullBit(oldp+4752,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_156) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4753,(vlSymsp->TOP__arraySlice.realValue_0_157),9);
    tracep->fullBit(oldp+4754,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_157) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4755,(vlSymsp->TOP__arraySlice.realValue_0_158),9);
    tracep->fullBit(oldp+4756,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_158) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4757,(vlSymsp->TOP__arraySlice.realValue_0_159),9);
    tracep->fullBit(oldp+4758,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_159) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4759,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_37(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_37\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4760,(vlSymsp->TOP__arraySlice.realValue1_0_19),8);
    tracep->fullBit(oldp+4761,(vlSymsp->TOP__arraySlice.debug_0_20));
    tracep->fullBit(oldp+4762,(vlSymsp->TOP__arraySlice.debug_1_20));
    tracep->fullBit(oldp+4763,(vlSymsp->TOP__arraySlice.debug_2_20));
    tracep->fullBit(oldp+4764,(vlSymsp->TOP__arraySlice.debug_3_20));
    tracep->fullBit(oldp+4765,(vlSymsp->TOP__arraySlice.debug_4_20));
    tracep->fullBit(oldp+4766,(vlSymsp->TOP__arraySlice.debug_5_20));
    tracep->fullBit(oldp+4767,(vlSymsp->TOP__arraySlice.debug_6_20));
    tracep->fullBit(oldp+4768,(vlSymsp->TOP__arraySlice.debug_7_20));
    tracep->fullSData(oldp+4769,(vlSymsp->TOP__arraySlice.realValue_0_160),9);
    tracep->fullBit(oldp+4770,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_160) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4771,(vlSymsp->TOP__arraySlice.realValue_0_161),9);
    tracep->fullBit(oldp+4772,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_161) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4773,(vlSymsp->TOP__arraySlice.realValue_0_162),9);
    tracep->fullBit(oldp+4774,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_162) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4775,(vlSymsp->TOP__arraySlice.realValue_0_163),9);
    tracep->fullBit(oldp+4776,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_163) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4777,(vlSymsp->TOP__arraySlice.realValue_0_164),9);
    tracep->fullBit(oldp+4778,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_164) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4779,(vlSymsp->TOP__arraySlice.realValue_0_165),9);
    tracep->fullBit(oldp+4780,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_165) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4781,(vlSymsp->TOP__arraySlice.realValue_0_166),9);
    tracep->fullBit(oldp+4782,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_166) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4783,(vlSymsp->TOP__arraySlice.realValue_0_167),9);
    tracep->fullBit(oldp+4784,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_167) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4785,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4786,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                                (0x3fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_6_ready)))));
    tracep->fullCData(oldp+4787,(vlSymsp->TOP__arraySlice.realValue1_0_20),8);
    tracep->fullBit(oldp+4788,(vlSymsp->TOP__arraySlice.debug_0_21));
    tracep->fullBit(oldp+4789,(vlSymsp->TOP__arraySlice.debug_1_21));
    tracep->fullBit(oldp+4790,(vlSymsp->TOP__arraySlice.debug_2_21));
    tracep->fullBit(oldp+4791,(vlSymsp->TOP__arraySlice.debug_3_21));
    tracep->fullBit(oldp+4792,(vlSymsp->TOP__arraySlice.debug_4_21));
    tracep->fullBit(oldp+4793,(vlSymsp->TOP__arraySlice.debug_5_21));
    tracep->fullBit(oldp+4794,(vlSymsp->TOP__arraySlice.debug_6_21));
    tracep->fullBit(oldp+4795,(vlSymsp->TOP__arraySlice.debug_7_21));
    tracep->fullSData(oldp+4796,(vlSymsp->TOP__arraySlice.realValue_0_168),9);
    tracep->fullBit(oldp+4797,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_168) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4798,(vlSymsp->TOP__arraySlice.realValue_0_169),9);
    tracep->fullBit(oldp+4799,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_169) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4800,(vlSymsp->TOP__arraySlice.realValue_0_170),9);
    tracep->fullBit(oldp+4801,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_170) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4802,(vlSymsp->TOP__arraySlice.realValue_0_171),9);
    tracep->fullBit(oldp+4803,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_171) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4804,(vlSymsp->TOP__arraySlice.realValue_0_172),9);
    tracep->fullBit(oldp+4805,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_172) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4806,(vlSymsp->TOP__arraySlice.realValue_0_173),9);
    tracep->fullBit(oldp+4807,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_173) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4808,(vlSymsp->TOP__arraySlice.realValue_0_174),9);
    tracep->fullBit(oldp+4809,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_174) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4810,(vlSymsp->TOP__arraySlice.realValue_0_175),9);
    tracep->fullBit(oldp+4811,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_175) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_21) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_21)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_21)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_21)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_21)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_21)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_21)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_21)))))));
    tracep->fullBit(oldp+4813,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_7_ready))));
    tracep->fullCData(oldp+4814,(vlSymsp->TOP__arraySlice.realValue1_0_21),8);
    tracep->fullBit(oldp+4815,(vlSymsp->TOP__arraySlice.debug_0_22));
    tracep->fullBit(oldp+4816,(vlSymsp->TOP__arraySlice.debug_1_22));
    tracep->fullBit(oldp+4817,(vlSymsp->TOP__arraySlice.debug_2_22));
    tracep->fullBit(oldp+4818,(vlSymsp->TOP__arraySlice.debug_3_22));
    tracep->fullBit(oldp+4819,(vlSymsp->TOP__arraySlice.debug_4_22));
    tracep->fullBit(oldp+4820,(vlSymsp->TOP__arraySlice.debug_5_22));
    tracep->fullBit(oldp+4821,(vlSymsp->TOP__arraySlice.debug_6_22));
    tracep->fullBit(oldp+4822,(vlSymsp->TOP__arraySlice.debug_7_22));
    tracep->fullSData(oldp+4823,(vlSymsp->TOP__arraySlice.realValue_0_176),9);
    tracep->fullBit(oldp+4824,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_176) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4825,(vlSymsp->TOP__arraySlice.realValue_0_177),9);
    tracep->fullBit(oldp+4826,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_177) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4827,(vlSymsp->TOP__arraySlice.realValue_0_178),9);
    tracep->fullBit(oldp+4828,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_178) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4829,(vlSymsp->TOP__arraySlice.realValue_0_179),9);
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_38(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_38\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+4830,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_179) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4831,(vlSymsp->TOP__arraySlice.realValue_0_180),9);
    tracep->fullBit(oldp+4832,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_180) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4833,(vlSymsp->TOP__arraySlice.realValue_0_181),9);
    tracep->fullBit(oldp+4834,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_181) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4835,(vlSymsp->TOP__arraySlice.realValue_0_182),9);
    tracep->fullBit(oldp+4836,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_182) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4837,(vlSymsp->TOP__arraySlice.realValue_0_183),9);
    tracep->fullBit(oldp+4838,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_183) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4839,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4840,(vlSymsp->TOP__arraySlice.realValue1_0_22),8);
    tracep->fullBit(oldp+4841,(vlSymsp->TOP__arraySlice.debug_0_23));
    tracep->fullBit(oldp+4842,(vlSymsp->TOP__arraySlice.debug_1_23));
    tracep->fullBit(oldp+4843,(vlSymsp->TOP__arraySlice.debug_2_23));
    tracep->fullBit(oldp+4844,(vlSymsp->TOP__arraySlice.debug_3_23));
    tracep->fullBit(oldp+4845,(vlSymsp->TOP__arraySlice.debug_4_23));
    tracep->fullBit(oldp+4846,(vlSymsp->TOP__arraySlice.debug_5_23));
    tracep->fullBit(oldp+4847,(vlSymsp->TOP__arraySlice.debug_6_23));
    tracep->fullBit(oldp+4848,(vlSymsp->TOP__arraySlice.debug_7_23));
    tracep->fullSData(oldp+4849,(vlSymsp->TOP__arraySlice.realValue_0_184),9);
    tracep->fullBit(oldp+4850,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_184) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4851,(vlSymsp->TOP__arraySlice.realValue_0_185),9);
    tracep->fullBit(oldp+4852,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_185) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4853,(vlSymsp->TOP__arraySlice.realValue_0_186),9);
    tracep->fullBit(oldp+4854,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_186) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4855,(vlSymsp->TOP__arraySlice.realValue_0_187),9);
    tracep->fullBit(oldp+4856,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_187) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4857,(vlSymsp->TOP__arraySlice.realValue_0_188),9);
    tracep->fullBit(oldp+4858,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_188) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4859,(vlSymsp->TOP__arraySlice.realValue_0_189),9);
    tracep->fullBit(oldp+4860,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_189) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4861,(vlSymsp->TOP__arraySlice.realValue_0_190),9);
    tracep->fullBit(oldp+4862,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_190) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4863,(vlSymsp->TOP__arraySlice.realValue_0_191),9);
    tracep->fullBit(oldp+4864,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_191) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4865,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4866,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                                (0x3fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_7_ready)))));
    tracep->fullCData(oldp+4867,(vlSymsp->TOP__arraySlice.realValue1_0_23),8);
    tracep->fullBit(oldp+4868,(vlSymsp->TOP__arraySlice.debug_0_24));
    tracep->fullBit(oldp+4869,(vlSymsp->TOP__arraySlice.debug_1_24));
    tracep->fullBit(oldp+4870,(vlSymsp->TOP__arraySlice.debug_2_24));
    tracep->fullBit(oldp+4871,(vlSymsp->TOP__arraySlice.debug_3_24));
    tracep->fullBit(oldp+4872,(vlSymsp->TOP__arraySlice.debug_4_24));
    tracep->fullBit(oldp+4873,(vlSymsp->TOP__arraySlice.debug_5_24));
    tracep->fullBit(oldp+4874,(vlSymsp->TOP__arraySlice.debug_6_24));
    tracep->fullBit(oldp+4875,(vlSymsp->TOP__arraySlice.debug_7_24));
    tracep->fullSData(oldp+4876,(vlSymsp->TOP__arraySlice.realValue_0_192),9);
    tracep->fullBit(oldp+4877,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_192) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4878,(vlSymsp->TOP__arraySlice.realValue_0_193),9);
    tracep->fullBit(oldp+4879,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_193) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4880,(vlSymsp->TOP__arraySlice.realValue_0_194),9);
    tracep->fullBit(oldp+4881,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_194) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4882,(vlSymsp->TOP__arraySlice.realValue_0_195),9);
    tracep->fullBit(oldp+4883,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_195) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4884,(vlSymsp->TOP__arraySlice.realValue_0_196),9);
    tracep->fullBit(oldp+4885,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_196) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4886,(vlSymsp->TOP__arraySlice.realValue_0_197),9);
    tracep->fullBit(oldp+4887,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_197) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4888,(vlSymsp->TOP__arraySlice.realValue_0_198),9);
    tracep->fullBit(oldp+4889,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_198) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_39(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_39\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullSData(oldp+4890,(vlSymsp->TOP__arraySlice.realValue_0_199),9);
    tracep->fullBit(oldp+4891,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_199) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4892,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4893,(vlSymsp->TOP__arraySlice.debug_0_25));
    tracep->fullBit(oldp+4894,(vlSymsp->TOP__arraySlice.debug_1_25));
    tracep->fullBit(oldp+4895,(vlSymsp->TOP__arraySlice.debug_2_25));
    tracep->fullBit(oldp+4896,(vlSymsp->TOP__arraySlice.debug_3_25));
    tracep->fullBit(oldp+4897,(vlSymsp->TOP__arraySlice.debug_4_25));
    tracep->fullBit(oldp+4898,(vlSymsp->TOP__arraySlice.debug_5_25));
    tracep->fullBit(oldp+4899,(vlSymsp->TOP__arraySlice.debug_6_25));
    tracep->fullBit(oldp+4900,(vlSymsp->TOP__arraySlice.debug_7_25));
    tracep->fullSData(oldp+4901,(vlSymsp->TOP__arraySlice.realValue_0_200),9);
    tracep->fullBit(oldp+4902,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_200) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4903,(vlSymsp->TOP__arraySlice.realValue_0_201),9);
    tracep->fullBit(oldp+4904,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_201) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4905,(vlSymsp->TOP__arraySlice.realValue_0_202),9);
    tracep->fullBit(oldp+4906,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_202) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4907,(vlSymsp->TOP__arraySlice.realValue_0_203),9);
    tracep->fullBit(oldp+4908,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_203) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4909,(vlSymsp->TOP__arraySlice.realValue_0_204),9);
    tracep->fullBit(oldp+4910,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_204) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4911,(vlSymsp->TOP__arraySlice.realValue_0_205),9);
    tracep->fullBit(oldp+4912,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_205) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4913,(vlSymsp->TOP__arraySlice.realValue_0_206),9);
    tracep->fullBit(oldp+4914,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_206) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4915,(vlSymsp->TOP__arraySlice.realValue_0_207),9);
    tracep->fullBit(oldp+4916,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_207) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4917,(vlSymsp->TOP__arraySlice.realValue1_0_24),8);
    tracep->fullBit(oldp+4918,(vlSymsp->TOP__arraySlice.debug_0_26));
    tracep->fullBit(oldp+4919,(vlSymsp->TOP__arraySlice.debug_1_26));
    tracep->fullBit(oldp+4920,(vlSymsp->TOP__arraySlice.debug_2_26));
    tracep->fullBit(oldp+4921,(vlSymsp->TOP__arraySlice.debug_3_26));
    tracep->fullBit(oldp+4922,(vlSymsp->TOP__arraySlice.debug_4_26));
    tracep->fullBit(oldp+4923,(vlSymsp->TOP__arraySlice.debug_5_26));
    tracep->fullBit(oldp+4924,(vlSymsp->TOP__arraySlice.debug_6_26));
    tracep->fullBit(oldp+4925,(vlSymsp->TOP__arraySlice.debug_7_26));
    tracep->fullSData(oldp+4926,(vlSymsp->TOP__arraySlice.realValue_0_208),9);
    tracep->fullBit(oldp+4927,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_208) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4928,(vlSymsp->TOP__arraySlice.realValue_0_209),9);
    tracep->fullBit(oldp+4929,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_209) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4930,(vlSymsp->TOP__arraySlice.realValue_0_210),9);
    tracep->fullBit(oldp+4931,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_210) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4932,(vlSymsp->TOP__arraySlice.realValue_0_211),9);
    tracep->fullBit(oldp+4933,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_211) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4934,(vlSymsp->TOP__arraySlice.realValue_0_212),9);
    tracep->fullBit(oldp+4935,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_212) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4936,(vlSymsp->TOP__arraySlice.realValue_0_213),9);
    tracep->fullBit(oldp+4937,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_213) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4938,(vlSymsp->TOP__arraySlice.realValue_0_214),9);
    tracep->fullBit(oldp+4939,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_214) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4940,(vlSymsp->TOP__arraySlice.realValue_0_215),9);
    tracep->fullBit(oldp+4941,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_215) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_26) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_26)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_26)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_26)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_26)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_26)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_26)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_26)))))));
    tracep->fullCData(oldp+4943,(vlSymsp->TOP__arraySlice.realValue1_0_25),8);
    tracep->fullBit(oldp+4944,(vlSymsp->TOP__arraySlice.debug_0_27));
    tracep->fullBit(oldp+4945,(vlSymsp->TOP__arraySlice.debug_1_27));
    tracep->fullBit(oldp+4946,(vlSymsp->TOP__arraySlice.debug_2_27));
    tracep->fullBit(oldp+4947,(vlSymsp->TOP__arraySlice.debug_3_27));
    tracep->fullBit(oldp+4948,(vlSymsp->TOP__arraySlice.debug_4_27));
    tracep->fullBit(oldp+4949,(vlSymsp->TOP__arraySlice.debug_5_27));
    tracep->fullBit(oldp+4950,(vlSymsp->TOP__arraySlice.debug_6_27));
    tracep->fullBit(oldp+4951,(vlSymsp->TOP__arraySlice.debug_7_27));
    tracep->fullSData(oldp+4952,(vlSymsp->TOP__arraySlice.realValue_0_216),9);
    tracep->fullBit(oldp+4953,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_216) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4954,(vlSymsp->TOP__arraySlice.realValue_0_217),9);
    tracep->fullBit(oldp+4955,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_217) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4956,(vlSymsp->TOP__arraySlice.realValue_0_218),9);
    tracep->fullBit(oldp+4957,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_218) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4958,(vlSymsp->TOP__arraySlice.realValue_0_219),9);
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_40(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_40\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+4959,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_219) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4960,(vlSymsp->TOP__arraySlice.realValue_0_220),9);
    tracep->fullBit(oldp+4961,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_220) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4962,(vlSymsp->TOP__arraySlice.realValue_0_221),9);
    tracep->fullBit(oldp+4963,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_221) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4964,(vlSymsp->TOP__arraySlice.realValue_0_222),9);
    tracep->fullBit(oldp+4965,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_222) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4966,(vlSymsp->TOP__arraySlice.realValue_0_223),9);
    tracep->fullBit(oldp+4967,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_223) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4968,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4969,(vlSymsp->TOP__arraySlice.realValue1_0_26),8);
    tracep->fullBit(oldp+4970,(vlSymsp->TOP__arraySlice.debug_0_28));
    tracep->fullBit(oldp+4971,(vlSymsp->TOP__arraySlice.debug_1_28));
    tracep->fullBit(oldp+4972,(vlSymsp->TOP__arraySlice.debug_2_28));
    tracep->fullBit(oldp+4973,(vlSymsp->TOP__arraySlice.debug_3_28));
    tracep->fullBit(oldp+4974,(vlSymsp->TOP__arraySlice.debug_4_28));
    tracep->fullBit(oldp+4975,(vlSymsp->TOP__arraySlice.debug_5_28));
    tracep->fullBit(oldp+4976,(vlSymsp->TOP__arraySlice.debug_6_28));
    tracep->fullBit(oldp+4977,(vlSymsp->TOP__arraySlice.debug_7_28));
    tracep->fullSData(oldp+4978,(vlSymsp->TOP__arraySlice.realValue_0_224),9);
    tracep->fullBit(oldp+4979,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_224) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4980,(vlSymsp->TOP__arraySlice.realValue_0_225),9);
    tracep->fullBit(oldp+4981,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_225) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4982,(vlSymsp->TOP__arraySlice.realValue_0_226),9);
    tracep->fullBit(oldp+4983,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_226) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4984,(vlSymsp->TOP__arraySlice.realValue_0_227),9);
    tracep->fullBit(oldp+4985,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_227) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4986,(vlSymsp->TOP__arraySlice.realValue_0_228),9);
    tracep->fullBit(oldp+4987,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_228) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4988,(vlSymsp->TOP__arraySlice.realValue_0_229),9);
    tracep->fullBit(oldp+4989,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_229) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4990,(vlSymsp->TOP__arraySlice.realValue_0_230),9);
    tracep->fullBit(oldp+4991,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_230) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+4992,(vlSymsp->TOP__arraySlice.realValue_0_231),9);
    tracep->fullBit(oldp+4993,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_231) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_28) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_28)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_28)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_28)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_28)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_28)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_28)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_28)))))));
    tracep->fullCData(oldp+4995,(vlSymsp->TOP__arraySlice.realValue1_0_27),8);
    tracep->fullBit(oldp+4996,(vlSymsp->TOP__arraySlice.debug_0_29));
    tracep->fullBit(oldp+4997,(vlSymsp->TOP__arraySlice.debug_1_29));
    tracep->fullBit(oldp+4998,(vlSymsp->TOP__arraySlice.debug_2_29));
    tracep->fullBit(oldp+4999,(vlSymsp->TOP__arraySlice.debug_3_29));
    tracep->fullBit(oldp+5000,(vlSymsp->TOP__arraySlice.debug_4_29));
    tracep->fullBit(oldp+5001,(vlSymsp->TOP__arraySlice.debug_5_29));
    tracep->fullBit(oldp+5002,(vlSymsp->TOP__arraySlice.debug_6_29));
    tracep->fullBit(oldp+5003,(vlSymsp->TOP__arraySlice.debug_7_29));
    tracep->fullSData(oldp+5004,(vlSymsp->TOP__arraySlice.realValue_0_232),9);
    tracep->fullBit(oldp+5005,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_232) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5006,(vlSymsp->TOP__arraySlice.realValue_0_233),9);
    tracep->fullBit(oldp+5007,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_233) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5008,(vlSymsp->TOP__arraySlice.realValue_0_234),9);
    tracep->fullBit(oldp+5009,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_234) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5010,(vlSymsp->TOP__arraySlice.realValue_0_235),9);
    tracep->fullBit(oldp+5011,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_235) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5012,(vlSymsp->TOP__arraySlice.realValue_0_236),9);
    tracep->fullBit(oldp+5013,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_236) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5014,(vlSymsp->TOP__arraySlice.realValue_0_237),9);
    tracep->fullBit(oldp+5015,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_237) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5016,(vlSymsp->TOP__arraySlice.realValue_0_238),9);
    tracep->fullBit(oldp+5017,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_238) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5018,(vlSymsp->TOP__arraySlice.realValue_0_239),9);
    tracep->fullBit(oldp+5019,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_239) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_41(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_41\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+5020,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5021,(vlSymsp->TOP__arraySlice.realValue1_0_28),8);
    tracep->fullBit(oldp+5022,(vlSymsp->TOP__arraySlice.debug_0_30));
    tracep->fullBit(oldp+5023,(vlSymsp->TOP__arraySlice.debug_1_30));
    tracep->fullBit(oldp+5024,(vlSymsp->TOP__arraySlice.debug_2_30));
    tracep->fullBit(oldp+5025,(vlSymsp->TOP__arraySlice.debug_3_30));
    tracep->fullBit(oldp+5026,(vlSymsp->TOP__arraySlice.debug_4_30));
    tracep->fullBit(oldp+5027,(vlSymsp->TOP__arraySlice.debug_5_30));
    tracep->fullBit(oldp+5028,(vlSymsp->TOP__arraySlice.debug_6_30));
    tracep->fullBit(oldp+5029,(vlSymsp->TOP__arraySlice.debug_7_30));
    tracep->fullSData(oldp+5030,(vlSymsp->TOP__arraySlice.realValue_0_240),9);
    tracep->fullBit(oldp+5031,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_240) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5032,(vlSymsp->TOP__arraySlice.realValue_0_241),9);
    tracep->fullBit(oldp+5033,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_241) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5034,(vlSymsp->TOP__arraySlice.realValue_0_242),9);
    tracep->fullBit(oldp+5035,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_242) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5036,(vlSymsp->TOP__arraySlice.realValue_0_243),9);
    tracep->fullBit(oldp+5037,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_243) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5038,(vlSymsp->TOP__arraySlice.realValue_0_244),9);
    tracep->fullBit(oldp+5039,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_244) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5040,(vlSymsp->TOP__arraySlice.realValue_0_245),9);
    tracep->fullBit(oldp+5041,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_245) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5042,(vlSymsp->TOP__arraySlice.realValue_0_246),9);
    tracep->fullBit(oldp+5043,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_246) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5044,(vlSymsp->TOP__arraySlice.realValue_0_247),9);
    tracep->fullBit(oldp+5045,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_247) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_30) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_30)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_30)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_30)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_30)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_30)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_30)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_30)))))));
    tracep->fullCData(oldp+5047,(vlSymsp->TOP__arraySlice.realValue1_0_29),8);
    tracep->fullBit(oldp+5048,(vlSymsp->TOP__arraySlice.debug_0_31));
    tracep->fullBit(oldp+5049,(vlSymsp->TOP__arraySlice.debug_1_31));
    tracep->fullBit(oldp+5050,(vlSymsp->TOP__arraySlice.debug_2_31));
    tracep->fullBit(oldp+5051,(vlSymsp->TOP__arraySlice.debug_3_31));
    tracep->fullBit(oldp+5052,(vlSymsp->TOP__arraySlice.debug_4_31));
    tracep->fullBit(oldp+5053,(vlSymsp->TOP__arraySlice.debug_5_31));
    tracep->fullBit(oldp+5054,(vlSymsp->TOP__arraySlice.debug_6_31));
    tracep->fullBit(oldp+5055,(vlSymsp->TOP__arraySlice.debug_7_31));
    tracep->fullSData(oldp+5056,(vlSymsp->TOP__arraySlice.realValue_0_248),9);
    tracep->fullBit(oldp+5057,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_248) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5058,(vlSymsp->TOP__arraySlice.realValue_0_249),9);
    tracep->fullBit(oldp+5059,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_249) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5060,(vlSymsp->TOP__arraySlice.realValue_0_250),9);
    tracep->fullBit(oldp+5061,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_250) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5062,(vlSymsp->TOP__arraySlice.realValue_0_251),9);
    tracep->fullBit(oldp+5063,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_251) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5064,(vlSymsp->TOP__arraySlice.realValue_0_252),9);
    tracep->fullBit(oldp+5065,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_252) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5066,(vlSymsp->TOP__arraySlice.realValue_0_253),9);
    tracep->fullBit(oldp+5067,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_253) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5068,(vlSymsp->TOP__arraySlice.realValue_0_254),9);
    tracep->fullBit(oldp+5069,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_254) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5070,(vlSymsp->TOP__arraySlice.realValue_0_255),9);
    tracep->fullBit(oldp+5071,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_255) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_31) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_31)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_31)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_31)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_31)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_31)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_31)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_31)))))));
    tracep->fullCData(oldp+5073,(vlSymsp->TOP__arraySlice.realValue1_0_30),8);
    tracep->fullBit(oldp+5074,(vlSymsp->TOP__arraySlice.debug_0_32));
    tracep->fullBit(oldp+5075,(vlSymsp->TOP__arraySlice.debug_1_32));
    tracep->fullBit(oldp+5076,(vlSymsp->TOP__arraySlice.debug_2_32));
    tracep->fullBit(oldp+5077,(vlSymsp->TOP__arraySlice.debug_3_32));
    tracep->fullBit(oldp+5078,(vlSymsp->TOP__arraySlice.debug_4_32));
    tracep->fullBit(oldp+5079,(vlSymsp->TOP__arraySlice.debug_5_32));
    tracep->fullBit(oldp+5080,(vlSymsp->TOP__arraySlice.debug_6_32));
    tracep->fullBit(oldp+5081,(vlSymsp->TOP__arraySlice.debug_7_32));
    tracep->fullSData(oldp+5082,(vlSymsp->TOP__arraySlice.realValue_0_256),9);
    tracep->fullBit(oldp+5083,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_256) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5084,(vlSymsp->TOP__arraySlice.realValue_0_257),9);
    tracep->fullBit(oldp+5085,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_257) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5086,(vlSymsp->TOP__arraySlice.realValue_0_258),9);
    tracep->fullBit(oldp+5087,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_258) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_42(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_42\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullSData(oldp+5088,(vlSymsp->TOP__arraySlice.realValue_0_259),9);
    tracep->fullBit(oldp+5089,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_259) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5090,(vlSymsp->TOP__arraySlice.realValue_0_260),9);
    tracep->fullBit(oldp+5091,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_260) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5092,(vlSymsp->TOP__arraySlice.realValue_0_261),9);
    tracep->fullBit(oldp+5093,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_261) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5094,(vlSymsp->TOP__arraySlice.realValue_0_262),9);
    tracep->fullBit(oldp+5095,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_262) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5096,(vlSymsp->TOP__arraySlice.realValue_0_263),9);
    tracep->fullBit(oldp+5097,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_263) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5098,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5099,(vlSymsp->TOP__arraySlice.realValue1_0_31),8);
    tracep->fullBit(oldp+5100,(vlSymsp->TOP__arraySlice.debug_0_33));
    tracep->fullBit(oldp+5101,(vlSymsp->TOP__arraySlice.debug_1_33));
    tracep->fullBit(oldp+5102,(vlSymsp->TOP__arraySlice.debug_2_33));
    tracep->fullBit(oldp+5103,(vlSymsp->TOP__arraySlice.debug_3_33));
    tracep->fullBit(oldp+5104,(vlSymsp->TOP__arraySlice.debug_4_33));
    tracep->fullBit(oldp+5105,(vlSymsp->TOP__arraySlice.debug_5_33));
    tracep->fullBit(oldp+5106,(vlSymsp->TOP__arraySlice.debug_6_33));
    tracep->fullBit(oldp+5107,(vlSymsp->TOP__arraySlice.debug_7_33));
    tracep->fullSData(oldp+5108,(vlSymsp->TOP__arraySlice.realValue_0_264),9);
    tracep->fullBit(oldp+5109,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_264) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5110,(vlSymsp->TOP__arraySlice.realValue_0_265),9);
    tracep->fullBit(oldp+5111,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_265) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5112,(vlSymsp->TOP__arraySlice.realValue_0_266),9);
    tracep->fullBit(oldp+5113,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_266) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5114,(vlSymsp->TOP__arraySlice.realValue_0_267),9);
    tracep->fullBit(oldp+5115,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_267) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5116,(vlSymsp->TOP__arraySlice.realValue_0_268),9);
    tracep->fullBit(oldp+5117,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_268) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5118,(vlSymsp->TOP__arraySlice.realValue_0_269),9);
    tracep->fullBit(oldp+5119,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_269) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5120,(vlSymsp->TOP__arraySlice.realValue_0_270),9);
    tracep->fullBit(oldp+5121,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_270) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5122,(vlSymsp->TOP__arraySlice.realValue_0_271),9);
    tracep->fullBit(oldp+5123,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_271) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_33) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_33)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_33)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_33)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_33)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_33)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_33)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_33)))))));
    tracep->fullCData(oldp+5125,(vlSymsp->TOP__arraySlice.realValue1_0_32),8);
    tracep->fullBit(oldp+5126,(vlSymsp->TOP__arraySlice.debug_0_34));
    tracep->fullBit(oldp+5127,(vlSymsp->TOP__arraySlice.debug_1_34));
    tracep->fullBit(oldp+5128,(vlSymsp->TOP__arraySlice.debug_2_34));
    tracep->fullBit(oldp+5129,(vlSymsp->TOP__arraySlice.debug_3_34));
    tracep->fullBit(oldp+5130,(vlSymsp->TOP__arraySlice.debug_4_34));
    tracep->fullBit(oldp+5131,(vlSymsp->TOP__arraySlice.debug_5_34));
    tracep->fullBit(oldp+5132,(vlSymsp->TOP__arraySlice.debug_6_34));
    tracep->fullBit(oldp+5133,(vlSymsp->TOP__arraySlice.debug_7_34));
    tracep->fullSData(oldp+5134,(vlSymsp->TOP__arraySlice.realValue_0_272),9);
    tracep->fullBit(oldp+5135,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_272) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5136,(vlSymsp->TOP__arraySlice.realValue_0_273),9);
    tracep->fullBit(oldp+5137,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_273) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5138,(vlSymsp->TOP__arraySlice.realValue_0_274),9);
    tracep->fullBit(oldp+5139,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_274) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5140,(vlSymsp->TOP__arraySlice.realValue_0_275),9);
    tracep->fullBit(oldp+5141,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_275) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5142,(vlSymsp->TOP__arraySlice.realValue_0_276),9);
    tracep->fullBit(oldp+5143,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_276) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5144,(vlSymsp->TOP__arraySlice.realValue_0_277),9);
    tracep->fullBit(oldp+5145,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_277) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5146,(vlSymsp->TOP__arraySlice.realValue_0_278),9);
    tracep->fullBit(oldp+5147,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_278) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5148,(vlSymsp->TOP__arraySlice.realValue_0_279),9);
    tracep->fullBit(oldp+5149,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_279) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_43(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_43\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+5150,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+5151,(vlSymsp->TOP__arraySlice.realValue1_0_33),8);
    tracep->fullBit(oldp+5152,(vlSymsp->TOP__arraySlice.debug_0_35));
    tracep->fullBit(oldp+5153,(vlSymsp->TOP__arraySlice.debug_1_35));
    tracep->fullBit(oldp+5154,(vlSymsp->TOP__arraySlice.debug_2_35));
    tracep->fullBit(oldp+5155,(vlSymsp->TOP__arraySlice.debug_3_35));
    tracep->fullBit(oldp+5156,(vlSymsp->TOP__arraySlice.debug_4_35));
    tracep->fullBit(oldp+5157,(vlSymsp->TOP__arraySlice.debug_5_35));
    tracep->fullBit(oldp+5158,(vlSymsp->TOP__arraySlice.debug_6_35));
    tracep->fullBit(oldp+5159,(vlSymsp->TOP__arraySlice.debug_7_35));
    tracep->fullSData(oldp+5160,(vlSymsp->TOP__arraySlice.realValue_0_280),9);
    tracep->fullBit(oldp+5161,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_280) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5162,(vlSymsp->TOP__arraySlice.realValue_0_281),9);
    tracep->fullBit(oldp+5163,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_281) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5164,(vlSymsp->TOP__arraySlice.realValue_0_282),9);
    tracep->fullBit(oldp+5165,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_282) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5166,(vlSymsp->TOP__arraySlice.realValue_0_283),9);
    tracep->fullBit(oldp+5167,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_283) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5168,(vlSymsp->TOP__arraySlice.realValue_0_284),9);
    tracep->fullBit(oldp+5169,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_284) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5170,(vlSymsp->TOP__arraySlice.realValue_0_285),9);
    tracep->fullBit(oldp+5171,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_285) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5172,(vlSymsp->TOP__arraySlice.realValue_0_286),9);
    tracep->fullBit(oldp+5173,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_286) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5174,(vlSymsp->TOP__arraySlice.realValue_0_287),9);
    tracep->fullBit(oldp+5175,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_287) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_35) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_35)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_35)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_35)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_35)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_35)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_35)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_35)))))));
    tracep->fullCData(oldp+5177,(vlSymsp->TOP__arraySlice.realValue1_0_34),8);
    tracep->fullBit(oldp+5178,(vlSymsp->TOP__arraySlice.debug_0_36));
    tracep->fullBit(oldp+5179,(vlSymsp->TOP__arraySlice.debug_1_36));
    tracep->fullBit(oldp+5180,(vlSymsp->TOP__arraySlice.debug_2_36));
    tracep->fullBit(oldp+5181,(vlSymsp->TOP__arraySlice.debug_3_36));
    tracep->fullBit(oldp+5182,(vlSymsp->TOP__arraySlice.debug_4_36));
    tracep->fullBit(oldp+5183,(vlSymsp->TOP__arraySlice.debug_5_36));
    tracep->fullBit(oldp+5184,(vlSymsp->TOP__arraySlice.debug_6_36));
    tracep->fullBit(oldp+5185,(vlSymsp->TOP__arraySlice.debug_7_36));
    tracep->fullSData(oldp+5186,(vlSymsp->TOP__arraySlice.realValue_0_288),9);
    tracep->fullBit(oldp+5187,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_288) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5188,(vlSymsp->TOP__arraySlice.realValue_0_289),9);
    tracep->fullBit(oldp+5189,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_289) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5190,(vlSymsp->TOP__arraySlice.realValue_0_290),9);
    tracep->fullBit(oldp+5191,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_290) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5192,(vlSymsp->TOP__arraySlice.realValue_0_291),9);
    tracep->fullBit(oldp+5193,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_291) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5194,(vlSymsp->TOP__arraySlice.realValue_0_292),9);
    tracep->fullBit(oldp+5195,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_292) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5196,(vlSymsp->TOP__arraySlice.realValue_0_293),9);
    tracep->fullBit(oldp+5197,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_293) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5198,(vlSymsp->TOP__arraySlice.realValue_0_294),9);
    tracep->fullBit(oldp+5199,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_294) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5200,(vlSymsp->TOP__arraySlice.realValue_0_295),9);
    tracep->fullBit(oldp+5201,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_295) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_36) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_36)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_36)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_36)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_36)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_36)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_36)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_36)))))));
    tracep->fullCData(oldp+5203,(vlSymsp->TOP__arraySlice.realValue1_0_35),8);
    tracep->fullBit(oldp+5204,(vlSymsp->TOP__arraySlice.debug_0_37));
    tracep->fullBit(oldp+5205,(vlSymsp->TOP__arraySlice.debug_1_37));
    tracep->fullBit(oldp+5206,(vlSymsp->TOP__arraySlice.debug_2_37));
    tracep->fullBit(oldp+5207,(vlSymsp->TOP__arraySlice.debug_3_37));
    tracep->fullBit(oldp+5208,(vlSymsp->TOP__arraySlice.debug_4_37));
    tracep->fullBit(oldp+5209,(vlSymsp->TOP__arraySlice.debug_5_37));
    tracep->fullBit(oldp+5210,(vlSymsp->TOP__arraySlice.debug_6_37));
    tracep->fullBit(oldp+5211,(vlSymsp->TOP__arraySlice.debug_7_37));
    tracep->fullSData(oldp+5212,(vlSymsp->TOP__arraySlice.realValue_0_296),9);
    tracep->fullBit(oldp+5213,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_296) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5214,(vlSymsp->TOP__arraySlice.realValue_0_297),9);
    tracep->fullBit(oldp+5215,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_297) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5216,(vlSymsp->TOP__arraySlice.realValue_0_298),9);
    tracep->fullBit(oldp+5217,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_298) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}
