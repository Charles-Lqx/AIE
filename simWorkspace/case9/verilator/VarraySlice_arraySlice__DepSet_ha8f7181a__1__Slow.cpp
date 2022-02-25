// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice_arraySlice.h"

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__287(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__287\n"); );
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
    vlSelf->__PVT__fifoGroup_57_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000000U & __Vtemp_he98149ce__0[1U])) {
                vlSelf->__PVT__fifoGroup_57_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x4000000U & __Vtemp_hb63406f3__0[1U])) {
                vlSelf->__PVT__fifoGroup_58_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x8000000U & __Vtemp_h64a49311__0[1U])) {
                vlSelf->__PVT__fifoGroup_59_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_60_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10000000U & __Vtemp_h64a88e5c__0[1U])) {
                vlSelf->__PVT__fifoGroup_60_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20000000U & __Vtemp_h9452ceeb__0[1U])) {
                vlSelf->__PVT__fifoGroup_61_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40000000U & __Vtemp_h71bacb4f__0[1U])) {
                vlSelf->__PVT__fifoGroup_62_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((__Vtemp_h8d670bed__0[1U] >> 0x1fU)) {
                vlSelf->__PVT__fifoGroup_63_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((1U & __Vtemp_h8e605556__0[2U])) {
                vlSelf->__PVT__fifoGroup_64_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((2U & __Vtemp_he12a0e5c__0[2U])) {
                vlSelf->__PVT__fifoGroup_65_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((4U & __Vtemp_h586e55f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_66_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((8U & __Vtemp_h8be11959__0[2U])) {
                vlSelf->__PVT__fifoGroup_67_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10U & __Vtemp_hb6785514__0[2U])) {
                vlSelf->__PVT__fifoGroup_68_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20U & __Vtemp_hb96eb0cf__0[2U])) {
                vlSelf->__PVT__fifoGroup_69_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_60_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
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
                    if ((0x2000000U & __Vtemp_hd37b8896__0[1U])) {
                        vlSelf->__PVT__fifoGroup_57_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x4000000U & __Vtemp_h38bdf031__0[1U])) {
                        vlSelf->__PVT__fifoGroup_58_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x8000000U & __Vtemp_h7aeebbc4__0[1U])) {
                        vlSelf->__PVT__fifoGroup_59_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_60_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10000000U & __Vtemp_h6b9018ef__0[1U])) {
                        vlSelf->__PVT__fifoGroup_60_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20000000U & __Vtemp_he099a180__0[1U])) {
                        vlSelf->__PVT__fifoGroup_61_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40000000U & __Vtemp_hd4e6ce0e__0[1U])) {
                        vlSelf->__PVT__fifoGroup_62_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((__Vtemp_hcd6c9e71__0[1U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_63_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((1U & __Vtemp_h9e31e169__0[2U])) {
                        vlSelf->__PVT__fifoGroup_64_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((2U & __Vtemp_h0ca75cf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_65_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((4U & __Vtemp_h9c88caf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_66_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((8U & __Vtemp_h1c098322__0[2U])) {
                        vlSelf->__PVT__fifoGroup_67_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10U & __Vtemp_h584ce273__0[2U])) {
                        vlSelf->__PVT__fifoGroup_68_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20U & __Vtemp_h895156f8__0[2U])) {
                        vlSelf->__PVT__fifoGroup_69_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_60_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_60_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_60_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_60_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__288(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__288\n"); );
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
    vlSelf->__PVT__fifoGroup_70_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40U & __Vtemp_he98149ce__0[2U])) {
                vlSelf->__PVT__fifoGroup_70_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_71_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80U & __Vtemp_hb63406f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_71_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100U & __Vtemp_h64a49311__0[2U])) {
                vlSelf->__PVT__fifoGroup_72_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200U & __Vtemp_h64a88e5c__0[2U])) {
                vlSelf->__PVT__fifoGroup_73_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400U & __Vtemp_h9452ceeb__0[2U])) {
                vlSelf->__PVT__fifoGroup_74_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800U & __Vtemp_h71bacb4f__0[2U])) {
                vlSelf->__PVT__fifoGroup_75_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x1000U & __Vtemp_h8d670bed__0[2U])) {
                vlSelf->__PVT__fifoGroup_76_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000U & __Vtemp_h8e605556__0[2U])) {
                vlSelf->__PVT__fifoGroup_77_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x4000U & __Vtemp_he12a0e5c__0[2U])) {
                vlSelf->__PVT__fifoGroup_78_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x8000U & __Vtemp_h586e55f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_79_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10000U & __Vtemp_h8be11959__0[2U])) {
                vlSelf->__PVT__fifoGroup_80_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20000U & __Vtemp_hb6785514__0[2U])) {
                vlSelf->__PVT__fifoGroup_81_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_82_io_push_payload = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40000U & __Vtemp_hb96eb0cf__0[2U])) {
                vlSelf->__PVT__fifoGroup_82_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_71_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_82_io_push_payload = 0U;
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
                    if ((0x40U & __Vtemp_hd37b8896__0[2U])) {
                        vlSelf->__PVT__fifoGroup_70_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_71_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x80U & __Vtemp_h38bdf031__0[2U])) {
                        vlSelf->__PVT__fifoGroup_71_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100U & __Vtemp_h7aeebbc4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_72_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200U & __Vtemp_h6b9018ef__0[2U])) {
                        vlSelf->__PVT__fifoGroup_73_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400U & __Vtemp_he099a180__0[2U])) {
                        vlSelf->__PVT__fifoGroup_74_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800U & __Vtemp_hd4e6ce0e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_75_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x1000U & __Vtemp_hcd6c9e71__0[2U])) {
                        vlSelf->__PVT__fifoGroup_76_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x2000U & __Vtemp_h9e31e169__0[2U])) {
                        vlSelf->__PVT__fifoGroup_77_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x4000U & __Vtemp_h0ca75cf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_78_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x8000U & __Vtemp_h9c88caf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_79_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10000U & __Vtemp_h1c098322__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20000U & __Vtemp_h584ce273__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_82_io_push_payload = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40000U & __Vtemp_h895156f8__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_71_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_82_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_71_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_82_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_71_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_82_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_71_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_82_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__289(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__289\n"); );
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
    vlSelf->__PVT__fifoGroup_83_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80000U & __Vtemp_he98149ce__0[2U])) {
                vlSelf->__PVT__fifoGroup_83_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100000U & __Vtemp_hb63406f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_84_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200000U & __Vtemp_h64a49311__0[2U])) {
                vlSelf->__PVT__fifoGroup_85_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400000U & __Vtemp_h64a88e5c__0[2U])) {
                vlSelf->__PVT__fifoGroup_86_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800000U & __Vtemp_h9452ceeb__0[2U])) {
                vlSelf->__PVT__fifoGroup_87_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x1000000U & __Vtemp_h71bacb4f__0[2U])) {
                vlSelf->__PVT__fifoGroup_88_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000000U & __Vtemp_h8d670bed__0[2U])) {
                vlSelf->__PVT__fifoGroup_89_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x4000000U & __Vtemp_h8e605556__0[2U])) {
                vlSelf->__PVT__fifoGroup_90_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x8000000U & __Vtemp_he12a0e5c__0[2U])) {
                vlSelf->__PVT__fifoGroup_91_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10000000U & __Vtemp_h586e55f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_92_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_93_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20000000U & __Vtemp_h8be11959__0[2U])) {
                vlSelf->__PVT__fifoGroup_93_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40000000U & __Vtemp_hb6785514__0[2U])) {
                vlSelf->__PVT__fifoGroup_94_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((__Vtemp_hb96eb0cf__0[2U] >> 0x1fU)) {
                vlSelf->__PVT__fifoGroup_95_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_93_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
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
                    if ((0x80000U & __Vtemp_hd37b8896__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100000U & __Vtemp_h38bdf031__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200000U & __Vtemp_h7aeebbc4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400000U & __Vtemp_h6b9018ef__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800000U & __Vtemp_he099a180__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x1000000U & __Vtemp_hd4e6ce0e__0[2U])) {
                        vlSelf->__PVT__fifoGroup_88_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x2000000U & __Vtemp_hcd6c9e71__0[2U])) {
                        vlSelf->__PVT__fifoGroup_89_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x4000000U & __Vtemp_h9e31e169__0[2U])) {
                        vlSelf->__PVT__fifoGroup_90_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x8000000U & __Vtemp_h0ca75cf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_91_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10000000U & __Vtemp_h9c88caf9__0[2U])) {
                        vlSelf->__PVT__fifoGroup_92_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_93_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20000000U & __Vtemp_h1c098322__0[2U])) {
                        vlSelf->__PVT__fifoGroup_93_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40000000U & __Vtemp_h584ce273__0[2U])) {
                        vlSelf->__PVT__fifoGroup_94_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((__Vtemp_h895156f8__0[2U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_95_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_93_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_93_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_93_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_93_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__290(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__290\n"); );
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
    vlSelf->__PVT__fifoGroup_96_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((1U & __Vtemp_he98149ce__0[3U])) {
                vlSelf->__PVT__fifoGroup_96_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((2U & __Vtemp_hb63406f3__0[3U])) {
                vlSelf->__PVT__fifoGroup_97_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((4U & __Vtemp_h64a49311__0[3U])) {
                vlSelf->__PVT__fifoGroup_98_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((8U & __Vtemp_h64a88e5c__0[3U])) {
                vlSelf->__PVT__fifoGroup_99_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10U & __Vtemp_h9452ceeb__0[3U])) {
                vlSelf->__PVT__fifoGroup_100_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20U & __Vtemp_h71bacb4f__0[3U])) {
                vlSelf->__PVT__fifoGroup_101_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40U & __Vtemp_h8d670bed__0[3U])) {
                vlSelf->__PVT__fifoGroup_102_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80U & __Vtemp_h8e605556__0[3U])) {
                vlSelf->__PVT__fifoGroup_103_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_104_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100U & __Vtemp_he12a0e5c__0[3U])) {
                vlSelf->__PVT__fifoGroup_104_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200U & __Vtemp_h586e55f3__0[3U])) {
                vlSelf->__PVT__fifoGroup_105_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400U & __Vtemp_h8be11959__0[3U])) {
                vlSelf->__PVT__fifoGroup_106_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800U & __Vtemp_hb6785514__0[3U])) {
                vlSelf->__PVT__fifoGroup_107_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x1000U & __Vtemp_hb96eb0cf__0[3U])) {
                vlSelf->__PVT__fifoGroup_108_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_104_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
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
                    if ((1U & __Vtemp_hd37b8896__0[3U])) {
                        vlSelf->__PVT__fifoGroup_96_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((2U & __Vtemp_h38bdf031__0[3U])) {
                        vlSelf->__PVT__fifoGroup_97_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((4U & __Vtemp_h7aeebbc4__0[3U])) {
                        vlSelf->__PVT__fifoGroup_98_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((8U & __Vtemp_h6b9018ef__0[3U])) {
                        vlSelf->__PVT__fifoGroup_99_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10U & __Vtemp_he099a180__0[3U])) {
                        vlSelf->__PVT__fifoGroup_100_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20U & __Vtemp_hd4e6ce0e__0[3U])) {
                        vlSelf->__PVT__fifoGroup_101_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40U & __Vtemp_hcd6c9e71__0[3U])) {
                        vlSelf->__PVT__fifoGroup_102_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x80U & __Vtemp_h9e31e169__0[3U])) {
                        vlSelf->__PVT__fifoGroup_103_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_104_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100U & __Vtemp_h0ca75cf9__0[3U])) {
                        vlSelf->__PVT__fifoGroup_104_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200U & __Vtemp_h9c88caf9__0[3U])) {
                        vlSelf->__PVT__fifoGroup_105_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400U & __Vtemp_h1c098322__0[3U])) {
                        vlSelf->__PVT__fifoGroup_106_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800U & __Vtemp_h584ce273__0[3U])) {
                        vlSelf->__PVT__fifoGroup_107_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x1000U & __Vtemp_h895156f8__0[3U])) {
                        vlSelf->__PVT__fifoGroup_108_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_104_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_104_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_104_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_104_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__291(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__291\n"); );
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
    // Body
    vlSelf->__PVT__fifoGroup_109_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000U & __Vtemp_he98149ce__0[3U])) {
                vlSelf->__PVT__fifoGroup_109_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x4000U & __Vtemp_hb63406f3__0[3U])) {
                vlSelf->__PVT__fifoGroup_110_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x8000U & __Vtemp_h64a49311__0[3U])) {
                vlSelf->__PVT__fifoGroup_111_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10000U & __Vtemp_h64a88e5c__0[3U])) {
                vlSelf->__PVT__fifoGroup_112_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20000U & __Vtemp_h9452ceeb__0[3U])) {
                vlSelf->__PVT__fifoGroup_113_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40000U & __Vtemp_h71bacb4f__0[3U])) {
                vlSelf->__PVT__fifoGroup_114_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_115_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80000U & __Vtemp_h8d670bed__0[3U])) {
                vlSelf->__PVT__fifoGroup_115_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100000U & __Vtemp_h8e605556__0[3U])) {
                vlSelf->__PVT__fifoGroup_116_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200000U & __Vtemp_he12a0e5c__0[3U])) {
                vlSelf->__PVT__fifoGroup_117_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400000U & __Vtemp_h586e55f3__0[3U])) {
                vlSelf->__PVT__fifoGroup_118_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800000U & __Vtemp_h8be11959__0[3U])) {
                vlSelf->__PVT__fifoGroup_119_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->inputStreamArrayData_ready = 0U;
            vlSelf->inputStreamArrayData_ready = vlSelf->__PVT___zz_inputStreamArrayData_ready;
            vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((1U & __Vtemp_hb6785514__0[0U])) {
                vlSelf->__PVT__fifoGroup_0_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
        } else {
            vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_115_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
            vlSelf->inputStreamArrayData_ready = 0U;
            vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
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
                    if ((0x2000U & __Vtemp_hd37b8896__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x4000U & __Vtemp_h38bdf031__0[3U])) {
                        vlSelf->__PVT__fifoGroup_110_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x8000U & __Vtemp_h7aeebbc4__0[3U])) {
                        vlSelf->__PVT__fifoGroup_111_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10000U & __Vtemp_h6b9018ef__0[3U])) {
                        vlSelf->__PVT__fifoGroup_112_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20000U & __Vtemp_he099a180__0[3U])) {
                        vlSelf->__PVT__fifoGroup_113_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40000U & __Vtemp_hd4e6ce0e__0[3U])) {
                        vlSelf->__PVT__fifoGroup_114_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_115_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x80000U & __Vtemp_hcd6c9e71__0[3U])) {
                        vlSelf->__PVT__fifoGroup_115_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100000U & __Vtemp_h9e31e169__0[3U])) {
                        vlSelf->__PVT__fifoGroup_116_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200000U & __Vtemp_h0ca75cf9__0[3U])) {
                        vlSelf->__PVT__fifoGroup_117_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400000U & __Vtemp_h9c88caf9__0[3U])) {
                        vlSelf->__PVT__fifoGroup_118_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800000U & __Vtemp_h1c098322__0[3U])) {
                        vlSelf->__PVT__fifoGroup_119_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->inputStreamArrayData_ready = 0U;
                    vlSelf->inputStreamArrayData_ready 
                        = vlSelf->__PVT___zz_inputStreamArrayData_ready_1;
                    vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((1U & __Vtemp_h584ce273__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_115_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
                    vlSelf->inputStreamArrayData_ready = 0U;
                    vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_115_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
                vlSelf->inputStreamArrayData_ready = 0U;
                vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_115_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
            vlSelf->inputStreamArrayData_ready = 0U;
            vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_115_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
        vlSelf->inputStreamArrayData_ready = 0U;
        vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
    }
}
