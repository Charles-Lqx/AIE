// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_41(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_41\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4316,(vlSymsp->TOP__arraySlice.realValue_0_407),8);
    tracep->fullBit(oldp+4317,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_407) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4318,((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullBit(oldp+4319,(vlSymsp->TOP__arraySlice.debug_0_51));
    tracep->fullBit(oldp+4320,(vlSymsp->TOP__arraySlice.debug_1_51));
    tracep->fullBit(oldp+4321,(vlSymsp->TOP__arraySlice.debug_2_51));
    tracep->fullBit(oldp+4322,(vlSymsp->TOP__arraySlice.debug_3_51));
    tracep->fullBit(oldp+4323,(vlSymsp->TOP__arraySlice.debug_4_51));
    tracep->fullBit(oldp+4324,(vlSymsp->TOP__arraySlice.debug_5_51));
    tracep->fullBit(oldp+4325,(vlSymsp->TOP__arraySlice.debug_6_51));
    tracep->fullBit(oldp+4326,(vlSymsp->TOP__arraySlice.debug_7_51));
    tracep->fullCData(oldp+4327,(vlSymsp->TOP__arraySlice.realValue_0_408),8);
    tracep->fullBit(oldp+4328,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 3U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_408) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4329,(vlSymsp->TOP__arraySlice.realValue_0_409),8);
    tracep->fullBit(oldp+4330,(((0x7fU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_409) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4331,(vlSymsp->TOP__arraySlice.realValue_0_410),8);
    tracep->fullBit(oldp+4332,(((0x7fU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_410) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4333,(vlSymsp->TOP__arraySlice.realValue_0_411),8);
    tracep->fullBit(oldp+4334,(((0x7fU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_411) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4335,(vlSymsp->TOP__arraySlice.realValue_0_412),8);
    tracep->fullBit(oldp+4336,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_412) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 2U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4337,(vlSymsp->TOP__arraySlice.realValue_0_413),8);
    tracep->fullBit(oldp+4338,(((0x3fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_413) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4339,(vlSymsp->TOP__arraySlice.realValue_0_414),8);
    tracep->fullBit(oldp+4340,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_414) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullCData(oldp+4341,(vlSymsp->TOP__arraySlice.realValue_0_415),8);
    tracep->fullBit(oldp+4342,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0xffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_415) 
                                              - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+4343,(((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->fullCData(oldp+4344,(0U),2);
    tracep->fullCData(oldp+4345,(1U),2);
    tracep->fullCData(oldp+4346,(2U),2);
    tracep->fullCData(oldp+4347,(3U),2);
    tracep->fullIData(oldp+4348,(vlSymsp->TOP__arraySlice.__PVT__arrayDataType),32);
    tracep->fullBit(oldp+4349,(0U));
}
