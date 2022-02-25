// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

extern const VlUnpacked<CData/*0:0*/, 64> VarraySlice__ConstPool__TABLE_h5206a6da_0;
extern const VlUnpacked<CData/*0:0*/, 64> VarraySlice__ConstPool__TABLE_hf0fb746f_0;

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__602(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__602\n"); );
    // Init
    CData/*5:0*/ __Vtableidx9;
    CData/*5:0*/ __Vtableidx10;
    CData/*5:0*/ __Vtableidx11;
    CData/*5:0*/ __Vtableidx12;
    CData/*5:0*/ __Vtableidx13;
    CData/*5:0*/ __Vtableidx14;
    // Body
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
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
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
                } else {
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_3) {
                if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450_3)))) {
                        vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l450_3) {
                        vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
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
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
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
                } else {
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_3) {
                if (vlSelf->__PVT__when_ArraySlice_l418_3) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307_3)))) {
                        vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l307_3) {
                        vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
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
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_5) {
                if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l450_5)))) {
                        vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                    }
                }
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
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_5) {
                if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l307_5)))) {
                        vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__603(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__603\n"); );
    // Init
    CData/*5:0*/ __Vtableidx15;
    CData/*5:0*/ __Vtableidx16;
    CData/*5:0*/ __Vtableidx17;
    CData/*5:0*/ __Vtableidx18;
    // Body
    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
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
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_5) {
                if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                    if (vlSelf->__PVT__when_ArraySlice_l450_5) {
                        vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
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
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l447_5) {
                if (vlSelf->__PVT__when_ArraySlice_l418_5) {
                    if (vlSelf->__PVT__when_ArraySlice_l307_5) {
                        vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                    }
                }
            }
        }
    }
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
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__604(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__604\n"); );
    // Body
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
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__605(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__605\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_31__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement = 1U;
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
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_36__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_36__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_36__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_37__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_37__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_37__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_38__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_38__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_38__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_39__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_39__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_39__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_40__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_40__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_40__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_41__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_41__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_41__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_42__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_42__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_42__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_43__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_43__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_43__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_44__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_44__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_44__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_45__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_45__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_45__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_46__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_46__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_46__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_47__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_47__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_47__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_48__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_48__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_48__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_49__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_49__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_49__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_50__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_50__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_50__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_51__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_51__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_51__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_52__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_52__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_52__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_53__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_53__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_53__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_54__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_54__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_54__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_55__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_55__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_55__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_56__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_56__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_56__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_57__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_57__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_57__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_58__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_58__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_58__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_59__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_59__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_59__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_60__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_60__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_60__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_61__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_61__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_61__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_62__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_62__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_62__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__606(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__606\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_63__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_63__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_63__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_64__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_64__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_64__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_65__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_65__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_65__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_66__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_66__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_66__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement = 0U;
    }
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
    vlSelf->__PVT__fifoGroup_80__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_80__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_80__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_81__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_81__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_81__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_82__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_82__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_82__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_83__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_83__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_83__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_84__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_84__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_84__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_85__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_85__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_85__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_86__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_86__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_86__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_87__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_87__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_87__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_88__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_88__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_88__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_89__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_89__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_89__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_90__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_90__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_90__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_91__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_91__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_91__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_92__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_92__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_92__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_93__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_93__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_93__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_94__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_94__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_94__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__607(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__607\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_94__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_95__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_95__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_95__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_96__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_96__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_96__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_97__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_97__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_97__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_98__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_98__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_98__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_99__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_99__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_99__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_100__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_100__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_100__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_101__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_101__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_101__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_102__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_102__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_102__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_103__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_103__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_103__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_104__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_104__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_104__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_105__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_105__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_105__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_106__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_106__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_106__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_107__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_107__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_107__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_108__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_108__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_108__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_109__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_109__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_109__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_110__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_110__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_110__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_110__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_110__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_110__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_111__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_111__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_111__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_111__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_111__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_111__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_112__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_112__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_112__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_112__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_112__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_112__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_113__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_113__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_113__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_113__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_113__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_113__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_114__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_114__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_114__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_114__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_114__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_114__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_115__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_115__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_115__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_115__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_115__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_115__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_116__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_116__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_116__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_116__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_116__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_116__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_117__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_117__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_117__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_117__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_117__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_117__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_118__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_118__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_118__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_118__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_118__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_118__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_119__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_119__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_119__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_119__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_119__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_119__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_120__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_120__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_120__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_120__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_120__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_120__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_121__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_121__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_121__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_121__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_121__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_121__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_122__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_122__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_122__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_122__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_122__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_122__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_123__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_123__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_123__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_123__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_123__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_123__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_124__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_124__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_124__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_124__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_124__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_124__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_125__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_125__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_125__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_125__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_125__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_125__DOT__logic_pushPtr_willIncrement = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__608(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__608\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_126__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_126__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_126__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_126__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_126__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_126__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_127__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_127__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_127__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_127__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_127__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_127__DOT__logic_pushPtr_willIncrement = 0U;
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
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__609(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__609\n"); );
    // Body
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
    vlSelf->__PVT__fifoGroup_80__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_80__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_80__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_81__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_81__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_81__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_82__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_82__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_82__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_83__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_83__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_83__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_84__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_84__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_84__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_85__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_85__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_85__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_86__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_86__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_86__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_87__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_87__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_87__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_88__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_88__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_88__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_89__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_89__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_89__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_90__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_90__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_90__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_91__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_91__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_91__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_92__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_92__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_92__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_93__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_93__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_93__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_94__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_94__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_94__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_95__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_95__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_95__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_96__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_96__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_96__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_97__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_97__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_97__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_98__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_98__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_98__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_99__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_99__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_99__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_100__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_100__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_100__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_101__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_101__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_101__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_102__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_102__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_102__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_103__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_103__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_103__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_104__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_104__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_104__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_105__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_105__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_105__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_106__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_106__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_106__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_107__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_107__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_107__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_108__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_108__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_108__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_109__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_109__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_109__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_110__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_110__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_110__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_111__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_111__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_111__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_112__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_112__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_112__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_113__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_113__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_113__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_114__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_114__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_114__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_115__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_115__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_115__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_116__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_116__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_116__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_117__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_117__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_117__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_118__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_118__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_118__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_119__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_119__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_119__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_120__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_120__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_120__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_121__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_121__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_121__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__610(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__610\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_122__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_122__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_122__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_123__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_123__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_123__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_124__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_124__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_124__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_125__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_125__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_125__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_126__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_126__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_126__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_127__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_127__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_127__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__handshakeTimes_0_valueNext = (((0x2400U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_0_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_0_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x3fffU 
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
    vlSelf->__PVT__handshakeTimes_1_valueNext = (((0x2400U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_1_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_1_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x3fffU 
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
    vlSelf->__PVT__handshakeTimes_2_valueNext = (((0x2400U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_2_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_2_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x3fffU 
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
    vlSelf->__PVT__handshakeTimes_3_valueNext = (((0x2400U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_3_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_3_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x3fffU 
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
    vlSelf->__PVT__handshakeTimes_4_valueNext = (((0x2400U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_4_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_4_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x3fffU 
                                                  & ((IData)(vlSelf->__PVT__handshakeTimes_4_value) 
                                                     + (IData)(vlSelf->__PVT__handshakeTimes_4_willIncrement))));
    if (vlSelf->__PVT__handshakeTimes_4_willClear) {
        vlSelf->__PVT__handshakeTimes_4_valueNext = 0U;
    }
    vlSelf->__PVT__outSliceNumb_4_valueNext = (((0x48U 
                                                 == (IData)(vlSelf->__PVT__outSliceNumb_4_value)) 
                                                & (IData)(vlSelf->__PVT__outSliceNumb_4_willIncrement))
                                                ? 0U
                                                : (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__outSliceNumb_4_value) 
                                                      + (IData)(vlSelf->__PVT__outSliceNumb_4_willIncrement))));
    if (vlSelf->__PVT__outSliceNumb_4_willClear) {
        vlSelf->__PVT__outSliceNumb_4_valueNext = 0U;
    }
    vlSelf->__PVT__handshakeTimes_5_valueNext = (((0x2400U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_5_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_5_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x3fffU 
                                                  & ((IData)(vlSelf->__PVT__handshakeTimes_5_value) 
                                                     + (IData)(vlSelf->__PVT__handshakeTimes_5_willIncrement))));
    if (vlSelf->__PVT__handshakeTimes_5_willClear) {
        vlSelf->__PVT__handshakeTimes_5_valueNext = 0U;
    }
    vlSelf->__PVT__outSliceNumb_5_valueNext = (((0x48U 
                                                 == (IData)(vlSelf->__PVT__outSliceNumb_5_value)) 
                                                & (IData)(vlSelf->__PVT__outSliceNumb_5_willIncrement))
                                                ? 0U
                                                : (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__outSliceNumb_5_value) 
                                                      + (IData)(vlSelf->__PVT__outSliceNumb_5_willIncrement))));
    if (vlSelf->__PVT__outSliceNumb_5_willClear) {
        vlSelf->__PVT__outSliceNumb_5_valueNext = 0U;
    }
    vlSelf->__PVT__handshakeTimes_6_valueNext = (((0x2400U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_6_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_6_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x3fffU 
                                                  & ((IData)(vlSelf->__PVT__handshakeTimes_6_value) 
                                                     + (IData)(vlSelf->__PVT__handshakeTimes_6_willIncrement))));
    if (vlSelf->__PVT__handshakeTimes_6_willClear) {
        vlSelf->__PVT__handshakeTimes_6_valueNext = 0U;
    }
    vlSelf->__PVT__outSliceNumb_6_valueNext = (((0x48U 
                                                 == (IData)(vlSelf->__PVT__outSliceNumb_6_value)) 
                                                & (IData)(vlSelf->__PVT__outSliceNumb_6_willIncrement))
                                                ? 0U
                                                : (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__outSliceNumb_6_value) 
                                                      + (IData)(vlSelf->__PVT__outSliceNumb_6_willIncrement))));
    if (vlSelf->__PVT__outSliceNumb_6_willClear) {
        vlSelf->__PVT__outSliceNumb_6_valueNext = 0U;
    }
    vlSelf->__PVT__handshakeTimes_7_valueNext = (((0x2400U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_7_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_7_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x3fffU 
                                                  & ((IData)(vlSelf->__PVT__handshakeTimes_7_value) 
                                                     + (IData)(vlSelf->__PVT__handshakeTimes_7_willIncrement))));
    if (vlSelf->__PVT__handshakeTimes_7_willClear) {
        vlSelf->__PVT__handshakeTimes_7_valueNext = 0U;
    }
    vlSelf->__PVT__outSliceNumb_7_valueNext = (((0x48U 
                                                 == (IData)(vlSelf->__PVT__outSliceNumb_7_value)) 
                                                & (IData)(vlSelf->__PVT__outSliceNumb_7_willIncrement))
                                                ? 0U
                                                : (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__outSliceNumb_7_value) 
                                                      + (IData)(vlSelf->__PVT__outSliceNumb_7_willIncrement))));
    if (vlSelf->__PVT__outSliceNumb_7_willClear) {
        vlSelf->__PVT__outSliceNumb_7_valueNext = 0U;
    }
    vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement))));
}
