// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__556(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__556\n"); );
    // Body
    vlSelf->__PVT__when_ArraySlice_l392_3 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l392_3_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_3_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_3_ready)));
    vlSelf->__PVT__when_ArraySlice_l249_3 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l249_3_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_3_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_3_ready)));
    vlSelf->__PVT__when_ArraySlice_l418_3 = (((IData)(vlSelf->__PVT__handshakeTimes_3_value) 
                                              == (0xffU 
                                                  & (((IData)(vlSelf->__PVT__bReg) 
                                                      * (IData)(vlSelf->__PVT__aReg)) 
                                                     - (IData)(1U)))) 
                                             & ((IData)(vlSelf->outputStreamArrayData_3_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_3_ready)));
    vlSelf->__PVT__when_ArraySlice_l383_4 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l383_4_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_4_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_4_ready)));
    vlSelf->__PVT__when_ArraySlice_l240_4 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l240_4_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_4_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_4_ready)));
    vlSelf->__PVT__outputStreamArrayData_4_fire_6 = 
        ((IData)(vlSelf->outputStreamArrayData_4_valid) 
         & (IData)(vlSymsp->TOP.outputStreamArrayData_4_ready));
    vlSelf->__PVT__outputStreamArrayData_4_fire_13 
        = ((IData)(vlSelf->outputStreamArrayData_4_valid) 
           & (IData)(vlSymsp->TOP.outputStreamArrayData_4_ready));
    vlSelf->__PVT__when_ArraySlice_l392_4 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l392_4_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_4_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_4_ready)));
    vlSelf->__PVT__when_ArraySlice_l249_4 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l249_4_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_4_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_4_ready)));
    vlSelf->__PVT__when_ArraySlice_l418_4 = (((IData)(vlSelf->__PVT__handshakeTimes_4_value) 
                                              == (0xffU 
                                                  & (((IData)(vlSelf->__PVT__bReg) 
                                                      * (IData)(vlSelf->__PVT__aReg)) 
                                                     - (IData)(1U)))) 
                                             & ((IData)(vlSelf->outputStreamArrayData_4_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_4_ready)));
    vlSelf->__PVT__when_ArraySlice_l383_5 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l383_5)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_5_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_5_ready)));
    vlSelf->__PVT__when_ArraySlice_l240_5 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l240_5)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_5_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_5_ready)));
    vlSelf->__PVT__outputStreamArrayData_5_fire_6 = 
        ((IData)(vlSelf->outputStreamArrayData_5_valid) 
         & (IData)(vlSymsp->TOP.outputStreamArrayData_5_ready));
    vlSelf->__PVT__outputStreamArrayData_5_fire_13 
        = ((IData)(vlSelf->outputStreamArrayData_5_valid) 
           & (IData)(vlSymsp->TOP.outputStreamArrayData_5_ready));
    vlSelf->__PVT__when_ArraySlice_l392_5 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l392_5)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_5_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_5_ready)));
    vlSelf->__PVT__when_ArraySlice_l249_5 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l249_5)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_5_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_5_ready)));
    vlSelf->__PVT__when_ArraySlice_l418_5 = (((IData)(vlSelf->__PVT__handshakeTimes_5_value) 
                                              == (0xffU 
                                                  & (((IData)(vlSelf->__PVT__bReg) 
                                                      * (IData)(vlSelf->__PVT__aReg)) 
                                                     - (IData)(1U)))) 
                                             & ((IData)(vlSelf->outputStreamArrayData_5_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_5_ready)));
    vlSelf->__PVT__when_ArraySlice_l383_6 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l383_6)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_6_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_6_ready)));
    vlSelf->__PVT__when_ArraySlice_l240_6 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l240_6)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_6_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_6_ready)));
    vlSelf->__PVT__outputStreamArrayData_6_fire_6 = 
        ((IData)(vlSelf->outputStreamArrayData_6_valid) 
         & (IData)(vlSymsp->TOP.outputStreamArrayData_6_ready));
    vlSelf->__PVT__outputStreamArrayData_6_fire_13 
        = ((IData)(vlSelf->outputStreamArrayData_6_valid) 
           & (IData)(vlSymsp->TOP.outputStreamArrayData_6_ready));
    vlSelf->__PVT__when_ArraySlice_l392_6 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l392_6)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_6_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_6_ready)));
    vlSelf->__PVT__when_ArraySlice_l249_6 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l249_6)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_6_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_6_ready)));
    vlSelf->__PVT__when_ArraySlice_l418_6 = (((IData)(vlSelf->__PVT__handshakeTimes_6_value) 
                                              == (0xffU 
                                                  & (((IData)(vlSelf->__PVT__bReg) 
                                                      * (IData)(vlSelf->__PVT__aReg)) 
                                                     - (IData)(1U)))) 
                                             & ((IData)(vlSelf->outputStreamArrayData_6_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_6_ready)));
    vlSelf->__PVT__when_ArraySlice_l383_7 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l383_7)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_7_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_7_ready)));
    vlSelf->__PVT__when_ArraySlice_l240_7 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l240_7)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_7_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_7_ready)));
    vlSelf->__PVT__outputStreamArrayData_7_fire_6 = 
        ((IData)(vlSelf->outputStreamArrayData_7_valid) 
         & (IData)(vlSymsp->TOP.outputStreamArrayData_7_ready));
    vlSelf->__PVT__outputStreamArrayData_7_fire_13 
        = ((IData)(vlSelf->outputStreamArrayData_7_valid) 
           & (IData)(vlSymsp->TOP.outputStreamArrayData_7_ready));
    vlSelf->__PVT__when_ArraySlice_l392_7 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l392_7)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_7_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_7_ready)));
    vlSelf->__PVT__when_ArraySlice_l249_7 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l249_7)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_7_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_7_ready)));
    vlSelf->__PVT__when_ArraySlice_l418_7 = (((IData)(vlSelf->__PVT__handshakeTimes_7_value) 
                                              == (0xffU 
                                                  & (((IData)(vlSelf->__PVT__bReg) 
                                                      * (IData)(vlSelf->__PVT__aReg)) 
                                                     - (IData)(1U)))) 
                                             & ((IData)(vlSelf->outputStreamArrayData_7_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_7_ready)));
    vlSelf->__PVT__fifoGroup_0__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_0_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_1__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_1_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_2__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_2_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_3__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_3_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_4__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_4_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_5__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_5_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_6__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_6_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_7__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_7_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_8__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_8_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_9__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_9_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_10__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_10_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_11__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_11_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_12__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_12_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_13__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_13_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_14__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_14_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_15__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_15_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_16__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_16_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_17__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_17_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_18__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_18_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_19__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_19_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_20__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_20_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_21__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_21_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_22__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_22_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_23__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_23_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_24__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_24_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_25__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_25_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_26__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_26_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_27__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_27_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_28__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_28_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_29__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_29_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_30__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_30_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_31__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_31_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_32__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_32_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_33__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_33_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_34__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_34_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_35__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_35_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_36__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_36_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_full)));
}
