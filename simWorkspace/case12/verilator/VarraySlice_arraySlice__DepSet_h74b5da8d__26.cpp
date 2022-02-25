// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__407(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__407\n"); );
    // Body
    vlSelf->outputStreamArrayData_4_payload = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    vlSelf->outputStreamArrayData_4_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_4_payload;
                    vlSelf->outputStreamArrayData_4_valid = 0U;
                    vlSelf->outputStreamArrayData_4_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_4_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_4_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_4)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_4_1))) {
                        vlSelf->outputStreamArrayData_4_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_4_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l447_4) {
                    vlSelf->outputStreamArrayData_4_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_5_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    vlSelf->outputStreamArrayData_5_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_5_payload;
                    vlSelf->outputStreamArrayData_5_valid = 0U;
                    vlSelf->outputStreamArrayData_5_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_5_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_5_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_5))) {
                        vlSelf->outputStreamArrayData_5_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_5_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l447_5) {
                    vlSelf->outputStreamArrayData_5_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_6_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    vlSelf->outputStreamArrayData_6_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_6_payload;
                    vlSelf->outputStreamArrayData_6_valid = 0U;
                    vlSelf->outputStreamArrayData_6_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_6_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_6_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_6)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_6))) {
                        vlSelf->outputStreamArrayData_6_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_6_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l447_6) {
                    vlSelf->outputStreamArrayData_6_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_7_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    vlSelf->outputStreamArrayData_7_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_payload;
                    vlSelf->outputStreamArrayData_7_valid = 0U;
                    vlSelf->outputStreamArrayData_7_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_7_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_7)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_7))) {
                        vlSelf->outputStreamArrayData_7_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_7_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l447_7) {
                    vlSelf->outputStreamArrayData_7_valid = 1U;
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    vlSelf->outputStreamArrayData_4_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_4_payload_2;
                    vlSelf->outputStreamArrayData_4_valid = 0U;
                    vlSelf->outputStreamArrayData_4_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_4_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_4_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_4)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_4_1))) {
                        vlSelf->outputStreamArrayData_4_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_4_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l447_4) {
                    vlSelf->outputStreamArrayData_4_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_5_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    vlSelf->outputStreamArrayData_5_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_5_payload_2;
                    vlSelf->outputStreamArrayData_5_valid = 0U;
                    vlSelf->outputStreamArrayData_5_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_5_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_5_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_5))) {
                        vlSelf->outputStreamArrayData_5_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_5_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l447_5) {
                    vlSelf->outputStreamArrayData_5_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_6_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    vlSelf->outputStreamArrayData_6_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_6_payload_2;
                    vlSelf->outputStreamArrayData_6_valid = 0U;
                    vlSelf->outputStreamArrayData_6_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_6_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_6_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_6)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_6))) {
                        vlSelf->outputStreamArrayData_6_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_6_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l447_6) {
                    vlSelf->outputStreamArrayData_6_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_7_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    vlSelf->outputStreamArrayData_7_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_payload_2;
                    vlSelf->outputStreamArrayData_7_valid = 0U;
                    vlSelf->outputStreamArrayData_7_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_7_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_7)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_7))) {
                        vlSelf->outputStreamArrayData_7_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_7_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l447_7) {
                    vlSelf->outputStreamArrayData_7_valid = 1U;
                }
            }
        } else {
            vlSelf->outputStreamArrayData_4_valid = 0U;
            vlSelf->outputStreamArrayData_5_payload = 0U;
            vlSelf->outputStreamArrayData_5_valid = 0U;
            vlSelf->outputStreamArrayData_6_payload = 0U;
            vlSelf->outputStreamArrayData_6_valid = 0U;
            vlSelf->outputStreamArrayData_7_payload = 0U;
            vlSelf->outputStreamArrayData_7_valid = 0U;
        }
    } else {
        vlSelf->outputStreamArrayData_4_valid = 0U;
        vlSelf->outputStreamArrayData_5_payload = 0U;
        vlSelf->outputStreamArrayData_5_valid = 0U;
        vlSelf->outputStreamArrayData_6_payload = 0U;
        vlSelf->outputStreamArrayData_6_valid = 0U;
        vlSelf->outputStreamArrayData_7_payload = 0U;
        vlSelf->outputStreamArrayData_7_valid = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__461(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__461\n"); );
    // Body
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
    vlSelf->__PVT__fifoGroup_37__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_37_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_38__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_38_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_39__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_39_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_40__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_40_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_41__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_41_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_42__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_42_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_43__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_43_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_44__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_44_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_45__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_45_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_46__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_46_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_47__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_47_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_48__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_48_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_49__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_49_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_50__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_50_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_51__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_51_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_52__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_52_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_53__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_53_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_54__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_54_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_55__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_55_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_56__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_56_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_57__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_57_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_58__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_58_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_59__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_59_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_60__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_60_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_61__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_61_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_62__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_62_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_63__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_63_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_64__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_64_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_65__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_65_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_66__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_66_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_67__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_67_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_68__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_68_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_69__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_69_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_70__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_70_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_71__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_71_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_72__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_72_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_73__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_73_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_74__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_74_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_75__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_75_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_76__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_76_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_77__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_77_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_78__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_78_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_79__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_79_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_0__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_0_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_0_io_pop_ready));
    vlSelf->__PVT__fifoGroup_1__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_1_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_1_io_pop_ready));
    vlSelf->__PVT__fifoGroup_2__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_2_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_2_io_pop_ready));
    vlSelf->__PVT__fifoGroup_3__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_3_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_3_io_pop_ready));
    vlSelf->__PVT__fifoGroup_4__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_4_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_4_io_pop_ready));
    vlSelf->__PVT__fifoGroup_5__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_5_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_5_io_pop_ready));
}

extern const VlUnpacked<CData/*0:0*/, 64> VarraySlice__ConstPool__TABLE_h5206a6da_0;
extern const VlUnpacked<CData/*0:0*/, 64> VarraySlice__ConstPool__TABLE_hf0fb746f_0;

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__462(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__462\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx4;
    // Body
    vlSelf->__PVT__fifoGroup_6__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_6_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_6_io_pop_ready));
    vlSelf->__PVT__fifoGroup_7__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_7_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_7_io_pop_ready));
    vlSelf->__PVT__fifoGroup_8__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_8_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_8_io_pop_ready));
    vlSelf->__PVT__fifoGroup_9__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_9_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_9_io_pop_ready));
    vlSelf->__PVT__fifoGroup_10__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_10_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_10_io_pop_ready));
    vlSelf->__PVT__fifoGroup_11__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_11_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_11_io_pop_ready));
    vlSelf->__PVT__fifoGroup_12__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_12_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_12_io_pop_ready));
    vlSelf->__PVT__fifoGroup_13__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_13_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_13_io_pop_ready));
    vlSelf->__PVT__fifoGroup_14__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_14_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_14_io_pop_ready));
    vlSelf->__PVT__fifoGroup_15__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_15_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_15_io_pop_ready));
    vlSelf->__PVT__fifoGroup_16__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_16_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_16_io_pop_ready));
    vlSelf->__PVT__fifoGroup_17__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_17_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_17_io_pop_ready));
    vlSelf->__PVT__fifoGroup_18__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_18_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_18_io_pop_ready));
    vlSelf->__PVT__fifoGroup_19__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_19_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_19_io_pop_ready));
    vlSelf->__PVT__fifoGroup_20__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_20_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_20_io_pop_ready));
    vlSelf->__PVT__fifoGroup_21__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_21_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_21_io_pop_ready));
    vlSelf->__PVT__fifoGroup_22__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_22_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_22_io_pop_ready));
    vlSelf->__PVT__fifoGroup_23__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_23_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_23_io_pop_ready));
    vlSelf->__PVT__fifoGroup_24__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_24_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_24_io_pop_ready));
    vlSelf->__PVT__fifoGroup_25__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_25_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_25_io_pop_ready));
    vlSelf->__PVT__fifoGroup_26__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_26_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_26_io_pop_ready));
    vlSelf->__PVT__fifoGroup_27__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_27_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_27_io_pop_ready));
    vlSelf->__PVT__fifoGroup_28__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_28_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_28_io_pop_ready));
    vlSelf->__PVT__fifoGroup_29__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_29_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_29_io_pop_ready));
    vlSelf->__PVT__fifoGroup_30__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_30_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_30_io_pop_ready));
    vlSelf->__PVT__fifoGroup_31__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_31_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_31_io_pop_ready));
    vlSelf->__PVT__fifoGroup_32__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_32_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_32_io_pop_ready));
    vlSelf->__PVT__fifoGroup_33__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_33_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_33_io_pop_ready));
    vlSelf->__PVT__fifoGroup_34__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_34_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_34_io_pop_ready));
    vlSelf->__PVT__fifoGroup_35__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_35_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_35_io_pop_ready));
    vlSelf->__PVT__fifoGroup_36__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_36_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_36_io_pop_ready));
    vlSelf->__PVT__fifoGroup_37__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_37_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_37_io_pop_ready));
    vlSelf->__PVT__fifoGroup_38__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_38_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_38_io_pop_ready));
    vlSelf->__PVT__fifoGroup_39__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_39_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_39_io_pop_ready));
    vlSelf->__PVT__fifoGroup_40__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_40_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_40_io_pop_ready));
    vlSelf->__PVT__fifoGroup_41__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_41_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_41_io_pop_ready));
    vlSelf->__PVT__fifoGroup_42__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_42_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_42_io_pop_ready));
    vlSelf->__PVT__fifoGroup_43__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_43_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_43_io_pop_ready));
    vlSelf->__PVT__fifoGroup_44__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_44_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_44_io_pop_ready));
    vlSelf->__PVT__fifoGroup_45__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_45_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_45_io_pop_ready));
    vlSelf->__PVT__fifoGroup_46__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_46_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_46_io_pop_ready));
    vlSelf->__PVT__fifoGroup_47__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_47_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_47_io_pop_ready));
    vlSelf->__PVT__fifoGroup_48__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_48_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_48_io_pop_ready));
    vlSelf->__PVT__fifoGroup_49__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_49_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_49_io_pop_ready));
    vlSelf->__PVT__fifoGroup_50__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_50_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_50_io_pop_ready));
    vlSelf->__PVT__fifoGroup_51__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_51_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_51_io_pop_ready));
    vlSelf->__PVT__fifoGroup_52__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_52_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_52_io_pop_ready));
    vlSelf->__PVT__fifoGroup_53__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_53_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_53_io_pop_ready));
    vlSelf->__PVT__fifoGroup_54__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_54_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_54_io_pop_ready));
    vlSelf->__PVT__fifoGroup_55__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_55_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_55_io_pop_ready));
    vlSelf->__PVT__fifoGroup_56__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_56_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_56_io_pop_ready));
    vlSelf->__PVT__fifoGroup_57__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_57_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_57_io_pop_ready));
    vlSelf->__PVT__fifoGroup_58__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_58_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_58_io_pop_ready));
    vlSelf->__PVT__fifoGroup_59__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_59_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_59_io_pop_ready));
    vlSelf->__PVT__fifoGroup_60__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_60_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_60_io_pop_ready));
    vlSelf->__PVT__fifoGroup_61__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_61_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_61_io_pop_ready));
    vlSelf->__PVT__fifoGroup_62__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_62_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_62_io_pop_ready));
    vlSelf->__PVT__fifoGroup_63__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_63_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_63_io_pop_ready));
    vlSelf->__PVT__fifoGroup_64__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_64_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_64_io_pop_ready));
    vlSelf->__PVT__fifoGroup_65__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_65_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_65_io_pop_ready));
    vlSelf->__PVT__fifoGroup_66__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_66_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_66_io_pop_ready));
    vlSelf->__PVT__fifoGroup_67__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_67_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_67_io_pop_ready));
    vlSelf->__PVT__fifoGroup_68__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_68_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_68_io_pop_ready));
    vlSelf->__PVT__fifoGroup_69__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_69_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_69_io_pop_ready));
    vlSelf->__PVT__fifoGroup_70__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_70_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_70_io_pop_ready));
    vlSelf->__PVT__fifoGroup_71__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_71_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_71_io_pop_ready));
    vlSelf->__PVT__fifoGroup_72__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_72_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_72_io_pop_ready));
    vlSelf->__PVT__fifoGroup_73__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_73_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_73_io_pop_ready));
    vlSelf->__PVT__fifoGroup_74__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_74_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_74_io_pop_ready));
    vlSelf->__PVT__fifoGroup_75__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_75_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_75_io_pop_ready));
    vlSelf->__PVT__fifoGroup_76__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_76_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_76_io_pop_ready));
    vlSelf->__PVT__fifoGroup_77__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_77_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_77_io_pop_ready));
    vlSelf->__PVT__fifoGroup_78__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_78_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_78_io_pop_ready));
    vlSelf->__PVT__fifoGroup_79__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_79_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_79_io_pop_ready));
    __Vtableidx3 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_0_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_0_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx4];
    vlSelf->__PVT__outSliceNumb_0_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l392) {
                        if (vlSelf->__PVT__when_ArraySlice_l384) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l395)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l420)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l383) {
                        if (vlSelf->__PVT__when_ArraySlice_l384) {
                            vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l392) {
                        if (vlSelf->__PVT__when_ArraySlice_l384) {
                            if (vlSelf->__PVT__when_ArraySlice_l395) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418) {
                            if (vlSelf->__PVT__when_ArraySlice_l420) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447) {
                if (vlSelf->__PVT__when_ArraySlice_l418) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450)))) {
                        vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l450) {
                        vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l249) {
                        if (vlSelf->__PVT__when_ArraySlice_l384) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l252)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l277)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l240) {
                        if (vlSelf->__PVT__when_ArraySlice_l384) {
                            vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l249) {
                        if (vlSelf->__PVT__when_ArraySlice_l384) {
                            if (vlSelf->__PVT__when_ArraySlice_l252) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418) {
                            if (vlSelf->__PVT__when_ArraySlice_l277) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447) {
                if (vlSelf->__PVT__when_ArraySlice_l418) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307)))) {
                        vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l307) {
                        vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__463(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__463\n"); );
    // Init
    CData/*5:0*/ __Vtableidx5;
    CData/*5:0*/ __Vtableidx6;
    CData/*5:0*/ __Vtableidx7;
    CData/*5:0*/ __Vtableidx8;
    CData/*5:0*/ __Vtableidx9;
    CData/*5:0*/ __Vtableidx10;
    // Body
    __Vtableidx5 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_1) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_1) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_1_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx5];
    __Vtableidx6 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_1) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_1) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_1_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx6];
    vlSelf->__PVT__outSliceNumb_1_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_1)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l392_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l395_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l420_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l383_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_1) {
                            vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l392_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l395_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l420_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_1) {
                if (vlSelf->__PVT__when_ArraySlice_l418_1) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450_1)))) {
                        vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l450_1) {
                        vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_1)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l249_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l252_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l277_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l240_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_1) {
                            vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l249_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l252_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l277_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_1) {
                if (vlSelf->__PVT__when_ArraySlice_l418_1) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307_1)))) {
                        vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l307_1) {
                        vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
    }
    __Vtableidx7 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_2) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_2) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_2_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx7];
    __Vtableidx8 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_2) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_2) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_2_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx8];
    vlSelf->__PVT__outSliceNumb_2_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l392_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l395_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l420_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l383_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_2) {
                            vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l392_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l395_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l420_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_2) {
                if (vlSelf->__PVT__when_ArraySlice_l418_2) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450_2)))) {
                        vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l450_2) {
                        vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l249_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l252_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l277_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l240_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_2) {
                            vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l249_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l252_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l277_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_2) {
                if (vlSelf->__PVT__when_ArraySlice_l418_2) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307_2)))) {
                        vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l307_2) {
                        vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
    }
    __Vtableidx9 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_3) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_3_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_3) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_3_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_3_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx9];
    __Vtableidx10 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_3) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_3_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_3) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_3_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_3_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx10];
    vlSelf->__PVT__outSliceNumb_3_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_3)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l392_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_3) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l395_3)))) {
                                vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_3_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l420_3)))) {
                                vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_3) {
                if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450_3)))) {
                        vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_3)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l249_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_3) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l252_3)))) {
                                vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_3_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l277_3)))) {
                                vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_3) {
                if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307_3)))) {
                        vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__464(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__464\n"); );
    // Init
    CData/*5:0*/ __Vtableidx11;
    CData/*5:0*/ __Vtableidx12;
    CData/*5:0*/ __Vtableidx13;
    CData/*5:0*/ __Vtableidx14;
    // Body
    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_3)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l383_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_3) {
                            vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l392_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_3) {
                            if (vlSelf->__PVT__when_ArraySlice_l395_3) {
                                vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_3_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                            if (vlSelf->__PVT__when_ArraySlice_l420_3) {
                                vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_3) {
                if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                    if (vlSelf->__PVT__when_ArraySlice_l450_3) {
                        vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_3)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l240_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_3) {
                            vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l249_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_3) {
                            if (vlSelf->__PVT__when_ArraySlice_l252_3) {
                                vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_3_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                            if (vlSelf->__PVT__when_ArraySlice_l277_3) {
                                vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_3) {
                if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                    if (vlSelf->__PVT__when_ArraySlice_l307_3) {
                        vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                    }
                }
            }
        }
    }
    __Vtableidx11 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_4) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_4_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_4) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_4_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_4_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx11];
    __Vtableidx12 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_4) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_4_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_4) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_4_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_4_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx12];
    vlSelf->__PVT__outSliceNumb_4_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_4)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l392_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_4) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l395_4)))) {
                                vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_4_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_4) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l420_4)))) {
                                vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l383_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_4) {
                            vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l392_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_4) {
                            if (vlSelf->__PVT__when_ArraySlice_l395_4) {
                                vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_4_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_4) {
                            if (vlSelf->__PVT__when_ArraySlice_l420_4) {
                                vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_4) {
                if (vlSelf->__PVT__when_ArraySlice_l418_4) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450_4)))) {
                        vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l450_4) {
                        vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_4)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l249_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_4) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l252_4)))) {
                                vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_4_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_4) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l277_4)))) {
                                vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l240_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_4) {
                            vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l249_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_4) {
                            if (vlSelf->__PVT__when_ArraySlice_l252_4) {
                                vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_4_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_4) {
                            if (vlSelf->__PVT__when_ArraySlice_l277_4) {
                                vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_4) {
                if (vlSelf->__PVT__when_ArraySlice_l418_4) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307_4)))) {
                        vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l307_4) {
                        vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
    }
    __Vtableidx13 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_5) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_5_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_5) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_5_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_5_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx13];
    __Vtableidx14 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_5) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_5_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_5) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_5_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_5_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx14];
    vlSelf->__PVT__outSliceNumb_5_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l392_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_5) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l395_5)))) {
                                vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_5))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l420_5)))) {
                                vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l383_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_5) {
                            vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l392_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_5) {
                            if (vlSelf->__PVT__when_ArraySlice_l395_5) {
                                vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_5))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                            if (vlSelf->__PVT__when_ArraySlice_l420_5) {
                                vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_5) {
                if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450_5)))) {
                        vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l450_5) {
                        vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l249_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_5) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l252_5)))) {
                                vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_5))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l277_5)))) {
                                vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l240_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_5) {
                            vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l249_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_5) {
                            if (vlSelf->__PVT__when_ArraySlice_l252_5) {
                                vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_5))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                            if (vlSelf->__PVT__when_ArraySlice_l277_5) {
                                vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_5) {
                if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307_5)))) {
                        vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l307_5) {
                        vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__465(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__465\n"); );
    // Init
    CData/*5:0*/ __Vtableidx15;
    CData/*5:0*/ __Vtableidx16;
    CData/*5:0*/ __Vtableidx17;
    CData/*5:0*/ __Vtableidx18;
    // Body
    __Vtableidx15 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_6) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_6_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_6) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_6_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_6_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx15];
    __Vtableidx16 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_6) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_6_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_6) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_6_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_6_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx16];
    vlSelf->__PVT__outSliceNumb_6_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_6)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l392_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_6) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l395_6)))) {
                                vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_6))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_6) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l420_6)))) {
                                vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l383_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_6) {
                            vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l392_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_6) {
                            if (vlSelf->__PVT__when_ArraySlice_l395_6) {
                                vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_6))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_6) {
                            if (vlSelf->__PVT__when_ArraySlice_l420_6) {
                                vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_6) {
                if (vlSelf->__PVT__when_ArraySlice_l418_6) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450_6)))) {
                        vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l450_6) {
                        vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_6)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l249_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_6) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l252_6)))) {
                                vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_6))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_6) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l277_6)))) {
                                vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l240_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_6) {
                            vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l249_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_6) {
                            if (vlSelf->__PVT__when_ArraySlice_l252_6) {
                                vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_6))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_6) {
                            if (vlSelf->__PVT__when_ArraySlice_l277_6) {
                                vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_6) {
                if (vlSelf->__PVT__when_ArraySlice_l418_6) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307_6)))) {
                        vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l307_6) {
                        vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
    }
    __Vtableidx17 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_7) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_7_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_7) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_7_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_7_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx17];
    __Vtableidx18 = (((IData)(vlSelf->__PVT__when_ArraySlice_l325_7) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_7_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l468_7) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_7_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_7_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx18];
    vlSelf->__PVT__outSliceNumb_7_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_7)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l392_7) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_7) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l395_7)))) {
                                vlSelf->__PVT__outSliceNumb_7_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_7))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_7) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l420_7)))) {
                                vlSelf->__PVT__outSliceNumb_7_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l383_7) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_7) {
                            vlSelf->__PVT__outSliceNumb_7_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l392_7) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_7) {
                            if (vlSelf->__PVT__when_ArraySlice_l395_7) {
                                vlSelf->__PVT__outSliceNumb_7_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l417_7))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_7) {
                            if (vlSelf->__PVT__when_ArraySlice_l420_7) {
                                vlSelf->__PVT__outSliceNumb_7_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_7) {
                if (vlSelf->__PVT__when_ArraySlice_l418_7) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450_7)))) {
                        vlSelf->__PVT__outSliceNumb_7_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l450_7) {
                        vlSelf->__PVT__outSliceNumb_7_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_7)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l249_7) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_7) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l252_7)))) {
                                vlSelf->__PVT__outSliceNumb_7_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_7))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_7) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l277_7)))) {
                                vlSelf->__PVT__outSliceNumb_7_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l240_7) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_7) {
                            vlSelf->__PVT__outSliceNumb_7_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l249_7) {
                        if (vlSelf->__PVT__when_ArraySlice_l384_7) {
                            if (vlSelf->__PVT__when_ArraySlice_l252_7) {
                                vlSelf->__PVT__outSliceNumb_7_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l274_7))) {
                        if (vlSelf->__PVT__when_ArraySlice_l418_7) {
                            if (vlSelf->__PVT__when_ArraySlice_l277_7) {
                                vlSelf->__PVT__outSliceNumb_7_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_7) {
                if (vlSelf->__PVT__when_ArraySlice_l418_7) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307_7)))) {
                        vlSelf->__PVT__outSliceNumb_7_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l307_7) {
                        vlSelf->__PVT__outSliceNumb_7_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_7_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_0__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_0__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_0__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_1__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_1__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_1__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_2__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_2__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_2__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_3__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_3__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_3__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_4__DOT___zz_1 = 0U;
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__466(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__466\n"); );
    // Body
    if (vlSelf->__PVT__fifoGroup_4__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_4__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_5__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_5__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_5__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_6__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_6__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_6__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_7__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_7__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_7__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_8__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_8__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_8__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_9__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_9__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_9__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_10__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_10__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_10__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_11__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_11__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_11__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_12__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_12__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_12__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_13__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_13__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_13__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_14__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_14__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_14__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_15__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_15__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_15__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_16__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_16__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_16__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_17__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_17__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_17__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_18__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_18__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_18__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_19__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_19__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_19__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_20__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_20__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_20__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_21__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_21__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_21__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_22__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_22__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_22__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_23__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_23__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_23__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_24__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_24__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_24__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_25__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_25__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_25__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_26__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_26__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_26__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_27__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_27__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_27__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_28__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_28__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_28__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_29__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_29__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_29__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_30__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_30__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_30__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_31__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_31__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_31__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_32__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_32__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_32__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_33__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_33__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_33__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_34__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_34__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_34__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_35__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_35__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_35__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__468(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__468\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_67__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_67__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_67__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_68__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_68__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_68__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_69__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_69__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_69__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_70__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_70__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_70__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_71__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_71__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_71__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_72__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_72__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_72__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_73__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_73__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_73__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_74__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_74__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_74__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_75__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_75__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_75__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_76__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_76__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_76__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_77__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_77__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_77__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_78__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_78__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_78__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_79__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_79__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_79__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_0__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_1__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_2__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_3__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_4__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_5__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_6__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_7__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_8__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_9__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_10__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_11__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_12__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_13__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_14__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_15__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_16__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_17__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_18__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_19__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_20__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_21__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_22__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_23__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_24__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_25__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_26__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_27__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_28__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_29__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_30__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_31__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_32__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_33__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_34__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_35__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_36__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__469(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__469\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_37__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_38__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_39__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_40__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_41__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_42__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_43__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_44__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_45__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_46__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_47__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_48__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_49__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_50__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_51__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_52__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_53__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_54__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_55__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_56__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_57__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_58__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_59__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_60__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_61__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_62__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_63__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_64__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_65__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_66__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_67__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_68__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_69__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_70__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_71__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_72__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_73__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_74__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_75__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_76__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_77__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_78__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_79__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__handshakeTimes_0_valueNext = (((0x1680U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_0_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_0_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x1fffU 
                                                  & ((IData)(vlSelf->__PVT__handshakeTimes_0_value) 
                                                     + (IData)(vlSelf->__PVT__handshakeTimes_0_willIncrement))));
    if (vlSelf->__PVT__handshakeTimes_0_willClear) {
        vlSelf->__PVT__handshakeTimes_0_valueNext = 0U;
    }
    vlSelf->__PVT__outSliceNumb_0_valueNext = (((0x48U 
                                                 == (IData)(vlSelf->__PVT__outSliceNumb_0_value)) 
                                                & (IData)(vlSelf->__PVT__outSliceNumb_0_willIncrement))
                                                ? 0U
                                                : (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__outSliceNumb_0_value) 
                                                      + (IData)(vlSelf->__PVT__outSliceNumb_0_willIncrement))));
    if (vlSelf->__PVT__outSliceNumb_0_willClear) {
        vlSelf->__PVT__outSliceNumb_0_valueNext = 0U;
    }
    vlSelf->__PVT__handshakeTimes_1_valueNext = (((0x1680U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_1_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_1_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x1fffU 
                                                  & ((IData)(vlSelf->__PVT__handshakeTimes_1_value) 
                                                     + (IData)(vlSelf->__PVT__handshakeTimes_1_willIncrement))));
    if (vlSelf->__PVT__handshakeTimes_1_willClear) {
        vlSelf->__PVT__handshakeTimes_1_valueNext = 0U;
    }
    vlSelf->__PVT__outSliceNumb_1_valueNext = (((0x48U 
                                                 == (IData)(vlSelf->__PVT__outSliceNumb_1_value)) 
                                                & (IData)(vlSelf->__PVT__outSliceNumb_1_willIncrement))
                                                ? 0U
                                                : (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__outSliceNumb_1_value) 
                                                      + (IData)(vlSelf->__PVT__outSliceNumb_1_willIncrement))));
    if (vlSelf->__PVT__outSliceNumb_1_willClear) {
        vlSelf->__PVT__outSliceNumb_1_valueNext = 0U;
    }
    vlSelf->__PVT__handshakeTimes_2_valueNext = (((0x1680U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_2_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_2_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x1fffU 
                                                  & ((IData)(vlSelf->__PVT__handshakeTimes_2_value) 
                                                     + (IData)(vlSelf->__PVT__handshakeTimes_2_willIncrement))));
    if (vlSelf->__PVT__handshakeTimes_2_willClear) {
        vlSelf->__PVT__handshakeTimes_2_valueNext = 0U;
    }
    vlSelf->__PVT__outSliceNumb_2_valueNext = (((0x48U 
                                                 == (IData)(vlSelf->__PVT__outSliceNumb_2_value)) 
                                                & (IData)(vlSelf->__PVT__outSliceNumb_2_willIncrement))
                                                ? 0U
                                                : (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__outSliceNumb_2_value) 
                                                      + (IData)(vlSelf->__PVT__outSliceNumb_2_willIncrement))));
    if (vlSelf->__PVT__outSliceNumb_2_willClear) {
        vlSelf->__PVT__outSliceNumb_2_valueNext = 0U;
    }
    vlSelf->__PVT__handshakeTimes_3_valueNext = (((0x1680U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_3_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_3_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x1fffU 
                                                  & ((IData)(vlSelf->__PVT__handshakeTimes_3_value) 
                                                     + (IData)(vlSelf->__PVT__handshakeTimes_3_willIncrement))));
    if (vlSelf->__PVT__handshakeTimes_3_willClear) {
        vlSelf->__PVT__handshakeTimes_3_valueNext = 0U;
    }
    vlSelf->__PVT__outSliceNumb_3_valueNext = (((0x48U 
                                                 == (IData)(vlSelf->__PVT__outSliceNumb_3_value)) 
                                                & (IData)(vlSelf->__PVT__outSliceNumb_3_willIncrement))
                                                ? 0U
                                                : (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__outSliceNumb_3_value) 
                                                      + (IData)(vlSelf->__PVT__outSliceNumb_3_willIncrement))));
    if (vlSelf->__PVT__outSliceNumb_3_willClear) {
        vlSelf->__PVT__outSliceNumb_3_valueNext = 0U;
    }
    vlSelf->__PVT__handshakeTimes_4_valueNext = (((0x1680U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_4_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_4_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x1fffU 
                                                  & ((IData)(vlSelf->__PVT__handshakeTimes_4_value) 
                                                     + (IData)(vlSelf->__PVT__handshakeTimes_4_willIncrement))));
}
