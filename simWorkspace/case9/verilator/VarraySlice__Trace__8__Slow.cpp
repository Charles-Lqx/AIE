// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_29(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_29\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4137,(vlSymsp->TOP__arraySlice.realValue_0_33),8);
    tracep->fullBit(oldp+4138,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_33) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4139,(vlSymsp->TOP__arraySlice.realValue_0_34),8);
    tracep->fullBit(oldp+4140,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_34) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4141,(vlSymsp->TOP__arraySlice.realValue_0_35),8);
    tracep->fullBit(oldp+4142,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_35) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4143,(vlSymsp->TOP__arraySlice.realValue_0_36),8);
    tracep->fullBit(oldp+4144,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_36) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4145,(vlSymsp->TOP__arraySlice.realValue_0_37),8);
    tracep->fullBit(oldp+4146,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_37) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4147,(vlSymsp->TOP__arraySlice.realValue_0_38),8);
    tracep->fullBit(oldp+4148,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_38) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4149,(vlSymsp->TOP__arraySlice.realValue_0_39),8);
    tracep->fullBit(oldp+4150,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_39) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4151,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4152,(vlSymsp->TOP__arraySlice.realValue1_0_4),8);
    tracep->fullBit(oldp+4153,(vlSymsp->TOP__arraySlice.debug_0_5));
    tracep->fullBit(oldp+4154,(vlSymsp->TOP__arraySlice.debug_1_5));
    tracep->fullBit(oldp+4155,(vlSymsp->TOP__arraySlice.debug_2_5));
    tracep->fullBit(oldp+4156,(vlSymsp->TOP__arraySlice.debug_3_5));
    tracep->fullBit(oldp+4157,(vlSymsp->TOP__arraySlice.debug_4_5));
    tracep->fullBit(oldp+4158,(vlSymsp->TOP__arraySlice.debug_5_5));
    tracep->fullBit(oldp+4159,(vlSymsp->TOP__arraySlice.debug_6_5));
    tracep->fullBit(oldp+4160,(vlSymsp->TOP__arraySlice.debug_7_5));
    tracep->fullCData(oldp+4161,(vlSymsp->TOP__arraySlice.realValue_0_40),8);
    tracep->fullBit(oldp+4162,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_40) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4163,(vlSymsp->TOP__arraySlice.realValue_0_41),8);
    tracep->fullBit(oldp+4164,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_41) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4165,(vlSymsp->TOP__arraySlice.realValue_0_42),8);
    tracep->fullBit(oldp+4166,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_42) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4167,(vlSymsp->TOP__arraySlice.realValue_0_43),8);
    tracep->fullBit(oldp+4168,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_43) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4169,(vlSymsp->TOP__arraySlice.realValue_0_44),8);
    tracep->fullBit(oldp+4170,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_44) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4171,(vlSymsp->TOP__arraySlice.realValue_0_45),8);
    tracep->fullBit(oldp+4172,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_45) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4173,(vlSymsp->TOP__arraySlice.realValue_0_46),8);
    tracep->fullBit(oldp+4174,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_46) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4175,(vlSymsp->TOP__arraySlice.realValue_0_47),8);
    tracep->fullBit(oldp+4176,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_47) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4177,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4178,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                                (0x3fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_1_ready)))));
    tracep->fullCData(oldp+4179,(vlSymsp->TOP__arraySlice.realValue1_0_5),8);
    tracep->fullBit(oldp+4180,(vlSymsp->TOP__arraySlice.debug_0_6));
    tracep->fullBit(oldp+4181,(vlSymsp->TOP__arraySlice.debug_1_6));
    tracep->fullBit(oldp+4182,(vlSymsp->TOP__arraySlice.debug_2_6));
    tracep->fullBit(oldp+4183,(vlSymsp->TOP__arraySlice.debug_3_6));
    tracep->fullBit(oldp+4184,(vlSymsp->TOP__arraySlice.debug_4_6));
    tracep->fullBit(oldp+4185,(vlSymsp->TOP__arraySlice.debug_5_6));
    tracep->fullBit(oldp+4186,(vlSymsp->TOP__arraySlice.debug_6_6));
    tracep->fullBit(oldp+4187,(vlSymsp->TOP__arraySlice.debug_7_6));
    tracep->fullCData(oldp+4188,(vlSymsp->TOP__arraySlice.realValue_0_48),8);
    tracep->fullBit(oldp+4189,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_48) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4190,(vlSymsp->TOP__arraySlice.realValue_0_49),8);
    tracep->fullBit(oldp+4191,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_49) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4192,(vlSymsp->TOP__arraySlice.realValue_0_50),8);
    tracep->fullBit(oldp+4193,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_50) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4194,(vlSymsp->TOP__arraySlice.realValue_0_51),8);
    tracep->fullBit(oldp+4195,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_51) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4196,(vlSymsp->TOP__arraySlice.realValue_0_52),8);
    tracep->fullBit(oldp+4197,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_52) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_30(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_30\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4198,(vlSymsp->TOP__arraySlice.realValue_0_53),8);
    tracep->fullBit(oldp+4199,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_53) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4200,(vlSymsp->TOP__arraySlice.realValue_0_54),8);
    tracep->fullBit(oldp+4201,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_54) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4202,(vlSymsp->TOP__arraySlice.realValue_0_55),8);
    tracep->fullBit(oldp+4203,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_55) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4204,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4205,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_2_ready))));
    tracep->fullCData(oldp+4206,(vlSymsp->TOP__arraySlice.realValue1_0_6),8);
    tracep->fullBit(oldp+4207,(vlSymsp->TOP__arraySlice.debug_0_7));
    tracep->fullBit(oldp+4208,(vlSymsp->TOP__arraySlice.debug_1_7));
    tracep->fullBit(oldp+4209,(vlSymsp->TOP__arraySlice.debug_2_7));
    tracep->fullBit(oldp+4210,(vlSymsp->TOP__arraySlice.debug_3_7));
    tracep->fullBit(oldp+4211,(vlSymsp->TOP__arraySlice.debug_4_7));
    tracep->fullBit(oldp+4212,(vlSymsp->TOP__arraySlice.debug_5_7));
    tracep->fullBit(oldp+4213,(vlSymsp->TOP__arraySlice.debug_6_7));
    tracep->fullBit(oldp+4214,(vlSymsp->TOP__arraySlice.debug_7_7));
    tracep->fullCData(oldp+4215,(vlSymsp->TOP__arraySlice.realValue_0_56),8);
    tracep->fullBit(oldp+4216,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_56) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4217,(vlSymsp->TOP__arraySlice.realValue_0_57),8);
    tracep->fullBit(oldp+4218,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_57) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4219,(vlSymsp->TOP__arraySlice.realValue_0_58),8);
    tracep->fullBit(oldp+4220,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_58) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4221,(vlSymsp->TOP__arraySlice.realValue_0_59),8);
    tracep->fullBit(oldp+4222,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_59) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4223,(vlSymsp->TOP__arraySlice.realValue_0_60),8);
    tracep->fullBit(oldp+4224,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_60) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4225,(vlSymsp->TOP__arraySlice.realValue_0_61),8);
    tracep->fullBit(oldp+4226,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_61) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4227,(vlSymsp->TOP__arraySlice.realValue_0_62),8);
    tracep->fullBit(oldp+4228,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_62) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4229,(vlSymsp->TOP__arraySlice.realValue_0_63),8);
    tracep->fullBit(oldp+4230,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_63) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4231,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4232,(vlSymsp->TOP__arraySlice.realValue1_0_7),8);
    tracep->fullBit(oldp+4233,(vlSymsp->TOP__arraySlice.debug_0_8));
    tracep->fullBit(oldp+4234,(vlSymsp->TOP__arraySlice.debug_1_8));
    tracep->fullBit(oldp+4235,(vlSymsp->TOP__arraySlice.debug_2_8));
    tracep->fullBit(oldp+4236,(vlSymsp->TOP__arraySlice.debug_3_8));
    tracep->fullBit(oldp+4237,(vlSymsp->TOP__arraySlice.debug_4_8));
    tracep->fullBit(oldp+4238,(vlSymsp->TOP__arraySlice.debug_5_8));
    tracep->fullBit(oldp+4239,(vlSymsp->TOP__arraySlice.debug_6_8));
    tracep->fullBit(oldp+4240,(vlSymsp->TOP__arraySlice.debug_7_8));
    tracep->fullCData(oldp+4241,(vlSymsp->TOP__arraySlice.realValue_0_64),8);
    tracep->fullBit(oldp+4242,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_64) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4243,(vlSymsp->TOP__arraySlice.realValue_0_65),8);
    tracep->fullBit(oldp+4244,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_65) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4245,(vlSymsp->TOP__arraySlice.realValue_0_66),8);
    tracep->fullBit(oldp+4246,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_66) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4247,(vlSymsp->TOP__arraySlice.realValue_0_67),8);
    tracep->fullBit(oldp+4248,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_67) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4249,(vlSymsp->TOP__arraySlice.realValue_0_68),8);
    tracep->fullBit(oldp+4250,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_68) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4251,(vlSymsp->TOP__arraySlice.realValue_0_69),8);
    tracep->fullBit(oldp+4252,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_69) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4253,(vlSymsp->TOP__arraySlice.realValue_0_70),8);
    tracep->fullBit(oldp+4254,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_70) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4255,(vlSymsp->TOP__arraySlice.realValue_0_71),8);
    tracep->fullBit(oldp+4256,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_71) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4257,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_31(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_31\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+4258,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                                (0x3fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_2_ready)))));
    tracep->fullCData(oldp+4259,(vlSymsp->TOP__arraySlice.realValue1_0_8),8);
    tracep->fullBit(oldp+4260,(vlSymsp->TOP__arraySlice.debug_0_9));
    tracep->fullBit(oldp+4261,(vlSymsp->TOP__arraySlice.debug_1_9));
    tracep->fullBit(oldp+4262,(vlSymsp->TOP__arraySlice.debug_2_9));
    tracep->fullBit(oldp+4263,(vlSymsp->TOP__arraySlice.debug_3_9));
    tracep->fullBit(oldp+4264,(vlSymsp->TOP__arraySlice.debug_4_9));
    tracep->fullBit(oldp+4265,(vlSymsp->TOP__arraySlice.debug_5_9));
    tracep->fullBit(oldp+4266,(vlSymsp->TOP__arraySlice.debug_6_9));
    tracep->fullBit(oldp+4267,(vlSymsp->TOP__arraySlice.debug_7_9));
    tracep->fullCData(oldp+4268,(vlSymsp->TOP__arraySlice.realValue_0_72),8);
    tracep->fullBit(oldp+4269,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_72) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4270,(vlSymsp->TOP__arraySlice.realValue_0_73),8);
    tracep->fullBit(oldp+4271,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_73) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4272,(vlSymsp->TOP__arraySlice.realValue_0_74),8);
    tracep->fullBit(oldp+4273,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_74) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4274,(vlSymsp->TOP__arraySlice.realValue_0_75),8);
    tracep->fullBit(oldp+4275,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_75) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4276,(vlSymsp->TOP__arraySlice.realValue_0_76),8);
    tracep->fullBit(oldp+4277,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_76) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4278,(vlSymsp->TOP__arraySlice.realValue_0_77),8);
    tracep->fullBit(oldp+4279,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_77) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4280,(vlSymsp->TOP__arraySlice.realValue_0_78),8);
    tracep->fullBit(oldp+4281,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_78) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4282,(vlSymsp->TOP__arraySlice.realValue_0_79),8);
    tracep->fullBit(oldp+4283,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_79) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4284,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4285,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_3_ready))));
    tracep->fullCData(oldp+4286,(vlSymsp->TOP__arraySlice.realValue1_0_9),8);
    tracep->fullBit(oldp+4287,(vlSymsp->TOP__arraySlice.debug_0_10));
    tracep->fullBit(oldp+4288,(vlSymsp->TOP__arraySlice.debug_1_10));
    tracep->fullBit(oldp+4289,(vlSymsp->TOP__arraySlice.debug_2_10));
    tracep->fullBit(oldp+4290,(vlSymsp->TOP__arraySlice.debug_3_10));
    tracep->fullBit(oldp+4291,(vlSymsp->TOP__arraySlice.debug_4_10));
    tracep->fullBit(oldp+4292,(vlSymsp->TOP__arraySlice.debug_5_10));
    tracep->fullBit(oldp+4293,(vlSymsp->TOP__arraySlice.debug_6_10));
    tracep->fullBit(oldp+4294,(vlSymsp->TOP__arraySlice.debug_7_10));
    tracep->fullCData(oldp+4295,(vlSymsp->TOP__arraySlice.realValue_0_80),8);
    tracep->fullBit(oldp+4296,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_80) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4297,(vlSymsp->TOP__arraySlice.realValue_0_81),8);
    tracep->fullBit(oldp+4298,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_81) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4299,(vlSymsp->TOP__arraySlice.realValue_0_82),8);
    tracep->fullBit(oldp+4300,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_82) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4301,(vlSymsp->TOP__arraySlice.realValue_0_83),8);
    tracep->fullBit(oldp+4302,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_83) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4303,(vlSymsp->TOP__arraySlice.realValue_0_84),8);
    tracep->fullBit(oldp+4304,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_84) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4305,(vlSymsp->TOP__arraySlice.realValue_0_85),8);
    tracep->fullBit(oldp+4306,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_85) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4307,(vlSymsp->TOP__arraySlice.realValue_0_86),8);
    tracep->fullBit(oldp+4308,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_86) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4309,(vlSymsp->TOP__arraySlice.realValue_0_87),8);
    tracep->fullBit(oldp+4310,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_87) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4311,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4312,(vlSymsp->TOP__arraySlice.realValue1_0_10),8);
    tracep->fullBit(oldp+4313,(vlSymsp->TOP__arraySlice.debug_0_11));
    tracep->fullBit(oldp+4314,(vlSymsp->TOP__arraySlice.debug_1_11));
    tracep->fullBit(oldp+4315,(vlSymsp->TOP__arraySlice.debug_2_11));
    tracep->fullBit(oldp+4316,(vlSymsp->TOP__arraySlice.debug_3_11));
    tracep->fullBit(oldp+4317,(vlSymsp->TOP__arraySlice.debug_4_11));
    tracep->fullBit(oldp+4318,(vlSymsp->TOP__arraySlice.debug_5_11));
    tracep->fullBit(oldp+4319,(vlSymsp->TOP__arraySlice.debug_6_11));
    tracep->fullBit(oldp+4320,(vlSymsp->TOP__arraySlice.debug_7_11));
    tracep->fullCData(oldp+4321,(vlSymsp->TOP__arraySlice.realValue_0_88),8);
    tracep->fullBit(oldp+4322,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_88) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4323,(vlSymsp->TOP__arraySlice.realValue_0_89),8);
    tracep->fullBit(oldp+4324,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_89) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4325,(vlSymsp->TOP__arraySlice.realValue_0_90),8);
    tracep->fullBit(oldp+4326,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_90) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4327,(vlSymsp->TOP__arraySlice.realValue_0_91),8);
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_32(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_32\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+4328,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_91) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4329,(vlSymsp->TOP__arraySlice.realValue_0_92),8);
    tracep->fullBit(oldp+4330,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_92) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4331,(vlSymsp->TOP__arraySlice.realValue_0_93),8);
    tracep->fullBit(oldp+4332,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_93) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4333,(vlSymsp->TOP__arraySlice.realValue_0_94),8);
    tracep->fullBit(oldp+4334,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_94) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4335,(vlSymsp->TOP__arraySlice.realValue_0_95),8);
    tracep->fullBit(oldp+4336,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_95) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4337,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4338,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                                (0x3fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_3_ready)))));
    tracep->fullCData(oldp+4339,(vlSymsp->TOP__arraySlice.realValue1_0_11),8);
    tracep->fullBit(oldp+4340,(vlSymsp->TOP__arraySlice.debug_0_12));
    tracep->fullBit(oldp+4341,(vlSymsp->TOP__arraySlice.debug_1_12));
    tracep->fullBit(oldp+4342,(vlSymsp->TOP__arraySlice.debug_2_12));
    tracep->fullBit(oldp+4343,(vlSymsp->TOP__arraySlice.debug_3_12));
    tracep->fullBit(oldp+4344,(vlSymsp->TOP__arraySlice.debug_4_12));
    tracep->fullBit(oldp+4345,(vlSymsp->TOP__arraySlice.debug_5_12));
    tracep->fullBit(oldp+4346,(vlSymsp->TOP__arraySlice.debug_6_12));
    tracep->fullBit(oldp+4347,(vlSymsp->TOP__arraySlice.debug_7_12));
    tracep->fullCData(oldp+4348,(vlSymsp->TOP__arraySlice.realValue_0_96),8);
    tracep->fullBit(oldp+4349,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_96) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4350,(vlSymsp->TOP__arraySlice.realValue_0_97),8);
    tracep->fullBit(oldp+4351,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_97) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4352,(vlSymsp->TOP__arraySlice.realValue_0_98),8);
    tracep->fullBit(oldp+4353,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_98) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4354,(vlSymsp->TOP__arraySlice.realValue_0_99),8);
    tracep->fullBit(oldp+4355,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_99) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4356,(vlSymsp->TOP__arraySlice.realValue_0_100),8);
    tracep->fullBit(oldp+4357,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_100) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4358,(vlSymsp->TOP__arraySlice.realValue_0_101),8);
    tracep->fullBit(oldp+4359,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_101) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4360,(vlSymsp->TOP__arraySlice.realValue_0_102),8);
    tracep->fullBit(oldp+4361,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_102) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4362,(vlSymsp->TOP__arraySlice.realValue_0_103),8);
    tracep->fullBit(oldp+4363,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_103) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4364,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4365,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_4_ready))));
    tracep->fullCData(oldp+4366,(vlSymsp->TOP__arraySlice.realValue1_0_12),8);
    tracep->fullBit(oldp+4367,(vlSymsp->TOP__arraySlice.debug_0_13));
    tracep->fullBit(oldp+4368,(vlSymsp->TOP__arraySlice.debug_1_13));
    tracep->fullBit(oldp+4369,(vlSymsp->TOP__arraySlice.debug_2_13));
    tracep->fullBit(oldp+4370,(vlSymsp->TOP__arraySlice.debug_3_13));
    tracep->fullBit(oldp+4371,(vlSymsp->TOP__arraySlice.debug_4_13));
    tracep->fullBit(oldp+4372,(vlSymsp->TOP__arraySlice.debug_5_13));
    tracep->fullBit(oldp+4373,(vlSymsp->TOP__arraySlice.debug_6_13));
    tracep->fullBit(oldp+4374,(vlSymsp->TOP__arraySlice.debug_7_13));
    tracep->fullCData(oldp+4375,(vlSymsp->TOP__arraySlice.realValue_0_104),8);
    tracep->fullBit(oldp+4376,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_104) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4377,(vlSymsp->TOP__arraySlice.realValue_0_105),8);
    tracep->fullBit(oldp+4378,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_105) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4379,(vlSymsp->TOP__arraySlice.realValue_0_106),8);
    tracep->fullBit(oldp+4380,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_106) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4381,(vlSymsp->TOP__arraySlice.realValue_0_107),8);
    tracep->fullBit(oldp+4382,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_107) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4383,(vlSymsp->TOP__arraySlice.realValue_0_108),8);
    tracep->fullBit(oldp+4384,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_108) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4385,(vlSymsp->TOP__arraySlice.realValue_0_109),8);
    tracep->fullBit(oldp+4386,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_109) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4387,(vlSymsp->TOP__arraySlice.realValue_0_110),8);
    tracep->fullBit(oldp+4388,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_110) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_33(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_33\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4389,(vlSymsp->TOP__arraySlice.realValue_0_111),8);
    tracep->fullBit(oldp+4390,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_111) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4391,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4392,(vlSymsp->TOP__arraySlice.realValue1_0_13),8);
    tracep->fullBit(oldp+4393,(vlSymsp->TOP__arraySlice.debug_0_14));
    tracep->fullBit(oldp+4394,(vlSymsp->TOP__arraySlice.debug_1_14));
    tracep->fullBit(oldp+4395,(vlSymsp->TOP__arraySlice.debug_2_14));
    tracep->fullBit(oldp+4396,(vlSymsp->TOP__arraySlice.debug_3_14));
    tracep->fullBit(oldp+4397,(vlSymsp->TOP__arraySlice.debug_4_14));
    tracep->fullBit(oldp+4398,(vlSymsp->TOP__arraySlice.debug_5_14));
    tracep->fullBit(oldp+4399,(vlSymsp->TOP__arraySlice.debug_6_14));
    tracep->fullBit(oldp+4400,(vlSymsp->TOP__arraySlice.debug_7_14));
    tracep->fullCData(oldp+4401,(vlSymsp->TOP__arraySlice.realValue_0_112),8);
    tracep->fullBit(oldp+4402,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_112) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4403,(vlSymsp->TOP__arraySlice.realValue_0_113),8);
    tracep->fullBit(oldp+4404,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_113) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4405,(vlSymsp->TOP__arraySlice.realValue_0_114),8);
    tracep->fullBit(oldp+4406,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_114) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4407,(vlSymsp->TOP__arraySlice.realValue_0_115),8);
    tracep->fullBit(oldp+4408,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_115) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4409,(vlSymsp->TOP__arraySlice.realValue_0_116),8);
    tracep->fullBit(oldp+4410,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_116) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4411,(vlSymsp->TOP__arraySlice.realValue_0_117),8);
    tracep->fullBit(oldp+4412,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_117) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4413,(vlSymsp->TOP__arraySlice.realValue_0_118),8);
    tracep->fullBit(oldp+4414,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_118) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4415,(vlSymsp->TOP__arraySlice.realValue_0_119),8);
    tracep->fullBit(oldp+4416,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_119) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4417,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4418,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                                (0x3fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_4_ready)))));
    tracep->fullCData(oldp+4419,(vlSymsp->TOP__arraySlice.realValue1_0_14),8);
    tracep->fullBit(oldp+4420,(vlSymsp->TOP__arraySlice.debug_0_15));
    tracep->fullBit(oldp+4421,(vlSymsp->TOP__arraySlice.debug_1_15));
    tracep->fullBit(oldp+4422,(vlSymsp->TOP__arraySlice.debug_2_15));
    tracep->fullBit(oldp+4423,(vlSymsp->TOP__arraySlice.debug_3_15));
    tracep->fullBit(oldp+4424,(vlSymsp->TOP__arraySlice.debug_4_15));
    tracep->fullBit(oldp+4425,(vlSymsp->TOP__arraySlice.debug_5_15));
    tracep->fullBit(oldp+4426,(vlSymsp->TOP__arraySlice.debug_6_15));
    tracep->fullBit(oldp+4427,(vlSymsp->TOP__arraySlice.debug_7_15));
    tracep->fullCData(oldp+4428,(vlSymsp->TOP__arraySlice.realValue_0_120),8);
    tracep->fullBit(oldp+4429,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_120) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4430,(vlSymsp->TOP__arraySlice.realValue_0_121),8);
    tracep->fullBit(oldp+4431,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_121) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4432,(vlSymsp->TOP__arraySlice.realValue_0_122),8);
    tracep->fullBit(oldp+4433,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_122) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4434,(vlSymsp->TOP__arraySlice.realValue_0_123),8);
    tracep->fullBit(oldp+4435,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_123) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4436,(vlSymsp->TOP__arraySlice.realValue_0_124),8);
    tracep->fullBit(oldp+4437,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_124) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4438,(vlSymsp->TOP__arraySlice.realValue_0_125),8);
    tracep->fullBit(oldp+4439,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_125) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4440,(vlSymsp->TOP__arraySlice.realValue_0_126),8);
    tracep->fullBit(oldp+4441,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_126) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4442,(vlSymsp->TOP__arraySlice.realValue_0_127),8);
    tracep->fullBit(oldp+4443,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_127) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4444,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4445,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_5_ready))));
    tracep->fullCData(oldp+4446,(vlSymsp->TOP__arraySlice.realValue1_0_15),8);
    tracep->fullBit(oldp+4447,(vlSymsp->TOP__arraySlice.debug_0_16));
    tracep->fullBit(oldp+4448,(vlSymsp->TOP__arraySlice.debug_1_16));
    tracep->fullBit(oldp+4449,(vlSymsp->TOP__arraySlice.debug_2_16));
    tracep->fullBit(oldp+4450,(vlSymsp->TOP__arraySlice.debug_3_16));
    tracep->fullBit(oldp+4451,(vlSymsp->TOP__arraySlice.debug_4_16));
    tracep->fullBit(oldp+4452,(vlSymsp->TOP__arraySlice.debug_5_16));
    tracep->fullBit(oldp+4453,(vlSymsp->TOP__arraySlice.debug_6_16));
    tracep->fullBit(oldp+4454,(vlSymsp->TOP__arraySlice.debug_7_16));
    tracep->fullCData(oldp+4455,(vlSymsp->TOP__arraySlice.realValue_0_128),8);
    tracep->fullBit(oldp+4456,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_128) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_34(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_34\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4457,(vlSymsp->TOP__arraySlice.realValue_0_129),8);
    tracep->fullBit(oldp+4458,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_129) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4459,(vlSymsp->TOP__arraySlice.realValue_0_130),8);
    tracep->fullBit(oldp+4460,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_130) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4461,(vlSymsp->TOP__arraySlice.realValue_0_131),8);
    tracep->fullBit(oldp+4462,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_131) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4463,(vlSymsp->TOP__arraySlice.realValue_0_132),8);
    tracep->fullBit(oldp+4464,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_132) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4465,(vlSymsp->TOP__arraySlice.realValue_0_133),8);
    tracep->fullBit(oldp+4466,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_133) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4467,(vlSymsp->TOP__arraySlice.realValue_0_134),8);
    tracep->fullBit(oldp+4468,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_134) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4469,(vlSymsp->TOP__arraySlice.realValue_0_135),8);
    tracep->fullBit(oldp+4470,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_135) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4471,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4472,(vlSymsp->TOP__arraySlice.realValue1_0_16),8);
    tracep->fullBit(oldp+4473,(vlSymsp->TOP__arraySlice.debug_0_17));
    tracep->fullBit(oldp+4474,(vlSymsp->TOP__arraySlice.debug_1_17));
    tracep->fullBit(oldp+4475,(vlSymsp->TOP__arraySlice.debug_2_17));
    tracep->fullBit(oldp+4476,(vlSymsp->TOP__arraySlice.debug_3_17));
    tracep->fullBit(oldp+4477,(vlSymsp->TOP__arraySlice.debug_4_17));
    tracep->fullBit(oldp+4478,(vlSymsp->TOP__arraySlice.debug_5_17));
    tracep->fullBit(oldp+4479,(vlSymsp->TOP__arraySlice.debug_6_17));
    tracep->fullBit(oldp+4480,(vlSymsp->TOP__arraySlice.debug_7_17));
    tracep->fullCData(oldp+4481,(vlSymsp->TOP__arraySlice.realValue_0_136),8);
    tracep->fullBit(oldp+4482,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_136) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4483,(vlSymsp->TOP__arraySlice.realValue_0_137),8);
    tracep->fullBit(oldp+4484,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_137) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4485,(vlSymsp->TOP__arraySlice.realValue_0_138),8);
    tracep->fullBit(oldp+4486,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_138) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4487,(vlSymsp->TOP__arraySlice.realValue_0_139),8);
    tracep->fullBit(oldp+4488,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_139) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4489,(vlSymsp->TOP__arraySlice.realValue_0_140),8);
    tracep->fullBit(oldp+4490,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_140) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4491,(vlSymsp->TOP__arraySlice.realValue_0_141),8);
    tracep->fullBit(oldp+4492,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_141) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4493,(vlSymsp->TOP__arraySlice.realValue_0_142),8);
    tracep->fullBit(oldp+4494,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_142) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4495,(vlSymsp->TOP__arraySlice.realValue_0_143),8);
    tracep->fullBit(oldp+4496,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_143) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4497,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4498,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                                (0x3fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_5_ready)))));
    tracep->fullCData(oldp+4499,(vlSymsp->TOP__arraySlice.realValue1_0_17),8);
    tracep->fullBit(oldp+4500,(vlSymsp->TOP__arraySlice.debug_0_18));
    tracep->fullBit(oldp+4501,(vlSymsp->TOP__arraySlice.debug_1_18));
    tracep->fullBit(oldp+4502,(vlSymsp->TOP__arraySlice.debug_2_18));
    tracep->fullBit(oldp+4503,(vlSymsp->TOP__arraySlice.debug_3_18));
    tracep->fullBit(oldp+4504,(vlSymsp->TOP__arraySlice.debug_4_18));
    tracep->fullBit(oldp+4505,(vlSymsp->TOP__arraySlice.debug_5_18));
    tracep->fullBit(oldp+4506,(vlSymsp->TOP__arraySlice.debug_6_18));
    tracep->fullBit(oldp+4507,(vlSymsp->TOP__arraySlice.debug_7_18));
    tracep->fullCData(oldp+4508,(vlSymsp->TOP__arraySlice.realValue_0_144),8);
    tracep->fullBit(oldp+4509,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_144) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4510,(vlSymsp->TOP__arraySlice.realValue_0_145),8);
    tracep->fullBit(oldp+4511,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_145) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4512,(vlSymsp->TOP__arraySlice.realValue_0_146),8);
    tracep->fullBit(oldp+4513,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_146) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4514,(vlSymsp->TOP__arraySlice.realValue_0_147),8);
    tracep->fullBit(oldp+4515,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_147) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4516,(vlSymsp->TOP__arraySlice.realValue_0_148),8);
    tracep->fullBit(oldp+4517,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_148) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_35(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_35\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4518,(vlSymsp->TOP__arraySlice.realValue_0_149),8);
    tracep->fullBit(oldp+4519,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_149) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4520,(vlSymsp->TOP__arraySlice.realValue_0_150),8);
    tracep->fullBit(oldp+4521,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_150) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4522,(vlSymsp->TOP__arraySlice.realValue_0_151),8);
    tracep->fullBit(oldp+4523,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_151) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4524,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4525,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_6_ready))));
    tracep->fullCData(oldp+4526,(vlSymsp->TOP__arraySlice.realValue1_0_18),8);
    tracep->fullBit(oldp+4527,(vlSymsp->TOP__arraySlice.debug_0_19));
    tracep->fullBit(oldp+4528,(vlSymsp->TOP__arraySlice.debug_1_19));
    tracep->fullBit(oldp+4529,(vlSymsp->TOP__arraySlice.debug_2_19));
    tracep->fullBit(oldp+4530,(vlSymsp->TOP__arraySlice.debug_3_19));
    tracep->fullBit(oldp+4531,(vlSymsp->TOP__arraySlice.debug_4_19));
    tracep->fullBit(oldp+4532,(vlSymsp->TOP__arraySlice.debug_5_19));
    tracep->fullBit(oldp+4533,(vlSymsp->TOP__arraySlice.debug_6_19));
    tracep->fullBit(oldp+4534,(vlSymsp->TOP__arraySlice.debug_7_19));
    tracep->fullCData(oldp+4535,(vlSymsp->TOP__arraySlice.realValue_0_152),8);
    tracep->fullBit(oldp+4536,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_152) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4537,(vlSymsp->TOP__arraySlice.realValue_0_153),8);
    tracep->fullBit(oldp+4538,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_153) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4539,(vlSymsp->TOP__arraySlice.realValue_0_154),8);
    tracep->fullBit(oldp+4540,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_154) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4541,(vlSymsp->TOP__arraySlice.realValue_0_155),8);
    tracep->fullBit(oldp+4542,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_155) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4543,(vlSymsp->TOP__arraySlice.realValue_0_156),8);
    tracep->fullBit(oldp+4544,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_156) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4545,(vlSymsp->TOP__arraySlice.realValue_0_157),8);
    tracep->fullBit(oldp+4546,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_157) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4547,(vlSymsp->TOP__arraySlice.realValue_0_158),8);
    tracep->fullBit(oldp+4548,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_158) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4549,(vlSymsp->TOP__arraySlice.realValue_0_159),8);
    tracep->fullBit(oldp+4550,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_159) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4551,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4552,(vlSymsp->TOP__arraySlice.realValue1_0_19),8);
    tracep->fullBit(oldp+4553,(vlSymsp->TOP__arraySlice.debug_0_20));
    tracep->fullBit(oldp+4554,(vlSymsp->TOP__arraySlice.debug_1_20));
    tracep->fullBit(oldp+4555,(vlSymsp->TOP__arraySlice.debug_2_20));
    tracep->fullBit(oldp+4556,(vlSymsp->TOP__arraySlice.debug_3_20));
    tracep->fullBit(oldp+4557,(vlSymsp->TOP__arraySlice.debug_4_20));
    tracep->fullBit(oldp+4558,(vlSymsp->TOP__arraySlice.debug_5_20));
    tracep->fullBit(oldp+4559,(vlSymsp->TOP__arraySlice.debug_6_20));
    tracep->fullBit(oldp+4560,(vlSymsp->TOP__arraySlice.debug_7_20));
    tracep->fullCData(oldp+4561,(vlSymsp->TOP__arraySlice.realValue_0_160),8);
    tracep->fullBit(oldp+4562,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_160) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4563,(vlSymsp->TOP__arraySlice.realValue_0_161),8);
    tracep->fullBit(oldp+4564,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_161) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4565,(vlSymsp->TOP__arraySlice.realValue_0_162),8);
    tracep->fullBit(oldp+4566,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_162) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4567,(vlSymsp->TOP__arraySlice.realValue_0_163),8);
    tracep->fullBit(oldp+4568,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_163) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4569,(vlSymsp->TOP__arraySlice.realValue_0_164),8);
    tracep->fullBit(oldp+4570,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_164) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4571,(vlSymsp->TOP__arraySlice.realValue_0_165),8);
    tracep->fullBit(oldp+4572,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_165) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4573,(vlSymsp->TOP__arraySlice.realValue_0_166),8);
    tracep->fullBit(oldp+4574,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_166) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4575,(vlSymsp->TOP__arraySlice.realValue_0_167),8);
    tracep->fullBit(oldp+4576,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_167) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4577,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_36(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_36\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+4578,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                                (0x3fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_6_ready)))));
    tracep->fullCData(oldp+4579,(vlSymsp->TOP__arraySlice.realValue1_0_20),8);
    tracep->fullBit(oldp+4580,(vlSymsp->TOP__arraySlice.debug_0_21));
    tracep->fullBit(oldp+4581,(vlSymsp->TOP__arraySlice.debug_1_21));
    tracep->fullBit(oldp+4582,(vlSymsp->TOP__arraySlice.debug_2_21));
    tracep->fullBit(oldp+4583,(vlSymsp->TOP__arraySlice.debug_3_21));
    tracep->fullBit(oldp+4584,(vlSymsp->TOP__arraySlice.debug_4_21));
    tracep->fullBit(oldp+4585,(vlSymsp->TOP__arraySlice.debug_5_21));
    tracep->fullBit(oldp+4586,(vlSymsp->TOP__arraySlice.debug_6_21));
    tracep->fullBit(oldp+4587,(vlSymsp->TOP__arraySlice.debug_7_21));
    tracep->fullCData(oldp+4588,(vlSymsp->TOP__arraySlice.realValue_0_168),8);
    tracep->fullBit(oldp+4589,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_168) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4590,(vlSymsp->TOP__arraySlice.realValue_0_169),8);
    tracep->fullBit(oldp+4591,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_169) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4592,(vlSymsp->TOP__arraySlice.realValue_0_170),8);
    tracep->fullBit(oldp+4593,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_170) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4594,(vlSymsp->TOP__arraySlice.realValue_0_171),8);
    tracep->fullBit(oldp+4595,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_171) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4596,(vlSymsp->TOP__arraySlice.realValue_0_172),8);
    tracep->fullBit(oldp+4597,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_172) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4598,(vlSymsp->TOP__arraySlice.realValue_0_173),8);
    tracep->fullBit(oldp+4599,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_173) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4600,(vlSymsp->TOP__arraySlice.realValue_0_174),8);
    tracep->fullBit(oldp+4601,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_174) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4602,(vlSymsp->TOP__arraySlice.realValue_0_175),8);
    tracep->fullBit(oldp+4603,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_175) 
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
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_21) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_21)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_21)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_21)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_21)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_21)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_21)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_21)))))));
    tracep->fullBit(oldp+4605,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_7_ready))));
    tracep->fullCData(oldp+4606,(vlSymsp->TOP__arraySlice.realValue1_0_21),8);
    tracep->fullBit(oldp+4607,(vlSymsp->TOP__arraySlice.debug_0_22));
    tracep->fullBit(oldp+4608,(vlSymsp->TOP__arraySlice.debug_1_22));
    tracep->fullBit(oldp+4609,(vlSymsp->TOP__arraySlice.debug_2_22));
    tracep->fullBit(oldp+4610,(vlSymsp->TOP__arraySlice.debug_3_22));
    tracep->fullBit(oldp+4611,(vlSymsp->TOP__arraySlice.debug_4_22));
    tracep->fullBit(oldp+4612,(vlSymsp->TOP__arraySlice.debug_5_22));
    tracep->fullBit(oldp+4613,(vlSymsp->TOP__arraySlice.debug_6_22));
    tracep->fullBit(oldp+4614,(vlSymsp->TOP__arraySlice.debug_7_22));
    tracep->fullCData(oldp+4615,(vlSymsp->TOP__arraySlice.realValue_0_176),8);
    tracep->fullBit(oldp+4616,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_176) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4617,(vlSymsp->TOP__arraySlice.realValue_0_177),8);
    tracep->fullBit(oldp+4618,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_177) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4619,(vlSymsp->TOP__arraySlice.realValue_0_178),8);
    tracep->fullBit(oldp+4620,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_178) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4621,(vlSymsp->TOP__arraySlice.realValue_0_179),8);
    tracep->fullBit(oldp+4622,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_179) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4623,(vlSymsp->TOP__arraySlice.realValue_0_180),8);
    tracep->fullBit(oldp+4624,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_180) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4625,(vlSymsp->TOP__arraySlice.realValue_0_181),8);
    tracep->fullBit(oldp+4626,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_181) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4627,(vlSymsp->TOP__arraySlice.realValue_0_182),8);
    tracep->fullBit(oldp+4628,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_182) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4629,(vlSymsp->TOP__arraySlice.realValue_0_183),8);
    tracep->fullBit(oldp+4630,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_183) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4631,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4632,(vlSymsp->TOP__arraySlice.realValue1_0_22),8);
    tracep->fullBit(oldp+4633,(vlSymsp->TOP__arraySlice.debug_0_23));
    tracep->fullBit(oldp+4634,(vlSymsp->TOP__arraySlice.debug_1_23));
    tracep->fullBit(oldp+4635,(vlSymsp->TOP__arraySlice.debug_2_23));
    tracep->fullBit(oldp+4636,(vlSymsp->TOP__arraySlice.debug_3_23));
    tracep->fullBit(oldp+4637,(vlSymsp->TOP__arraySlice.debug_4_23));
    tracep->fullBit(oldp+4638,(vlSymsp->TOP__arraySlice.debug_5_23));
    tracep->fullBit(oldp+4639,(vlSymsp->TOP__arraySlice.debug_6_23));
    tracep->fullBit(oldp+4640,(vlSymsp->TOP__arraySlice.debug_7_23));
    tracep->fullCData(oldp+4641,(vlSymsp->TOP__arraySlice.realValue_0_184),8);
    tracep->fullBit(oldp+4642,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_184) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4643,(vlSymsp->TOP__arraySlice.realValue_0_185),8);
    tracep->fullBit(oldp+4644,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_185) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4645,(vlSymsp->TOP__arraySlice.realValue_0_186),8);
    tracep->fullBit(oldp+4646,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_186) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4647,(vlSymsp->TOP__arraySlice.realValue_0_187),8);
}
