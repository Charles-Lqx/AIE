// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__498(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__498\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_he98149ce__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hd37b8896__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_hb63406f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h38bdf031__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h64a49311__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h7aeebbc4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h64a88e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h6b9018ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h9452ceeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_he099a180__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h71bacb4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_hd4e6ce0e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h8d670bed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_hcd6c9e71__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8e605556__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h9e31e169__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_he12a0e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_h0ca75cf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h586e55f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h9c88caf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h8be11959__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h1c098322__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_hb6785514__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_h584ce273__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_hb96eb0cf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h895156f8__0;
    // Body
    vlSelf->__PVT__fifoGroup_72_io_push_valid = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100U & __Vtemp_he98149ce__0[2U])) {
                vlSelf->__PVT__fifoGroup_72_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_73_io_push_valid = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200U & __Vtemp_hb63406f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_73_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_74_io_push_valid = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400U & __Vtemp_h64a49311__0[2U])) {
                vlSelf->__PVT__fifoGroup_74_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_75_io_push_valid = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800U & __Vtemp_h64a88e5c__0[2U])) {
                vlSelf->__PVT__fifoGroup_75_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_76_io_push_valid = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x1000U & __Vtemp_h9452ceeb__0[2U])) {
                vlSelf->__PVT__fifoGroup_76_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_77_io_push_valid = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000U & __Vtemp_h71bacb4f__0[2U])) {
                vlSelf->__PVT__fifoGroup_77_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_78_io_push_valid = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x4000U & __Vtemp_h8d670bed__0[2U])) {
                vlSelf->__PVT__fifoGroup_78_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_79_io_push_valid = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x8000U & __Vtemp_h8e605556__0[2U])) {
                vlSelf->__PVT__fifoGroup_79_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_80_io_push_valid = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10000U & __Vtemp_he12a0e5c__0[2U])) {
                vlSelf->__PVT__fifoGroup_80_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_81_io_push_valid = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20000U & __Vtemp_h586e55f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_81_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_82_io_push_valid = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40000U & __Vtemp_h8be11959__0[2U])) {
                vlSelf->__PVT__fifoGroup_82_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_83_io_push_valid = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80000U & __Vtemp_hb6785514__0[2U])) {
                vlSelf->__PVT__fifoGroup_83_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_84_io_push_valid = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100000U & __Vtemp_hb96eb0cf__0[2U])) {
                vlSelf->__PVT__fifoGroup_84_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
        } else {
            vlSelf->__PVT__fifoGroup_73_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_74_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_75_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_76_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_77_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_78_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_79_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_80_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_81_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_82_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_83_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_84_io_push_valid = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l336) {
                if (vlSelf->__PVT__when_ArraySlice_l337) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd37b8896__0, __Vtemp_hc961b8db__1, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100U & __Vtemp_hd37b8896__0[2U])) {
                        vlSelf->__PVT__fifoGroup_72_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_73_io_push_valid = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200U & __Vtemp_h38bdf031__0[2U])) {
                        vlSelf->__PVT__fifoGroup_73_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_74_io_push_valid = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400U & __Vtemp_h7aeebbc4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_74_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_75_io_push_valid = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800U & __Vtemp_h6b9018ef__0[2U])) {
                        vlSelf->__PVT__fifoGroup_75_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_76_io_push_valid = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x1000U & __Vtemp_he099a180__0[2U])) {
                        vlSelf->__PVT__fifoGroup_76_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_77_io_push_valid = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x2000U & __Vtemp_hd4e6ce0e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_77_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_78_io_push_valid = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x4000U & __Vtemp_hcd6c9e71__0[2U])) {
                        vlSelf->__PVT__fifoGroup_78_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_79_io_push_valid = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x8000U & __Vtemp_h9e31e169__0[2U])) {
                        vlSelf->__PVT__fifoGroup_79_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_80_io_push_valid = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10000U & __Vtemp_h0ca75cf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_81_io_push_valid = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20000U & __Vtemp_h9c88caf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_82_io_push_valid = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40000U & __Vtemp_h1c098322__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_83_io_push_valid = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x80000U & __Vtemp_h584ce273__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_84_io_push_valid = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100000U & __Vtemp_h895156f8__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_73_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_74_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_75_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_76_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_77_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_78_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_79_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_80_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_81_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_82_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_83_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_84_io_push_valid = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_73_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_74_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_75_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_76_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_77_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_78_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_79_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_80_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_81_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_82_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_83_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_84_io_push_valid = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_73_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_74_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_75_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_76_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_77_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_78_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_79_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_80_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_81_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_82_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_83_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_84_io_push_valid = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_73_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_74_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_75_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_76_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_77_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_78_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_79_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_80_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_81_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_82_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_83_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_84_io_push_valid = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__499(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__499\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_he98149ce__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hd37b8896__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_hb63406f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h38bdf031__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h64a49311__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h7aeebbc4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h64a88e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h6b9018ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h9452ceeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_he099a180__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h71bacb4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_hd4e6ce0e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h8d670bed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_hcd6c9e71__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8e605556__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h9e31e169__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_he12a0e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_h0ca75cf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h586e55f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h9c88caf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h8be11959__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h1c098322__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_hb6785514__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_h584ce273__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_hb96eb0cf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h895156f8__0;
    // Body
    vlSelf->__PVT__fifoGroup_85_io_push_valid = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200000U & __Vtemp_he98149ce__0[2U])) {
                vlSelf->__PVT__fifoGroup_85_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_86_io_push_valid = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400000U & __Vtemp_hb63406f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_86_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_87_io_push_valid = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800000U & __Vtemp_h64a49311__0[2U])) {
                vlSelf->__PVT__fifoGroup_87_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_88_io_push_valid = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x1000000U & __Vtemp_h64a88e5c__0[2U])) {
                vlSelf->__PVT__fifoGroup_88_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_89_io_push_valid = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000000U & __Vtemp_h9452ceeb__0[2U])) {
                vlSelf->__PVT__fifoGroup_89_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_90_io_push_valid = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x4000000U & __Vtemp_h71bacb4f__0[2U])) {
                vlSelf->__PVT__fifoGroup_90_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_91_io_push_valid = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x8000000U & __Vtemp_h8d670bed__0[2U])) {
                vlSelf->__PVT__fifoGroup_91_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_92_io_push_valid = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10000000U & __Vtemp_h8e605556__0[2U])) {
                vlSelf->__PVT__fifoGroup_92_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_93_io_push_valid = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20000000U & __Vtemp_he12a0e5c__0[2U])) {
                vlSelf->__PVT__fifoGroup_93_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_94_io_push_valid = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40000000U & __Vtemp_h586e55f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_94_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_95_io_push_valid = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((__Vtemp_h8be11959__0[2U] >> 0x1fU)) {
                vlSelf->__PVT__fifoGroup_95_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_96_io_push_valid = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((1U & __Vtemp_hb6785514__0[3U])) {
                vlSelf->__PVT__fifoGroup_96_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_97_io_push_valid = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((2U & __Vtemp_hb96eb0cf__0[3U])) {
                vlSelf->__PVT__fifoGroup_97_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
        } else {
            vlSelf->__PVT__fifoGroup_86_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_87_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_88_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_89_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_90_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_91_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_92_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_93_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_94_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_95_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_96_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_97_io_push_valid = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l336) {
                if (vlSelf->__PVT__when_ArraySlice_l337) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd37b8896__0, __Vtemp_hc961b8db__1, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200000U & __Vtemp_hd37b8896__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_86_io_push_valid = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400000U & __Vtemp_h38bdf031__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_87_io_push_valid = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800000U & __Vtemp_h7aeebbc4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_88_io_push_valid = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x1000000U & __Vtemp_h6b9018ef__0[2U])) {
                        vlSelf->__PVT__fifoGroup_88_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_89_io_push_valid = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x2000000U & __Vtemp_he099a180__0[2U])) {
                        vlSelf->__PVT__fifoGroup_89_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_90_io_push_valid = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x4000000U & __Vtemp_hd4e6ce0e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_90_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_91_io_push_valid = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x8000000U & __Vtemp_hcd6c9e71__0[2U])) {
                        vlSelf->__PVT__fifoGroup_91_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_92_io_push_valid = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10000000U & __Vtemp_h9e31e169__0[2U])) {
                        vlSelf->__PVT__fifoGroup_92_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_93_io_push_valid = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20000000U & __Vtemp_h0ca75cf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_93_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_94_io_push_valid = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40000000U & __Vtemp_h9c88caf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_94_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_95_io_push_valid = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((__Vtemp_h1c098322__0[2U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_95_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_96_io_push_valid = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((1U & __Vtemp_h584ce273__0[3U])) {
                        vlSelf->__PVT__fifoGroup_96_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_97_io_push_valid = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((2U & __Vtemp_h895156f8__0[3U])) {
                        vlSelf->__PVT__fifoGroup_97_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_86_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_87_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_88_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_89_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_90_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_91_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_92_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_93_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_94_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_95_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_96_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_97_io_push_valid = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_86_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_87_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_88_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_89_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_90_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_91_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_92_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_93_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_94_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_95_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_96_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_97_io_push_valid = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_86_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_87_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_88_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_89_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_90_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_91_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_92_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_93_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_94_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_95_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_96_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_97_io_push_valid = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_86_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_87_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_88_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_89_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_90_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_91_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_92_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_93_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_94_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_95_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_96_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_97_io_push_valid = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__500(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__500\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_he98149ce__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hd37b8896__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_hb63406f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h38bdf031__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h64a49311__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h7aeebbc4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h64a88e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h6b9018ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h9452ceeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_he099a180__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h71bacb4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_hd4e6ce0e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h8d670bed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_hcd6c9e71__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8e605556__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h9e31e169__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_he12a0e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_h0ca75cf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h586e55f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h9c88caf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h8be11959__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h1c098322__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_hb6785514__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_h584ce273__0;
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
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__32;
    VlWide<4>/*127:0*/ __Vtemp_h131dd758__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__33;
    VlWide<4>/*127:0*/ __Vtemp_h8ffea726__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__34;
    VlWide<4>/*127:0*/ __Vtemp_hdd65dc14__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__35;
    VlWide<4>/*127:0*/ __Vtemp_hb80133bf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__36;
    VlWide<4>/*127:0*/ __Vtemp_hda5dedf7__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__37;
    VlWide<4>/*127:0*/ __Vtemp_hd0caeb4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__38;
    VlWide<4>/*127:0*/ __Vtemp_h01f76437__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__39;
    VlWide<4>/*127:0*/ __Vtemp_hd64044ea__0;
    // Body
    vlSelf->__PVT__fifoGroup_98_io_push_valid = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((4U & __Vtemp_he98149ce__0[3U])) {
                vlSelf->__PVT__fifoGroup_98_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_99_io_push_valid = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((8U & __Vtemp_hb63406f3__0[3U])) {
                vlSelf->__PVT__fifoGroup_99_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_100_io_push_valid = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10U & __Vtemp_h64a49311__0[3U])) {
                vlSelf->__PVT__fifoGroup_100_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_101_io_push_valid = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20U & __Vtemp_h64a88e5c__0[3U])) {
                vlSelf->__PVT__fifoGroup_101_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_102_io_push_valid = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40U & __Vtemp_h9452ceeb__0[3U])) {
                vlSelf->__PVT__fifoGroup_102_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_103_io_push_valid = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80U & __Vtemp_h71bacb4f__0[3U])) {
                vlSelf->__PVT__fifoGroup_103_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_104_io_push_valid = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100U & __Vtemp_h8d670bed__0[3U])) {
                vlSelf->__PVT__fifoGroup_104_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_105_io_push_valid = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200U & __Vtemp_h8e605556__0[3U])) {
                vlSelf->__PVT__fifoGroup_105_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_106_io_push_valid = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400U & __Vtemp_he12a0e5c__0[3U])) {
                vlSelf->__PVT__fifoGroup_106_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_107_io_push_valid = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800U & __Vtemp_h586e55f3__0[3U])) {
                vlSelf->__PVT__fifoGroup_107_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_108_io_push_valid = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x1000U & __Vtemp_h8be11959__0[3U])) {
                vlSelf->__PVT__fifoGroup_108_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_109_io_push_valid = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000U & __Vtemp_hb6785514__0[3U])) {
                vlSelf->__PVT__fifoGroup_109_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
        } else {
            vlSelf->__PVT__fifoGroup_99_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_100_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_101_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_102_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_103_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_104_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_105_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_106_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_107_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_108_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_109_io_push_valid = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l336) {
                if (vlSelf->__PVT__when_ArraySlice_l337) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd37b8896__0, __Vtemp_hc961b8db__1, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((4U & __Vtemp_hd37b8896__0[3U])) {
                        vlSelf->__PVT__fifoGroup_98_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_99_io_push_valid = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((8U & __Vtemp_h38bdf031__0[3U])) {
                        vlSelf->__PVT__fifoGroup_99_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_100_io_push_valid = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10U & __Vtemp_h7aeebbc4__0[3U])) {
                        vlSelf->__PVT__fifoGroup_100_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_101_io_push_valid = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20U & __Vtemp_h6b9018ef__0[3U])) {
                        vlSelf->__PVT__fifoGroup_101_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_102_io_push_valid = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40U & __Vtemp_he099a180__0[3U])) {
                        vlSelf->__PVT__fifoGroup_102_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_103_io_push_valid = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x80U & __Vtemp_hd4e6ce0e__0[3U])) {
                        vlSelf->__PVT__fifoGroup_103_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_104_io_push_valid = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100U & __Vtemp_hcd6c9e71__0[3U])) {
                        vlSelf->__PVT__fifoGroup_104_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_105_io_push_valid = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200U & __Vtemp_h9e31e169__0[3U])) {
                        vlSelf->__PVT__fifoGroup_105_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_106_io_push_valid = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400U & __Vtemp_h0ca75cf9__0[3U])) {
                        vlSelf->__PVT__fifoGroup_106_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_107_io_push_valid = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800U & __Vtemp_h9c88caf9__0[3U])) {
                        vlSelf->__PVT__fifoGroup_107_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_108_io_push_valid = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x1000U & __Vtemp_h1c098322__0[3U])) {
                        vlSelf->__PVT__fifoGroup_108_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_109_io_push_valid = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x2000U & __Vtemp_h584ce273__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_99_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_100_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_101_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_102_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_103_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_104_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_105_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_106_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_107_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_108_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_109_io_push_valid = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_99_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_100_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_101_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_102_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_103_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_104_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_105_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_106_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_107_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_108_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_109_io_push_valid = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_99_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_100_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_101_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_102_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_103_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_104_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_105_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_106_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_107_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_108_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_109_io_push_valid = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_99_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_100_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_101_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_102_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_103_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_104_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_105_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_106_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_107_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_108_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_109_io_push_valid = 0U;
    }
    vlSelf->__PVT__fifoGroup_0_io_pop_ready = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l377) {
                    __Vtemp_hc961b8db__24[0U] = 1U;
                    __Vtemp_hc961b8db__24[1U] = 0U;
                    __Vtemp_hc961b8db__24[2U] = 0U;
                    __Vtemp_hc961b8db__24[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1e972038__0, __Vtemp_hc961b8db__24, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((1U & __Vtemp_h1e972038__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7c163517__0, __Vtemp_hc961b8db__25, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((1U & __Vtemp_h7c163517__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                    __Vtemp_hc961b8db__26[0U] = 1U;
                    __Vtemp_hc961b8db__26[1U] = 0U;
                    __Vtemp_hc961b8db__26[2U] = 0U;
                    __Vtemp_hc961b8db__26[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f16c18b__0, __Vtemp_hc961b8db__26, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((1U & __Vtemp_h7f16c18b__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                    __Vtemp_hc961b8db__27[0U] = 1U;
                    __Vtemp_hc961b8db__27[1U] = 0U;
                    __Vtemp_hc961b8db__27[2U] = 0U;
                    __Vtemp_hc961b8db__27[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haaeb0812__0, __Vtemp_hc961b8db__27, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((1U & __Vtemp_haaeb0812__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                    __Vtemp_hc961b8db__28[0U] = 1U;
                    __Vtemp_hc961b8db__28[1U] = 0U;
                    __Vtemp_hc961b8db__28[2U] = 0U;
                    __Vtemp_hc961b8db__28[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfa61e300__0, __Vtemp_hc961b8db__28, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((1U & __Vtemp_hfa61e300__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                    __Vtemp_hc961b8db__29[0U] = 1U;
                    __Vtemp_hc961b8db__29[1U] = 0U;
                    __Vtemp_hc961b8db__29[2U] = 0U;
                    __Vtemp_hc961b8db__29[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha8920c3f__0, __Vtemp_hc961b8db__29, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((1U & __Vtemp_ha8920c3f__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                    __Vtemp_hc961b8db__30[0U] = 1U;
                    __Vtemp_hc961b8db__30[1U] = 0U;
                    __Vtemp_hc961b8db__30[2U] = 0U;
                    __Vtemp_hc961b8db__30[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h66f7235e__0, __Vtemp_hc961b8db__30, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((1U & __Vtemp_h66f7235e__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l377_7) {
                    __Vtemp_hc961b8db__31[0U] = 1U;
                    __Vtemp_hc961b8db__31[1U] = 0U;
                    __Vtemp_hc961b8db__31[2U] = 0U;
                    __Vtemp_hc961b8db__31[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf910cd9__0, __Vtemp_hc961b8db__31, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((1U & __Vtemp_hcf910cd9__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l376) {
                if (vlSelf->__PVT__when_ArraySlice_l234) {
                    __Vtemp_hc961b8db__32[0U] = 1U;
                    __Vtemp_hc961b8db__32[1U] = 0U;
                    __Vtemp_hc961b8db__32[2U] = 0U;
                    __Vtemp_hc961b8db__32[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h131dd758__0, __Vtemp_hc961b8db__32, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((1U & __Vtemp_h131dd758__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                if (vlSelf->__PVT__when_ArraySlice_l234_1) {
                    __Vtemp_hc961b8db__33[0U] = 1U;
                    __Vtemp_hc961b8db__33[1U] = 0U;
                    __Vtemp_hc961b8db__33[2U] = 0U;
                    __Vtemp_hc961b8db__33[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8ffea726__0, __Vtemp_hc961b8db__33, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((1U & __Vtemp_h8ffea726__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                if (vlSelf->__PVT__when_ArraySlice_l234_2) {
                    __Vtemp_hc961b8db__34[0U] = 1U;
                    __Vtemp_hc961b8db__34[1U] = 0U;
                    __Vtemp_hc961b8db__34[2U] = 0U;
                    __Vtemp_hc961b8db__34[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hdd65dc14__0, __Vtemp_hc961b8db__34, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((1U & __Vtemp_hdd65dc14__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                if (vlSelf->__PVT__when_ArraySlice_l234_3) {
                    __Vtemp_hc961b8db__35[0U] = 1U;
                    __Vtemp_hc961b8db__35[1U] = 0U;
                    __Vtemp_hc961b8db__35[2U] = 0U;
                    __Vtemp_hc961b8db__35[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb80133bf__0, __Vtemp_hc961b8db__35, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((1U & __Vtemp_hb80133bf__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                if (vlSelf->__PVT__when_ArraySlice_l234_4) {
                    __Vtemp_hc961b8db__36[0U] = 1U;
                    __Vtemp_hc961b8db__36[1U] = 0U;
                    __Vtemp_hc961b8db__36[2U] = 0U;
                    __Vtemp_hc961b8db__36[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hda5dedf7__0, __Vtemp_hc961b8db__36, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((1U & __Vtemp_hda5dedf7__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                if (vlSelf->__PVT__when_ArraySlice_l234_5) {
                    __Vtemp_hc961b8db__37[0U] = 1U;
                    __Vtemp_hc961b8db__37[1U] = 0U;
                    __Vtemp_hc961b8db__37[2U] = 0U;
                    __Vtemp_hc961b8db__37[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd0caeb4f__0, __Vtemp_hc961b8db__37, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((1U & __Vtemp_hd0caeb4f__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                if (vlSelf->__PVT__when_ArraySlice_l234_6) {
                    __Vtemp_hc961b8db__38[0U] = 1U;
                    __Vtemp_hc961b8db__38[1U] = 0U;
                    __Vtemp_hc961b8db__38[2U] = 0U;
                    __Vtemp_hc961b8db__38[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h01f76437__0, __Vtemp_hc961b8db__38, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((1U & __Vtemp_h01f76437__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l376_7) {
                if (vlSelf->__PVT__when_ArraySlice_l234_7) {
                    __Vtemp_hc961b8db__39[0U] = 1U;
                    __Vtemp_hc961b8db__39[1U] = 0U;
                    __Vtemp_hc961b8db__39[2U] = 0U;
                    __Vtemp_hc961b8db__39[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd64044ea__0, __Vtemp_hc961b8db__39, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((1U & __Vtemp_hd64044ea__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__555(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__555\n"); );
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
    // Body
    vlSelf->__PVT__fifoGroup_109_io_pop_ready = 0U;
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
                    if ((0x2000U & __Vtemp_hd0d8dd07__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h9652e6f5__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h1caeab01__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h6393a2a6__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h029a113b__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_hf0b49166__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h75574c8e__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h41614608__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h1c1b3e24__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_hcf5c031f__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_haa533ebd__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h61fc877b__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_hab889137__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h37b6c817__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_h7fae0e28__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
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
                    if ((0x2000U & __Vtemp_he800ac84__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        }
    }
    vlSelf->__PVT__when_ArraySlice_l383 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l383)) 
                                           & ((IData)(vlSelf->outputStreamArrayData_0_valid) 
                                              & (IData)(vlSymsp->TOP.outputStreamArrayData_0_ready)));
    vlSelf->__PVT__when_ArraySlice_l240 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l240)) 
                                           & ((IData)(vlSelf->outputStreamArrayData_0_valid) 
                                              & (IData)(vlSymsp->TOP.outputStreamArrayData_0_ready)));
    vlSelf->__PVT__outputStreamArrayData_0_fire_6 = 
        ((IData)(vlSelf->outputStreamArrayData_0_valid) 
         & (IData)(vlSymsp->TOP.outputStreamArrayData_0_ready));
    vlSelf->__PVT__outputStreamArrayData_0_fire_13 
        = ((IData)(vlSelf->outputStreamArrayData_0_valid) 
           & (IData)(vlSymsp->TOP.outputStreamArrayData_0_ready));
    vlSelf->__PVT__when_ArraySlice_l392 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l392)) 
                                           & ((IData)(vlSelf->outputStreamArrayData_0_valid) 
                                              & (IData)(vlSymsp->TOP.outputStreamArrayData_0_ready)));
    vlSelf->__PVT__when_ArraySlice_l249 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l249)) 
                                           & ((IData)(vlSelf->outputStreamArrayData_0_valid) 
                                              & (IData)(vlSymsp->TOP.outputStreamArrayData_0_ready)));
    vlSelf->__PVT__when_ArraySlice_l418 = (((IData)(vlSelf->__PVT__handshakeTimes_0_value) 
                                            == (0xffU 
                                                & (((IData)(vlSelf->__PVT__bReg) 
                                                    * (IData)(vlSelf->__PVT__aReg)) 
                                                   - (IData)(1U)))) 
                                           & ((IData)(vlSelf->outputStreamArrayData_0_valid) 
                                              & (IData)(vlSymsp->TOP.outputStreamArrayData_0_ready)));
    vlSelf->__PVT__when_ArraySlice_l383_1 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l383_1_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_1_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_1_ready)));
    vlSelf->__PVT__when_ArraySlice_l240_1 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l240_1_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_1_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_1_ready)));
    vlSelf->__PVT__outputStreamArrayData_1_fire_6 = 
        ((IData)(vlSelf->outputStreamArrayData_1_valid) 
         & (IData)(vlSymsp->TOP.outputStreamArrayData_1_ready));
    vlSelf->__PVT__outputStreamArrayData_1_fire_13 
        = ((IData)(vlSelf->outputStreamArrayData_1_valid) 
           & (IData)(vlSymsp->TOP.outputStreamArrayData_1_ready));
    vlSelf->__PVT__when_ArraySlice_l392_1 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l392_1_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_1_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_1_ready)));
    vlSelf->__PVT__when_ArraySlice_l249_1 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l249_1_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_1_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_1_ready)));
    vlSelf->__PVT__when_ArraySlice_l418_1 = (((IData)(vlSelf->__PVT__handshakeTimes_1_value) 
                                              == (0xffU 
                                                  & (((IData)(vlSelf->__PVT__bReg) 
                                                      * (IData)(vlSelf->__PVT__aReg)) 
                                                     - (IData)(1U)))) 
                                             & ((IData)(vlSelf->outputStreamArrayData_1_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_1_ready)));
    vlSelf->__PVT__when_ArraySlice_l383_2 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l383_2_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_2_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_2_ready)));
    vlSelf->__PVT__when_ArraySlice_l240_2 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l240_2_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_2_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_2_ready)));
    vlSelf->__PVT__outputStreamArrayData_2_fire_6 = 
        ((IData)(vlSelf->outputStreamArrayData_2_valid) 
         & (IData)(vlSymsp->TOP.outputStreamArrayData_2_ready));
    vlSelf->__PVT__outputStreamArrayData_2_fire_13 
        = ((IData)(vlSelf->outputStreamArrayData_2_valid) 
           & (IData)(vlSymsp->TOP.outputStreamArrayData_2_ready));
    vlSelf->__PVT__when_ArraySlice_l392_2 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l392_2_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_2_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_2_ready)));
    vlSelf->__PVT__when_ArraySlice_l249_2 = ((1U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l249_2_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_2_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_2_ready)));
    vlSelf->__PVT__when_ArraySlice_l418_2 = (((IData)(vlSelf->__PVT__handshakeTimes_2_value) 
                                              == (0xffU 
                                                  & (((IData)(vlSelf->__PVT__bReg) 
                                                      * (IData)(vlSelf->__PVT__aReg)) 
                                                     - (IData)(1U)))) 
                                             & ((IData)(vlSelf->outputStreamArrayData_2_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_2_ready)));
    vlSelf->__PVT__when_ArraySlice_l383_3 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l383_3_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_3_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_3_ready)));
    vlSelf->__PVT__when_ArraySlice_l240_3 = ((1U < (IData)(vlSelf->__PVT___zz_when_ArraySlice_l240_3_1)) 
                                             & ((IData)(vlSelf->outputStreamArrayData_3_valid) 
                                                & (IData)(vlSymsp->TOP.outputStreamArrayData_3_ready)));
    vlSelf->__PVT__outputStreamArrayData_3_fire_6 = 
        ((IData)(vlSelf->outputStreamArrayData_3_valid) 
         & (IData)(vlSymsp->TOP.outputStreamArrayData_3_ready));
    vlSelf->__PVT__outputStreamArrayData_3_fire_13 
        = ((IData)(vlSelf->outputStreamArrayData_3_valid) 
           & (IData)(vlSymsp->TOP.outputStreamArrayData_3_ready));
}