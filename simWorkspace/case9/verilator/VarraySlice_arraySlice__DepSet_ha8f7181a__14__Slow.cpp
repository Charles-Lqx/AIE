// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice_arraySlice.h"

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__342(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__342\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_hd0d8dd07__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_h9652e6f5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_h1caeab01__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h6393a2a6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h029a113b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_hf0b49166__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h75574c8e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h41614608__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h1c1b3e24__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_hcf5c031f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_haa533ebd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_h61fc877b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_hab889137__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_h37b6c817__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h7fae0e28__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_he800ac84__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_h68417cd3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_hb6e3d6f8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h71f51a61__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_hbf9ea8e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_heddf8a23__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h8c4c5084__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_haa1a96c6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_hc63e3596__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_h1e972038__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h7c163517__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__26;
    VlWide<4>/*127:0*/ __Vtemp_h7f16c18b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__27;
    VlWide<4>/*127:0*/ __Vtemp_haaeb0812__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__28;
    VlWide<4>/*127:0*/ __Vtemp_hfa61e300__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__29;
    VlWide<4>/*127:0*/ __Vtemp_ha8920c3f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__30;
    VlWide<4>/*127:0*/ __Vtemp_h66f7235e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__31;
    VlWide<4>/*127:0*/ __Vtemp_hcf910cd9__0;
    // Body
    vlSelf->__PVT__fifoGroup_80_io_pop_ready = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l377) {
                    __Vtemp_hc961b8db__0[0U] = 1U;
                    __Vtemp_hc961b8db__0[1U] = 0U;
                    __Vtemp_hc961b8db__0[2U] = 0U;
                    __Vtemp_hc961b8db__0[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd0d8dd07__0, __Vtemp_hc961b8db__0, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x10000U & __Vtemp_hd0d8dd07__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9652e6f5__0, __Vtemp_hc961b8db__1, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x10000U & __Vtemp_h9652e6f5__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                    __Vtemp_hc961b8db__2[0U] = 1U;
                    __Vtemp_hc961b8db__2[1U] = 0U;
                    __Vtemp_hc961b8db__2[2U] = 0U;
                    __Vtemp_hc961b8db__2[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1caeab01__0, __Vtemp_hc961b8db__2, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x10000U & __Vtemp_h1caeab01__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6393a2a6__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x10000U & __Vtemp_h6393a2a6__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    __Vtemp_hc961b8db__4[0U] = 1U;
                    __Vtemp_hc961b8db__4[1U] = 0U;
                    __Vtemp_hc961b8db__4[2U] = 0U;
                    __Vtemp_hc961b8db__4[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h029a113b__0, __Vtemp_hc961b8db__4, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x10000U & __Vtemp_h029a113b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf0b49166__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x10000U & __Vtemp_hf0b49166__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    __Vtemp_hc961b8db__6[0U] = 1U;
                    __Vtemp_hc961b8db__6[1U] = 0U;
                    __Vtemp_hc961b8db__6[2U] = 0U;
                    __Vtemp_hc961b8db__6[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h75574c8e__0, __Vtemp_hc961b8db__6, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x10000U & __Vtemp_h75574c8e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h41614608__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x10000U & __Vtemp_h41614608__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_81_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l377) {
                    __Vtemp_hc961b8db__16[0U] = 1U;
                    __Vtemp_hc961b8db__16[1U] = 0U;
                    __Vtemp_hc961b8db__16[2U] = 0U;
                    __Vtemp_hc961b8db__16[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h68417cd3__0, __Vtemp_hc961b8db__16, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x20000U & __Vtemp_h68417cd3__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6e3d6f8__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x20000U & __Vtemp_hb6e3d6f8__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                    __Vtemp_hc961b8db__18[0U] = 1U;
                    __Vtemp_hc961b8db__18[1U] = 0U;
                    __Vtemp_hc961b8db__18[2U] = 0U;
                    __Vtemp_hc961b8db__18[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h71f51a61__0, __Vtemp_hc961b8db__18, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x20000U & __Vtemp_h71f51a61__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbf9ea8e4__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x20000U & __Vtemp_hbf9ea8e4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    __Vtemp_hc961b8db__20[0U] = 1U;
                    __Vtemp_hc961b8db__20[1U] = 0U;
                    __Vtemp_hc961b8db__20[2U] = 0U;
                    __Vtemp_hc961b8db__20[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_heddf8a23__0, __Vtemp_hc961b8db__20, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x20000U & __Vtemp_heddf8a23__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8c4c5084__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x20000U & __Vtemp_h8c4c5084__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    __Vtemp_hc961b8db__22[0U] = 1U;
                    __Vtemp_hc961b8db__22[1U] = 0U;
                    __Vtemp_hc961b8db__22[2U] = 0U;
                    __Vtemp_hc961b8db__22[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haa1a96c6__0, __Vtemp_hc961b8db__22, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x20000U & __Vtemp_haa1a96c6__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc63e3596__0, __Vtemp_hc961b8db__23, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x20000U & __Vtemp_hc63e3596__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l234) {
                    __Vtemp_hc961b8db__8[0U] = 1U;
                    __Vtemp_hc961b8db__8[1U] = 0U;
                    __Vtemp_hc961b8db__8[2U] = 0U;
                    __Vtemp_hc961b8db__8[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c1b3e24__0, __Vtemp_hc961b8db__8, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x10000U & __Vtemp_h1c1b3e24__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l234_1) {
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf5c031f__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x10000U & __Vtemp_hcf5c031f__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l234_2) {
                    __Vtemp_hc961b8db__10[0U] = 1U;
                    __Vtemp_hc961b8db__10[1U] = 0U;
                    __Vtemp_hc961b8db__10[2U] = 0U;
                    __Vtemp_hc961b8db__10[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haa533ebd__0, __Vtemp_hc961b8db__10, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x10000U & __Vtemp_haa533ebd__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l234_3) {
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h61fc877b__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x10000U & __Vtemp_h61fc877b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    __Vtemp_hc961b8db__12[0U] = 1U;
                    __Vtemp_hc961b8db__12[1U] = 0U;
                    __Vtemp_hc961b8db__12[2U] = 0U;
                    __Vtemp_hc961b8db__12[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hab889137__0, __Vtemp_hc961b8db__12, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x10000U & __Vtemp_hab889137__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h37b6c817__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x10000U & __Vtemp_h37b6c817__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    __Vtemp_hc961b8db__14[0U] = 1U;
                    __Vtemp_hc961b8db__14[1U] = 0U;
                    __Vtemp_hc961b8db__14[2U] = 0U;
                    __Vtemp_hc961b8db__14[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7fae0e28__0, __Vtemp_hc961b8db__14, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x10000U & __Vtemp_h7fae0e28__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he800ac84__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x10000U & __Vtemp_he800ac84__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_81_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l234) {
                    __Vtemp_hc961b8db__24[0U] = 1U;
                    __Vtemp_hc961b8db__24[1U] = 0U;
                    __Vtemp_hc961b8db__24[2U] = 0U;
                    __Vtemp_hc961b8db__24[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1e972038__0, __Vtemp_hc961b8db__24, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x20000U & __Vtemp_h1e972038__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l234_1) {
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7c163517__0, __Vtemp_hc961b8db__25, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x20000U & __Vtemp_h7c163517__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l234_2) {
                    __Vtemp_hc961b8db__26[0U] = 1U;
                    __Vtemp_hc961b8db__26[1U] = 0U;
                    __Vtemp_hc961b8db__26[2U] = 0U;
                    __Vtemp_hc961b8db__26[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f16c18b__0, __Vtemp_hc961b8db__26, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x20000U & __Vtemp_h7f16c18b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l234_3) {
                    __Vtemp_hc961b8db__27[0U] = 1U;
                    __Vtemp_hc961b8db__27[1U] = 0U;
                    __Vtemp_hc961b8db__27[2U] = 0U;
                    __Vtemp_hc961b8db__27[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haaeb0812__0, __Vtemp_hc961b8db__27, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x20000U & __Vtemp_haaeb0812__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    __Vtemp_hc961b8db__28[0U] = 1U;
                    __Vtemp_hc961b8db__28[1U] = 0U;
                    __Vtemp_hc961b8db__28[2U] = 0U;
                    __Vtemp_hc961b8db__28[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfa61e300__0, __Vtemp_hc961b8db__28, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x20000U & __Vtemp_hfa61e300__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    __Vtemp_hc961b8db__29[0U] = 1U;
                    __Vtemp_hc961b8db__29[1U] = 0U;
                    __Vtemp_hc961b8db__29[2U] = 0U;
                    __Vtemp_hc961b8db__29[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha8920c3f__0, __Vtemp_hc961b8db__29, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x20000U & __Vtemp_ha8920c3f__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    __Vtemp_hc961b8db__30[0U] = 1U;
                    __Vtemp_hc961b8db__30[1U] = 0U;
                    __Vtemp_hc961b8db__30[2U] = 0U;
                    __Vtemp_hc961b8db__30[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h66f7235e__0, __Vtemp_hc961b8db__30, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x20000U & __Vtemp_h66f7235e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    __Vtemp_hc961b8db__31[0U] = 1U;
                    __Vtemp_hc961b8db__31[1U] = 0U;
                    __Vtemp_hc961b8db__31[2U] = 0U;
                    __Vtemp_hc961b8db__31[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf910cd9__0, __Vtemp_hc961b8db__31, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x20000U & __Vtemp_hcf910cd9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else {
            vlSelf->__PVT__fifoGroup_81_io_pop_ready = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_81_io_pop_ready = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__343(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__343\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_hd0d8dd07__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_h9652e6f5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_h1caeab01__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h6393a2a6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h029a113b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_hf0b49166__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h75574c8e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h41614608__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h1c1b3e24__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_hcf5c031f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_haa533ebd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_h61fc877b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_hab889137__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_h37b6c817__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h7fae0e28__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_he800ac84__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_h68417cd3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_hb6e3d6f8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h71f51a61__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_hbf9ea8e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_heddf8a23__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h8c4c5084__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_haa1a96c6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_hc63e3596__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_h1e972038__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h7c163517__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__26;
    VlWide<4>/*127:0*/ __Vtemp_h7f16c18b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__27;
    VlWide<4>/*127:0*/ __Vtemp_haaeb0812__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__28;
    VlWide<4>/*127:0*/ __Vtemp_hfa61e300__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__29;
    VlWide<4>/*127:0*/ __Vtemp_ha8920c3f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__30;
    VlWide<4>/*127:0*/ __Vtemp_h66f7235e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__31;
    VlWide<4>/*127:0*/ __Vtemp_hcf910cd9__0;
    // Body
    vlSelf->__PVT__fifoGroup_82_io_pop_ready = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l377) {
                    __Vtemp_hc961b8db__0[0U] = 1U;
                    __Vtemp_hc961b8db__0[1U] = 0U;
                    __Vtemp_hc961b8db__0[2U] = 0U;
                    __Vtemp_hc961b8db__0[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd0d8dd07__0, __Vtemp_hc961b8db__0, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x40000U & __Vtemp_hd0d8dd07__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9652e6f5__0, __Vtemp_hc961b8db__1, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x40000U & __Vtemp_h9652e6f5__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                    __Vtemp_hc961b8db__2[0U] = 1U;
                    __Vtemp_hc961b8db__2[1U] = 0U;
                    __Vtemp_hc961b8db__2[2U] = 0U;
                    __Vtemp_hc961b8db__2[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1caeab01__0, __Vtemp_hc961b8db__2, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x40000U & __Vtemp_h1caeab01__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6393a2a6__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x40000U & __Vtemp_h6393a2a6__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    __Vtemp_hc961b8db__4[0U] = 1U;
                    __Vtemp_hc961b8db__4[1U] = 0U;
                    __Vtemp_hc961b8db__4[2U] = 0U;
                    __Vtemp_hc961b8db__4[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h029a113b__0, __Vtemp_hc961b8db__4, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x40000U & __Vtemp_h029a113b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf0b49166__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x40000U & __Vtemp_hf0b49166__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    __Vtemp_hc961b8db__6[0U] = 1U;
                    __Vtemp_hc961b8db__6[1U] = 0U;
                    __Vtemp_hc961b8db__6[2U] = 0U;
                    __Vtemp_hc961b8db__6[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h75574c8e__0, __Vtemp_hc961b8db__6, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x40000U & __Vtemp_h75574c8e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h41614608__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x40000U & __Vtemp_h41614608__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_83_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l377) {
                    __Vtemp_hc961b8db__16[0U] = 1U;
                    __Vtemp_hc961b8db__16[1U] = 0U;
                    __Vtemp_hc961b8db__16[2U] = 0U;
                    __Vtemp_hc961b8db__16[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h68417cd3__0, __Vtemp_hc961b8db__16, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x80000U & __Vtemp_h68417cd3__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6e3d6f8__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x80000U & __Vtemp_hb6e3d6f8__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                    __Vtemp_hc961b8db__18[0U] = 1U;
                    __Vtemp_hc961b8db__18[1U] = 0U;
                    __Vtemp_hc961b8db__18[2U] = 0U;
                    __Vtemp_hc961b8db__18[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h71f51a61__0, __Vtemp_hc961b8db__18, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x80000U & __Vtemp_h71f51a61__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbf9ea8e4__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x80000U & __Vtemp_hbf9ea8e4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    __Vtemp_hc961b8db__20[0U] = 1U;
                    __Vtemp_hc961b8db__20[1U] = 0U;
                    __Vtemp_hc961b8db__20[2U] = 0U;
                    __Vtemp_hc961b8db__20[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_heddf8a23__0, __Vtemp_hc961b8db__20, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x80000U & __Vtemp_heddf8a23__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8c4c5084__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x80000U & __Vtemp_h8c4c5084__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    __Vtemp_hc961b8db__22[0U] = 1U;
                    __Vtemp_hc961b8db__22[1U] = 0U;
                    __Vtemp_hc961b8db__22[2U] = 0U;
                    __Vtemp_hc961b8db__22[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haa1a96c6__0, __Vtemp_hc961b8db__22, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x80000U & __Vtemp_haa1a96c6__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc63e3596__0, __Vtemp_hc961b8db__23, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x80000U & __Vtemp_hc63e3596__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l234) {
                    __Vtemp_hc961b8db__8[0U] = 1U;
                    __Vtemp_hc961b8db__8[1U] = 0U;
                    __Vtemp_hc961b8db__8[2U] = 0U;
                    __Vtemp_hc961b8db__8[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c1b3e24__0, __Vtemp_hc961b8db__8, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x40000U & __Vtemp_h1c1b3e24__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l234_1) {
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf5c031f__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x40000U & __Vtemp_hcf5c031f__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l234_2) {
                    __Vtemp_hc961b8db__10[0U] = 1U;
                    __Vtemp_hc961b8db__10[1U] = 0U;
                    __Vtemp_hc961b8db__10[2U] = 0U;
                    __Vtemp_hc961b8db__10[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haa533ebd__0, __Vtemp_hc961b8db__10, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x40000U & __Vtemp_haa533ebd__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l234_3) {
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h61fc877b__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x40000U & __Vtemp_h61fc877b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    __Vtemp_hc961b8db__12[0U] = 1U;
                    __Vtemp_hc961b8db__12[1U] = 0U;
                    __Vtemp_hc961b8db__12[2U] = 0U;
                    __Vtemp_hc961b8db__12[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hab889137__0, __Vtemp_hc961b8db__12, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x40000U & __Vtemp_hab889137__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h37b6c817__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x40000U & __Vtemp_h37b6c817__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    __Vtemp_hc961b8db__14[0U] = 1U;
                    __Vtemp_hc961b8db__14[1U] = 0U;
                    __Vtemp_hc961b8db__14[2U] = 0U;
                    __Vtemp_hc961b8db__14[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7fae0e28__0, __Vtemp_hc961b8db__14, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x40000U & __Vtemp_h7fae0e28__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he800ac84__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x40000U & __Vtemp_he800ac84__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_83_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l234) {
                    __Vtemp_hc961b8db__24[0U] = 1U;
                    __Vtemp_hc961b8db__24[1U] = 0U;
                    __Vtemp_hc961b8db__24[2U] = 0U;
                    __Vtemp_hc961b8db__24[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1e972038__0, __Vtemp_hc961b8db__24, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x80000U & __Vtemp_h1e972038__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l234_1) {
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7c163517__0, __Vtemp_hc961b8db__25, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x80000U & __Vtemp_h7c163517__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l234_2) {
                    __Vtemp_hc961b8db__26[0U] = 1U;
                    __Vtemp_hc961b8db__26[1U] = 0U;
                    __Vtemp_hc961b8db__26[2U] = 0U;
                    __Vtemp_hc961b8db__26[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f16c18b__0, __Vtemp_hc961b8db__26, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x80000U & __Vtemp_h7f16c18b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l234_3) {
                    __Vtemp_hc961b8db__27[0U] = 1U;
                    __Vtemp_hc961b8db__27[1U] = 0U;
                    __Vtemp_hc961b8db__27[2U] = 0U;
                    __Vtemp_hc961b8db__27[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haaeb0812__0, __Vtemp_hc961b8db__27, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x80000U & __Vtemp_haaeb0812__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    __Vtemp_hc961b8db__28[0U] = 1U;
                    __Vtemp_hc961b8db__28[1U] = 0U;
                    __Vtemp_hc961b8db__28[2U] = 0U;
                    __Vtemp_hc961b8db__28[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfa61e300__0, __Vtemp_hc961b8db__28, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x80000U & __Vtemp_hfa61e300__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    __Vtemp_hc961b8db__29[0U] = 1U;
                    __Vtemp_hc961b8db__29[1U] = 0U;
                    __Vtemp_hc961b8db__29[2U] = 0U;
                    __Vtemp_hc961b8db__29[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha8920c3f__0, __Vtemp_hc961b8db__29, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x80000U & __Vtemp_ha8920c3f__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    __Vtemp_hc961b8db__30[0U] = 1U;
                    __Vtemp_hc961b8db__30[1U] = 0U;
                    __Vtemp_hc961b8db__30[2U] = 0U;
                    __Vtemp_hc961b8db__30[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h66f7235e__0, __Vtemp_hc961b8db__30, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x80000U & __Vtemp_h66f7235e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    __Vtemp_hc961b8db__31[0U] = 1U;
                    __Vtemp_hc961b8db__31[1U] = 0U;
                    __Vtemp_hc961b8db__31[2U] = 0U;
                    __Vtemp_hc961b8db__31[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf910cd9__0, __Vtemp_hc961b8db__31, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x80000U & __Vtemp_hcf910cd9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else {
            vlSelf->__PVT__fifoGroup_83_io_pop_ready = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_83_io_pop_ready = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__344(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__344\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_hd0d8dd07__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_h9652e6f5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_h1caeab01__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h6393a2a6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h029a113b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_hf0b49166__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h75574c8e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h41614608__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h1c1b3e24__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_hcf5c031f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_haa533ebd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_h61fc877b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_hab889137__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_h37b6c817__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h7fae0e28__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_he800ac84__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_h68417cd3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_hb6e3d6f8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h71f51a61__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_hbf9ea8e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_heddf8a23__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h8c4c5084__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_haa1a96c6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_hc63e3596__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_h1e972038__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h7c163517__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__26;
    VlWide<4>/*127:0*/ __Vtemp_h7f16c18b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__27;
    VlWide<4>/*127:0*/ __Vtemp_haaeb0812__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__28;
    VlWide<4>/*127:0*/ __Vtemp_hfa61e300__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__29;
    VlWide<4>/*127:0*/ __Vtemp_ha8920c3f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__30;
    VlWide<4>/*127:0*/ __Vtemp_h66f7235e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__31;
    VlWide<4>/*127:0*/ __Vtemp_hcf910cd9__0;
    // Body
    vlSelf->__PVT__fifoGroup_84_io_pop_ready = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l377) {
                    __Vtemp_hc961b8db__0[0U] = 1U;
                    __Vtemp_hc961b8db__0[1U] = 0U;
                    __Vtemp_hc961b8db__0[2U] = 0U;
                    __Vtemp_hc961b8db__0[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd0d8dd07__0, __Vtemp_hc961b8db__0, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x100000U & __Vtemp_hd0d8dd07__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9652e6f5__0, __Vtemp_hc961b8db__1, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x100000U & __Vtemp_h9652e6f5__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                    __Vtemp_hc961b8db__2[0U] = 1U;
                    __Vtemp_hc961b8db__2[1U] = 0U;
                    __Vtemp_hc961b8db__2[2U] = 0U;
                    __Vtemp_hc961b8db__2[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1caeab01__0, __Vtemp_hc961b8db__2, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x100000U & __Vtemp_h1caeab01__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6393a2a6__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x100000U & __Vtemp_h6393a2a6__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    __Vtemp_hc961b8db__4[0U] = 1U;
                    __Vtemp_hc961b8db__4[1U] = 0U;
                    __Vtemp_hc961b8db__4[2U] = 0U;
                    __Vtemp_hc961b8db__4[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h029a113b__0, __Vtemp_hc961b8db__4, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x100000U & __Vtemp_h029a113b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf0b49166__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x100000U & __Vtemp_hf0b49166__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    __Vtemp_hc961b8db__6[0U] = 1U;
                    __Vtemp_hc961b8db__6[1U] = 0U;
                    __Vtemp_hc961b8db__6[2U] = 0U;
                    __Vtemp_hc961b8db__6[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h75574c8e__0, __Vtemp_hc961b8db__6, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x100000U & __Vtemp_h75574c8e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h41614608__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x100000U & __Vtemp_h41614608__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_85_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l377) {
                    __Vtemp_hc961b8db__16[0U] = 1U;
                    __Vtemp_hc961b8db__16[1U] = 0U;
                    __Vtemp_hc961b8db__16[2U] = 0U;
                    __Vtemp_hc961b8db__16[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h68417cd3__0, __Vtemp_hc961b8db__16, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x200000U & __Vtemp_h68417cd3__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6e3d6f8__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x200000U & __Vtemp_hb6e3d6f8__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                    __Vtemp_hc961b8db__18[0U] = 1U;
                    __Vtemp_hc961b8db__18[1U] = 0U;
                    __Vtemp_hc961b8db__18[2U] = 0U;
                    __Vtemp_hc961b8db__18[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h71f51a61__0, __Vtemp_hc961b8db__18, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x200000U & __Vtemp_h71f51a61__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbf9ea8e4__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x200000U & __Vtemp_hbf9ea8e4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    __Vtemp_hc961b8db__20[0U] = 1U;
                    __Vtemp_hc961b8db__20[1U] = 0U;
                    __Vtemp_hc961b8db__20[2U] = 0U;
                    __Vtemp_hc961b8db__20[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_heddf8a23__0, __Vtemp_hc961b8db__20, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x200000U & __Vtemp_heddf8a23__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8c4c5084__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x200000U & __Vtemp_h8c4c5084__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    __Vtemp_hc961b8db__22[0U] = 1U;
                    __Vtemp_hc961b8db__22[1U] = 0U;
                    __Vtemp_hc961b8db__22[2U] = 0U;
                    __Vtemp_hc961b8db__22[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haa1a96c6__0, __Vtemp_hc961b8db__22, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x200000U & __Vtemp_haa1a96c6__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc63e3596__0, __Vtemp_hc961b8db__23, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x200000U & __Vtemp_hc63e3596__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l234) {
                    __Vtemp_hc961b8db__8[0U] = 1U;
                    __Vtemp_hc961b8db__8[1U] = 0U;
                    __Vtemp_hc961b8db__8[2U] = 0U;
                    __Vtemp_hc961b8db__8[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c1b3e24__0, __Vtemp_hc961b8db__8, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x100000U & __Vtemp_h1c1b3e24__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l234_1) {
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf5c031f__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x100000U & __Vtemp_hcf5c031f__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l234_2) {
                    __Vtemp_hc961b8db__10[0U] = 1U;
                    __Vtemp_hc961b8db__10[1U] = 0U;
                    __Vtemp_hc961b8db__10[2U] = 0U;
                    __Vtemp_hc961b8db__10[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haa533ebd__0, __Vtemp_hc961b8db__10, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x100000U & __Vtemp_haa533ebd__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l234_3) {
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h61fc877b__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x100000U & __Vtemp_h61fc877b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    __Vtemp_hc961b8db__12[0U] = 1U;
                    __Vtemp_hc961b8db__12[1U] = 0U;
                    __Vtemp_hc961b8db__12[2U] = 0U;
                    __Vtemp_hc961b8db__12[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hab889137__0, __Vtemp_hc961b8db__12, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x100000U & __Vtemp_hab889137__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h37b6c817__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x100000U & __Vtemp_h37b6c817__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    __Vtemp_hc961b8db__14[0U] = 1U;
                    __Vtemp_hc961b8db__14[1U] = 0U;
                    __Vtemp_hc961b8db__14[2U] = 0U;
                    __Vtemp_hc961b8db__14[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7fae0e28__0, __Vtemp_hc961b8db__14, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x100000U & __Vtemp_h7fae0e28__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he800ac84__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x100000U & __Vtemp_he800ac84__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_85_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l234) {
                    __Vtemp_hc961b8db__24[0U] = 1U;
                    __Vtemp_hc961b8db__24[1U] = 0U;
                    __Vtemp_hc961b8db__24[2U] = 0U;
                    __Vtemp_hc961b8db__24[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1e972038__0, __Vtemp_hc961b8db__24, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x200000U & __Vtemp_h1e972038__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l234_1) {
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7c163517__0, __Vtemp_hc961b8db__25, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x200000U & __Vtemp_h7c163517__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l234_2) {
                    __Vtemp_hc961b8db__26[0U] = 1U;
                    __Vtemp_hc961b8db__26[1U] = 0U;
                    __Vtemp_hc961b8db__26[2U] = 0U;
                    __Vtemp_hc961b8db__26[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f16c18b__0, __Vtemp_hc961b8db__26, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x200000U & __Vtemp_h7f16c18b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l234_3) {
                    __Vtemp_hc961b8db__27[0U] = 1U;
                    __Vtemp_hc961b8db__27[1U] = 0U;
                    __Vtemp_hc961b8db__27[2U] = 0U;
                    __Vtemp_hc961b8db__27[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haaeb0812__0, __Vtemp_hc961b8db__27, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x200000U & __Vtemp_haaeb0812__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    __Vtemp_hc961b8db__28[0U] = 1U;
                    __Vtemp_hc961b8db__28[1U] = 0U;
                    __Vtemp_hc961b8db__28[2U] = 0U;
                    __Vtemp_hc961b8db__28[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfa61e300__0, __Vtemp_hc961b8db__28, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x200000U & __Vtemp_hfa61e300__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    __Vtemp_hc961b8db__29[0U] = 1U;
                    __Vtemp_hc961b8db__29[1U] = 0U;
                    __Vtemp_hc961b8db__29[2U] = 0U;
                    __Vtemp_hc961b8db__29[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha8920c3f__0, __Vtemp_hc961b8db__29, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x200000U & __Vtemp_ha8920c3f__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    __Vtemp_hc961b8db__30[0U] = 1U;
                    __Vtemp_hc961b8db__30[1U] = 0U;
                    __Vtemp_hc961b8db__30[2U] = 0U;
                    __Vtemp_hc961b8db__30[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h66f7235e__0, __Vtemp_hc961b8db__30, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x200000U & __Vtemp_h66f7235e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    __Vtemp_hc961b8db__31[0U] = 1U;
                    __Vtemp_hc961b8db__31[1U] = 0U;
                    __Vtemp_hc961b8db__31[2U] = 0U;
                    __Vtemp_hc961b8db__31[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf910cd9__0, __Vtemp_hc961b8db__31, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x200000U & __Vtemp_hcf910cd9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else {
            vlSelf->__PVT__fifoGroup_85_io_pop_ready = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_85_io_pop_ready = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__345(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__345\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_hd0d8dd07__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_h9652e6f5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_h1caeab01__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h6393a2a6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h029a113b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_hf0b49166__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h75574c8e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h41614608__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h1c1b3e24__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_hcf5c031f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_haa533ebd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_h61fc877b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_hab889137__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_h37b6c817__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h7fae0e28__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_he800ac84__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_h68417cd3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_hb6e3d6f8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h71f51a61__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_hbf9ea8e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_heddf8a23__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h8c4c5084__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_haa1a96c6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_hc63e3596__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_h1e972038__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h7c163517__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__26;
    VlWide<4>/*127:0*/ __Vtemp_h7f16c18b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__27;
    VlWide<4>/*127:0*/ __Vtemp_haaeb0812__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__28;
    VlWide<4>/*127:0*/ __Vtemp_hfa61e300__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__29;
    VlWide<4>/*127:0*/ __Vtemp_ha8920c3f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__30;
    VlWide<4>/*127:0*/ __Vtemp_h66f7235e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__31;
    VlWide<4>/*127:0*/ __Vtemp_hcf910cd9__0;
    // Body
    vlSelf->__PVT__fifoGroup_86_io_pop_ready = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l377) {
                    __Vtemp_hc961b8db__0[0U] = 1U;
                    __Vtemp_hc961b8db__0[1U] = 0U;
                    __Vtemp_hc961b8db__0[2U] = 0U;
                    __Vtemp_hc961b8db__0[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd0d8dd07__0, __Vtemp_hc961b8db__0, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x400000U & __Vtemp_hd0d8dd07__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9652e6f5__0, __Vtemp_hc961b8db__1, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x400000U & __Vtemp_h9652e6f5__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                    __Vtemp_hc961b8db__2[0U] = 1U;
                    __Vtemp_hc961b8db__2[1U] = 0U;
                    __Vtemp_hc961b8db__2[2U] = 0U;
                    __Vtemp_hc961b8db__2[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1caeab01__0, __Vtemp_hc961b8db__2, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x400000U & __Vtemp_h1caeab01__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6393a2a6__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x400000U & __Vtemp_h6393a2a6__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    __Vtemp_hc961b8db__4[0U] = 1U;
                    __Vtemp_hc961b8db__4[1U] = 0U;
                    __Vtemp_hc961b8db__4[2U] = 0U;
                    __Vtemp_hc961b8db__4[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h029a113b__0, __Vtemp_hc961b8db__4, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x400000U & __Vtemp_h029a113b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf0b49166__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x400000U & __Vtemp_hf0b49166__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    __Vtemp_hc961b8db__6[0U] = 1U;
                    __Vtemp_hc961b8db__6[1U] = 0U;
                    __Vtemp_hc961b8db__6[2U] = 0U;
                    __Vtemp_hc961b8db__6[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h75574c8e__0, __Vtemp_hc961b8db__6, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x400000U & __Vtemp_h75574c8e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h41614608__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x400000U & __Vtemp_h41614608__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_87_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l377) {
                    __Vtemp_hc961b8db__16[0U] = 1U;
                    __Vtemp_hc961b8db__16[1U] = 0U;
                    __Vtemp_hc961b8db__16[2U] = 0U;
                    __Vtemp_hc961b8db__16[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h68417cd3__0, __Vtemp_hc961b8db__16, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x800000U & __Vtemp_h68417cd3__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6e3d6f8__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x800000U & __Vtemp_hb6e3d6f8__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                    __Vtemp_hc961b8db__18[0U] = 1U;
                    __Vtemp_hc961b8db__18[1U] = 0U;
                    __Vtemp_hc961b8db__18[2U] = 0U;
                    __Vtemp_hc961b8db__18[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h71f51a61__0, __Vtemp_hc961b8db__18, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x800000U & __Vtemp_h71f51a61__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbf9ea8e4__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x800000U & __Vtemp_hbf9ea8e4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    __Vtemp_hc961b8db__20[0U] = 1U;
                    __Vtemp_hc961b8db__20[1U] = 0U;
                    __Vtemp_hc961b8db__20[2U] = 0U;
                    __Vtemp_hc961b8db__20[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_heddf8a23__0, __Vtemp_hc961b8db__20, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x800000U & __Vtemp_heddf8a23__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8c4c5084__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x800000U & __Vtemp_h8c4c5084__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    __Vtemp_hc961b8db__22[0U] = 1U;
                    __Vtemp_hc961b8db__22[1U] = 0U;
                    __Vtemp_hc961b8db__22[2U] = 0U;
                    __Vtemp_hc961b8db__22[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haa1a96c6__0, __Vtemp_hc961b8db__22, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x800000U & __Vtemp_haa1a96c6__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc63e3596__0, __Vtemp_hc961b8db__23, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x800000U & __Vtemp_hc63e3596__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l234) {
                    __Vtemp_hc961b8db__8[0U] = 1U;
                    __Vtemp_hc961b8db__8[1U] = 0U;
                    __Vtemp_hc961b8db__8[2U] = 0U;
                    __Vtemp_hc961b8db__8[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c1b3e24__0, __Vtemp_hc961b8db__8, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x400000U & __Vtemp_h1c1b3e24__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l234_1) {
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf5c031f__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x400000U & __Vtemp_hcf5c031f__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l234_2) {
                    __Vtemp_hc961b8db__10[0U] = 1U;
                    __Vtemp_hc961b8db__10[1U] = 0U;
                    __Vtemp_hc961b8db__10[2U] = 0U;
                    __Vtemp_hc961b8db__10[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haa533ebd__0, __Vtemp_hc961b8db__10, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x400000U & __Vtemp_haa533ebd__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l234_3) {
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h61fc877b__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x400000U & __Vtemp_h61fc877b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    __Vtemp_hc961b8db__12[0U] = 1U;
                    __Vtemp_hc961b8db__12[1U] = 0U;
                    __Vtemp_hc961b8db__12[2U] = 0U;
                    __Vtemp_hc961b8db__12[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hab889137__0, __Vtemp_hc961b8db__12, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x400000U & __Vtemp_hab889137__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h37b6c817__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x400000U & __Vtemp_h37b6c817__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    __Vtemp_hc961b8db__14[0U] = 1U;
                    __Vtemp_hc961b8db__14[1U] = 0U;
                    __Vtemp_hc961b8db__14[2U] = 0U;
                    __Vtemp_hc961b8db__14[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7fae0e28__0, __Vtemp_hc961b8db__14, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x400000U & __Vtemp_h7fae0e28__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he800ac84__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x400000U & __Vtemp_he800ac84__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_87_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l234) {
                    __Vtemp_hc961b8db__24[0U] = 1U;
                    __Vtemp_hc961b8db__24[1U] = 0U;
                    __Vtemp_hc961b8db__24[2U] = 0U;
                    __Vtemp_hc961b8db__24[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1e972038__0, __Vtemp_hc961b8db__24, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x800000U & __Vtemp_h1e972038__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l234_1) {
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7c163517__0, __Vtemp_hc961b8db__25, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x800000U & __Vtemp_h7c163517__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l234_2) {
                    __Vtemp_hc961b8db__26[0U] = 1U;
                    __Vtemp_hc961b8db__26[1U] = 0U;
                    __Vtemp_hc961b8db__26[2U] = 0U;
                    __Vtemp_hc961b8db__26[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f16c18b__0, __Vtemp_hc961b8db__26, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x800000U & __Vtemp_h7f16c18b__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l234_3) {
                    __Vtemp_hc961b8db__27[0U] = 1U;
                    __Vtemp_hc961b8db__27[1U] = 0U;
                    __Vtemp_hc961b8db__27[2U] = 0U;
                    __Vtemp_hc961b8db__27[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haaeb0812__0, __Vtemp_hc961b8db__27, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x800000U & __Vtemp_haaeb0812__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    __Vtemp_hc961b8db__28[0U] = 1U;
                    __Vtemp_hc961b8db__28[1U] = 0U;
                    __Vtemp_hc961b8db__28[2U] = 0U;
                    __Vtemp_hc961b8db__28[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfa61e300__0, __Vtemp_hc961b8db__28, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x800000U & __Vtemp_hfa61e300__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    __Vtemp_hc961b8db__29[0U] = 1U;
                    __Vtemp_hc961b8db__29[1U] = 0U;
                    __Vtemp_hc961b8db__29[2U] = 0U;
                    __Vtemp_hc961b8db__29[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha8920c3f__0, __Vtemp_hc961b8db__29, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x800000U & __Vtemp_ha8920c3f__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    __Vtemp_hc961b8db__30[0U] = 1U;
                    __Vtemp_hc961b8db__30[1U] = 0U;
                    __Vtemp_hc961b8db__30[2U] = 0U;
                    __Vtemp_hc961b8db__30[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h66f7235e__0, __Vtemp_hc961b8db__30, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x800000U & __Vtemp_h66f7235e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    __Vtemp_hc961b8db__31[0U] = 1U;
                    __Vtemp_hc961b8db__31[1U] = 0U;
                    __Vtemp_hc961b8db__31[2U] = 0U;
                    __Vtemp_hc961b8db__31[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf910cd9__0, __Vtemp_hc961b8db__31, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x800000U & __Vtemp_hcf910cd9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else {
            vlSelf->__PVT__fifoGroup_87_io_pop_ready = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_87_io_pop_ready = 0U;
    }
}
