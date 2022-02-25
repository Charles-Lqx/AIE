// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__470(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__470\n"); );
    // Body
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
    vlSelf->__PVT__handshakeTimes_5_valueNext = (((0x1680U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_5_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_5_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x1fffU 
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
    vlSelf->__PVT__handshakeTimes_6_valueNext = (((0x1680U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_6_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_6_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x1fffU 
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
    vlSelf->__PVT__handshakeTimes_7_valueNext = (((0x1680U 
                                                   == (IData)(vlSelf->__PVT__handshakeTimes_7_value)) 
                                                  & (IData)(vlSelf->__PVT__handshakeTimes_7_willIncrement))
                                                  ? 0U
                                                  : 
                                                 (0x1fffU 
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
    vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__471(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__471\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__472(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__472\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__473(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__473\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__474(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__474\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_71__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_72__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_73__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_74__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_75__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_76__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_77__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_78__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement))));
    vlSelf->__PVT__fifoGroup_79__DOT__logic_popPtr_valueNext 
        = (((0x47U == (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_popPtr_value)) 
            & (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_popPtr_value) 
                             + (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement))));
}
