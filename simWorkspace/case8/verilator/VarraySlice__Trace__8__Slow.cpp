// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_30(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_30\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+3898,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                                (0x1fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_4_ready)))));
    tracep->fullCData(oldp+3899,(vlSymsp->TOP__arraySlice.realValue1_0_14),8);
    tracep->fullBit(oldp+3900,(vlSymsp->TOP__arraySlice.debug_0_15));
    tracep->fullBit(oldp+3901,(vlSymsp->TOP__arraySlice.debug_1_15));
    tracep->fullBit(oldp+3902,(vlSymsp->TOP__arraySlice.debug_2_15));
    tracep->fullBit(oldp+3903,(vlSymsp->TOP__arraySlice.debug_3_15));
    tracep->fullBit(oldp+3904,(vlSymsp->TOP__arraySlice.debug_4_15));
    tracep->fullBit(oldp+3905,(vlSymsp->TOP__arraySlice.debug_5_15));
    tracep->fullBit(oldp+3906,(vlSymsp->TOP__arraySlice.debug_6_15));
    tracep->fullBit(oldp+3907,(vlSymsp->TOP__arraySlice.debug_7_15));
    tracep->fullCData(oldp+3908,(vlSymsp->TOP__arraySlice.realValue_0_120),8);
    tracep->fullBit(oldp+3909,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_120) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3910,(vlSymsp->TOP__arraySlice.realValue_0_121),8);
    tracep->fullBit(oldp+3911,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_121) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3912,(vlSymsp->TOP__arraySlice.realValue_0_122),8);
    tracep->fullBit(oldp+3913,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_122) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3914,(vlSymsp->TOP__arraySlice.realValue_0_123),8);
    tracep->fullBit(oldp+3915,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_123) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3916,(vlSymsp->TOP__arraySlice.realValue_0_124),8);
    tracep->fullBit(oldp+3917,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_124) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3918,(vlSymsp->TOP__arraySlice.realValue_0_125),8);
    tracep->fullBit(oldp+3919,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_125) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3920,(vlSymsp->TOP__arraySlice.realValue_0_126),8);
    tracep->fullBit(oldp+3921,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_126) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3922,(vlSymsp->TOP__arraySlice.realValue_0_127),8);
    tracep->fullBit(oldp+3923,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_127) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+3924,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+3925,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_5_ready))));
    tracep->fullCData(oldp+3926,(vlSymsp->TOP__arraySlice.realValue1_0_15),8);
    tracep->fullBit(oldp+3927,(vlSymsp->TOP__arraySlice.debug_0_16));
    tracep->fullBit(oldp+3928,(vlSymsp->TOP__arraySlice.debug_1_16));
    tracep->fullBit(oldp+3929,(vlSymsp->TOP__arraySlice.debug_2_16));
    tracep->fullBit(oldp+3930,(vlSymsp->TOP__arraySlice.debug_3_16));
    tracep->fullBit(oldp+3931,(vlSymsp->TOP__arraySlice.debug_4_16));
    tracep->fullBit(oldp+3932,(vlSymsp->TOP__arraySlice.debug_5_16));
    tracep->fullBit(oldp+3933,(vlSymsp->TOP__arraySlice.debug_6_16));
    tracep->fullBit(oldp+3934,(vlSymsp->TOP__arraySlice.debug_7_16));
    tracep->fullCData(oldp+3935,(vlSymsp->TOP__arraySlice.realValue_0_128),8);
    tracep->fullBit(oldp+3936,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_128) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3937,(vlSymsp->TOP__arraySlice.realValue_0_129),8);
    tracep->fullBit(oldp+3938,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_129) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3939,(vlSymsp->TOP__arraySlice.realValue_0_130),8);
    tracep->fullBit(oldp+3940,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_130) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3941,(vlSymsp->TOP__arraySlice.realValue_0_131),8);
    tracep->fullBit(oldp+3942,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_131) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3943,(vlSymsp->TOP__arraySlice.realValue_0_132),8);
    tracep->fullBit(oldp+3944,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_132) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3945,(vlSymsp->TOP__arraySlice.realValue_0_133),8);
    tracep->fullBit(oldp+3946,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_133) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3947,(vlSymsp->TOP__arraySlice.realValue_0_134),8);
    tracep->fullBit(oldp+3948,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_134) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3949,(vlSymsp->TOP__arraySlice.realValue_0_135),8);
    tracep->fullBit(oldp+3950,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_135) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+3951,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+3952,(vlSymsp->TOP__arraySlice.realValue1_0_16),8);
    tracep->fullBit(oldp+3953,(vlSymsp->TOP__arraySlice.debug_0_17));
    tracep->fullBit(oldp+3954,(vlSymsp->TOP__arraySlice.debug_1_17));
    tracep->fullBit(oldp+3955,(vlSymsp->TOP__arraySlice.debug_2_17));
    tracep->fullBit(oldp+3956,(vlSymsp->TOP__arraySlice.debug_3_17));
    tracep->fullBit(oldp+3957,(vlSymsp->TOP__arraySlice.debug_4_17));
    tracep->fullBit(oldp+3958,(vlSymsp->TOP__arraySlice.debug_5_17));
    tracep->fullBit(oldp+3959,(vlSymsp->TOP__arraySlice.debug_6_17));
    tracep->fullBit(oldp+3960,(vlSymsp->TOP__arraySlice.debug_7_17));
    tracep->fullCData(oldp+3961,(vlSymsp->TOP__arraySlice.realValue_0_136),8);
    tracep->fullBit(oldp+3962,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_136) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3963,(vlSymsp->TOP__arraySlice.realValue_0_137),8);
    tracep->fullBit(oldp+3964,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_137) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3965,(vlSymsp->TOP__arraySlice.realValue_0_138),8);
    tracep->fullBit(oldp+3966,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_138) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3967,(vlSymsp->TOP__arraySlice.realValue_0_139),8);
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_31(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_31\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+3968,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_139) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3969,(vlSymsp->TOP__arraySlice.realValue_0_140),8);
    tracep->fullBit(oldp+3970,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_140) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3971,(vlSymsp->TOP__arraySlice.realValue_0_141),8);
    tracep->fullBit(oldp+3972,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_141) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3973,(vlSymsp->TOP__arraySlice.realValue_0_142),8);
    tracep->fullBit(oldp+3974,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_142) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3975,(vlSymsp->TOP__arraySlice.realValue_0_143),8);
    tracep->fullBit(oldp+3976,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_143) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+3977,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+3978,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                                (0x1fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_5_ready)))));
    tracep->fullCData(oldp+3979,(vlSymsp->TOP__arraySlice.realValue1_0_17),8);
    tracep->fullBit(oldp+3980,(vlSymsp->TOP__arraySlice.debug_0_18));
    tracep->fullBit(oldp+3981,(vlSymsp->TOP__arraySlice.debug_1_18));
    tracep->fullBit(oldp+3982,(vlSymsp->TOP__arraySlice.debug_2_18));
    tracep->fullBit(oldp+3983,(vlSymsp->TOP__arraySlice.debug_3_18));
    tracep->fullBit(oldp+3984,(vlSymsp->TOP__arraySlice.debug_4_18));
    tracep->fullBit(oldp+3985,(vlSymsp->TOP__arraySlice.debug_5_18));
    tracep->fullBit(oldp+3986,(vlSymsp->TOP__arraySlice.debug_6_18));
    tracep->fullBit(oldp+3987,(vlSymsp->TOP__arraySlice.debug_7_18));
    tracep->fullCData(oldp+3988,(vlSymsp->TOP__arraySlice.realValue_0_144),8);
    tracep->fullBit(oldp+3989,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_144) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3990,(vlSymsp->TOP__arraySlice.realValue_0_145),8);
    tracep->fullBit(oldp+3991,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_145) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3992,(vlSymsp->TOP__arraySlice.realValue_0_146),8);
    tracep->fullBit(oldp+3993,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_146) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3994,(vlSymsp->TOP__arraySlice.realValue_0_147),8);
    tracep->fullBit(oldp+3995,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_147) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3996,(vlSymsp->TOP__arraySlice.realValue_0_148),8);
    tracep->fullBit(oldp+3997,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_148) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+3998,(vlSymsp->TOP__arraySlice.realValue_0_149),8);
    tracep->fullBit(oldp+3999,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_149) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4000,(vlSymsp->TOP__arraySlice.realValue_0_150),8);
    tracep->fullBit(oldp+4001,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_150) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4002,(vlSymsp->TOP__arraySlice.realValue_0_151),8);
    tracep->fullBit(oldp+4003,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_151) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4004,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4005,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_6_ready))));
    tracep->fullCData(oldp+4006,(vlSymsp->TOP__arraySlice.realValue1_0_18),8);
    tracep->fullBit(oldp+4007,(vlSymsp->TOP__arraySlice.debug_0_19));
    tracep->fullBit(oldp+4008,(vlSymsp->TOP__arraySlice.debug_1_19));
    tracep->fullBit(oldp+4009,(vlSymsp->TOP__arraySlice.debug_2_19));
    tracep->fullBit(oldp+4010,(vlSymsp->TOP__arraySlice.debug_3_19));
    tracep->fullBit(oldp+4011,(vlSymsp->TOP__arraySlice.debug_4_19));
    tracep->fullBit(oldp+4012,(vlSymsp->TOP__arraySlice.debug_5_19));
    tracep->fullBit(oldp+4013,(vlSymsp->TOP__arraySlice.debug_6_19));
    tracep->fullBit(oldp+4014,(vlSymsp->TOP__arraySlice.debug_7_19));
    tracep->fullCData(oldp+4015,(vlSymsp->TOP__arraySlice.realValue_0_152),8);
    tracep->fullBit(oldp+4016,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_152) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4017,(vlSymsp->TOP__arraySlice.realValue_0_153),8);
    tracep->fullBit(oldp+4018,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_153) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4019,(vlSymsp->TOP__arraySlice.realValue_0_154),8);
    tracep->fullBit(oldp+4020,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_154) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4021,(vlSymsp->TOP__arraySlice.realValue_0_155),8);
    tracep->fullBit(oldp+4022,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_155) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4023,(vlSymsp->TOP__arraySlice.realValue_0_156),8);
    tracep->fullBit(oldp+4024,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_156) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4025,(vlSymsp->TOP__arraySlice.realValue_0_157),8);
    tracep->fullBit(oldp+4026,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_157) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4027,(vlSymsp->TOP__arraySlice.realValue_0_158),8);
    tracep->fullBit(oldp+4028,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_158) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_32(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_32\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4029,(vlSymsp->TOP__arraySlice.realValue_0_159),8);
    tracep->fullBit(oldp+4030,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_159) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4031,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4032,(vlSymsp->TOP__arraySlice.realValue1_0_19),8);
    tracep->fullBit(oldp+4033,(vlSymsp->TOP__arraySlice.debug_0_20));
    tracep->fullBit(oldp+4034,(vlSymsp->TOP__arraySlice.debug_1_20));
    tracep->fullBit(oldp+4035,(vlSymsp->TOP__arraySlice.debug_2_20));
    tracep->fullBit(oldp+4036,(vlSymsp->TOP__arraySlice.debug_3_20));
    tracep->fullBit(oldp+4037,(vlSymsp->TOP__arraySlice.debug_4_20));
    tracep->fullBit(oldp+4038,(vlSymsp->TOP__arraySlice.debug_5_20));
    tracep->fullBit(oldp+4039,(vlSymsp->TOP__arraySlice.debug_6_20));
    tracep->fullBit(oldp+4040,(vlSymsp->TOP__arraySlice.debug_7_20));
    tracep->fullCData(oldp+4041,(vlSymsp->TOP__arraySlice.realValue_0_160),8);
    tracep->fullBit(oldp+4042,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_160) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4043,(vlSymsp->TOP__arraySlice.realValue_0_161),8);
    tracep->fullBit(oldp+4044,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_161) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4045,(vlSymsp->TOP__arraySlice.realValue_0_162),8);
    tracep->fullBit(oldp+4046,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_162) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4047,(vlSymsp->TOP__arraySlice.realValue_0_163),8);
    tracep->fullBit(oldp+4048,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_163) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4049,(vlSymsp->TOP__arraySlice.realValue_0_164),8);
    tracep->fullBit(oldp+4050,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_164) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4051,(vlSymsp->TOP__arraySlice.realValue_0_165),8);
    tracep->fullBit(oldp+4052,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_165) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4053,(vlSymsp->TOP__arraySlice.realValue_0_166),8);
    tracep->fullBit(oldp+4054,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_166) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4055,(vlSymsp->TOP__arraySlice.realValue_0_167),8);
    tracep->fullBit(oldp+4056,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_167) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4057,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4058,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                                (0x1fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_6_ready)))));
    tracep->fullCData(oldp+4059,(vlSymsp->TOP__arraySlice.realValue1_0_20),8);
    tracep->fullBit(oldp+4060,(vlSymsp->TOP__arraySlice.debug_0_21));
    tracep->fullBit(oldp+4061,(vlSymsp->TOP__arraySlice.debug_1_21));
    tracep->fullBit(oldp+4062,(vlSymsp->TOP__arraySlice.debug_2_21));
    tracep->fullBit(oldp+4063,(vlSymsp->TOP__arraySlice.debug_3_21));
    tracep->fullBit(oldp+4064,(vlSymsp->TOP__arraySlice.debug_4_21));
    tracep->fullBit(oldp+4065,(vlSymsp->TOP__arraySlice.debug_5_21));
    tracep->fullBit(oldp+4066,(vlSymsp->TOP__arraySlice.debug_6_21));
    tracep->fullBit(oldp+4067,(vlSymsp->TOP__arraySlice.debug_7_21));
    tracep->fullCData(oldp+4068,(vlSymsp->TOP__arraySlice.realValue_0_168),8);
    tracep->fullBit(oldp+4069,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_168) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4070,(vlSymsp->TOP__arraySlice.realValue_0_169),8);
    tracep->fullBit(oldp+4071,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_169) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4072,(vlSymsp->TOP__arraySlice.realValue_0_170),8);
    tracep->fullBit(oldp+4073,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_170) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4074,(vlSymsp->TOP__arraySlice.realValue_0_171),8);
    tracep->fullBit(oldp+4075,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_171) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4076,(vlSymsp->TOP__arraySlice.realValue_0_172),8);
    tracep->fullBit(oldp+4077,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_172) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4078,(vlSymsp->TOP__arraySlice.realValue_0_173),8);
    tracep->fullBit(oldp+4079,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_173) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4080,(vlSymsp->TOP__arraySlice.realValue_0_174),8);
    tracep->fullBit(oldp+4081,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_174) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4082,(vlSymsp->TOP__arraySlice.realValue_0_175),8);
    tracep->fullBit(oldp+4083,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_175) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4084,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4085,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_7_ready))));
    tracep->fullCData(oldp+4086,(vlSymsp->TOP__arraySlice.realValue1_0_21),8);
    tracep->fullBit(oldp+4087,(vlSymsp->TOP__arraySlice.debug_0_22));
    tracep->fullBit(oldp+4088,(vlSymsp->TOP__arraySlice.debug_1_22));
    tracep->fullBit(oldp+4089,(vlSymsp->TOP__arraySlice.debug_2_22));
    tracep->fullBit(oldp+4090,(vlSymsp->TOP__arraySlice.debug_3_22));
    tracep->fullBit(oldp+4091,(vlSymsp->TOP__arraySlice.debug_4_22));
    tracep->fullBit(oldp+4092,(vlSymsp->TOP__arraySlice.debug_5_22));
    tracep->fullBit(oldp+4093,(vlSymsp->TOP__arraySlice.debug_6_22));
    tracep->fullBit(oldp+4094,(vlSymsp->TOP__arraySlice.debug_7_22));
    tracep->fullCData(oldp+4095,(vlSymsp->TOP__arraySlice.realValue_0_176),8);
    tracep->fullBit(oldp+4096,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_176) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_33(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_33\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4097,(vlSymsp->TOP__arraySlice.realValue_0_177),8);
    tracep->fullBit(oldp+4098,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_177) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4099,(vlSymsp->TOP__arraySlice.realValue_0_178),8);
    tracep->fullBit(oldp+4100,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_178) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4101,(vlSymsp->TOP__arraySlice.realValue_0_179),8);
    tracep->fullBit(oldp+4102,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_179) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4103,(vlSymsp->TOP__arraySlice.realValue_0_180),8);
    tracep->fullBit(oldp+4104,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_180) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4105,(vlSymsp->TOP__arraySlice.realValue_0_181),8);
    tracep->fullBit(oldp+4106,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_181) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4107,(vlSymsp->TOP__arraySlice.realValue_0_182),8);
    tracep->fullBit(oldp+4108,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_182) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4109,(vlSymsp->TOP__arraySlice.realValue_0_183),8);
    tracep->fullBit(oldp+4110,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_183) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4111,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4112,(vlSymsp->TOP__arraySlice.realValue1_0_22),8);
    tracep->fullBit(oldp+4113,(vlSymsp->TOP__arraySlice.debug_0_23));
    tracep->fullBit(oldp+4114,(vlSymsp->TOP__arraySlice.debug_1_23));
    tracep->fullBit(oldp+4115,(vlSymsp->TOP__arraySlice.debug_2_23));
    tracep->fullBit(oldp+4116,(vlSymsp->TOP__arraySlice.debug_3_23));
    tracep->fullBit(oldp+4117,(vlSymsp->TOP__arraySlice.debug_4_23));
    tracep->fullBit(oldp+4118,(vlSymsp->TOP__arraySlice.debug_5_23));
    tracep->fullBit(oldp+4119,(vlSymsp->TOP__arraySlice.debug_6_23));
    tracep->fullBit(oldp+4120,(vlSymsp->TOP__arraySlice.debug_7_23));
    tracep->fullCData(oldp+4121,(vlSymsp->TOP__arraySlice.realValue_0_184),8);
    tracep->fullBit(oldp+4122,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_184) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4123,(vlSymsp->TOP__arraySlice.realValue_0_185),8);
    tracep->fullBit(oldp+4124,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_185) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4125,(vlSymsp->TOP__arraySlice.realValue_0_186),8);
    tracep->fullBit(oldp+4126,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_186) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4127,(vlSymsp->TOP__arraySlice.realValue_0_187),8);
    tracep->fullBit(oldp+4128,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_187) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4129,(vlSymsp->TOP__arraySlice.realValue_0_188),8);
    tracep->fullBit(oldp+4130,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_188) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4131,(vlSymsp->TOP__arraySlice.realValue_0_189),8);
    tracep->fullBit(oldp+4132,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_189) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4133,(vlSymsp->TOP__arraySlice.realValue_0_190),8);
    tracep->fullBit(oldp+4134,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_190) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4135,(vlSymsp->TOP__arraySlice.realValue_0_191),8);
    tracep->fullBit(oldp+4136,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_191) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4137,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4138,(((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                                (0x1fffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                                & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                                   & (IData)(vlSelf->outputStreamArrayData_7_ready)))));
    tracep->fullCData(oldp+4139,(vlSymsp->TOP__arraySlice.realValue1_0_23),8);
    tracep->fullBit(oldp+4140,(vlSymsp->TOP__arraySlice.debug_0_24));
    tracep->fullBit(oldp+4141,(vlSymsp->TOP__arraySlice.debug_1_24));
    tracep->fullBit(oldp+4142,(vlSymsp->TOP__arraySlice.debug_2_24));
    tracep->fullBit(oldp+4143,(vlSymsp->TOP__arraySlice.debug_3_24));
    tracep->fullBit(oldp+4144,(vlSymsp->TOP__arraySlice.debug_4_24));
    tracep->fullBit(oldp+4145,(vlSymsp->TOP__arraySlice.debug_5_24));
    tracep->fullBit(oldp+4146,(vlSymsp->TOP__arraySlice.debug_6_24));
    tracep->fullBit(oldp+4147,(vlSymsp->TOP__arraySlice.debug_7_24));
    tracep->fullCData(oldp+4148,(vlSymsp->TOP__arraySlice.realValue_0_192),8);
    tracep->fullBit(oldp+4149,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_192) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4150,(vlSymsp->TOP__arraySlice.realValue_0_193),8);
    tracep->fullBit(oldp+4151,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_193) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4152,(vlSymsp->TOP__arraySlice.realValue_0_194),8);
    tracep->fullBit(oldp+4153,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_194) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4154,(vlSymsp->TOP__arraySlice.realValue_0_195),8);
    tracep->fullBit(oldp+4155,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_195) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4156,(vlSymsp->TOP__arraySlice.realValue_0_196),8);
    tracep->fullBit(oldp+4157,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_196) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_34(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_34\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4158,(vlSymsp->TOP__arraySlice.realValue_0_197),8);
    tracep->fullBit(oldp+4159,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_197) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4160,(vlSymsp->TOP__arraySlice.realValue_0_198),8);
    tracep->fullBit(oldp+4161,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_198) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4162,(vlSymsp->TOP__arraySlice.realValue_0_199),8);
    tracep->fullBit(oldp+4163,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_199) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4164,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4165,(vlSymsp->TOP__arraySlice.debug_0_25));
    tracep->fullBit(oldp+4166,(vlSymsp->TOP__arraySlice.debug_1_25));
    tracep->fullBit(oldp+4167,(vlSymsp->TOP__arraySlice.debug_2_25));
    tracep->fullBit(oldp+4168,(vlSymsp->TOP__arraySlice.debug_3_25));
    tracep->fullBit(oldp+4169,(vlSymsp->TOP__arraySlice.debug_4_25));
    tracep->fullBit(oldp+4170,(vlSymsp->TOP__arraySlice.debug_5_25));
    tracep->fullBit(oldp+4171,(vlSymsp->TOP__arraySlice.debug_6_25));
    tracep->fullBit(oldp+4172,(vlSymsp->TOP__arraySlice.debug_7_25));
    tracep->fullCData(oldp+4173,(vlSymsp->TOP__arraySlice.realValue_0_200),8);
    tracep->fullBit(oldp+4174,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_200) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4175,(vlSymsp->TOP__arraySlice.realValue_0_201),8);
    tracep->fullBit(oldp+4176,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_201) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4177,(vlSymsp->TOP__arraySlice.realValue_0_202),8);
    tracep->fullBit(oldp+4178,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_202) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4179,(vlSymsp->TOP__arraySlice.realValue_0_203),8);
    tracep->fullBit(oldp+4180,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_203) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4181,(vlSymsp->TOP__arraySlice.realValue_0_204),8);
    tracep->fullBit(oldp+4182,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_204) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4183,(vlSymsp->TOP__arraySlice.realValue_0_205),8);
    tracep->fullBit(oldp+4184,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_205) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4185,(vlSymsp->TOP__arraySlice.realValue_0_206),8);
    tracep->fullBit(oldp+4186,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_206) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4187,(vlSymsp->TOP__arraySlice.realValue_0_207),8);
    tracep->fullBit(oldp+4188,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_207) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4189,(vlSymsp->TOP__arraySlice.realValue1_0_24),8);
    tracep->fullBit(oldp+4190,(vlSymsp->TOP__arraySlice.debug_0_26));
    tracep->fullBit(oldp+4191,(vlSymsp->TOP__arraySlice.debug_1_26));
    tracep->fullBit(oldp+4192,(vlSymsp->TOP__arraySlice.debug_2_26));
    tracep->fullBit(oldp+4193,(vlSymsp->TOP__arraySlice.debug_3_26));
    tracep->fullBit(oldp+4194,(vlSymsp->TOP__arraySlice.debug_4_26));
    tracep->fullBit(oldp+4195,(vlSymsp->TOP__arraySlice.debug_5_26));
    tracep->fullBit(oldp+4196,(vlSymsp->TOP__arraySlice.debug_6_26));
    tracep->fullBit(oldp+4197,(vlSymsp->TOP__arraySlice.debug_7_26));
    tracep->fullCData(oldp+4198,(vlSymsp->TOP__arraySlice.realValue_0_208),8);
    tracep->fullBit(oldp+4199,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_208) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4200,(vlSymsp->TOP__arraySlice.realValue_0_209),8);
    tracep->fullBit(oldp+4201,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_209) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4202,(vlSymsp->TOP__arraySlice.realValue_0_210),8);
    tracep->fullBit(oldp+4203,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_210) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4204,(vlSymsp->TOP__arraySlice.realValue_0_211),8);
    tracep->fullBit(oldp+4205,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_211) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4206,(vlSymsp->TOP__arraySlice.realValue_0_212),8);
    tracep->fullBit(oldp+4207,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_212) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4208,(vlSymsp->TOP__arraySlice.realValue_0_213),8);
    tracep->fullBit(oldp+4209,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_213) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4210,(vlSymsp->TOP__arraySlice.realValue_0_214),8);
    tracep->fullBit(oldp+4211,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_214) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4212,(vlSymsp->TOP__arraySlice.realValue_0_215),8);
    tracep->fullBit(oldp+4213,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_215) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4214,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4215,(vlSymsp->TOP__arraySlice.realValue1_0_25),8);
    tracep->fullBit(oldp+4216,(vlSymsp->TOP__arraySlice.debug_0_27));
    tracep->fullBit(oldp+4217,(vlSymsp->TOP__arraySlice.debug_1_27));
    tracep->fullBit(oldp+4218,(vlSymsp->TOP__arraySlice.debug_2_27));
    tracep->fullBit(oldp+4219,(vlSymsp->TOP__arraySlice.debug_3_27));
    tracep->fullBit(oldp+4220,(vlSymsp->TOP__arraySlice.debug_4_27));
    tracep->fullBit(oldp+4221,(vlSymsp->TOP__arraySlice.debug_5_27));
    tracep->fullBit(oldp+4222,(vlSymsp->TOP__arraySlice.debug_6_27));
    tracep->fullBit(oldp+4223,(vlSymsp->TOP__arraySlice.debug_7_27));
    tracep->fullCData(oldp+4224,(vlSymsp->TOP__arraySlice.realValue_0_216),8);
    tracep->fullBit(oldp+4225,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_216) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_35(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_35\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4226,(vlSymsp->TOP__arraySlice.realValue_0_217),8);
    tracep->fullBit(oldp+4227,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_217) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4228,(vlSymsp->TOP__arraySlice.realValue_0_218),8);
    tracep->fullBit(oldp+4229,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_218) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4230,(vlSymsp->TOP__arraySlice.realValue_0_219),8);
    tracep->fullBit(oldp+4231,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_219) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4232,(vlSymsp->TOP__arraySlice.realValue_0_220),8);
    tracep->fullBit(oldp+4233,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_220) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4234,(vlSymsp->TOP__arraySlice.realValue_0_221),8);
    tracep->fullBit(oldp+4235,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_221) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4236,(vlSymsp->TOP__arraySlice.realValue_0_222),8);
    tracep->fullBit(oldp+4237,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_222) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4238,(vlSymsp->TOP__arraySlice.realValue_0_223),8);
    tracep->fullBit(oldp+4239,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_223) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4240,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4241,(vlSymsp->TOP__arraySlice.realValue1_0_26),8);
    tracep->fullBit(oldp+4242,(vlSymsp->TOP__arraySlice.debug_0_28));
    tracep->fullBit(oldp+4243,(vlSymsp->TOP__arraySlice.debug_1_28));
    tracep->fullBit(oldp+4244,(vlSymsp->TOP__arraySlice.debug_2_28));
    tracep->fullBit(oldp+4245,(vlSymsp->TOP__arraySlice.debug_3_28));
    tracep->fullBit(oldp+4246,(vlSymsp->TOP__arraySlice.debug_4_28));
    tracep->fullBit(oldp+4247,(vlSymsp->TOP__arraySlice.debug_5_28));
    tracep->fullBit(oldp+4248,(vlSymsp->TOP__arraySlice.debug_6_28));
    tracep->fullBit(oldp+4249,(vlSymsp->TOP__arraySlice.debug_7_28));
    tracep->fullCData(oldp+4250,(vlSymsp->TOP__arraySlice.realValue_0_224),8);
    tracep->fullBit(oldp+4251,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_224) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4252,(vlSymsp->TOP__arraySlice.realValue_0_225),8);
    tracep->fullBit(oldp+4253,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_225) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4254,(vlSymsp->TOP__arraySlice.realValue_0_226),8);
    tracep->fullBit(oldp+4255,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_226) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4256,(vlSymsp->TOP__arraySlice.realValue_0_227),8);
    tracep->fullBit(oldp+4257,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_227) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4258,(vlSymsp->TOP__arraySlice.realValue_0_228),8);
    tracep->fullBit(oldp+4259,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_228) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4260,(vlSymsp->TOP__arraySlice.realValue_0_229),8);
    tracep->fullBit(oldp+4261,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_229) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4262,(vlSymsp->TOP__arraySlice.realValue_0_230),8);
    tracep->fullBit(oldp+4263,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_230) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4264,(vlSymsp->TOP__arraySlice.realValue_0_231),8);
    tracep->fullBit(oldp+4265,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_231) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4266,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4267,(vlSymsp->TOP__arraySlice.realValue1_0_27),8);
    tracep->fullBit(oldp+4268,(vlSymsp->TOP__arraySlice.debug_0_29));
    tracep->fullBit(oldp+4269,(vlSymsp->TOP__arraySlice.debug_1_29));
    tracep->fullBit(oldp+4270,(vlSymsp->TOP__arraySlice.debug_2_29));
    tracep->fullBit(oldp+4271,(vlSymsp->TOP__arraySlice.debug_3_29));
    tracep->fullBit(oldp+4272,(vlSymsp->TOP__arraySlice.debug_4_29));
    tracep->fullBit(oldp+4273,(vlSymsp->TOP__arraySlice.debug_5_29));
    tracep->fullBit(oldp+4274,(vlSymsp->TOP__arraySlice.debug_6_29));
    tracep->fullBit(oldp+4275,(vlSymsp->TOP__arraySlice.debug_7_29));
    tracep->fullCData(oldp+4276,(vlSymsp->TOP__arraySlice.realValue_0_232),8);
    tracep->fullBit(oldp+4277,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_232) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4278,(vlSymsp->TOP__arraySlice.realValue_0_233),8);
    tracep->fullBit(oldp+4279,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_233) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4280,(vlSymsp->TOP__arraySlice.realValue_0_234),8);
    tracep->fullBit(oldp+4281,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_234) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4282,(vlSymsp->TOP__arraySlice.realValue_0_235),8);
    tracep->fullBit(oldp+4283,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_235) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4284,(vlSymsp->TOP__arraySlice.realValue_0_236),8);
    tracep->fullBit(oldp+4285,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_236) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4286,(vlSymsp->TOP__arraySlice.realValue_0_237),8);
    tracep->fullBit(oldp+4287,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_237) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_36(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_36\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4288,(vlSymsp->TOP__arraySlice.realValue_0_238),8);
    tracep->fullBit(oldp+4289,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_238) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4290,(vlSymsp->TOP__arraySlice.realValue_0_239),8);
    tracep->fullBit(oldp+4291,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_239) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4292,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4293,(vlSymsp->TOP__arraySlice.realValue1_0_28),8);
    tracep->fullBit(oldp+4294,(vlSymsp->TOP__arraySlice.debug_0_30));
    tracep->fullBit(oldp+4295,(vlSymsp->TOP__arraySlice.debug_1_30));
    tracep->fullBit(oldp+4296,(vlSymsp->TOP__arraySlice.debug_2_30));
    tracep->fullBit(oldp+4297,(vlSymsp->TOP__arraySlice.debug_3_30));
    tracep->fullBit(oldp+4298,(vlSymsp->TOP__arraySlice.debug_4_30));
    tracep->fullBit(oldp+4299,(vlSymsp->TOP__arraySlice.debug_5_30));
    tracep->fullBit(oldp+4300,(vlSymsp->TOP__arraySlice.debug_6_30));
    tracep->fullBit(oldp+4301,(vlSymsp->TOP__arraySlice.debug_7_30));
    tracep->fullCData(oldp+4302,(vlSymsp->TOP__arraySlice.realValue_0_240),8);
    tracep->fullBit(oldp+4303,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_240) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4304,(vlSymsp->TOP__arraySlice.realValue_0_241),8);
    tracep->fullBit(oldp+4305,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_241) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4306,(vlSymsp->TOP__arraySlice.realValue_0_242),8);
    tracep->fullBit(oldp+4307,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_242) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4308,(vlSymsp->TOP__arraySlice.realValue_0_243),8);
    tracep->fullBit(oldp+4309,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_243) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4310,(vlSymsp->TOP__arraySlice.realValue_0_244),8);
    tracep->fullBit(oldp+4311,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_244) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4312,(vlSymsp->TOP__arraySlice.realValue_0_245),8);
    tracep->fullBit(oldp+4313,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_245) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4314,(vlSymsp->TOP__arraySlice.realValue_0_246),8);
    tracep->fullBit(oldp+4315,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_246) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4316,(vlSymsp->TOP__arraySlice.realValue_0_247),8);
    tracep->fullBit(oldp+4317,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_247) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4318,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4319,(vlSymsp->TOP__arraySlice.realValue1_0_29),8);
    tracep->fullBit(oldp+4320,(vlSymsp->TOP__arraySlice.debug_0_31));
    tracep->fullBit(oldp+4321,(vlSymsp->TOP__arraySlice.debug_1_31));
    tracep->fullBit(oldp+4322,(vlSymsp->TOP__arraySlice.debug_2_31));
    tracep->fullBit(oldp+4323,(vlSymsp->TOP__arraySlice.debug_3_31));
    tracep->fullBit(oldp+4324,(vlSymsp->TOP__arraySlice.debug_4_31));
    tracep->fullBit(oldp+4325,(vlSymsp->TOP__arraySlice.debug_5_31));
    tracep->fullBit(oldp+4326,(vlSymsp->TOP__arraySlice.debug_6_31));
    tracep->fullBit(oldp+4327,(vlSymsp->TOP__arraySlice.debug_7_31));
    tracep->fullCData(oldp+4328,(vlSymsp->TOP__arraySlice.realValue_0_248),8);
    tracep->fullBit(oldp+4329,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_248) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4330,(vlSymsp->TOP__arraySlice.realValue_0_249),8);
    tracep->fullBit(oldp+4331,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_249) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4332,(vlSymsp->TOP__arraySlice.realValue_0_250),8);
    tracep->fullBit(oldp+4333,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_250) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4334,(vlSymsp->TOP__arraySlice.realValue_0_251),8);
    tracep->fullBit(oldp+4335,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_251) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4336,(vlSymsp->TOP__arraySlice.realValue_0_252),8);
    tracep->fullBit(oldp+4337,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_252) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4338,(vlSymsp->TOP__arraySlice.realValue_0_253),8);
    tracep->fullBit(oldp+4339,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_253) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4340,(vlSymsp->TOP__arraySlice.realValue_0_254),8);
    tracep->fullBit(oldp+4341,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_254) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4342,(vlSymsp->TOP__arraySlice.realValue_0_255),8);
    tracep->fullBit(oldp+4343,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_255) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4344,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4345,(vlSymsp->TOP__arraySlice.realValue1_0_30),8);
    tracep->fullBit(oldp+4346,(vlSymsp->TOP__arraySlice.debug_0_32));
    tracep->fullBit(oldp+4347,(vlSymsp->TOP__arraySlice.debug_1_32));
    tracep->fullBit(oldp+4348,(vlSymsp->TOP__arraySlice.debug_2_32));
    tracep->fullBit(oldp+4349,(vlSymsp->TOP__arraySlice.debug_3_32));
    tracep->fullBit(oldp+4350,(vlSymsp->TOP__arraySlice.debug_4_32));
    tracep->fullBit(oldp+4351,(vlSymsp->TOP__arraySlice.debug_5_32));
    tracep->fullBit(oldp+4352,(vlSymsp->TOP__arraySlice.debug_6_32));
    tracep->fullBit(oldp+4353,(vlSymsp->TOP__arraySlice.debug_7_32));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_37(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_37\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4354,(vlSymsp->TOP__arraySlice.realValue_0_256),8);
    tracep->fullBit(oldp+4355,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_256) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4356,(vlSymsp->TOP__arraySlice.realValue_0_257),8);
    tracep->fullBit(oldp+4357,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_257) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4358,(vlSymsp->TOP__arraySlice.realValue_0_258),8);
    tracep->fullBit(oldp+4359,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_258) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4360,(vlSymsp->TOP__arraySlice.realValue_0_259),8);
    tracep->fullBit(oldp+4361,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_259) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4362,(vlSymsp->TOP__arraySlice.realValue_0_260),8);
    tracep->fullBit(oldp+4363,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_260) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4364,(vlSymsp->TOP__arraySlice.realValue_0_261),8);
    tracep->fullBit(oldp+4365,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_261) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4366,(vlSymsp->TOP__arraySlice.realValue_0_262),8);
    tracep->fullBit(oldp+4367,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_262) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4368,(vlSymsp->TOP__arraySlice.realValue_0_263),8);
    tracep->fullBit(oldp+4369,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_263) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4370,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4371,(vlSymsp->TOP__arraySlice.realValue1_0_31),8);
    tracep->fullBit(oldp+4372,(vlSymsp->TOP__arraySlice.debug_0_33));
    tracep->fullBit(oldp+4373,(vlSymsp->TOP__arraySlice.debug_1_33));
    tracep->fullBit(oldp+4374,(vlSymsp->TOP__arraySlice.debug_2_33));
    tracep->fullBit(oldp+4375,(vlSymsp->TOP__arraySlice.debug_3_33));
    tracep->fullBit(oldp+4376,(vlSymsp->TOP__arraySlice.debug_4_33));
    tracep->fullBit(oldp+4377,(vlSymsp->TOP__arraySlice.debug_5_33));
    tracep->fullBit(oldp+4378,(vlSymsp->TOP__arraySlice.debug_6_33));
    tracep->fullBit(oldp+4379,(vlSymsp->TOP__arraySlice.debug_7_33));
    tracep->fullCData(oldp+4380,(vlSymsp->TOP__arraySlice.realValue_0_264),8);
    tracep->fullBit(oldp+4381,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_264) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4382,(vlSymsp->TOP__arraySlice.realValue_0_265),8);
    tracep->fullBit(oldp+4383,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_265) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4384,(vlSymsp->TOP__arraySlice.realValue_0_266),8);
    tracep->fullBit(oldp+4385,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_266) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4386,(vlSymsp->TOP__arraySlice.realValue_0_267),8);
    tracep->fullBit(oldp+4387,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_267) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4388,(vlSymsp->TOP__arraySlice.realValue_0_268),8);
    tracep->fullBit(oldp+4389,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_268) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4390,(vlSymsp->TOP__arraySlice.realValue_0_269),8);
    tracep->fullBit(oldp+4391,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_269) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4392,(vlSymsp->TOP__arraySlice.realValue_0_270),8);
    tracep->fullBit(oldp+4393,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_270) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4394,(vlSymsp->TOP__arraySlice.realValue_0_271),8);
    tracep->fullBit(oldp+4395,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_271) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4396,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4397,(vlSymsp->TOP__arraySlice.realValue1_0_32),8);
    tracep->fullBit(oldp+4398,(vlSymsp->TOP__arraySlice.debug_0_34));
    tracep->fullBit(oldp+4399,(vlSymsp->TOP__arraySlice.debug_1_34));
    tracep->fullBit(oldp+4400,(vlSymsp->TOP__arraySlice.debug_2_34));
    tracep->fullBit(oldp+4401,(vlSymsp->TOP__arraySlice.debug_3_34));
    tracep->fullBit(oldp+4402,(vlSymsp->TOP__arraySlice.debug_4_34));
    tracep->fullBit(oldp+4403,(vlSymsp->TOP__arraySlice.debug_5_34));
    tracep->fullBit(oldp+4404,(vlSymsp->TOP__arraySlice.debug_6_34));
    tracep->fullBit(oldp+4405,(vlSymsp->TOP__arraySlice.debug_7_34));
    tracep->fullCData(oldp+4406,(vlSymsp->TOP__arraySlice.realValue_0_272),8);
    tracep->fullBit(oldp+4407,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_272) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4408,(vlSymsp->TOP__arraySlice.realValue_0_273),8);
    tracep->fullBit(oldp+4409,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_273) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4410,(vlSymsp->TOP__arraySlice.realValue_0_274),8);
    tracep->fullBit(oldp+4411,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_274) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4412,(vlSymsp->TOP__arraySlice.realValue_0_275),8);
    tracep->fullBit(oldp+4413,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_275) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4414,(vlSymsp->TOP__arraySlice.realValue_0_276),8);
    tracep->fullBit(oldp+4415,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_276) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}
