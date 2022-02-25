// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__9(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__9\n"); );
    // Body
    vlSelf->__Vdly__readAround_7 = vlSelf->__PVT__readAround_7;
    vlSelf->__Vdly__readAround_6 = vlSelf->__PVT__readAround_6;
    vlSelf->__Vdly__readAround_5 = vlSelf->__PVT__readAround_5;
    vlSelf->__Vdly__readAround_4 = vlSelf->__PVT__readAround_4;
    vlSelf->__Vdly__readAround_3 = vlSelf->__PVT__readAround_3;
    vlSelf->__Vdly__readAround_2 = vlSelf->__PVT__readAround_2;
    vlSelf->__Vdly__readAround_1 = vlSelf->__PVT__readAround_1;
    vlSelf->__Vdly__readAround_0 = vlSelf->__PVT__readAround_0;
    vlSelf->__Vdly__writeAround = vlSelf->__PVT__writeAround;
    vlSelf->__Vdly__selectWriteFifo = vlSelf->__PVT__selectWriteFifo;
    vlSelf->__Vdly__selectReadFifo_0 = vlSelf->__PVT__selectReadFifo_0;
    vlSelf->__Vdly__selectReadFifo_7 = vlSelf->__PVT__selectReadFifo_7;
    vlSelf->__Vdly__selectReadFifo_6 = vlSelf->__PVT__selectReadFifo_6;
    vlSelf->__Vdly__selectReadFifo_5 = vlSelf->__PVT__selectReadFifo_5;
    vlSelf->__Vdly__selectReadFifo_4 = vlSelf->__PVT__selectReadFifo_4;
    vlSelf->__Vdly__selectReadFifo_3 = vlSelf->__PVT__selectReadFifo_3;
    vlSelf->__Vdly__selectReadFifo_2 = vlSelf->__PVT__selectReadFifo_2;
    vlSelf->__Vdly__selectReadFifo_1 = vlSelf->__PVT__selectReadFifo_1;
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__19(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__19\n"); );
    // Body
    vlSelf->__PVT__readAround_6 = vlSelf->__Vdly__readAround_6;
    vlSelf->__PVT__readAround_7 = vlSelf->__Vdly__readAround_7;
    vlSelf->__PVT__selectWriteFifo = vlSelf->__Vdly__selectWriteFifo;
    vlSelf->__PVT__selectReadFifo_0 = vlSelf->__Vdly__selectReadFifo_0;
    vlSelf->__PVT__selectReadFifo_7 = vlSelf->__Vdly__selectReadFifo_7;
    vlSelf->__PVT__selectReadFifo_1 = vlSelf->__Vdly__selectReadFifo_1;
    vlSelf->__PVT__selectReadFifo_2 = vlSelf->__Vdly__selectReadFifo_2;
    vlSelf->__PVT__selectReadFifo_3 = vlSelf->__Vdly__selectReadFifo_3;
    vlSelf->__PVT__selectReadFifo_4 = vlSelf->__Vdly__selectReadFifo_4;
    vlSelf->__PVT__selectReadFifo_5 = vlSelf->__Vdly__selectReadFifo_5;
    vlSelf->__PVT__selectReadFifo_6 = vlSelf->__Vdly__selectReadFifo_6;
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__21(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__21\n"); );
    // Body
    vlSelf->__PVT___zz_realValue1_0_1 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__aReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue1_0_2 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__aReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue1_0_3 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__aReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue1_0_4 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__aReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue1_0_5 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__aReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue1_0_6 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__aReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue1_0_7 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__aReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue1_0_8 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__aReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue1_0_9 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__aReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue1_0_10 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_11 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_12 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_13 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_14 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_15 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_16 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_17 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_18 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_19 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_20 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_21 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_22 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_23 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_24 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_25 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_26 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_27 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_28 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_29 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_30 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_31 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_32 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_33 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_34 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_35 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_36 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_37 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_38 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_39 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_40 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_41 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_42 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_43 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_44 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_45 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_46 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_47 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT__when_ArraySlice_l209 = ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                           == (0x7fU 
                                               & ((IData)(vlSelf->__PVT__wReg) 
                                                  - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l447 = ((IData)(vlSelf->__PVT__allowPadding_0) 
                                           & ((IData)(vlSelf->__PVT__wReg) 
                                              <= (IData)(vlSelf->__PVT__selectReadFifo_0)));
    vlSelf->__PVT__when_ArraySlice_l376 = ((IData)(vlSelf->__PVT__selectReadFifo_0) 
                                           < (IData)(vlSelf->__PVT__wReg));
    vlSelf->__PVT___zz_selectReadFifo_0 = (0xffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_0) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_0_6 = (0xffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_0) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_1 = (0xffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_1_6 = (0xffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_2 = (0xffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_2_6 = (0xffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_3 = (0xffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_3_6 = (0xffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__22(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__22\n"); );
    // Body
    vlSelf->__PVT___zz_selectReadFifo_4 = (0xffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_4_6 = (0xffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_5 = (0xffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_5_6 = (0xffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_6 = (0xffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_6_6 = (0xffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_7 = (0xffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT__when_ArraySlice_l468 = ((IData)(vlSelf->__PVT__handshakeTimes_0_value) 
                                           == (0xffU 
                                               & (((IData)(vlSelf->__PVT__bReg) 
                                                   * (IData)(vlSelf->__PVT__aReg)) 
                                                  - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l468_1 = ((IData)(vlSelf->__PVT__handshakeTimes_1_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l468_2 = ((IData)(vlSelf->__PVT__handshakeTimes_2_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l468_3 = ((IData)(vlSelf->__PVT__handshakeTimes_3_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l468_4 = ((IData)(vlSelf->__PVT__handshakeTimes_4_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l468_5 = ((IData)(vlSelf->__PVT__handshakeTimes_5_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l468_6 = ((IData)(vlSelf->__PVT__handshakeTimes_6_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l468_7 = ((IData)(vlSelf->__PVT__handshakeTimes_7_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l325 = ((IData)(vlSelf->__PVT__handshakeTimes_0_value) 
                                           == (0xffU 
                                               & (((IData)(vlSelf->__PVT__bReg) 
                                                   * (IData)(vlSelf->__PVT__aReg)) 
                                                  - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l325_1 = ((IData)(vlSelf->__PVT__handshakeTimes_1_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l325_2 = ((IData)(vlSelf->__PVT__handshakeTimes_2_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l325_3 = ((IData)(vlSelf->__PVT__handshakeTimes_3_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l325_4 = ((IData)(vlSelf->__PVT__handshakeTimes_4_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l325_5 = ((IData)(vlSelf->__PVT__handshakeTimes_5_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l325_6 = ((IData)(vlSelf->__PVT__handshakeTimes_6_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l325_7 = ((IData)(vlSelf->__PVT__handshakeTimes_7_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l384 = ((IData)(vlSelf->__PVT__handshakeTimes_0_value) 
                                           == (0xffU 
                                               & (((IData)(vlSelf->__PVT__bReg) 
                                                   * (IData)(vlSelf->__PVT__aReg)) 
                                                  - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l384_1 = ((IData)(vlSelf->__PVT__handshakeTimes_1_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l384_2 = ((IData)(vlSelf->__PVT__handshakeTimes_2_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l384_3 = ((IData)(vlSelf->__PVT__handshakeTimes_3_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l384_4 = ((IData)(vlSelf->__PVT__handshakeTimes_4_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l384_5 = ((IData)(vlSelf->__PVT__handshakeTimes_5_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l384_6 = ((IData)(vlSelf->__PVT__handshakeTimes_6_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l384_7 = ((IData)(vlSelf->__PVT__handshakeTimes_7_value) 
                                             == (0xffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l361 = ((((((((((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->__PVT__selectReadFifo_0) 
                                                       - 
                                                       VL_MODDIV_III(8, (IData)(vlSelf->__PVT__selectReadFifo_0), (IData)(vlSelf->__PVT__bReg))))) 
                                                  & ((IData)(vlSelf->__PVT__writeAround) 
                                                     ^ (IData)(vlSelf->__PVT__readAround_0))) 
                                                 | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                         - 
                                                         VL_MODDIV_III(8, (IData)(vlSelf->__PVT__selectReadFifo_1), (IData)(vlSelf->__PVT__bReg))))) 
                                                    & ((IData)(vlSelf->__PVT__writeAround) 
                                                       ^ (IData)(vlSelf->__PVT__readAround_1)))) 
                                                | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                        - 
                                                        VL_MODDIV_III(8, (IData)(vlSelf->__PVT__selectReadFifo_2), (IData)(vlSelf->__PVT__bReg))))) 
                                                   & ((IData)(vlSelf->__PVT__writeAround) 
                                                      ^ (IData)(vlSelf->__PVT__readAround_2)))) 
                                               | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                       - 
                                                       VL_MODDIV_III(8, (IData)(vlSelf->__PVT__selectReadFifo_3), (IData)(vlSelf->__PVT__bReg))))) 
                                                  & ((IData)(vlSelf->__PVT__writeAround) 
                                                     ^ (IData)(vlSelf->__PVT__readAround_3)))) 
                                              | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                                      - 
                                                      VL_MODDIV_III(8, (IData)(vlSelf->__PVT__selectReadFifo_4), (IData)(vlSelf->__PVT__bReg))))) 
                                                 & ((IData)(vlSelf->__PVT__writeAround) 
                                                    ^ (IData)(vlSelf->__PVT__readAround_4)))) 
                                             | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                     - 
                                                     VL_MODDIV_III(8, (IData)(vlSelf->__PVT__selectReadFifo_5), (IData)(vlSelf->__PVT__bReg))))) 
                                                & ((IData)(vlSelf->__PVT__writeAround) 
                                                   ^ (IData)(vlSelf->__PVT__readAround_5)))) 
                                            | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                                    - 
                                                    VL_MODDIV_III(8, (IData)(vlSelf->__PVT__selectReadFifo_6), (IData)(vlSelf->__PVT__bReg))))) 
                                               & ((IData)(vlSelf->__PVT__writeAround) 
                                                  ^ (IData)(vlSelf->__PVT__readAround_6)))) 
                                           | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                      - 
                                                      VL_MODDIV_III(8, (IData)(vlSelf->__PVT__selectReadFifo_7), (IData)(vlSelf->__PVT__bReg))))) 
                                              & ((IData)(vlSelf->__PVT__writeAround) 
                                                 ^ (IData)(vlSelf->__PVT__readAround_7))));
    vlSelf->__PVT___zz_realValue_0_8 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                              (0xffU 
                                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                                  << 3U))));
    vlSelf->__PVT___zz_realValue_0_9 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                              (0xffU 
                                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                                  << 3U))));
    vlSelf->__PVT___zz_realValue_0_10 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_11 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_12 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_13 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__23(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__23\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_14 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_15 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_16 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_17 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_18 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_19 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_20 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_21 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_22 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_23 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_24 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_25 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_26 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_27 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_28 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_29 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_30 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_31 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_32 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_33 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_34 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_35 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_36 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_37 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_38 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_39 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_40 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_41 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_42 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_43 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_44 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_45 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_46 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_47 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_48 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_49 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_50 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_51 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_52 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_53 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_54 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_55 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_56 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_57 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_58 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_59 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_60 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_61 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_62 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_63 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_64 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_65 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_66 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_67 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_68 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_69 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__24(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__24\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_70 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_71 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_72 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_73 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_74 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_75 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_76 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_77 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_78 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_79 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_80 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_81 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_82 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_83 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_84 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_85 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_86 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_87 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_88 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_89 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_90 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_91 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_92 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_93 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_94 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_95 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_96 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_97 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_98 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_99 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_100 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_101 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_102 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_103 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_104 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_105 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_106 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_107 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_108 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_109 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_110 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_111 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_112 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_113 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_114 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_115 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_116 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_117 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_118 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_119 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_120 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_121 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_122 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_123 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_124 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_125 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__25(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__25\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_126 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_127 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_128 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_129 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_130 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_131 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_132 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_133 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_134 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_135 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_136 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_137 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_138 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_139 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_140 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_141 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_142 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_143 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_144 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_145 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_146 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_147 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_148 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_149 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_150 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_151 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_152 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_153 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_154 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_155 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_156 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_157 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_158 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_159 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_160 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_161 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_162 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_163 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_164 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_165 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_166 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_167 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_168 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_169 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_170 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_171 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_172 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_173 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_174 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_175 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_176 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_177 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_178 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_179 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_180 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_181 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__26(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__26\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_182 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_183 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_184 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_185 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_186 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_187 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_188 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_189 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_190 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_191 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_192 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_193 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_194 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_195 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_196 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_197 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_198 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_199 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_208 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_209 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_210 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_211 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_212 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_213 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_214 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_215 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_216 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_217 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_218 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_219 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_220 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_221 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_222 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_223 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_224 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_225 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_226 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_227 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_228 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_229 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_230 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_231 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_232 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_233 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_234 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_235 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_236 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_237 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_238 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_239 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_240 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_241 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_242 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_243 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_244 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_245 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__27(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__27\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_246 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_247 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_248 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_249 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_250 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_251 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_252 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_253 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_254 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_255 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_256 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_257 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_258 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_259 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_260 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_261 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_262 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_263 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_264 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_265 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_266 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_267 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_268 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_269 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_270 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_271 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_272 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_273 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_274 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_275 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_276 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_277 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_278 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_279 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_280 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_281 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_282 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_283 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_284 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_285 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_286 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_287 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_288 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_289 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_290 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_291 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_292 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_293 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_294 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_295 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_296 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_297 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_298 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_299 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_300 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_301 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__wReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
}
