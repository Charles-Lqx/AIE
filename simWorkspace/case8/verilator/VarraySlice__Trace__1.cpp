// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_8(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_8\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1013);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+1,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+2,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+3,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+4,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+5,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+6,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+7,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+8,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+9,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+10,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+11,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+12,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+13,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+14,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+15,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+16,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+17,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+18,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+19,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+20,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+21,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+22,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+23,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+24,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+25,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value)))))),7);
    }
}

void VarraySlice___024root__trace_chg_sub_9(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_9\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1039);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+1,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+2,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+3,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+4,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+5,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+6,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+7,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+8,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+9,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+10,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+11,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+12,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+13,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+14,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+15,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+16,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+17,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+18,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+19,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+20,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+21,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+22,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+23,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+24,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+25,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value)))))),7);
    }
}

void VarraySlice___024root__trace_chg_sub_10(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_10\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1065);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+1,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+2,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+3,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+4,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+5,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+6,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+7,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+8,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+9,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+10,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+11,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+12,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+13,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+14,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+15,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+16,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+17,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+18,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+19,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+20,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+21,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+22,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+23,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+24,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+25,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value)))))),7);
    }
}

void VarraySlice___024root__trace_chg_sub_11(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_11\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1091);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+1,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+2,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+3,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value)))))),7);
        tracep->chgBit(oldp+4,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+10,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+12,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+13,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+14,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+15,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+16,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+17,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+19,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+20,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+21,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+22,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+23,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+27,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+28,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+29,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+31,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+32,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+35,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+39,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+40,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+41,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+42,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+43,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+44,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+45,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+46,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+47,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+48,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+49,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+51,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+53,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+55,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+57,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+60,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+61,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+62,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+63,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+64,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+65,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+66,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+67,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+68,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+69,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+70,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+71,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+72,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+73,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+74,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+75,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+76,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+77,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+78,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+79,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+80,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+81,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+82,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+83,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+84,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+85,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+86,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+87,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_risingOccupancy)))));
    }
}

void VarraySlice___024root__trace_chg_sub_12(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_12\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1179);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgBit(oldp+0,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+1,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+2,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+4,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+10,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+12,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+13,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+14,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+15,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_risingOccupancy)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+16,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_willIncrement))));
        tracep->chgBit(oldp+17,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_willIncrement))));
        tracep->chgBit(oldp+18,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_willIncrement))));
        tracep->chgBit(oldp+19,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_willIncrement))));
        tracep->chgBit(oldp+20,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_willIncrement))));
        tracep->chgBit(oldp+21,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_willIncrement))));
        tracep->chgBit(oldp+22,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_willIncrement))));
        tracep->chgBit(oldp+23,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_willIncrement))));
        tracep->chgBit(oldp+24,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_willIncrement))));
        tracep->chgBit(oldp+25,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_willIncrement))));
        tracep->chgBit(oldp+26,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_willIncrement))));
        tracep->chgBit(oldp+27,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_willIncrement))));
        tracep->chgBit(oldp+28,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_willIncrement))));
        tracep->chgBit(oldp+29,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_willIncrement))));
        tracep->chgBit(oldp+30,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_willIncrement))));
        tracep->chgBit(oldp+31,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_willIncrement))));
        tracep->chgBit(oldp+32,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+33,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+34,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+35,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+36,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+37,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+38,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+39,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+40,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+41,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+42,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+43,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+44,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+45,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+46,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+47,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+48,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+49,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+50,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+51,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+52,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+53,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+54,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+55,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+56,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+57,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+58,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+59,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+60,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+61,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+62,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+63,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+64,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+65,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+66,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+67,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+68,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+69,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+70,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+71,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+72,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+73,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+74,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+75,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+76,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+77,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+78,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+79,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+80,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+81,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+82,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+83,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement))));
    }
}

void VarraySlice___024root__trace_chg_sub_13(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_13\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1263);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+0,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+1,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+2,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+3,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+4,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+5,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+6,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+7,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+8,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+9,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+10,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+11,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+12,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+13,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+14,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+15,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+16,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+17,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+18,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+19,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+20,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+21,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+22,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+23,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+24,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+25,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+26,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+27,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+28,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+29,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+30,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+31,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+32,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+33,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+34,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+35,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+36,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+37,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+38,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+39,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+40,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+41,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+42,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+43,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+44,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+45,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+46,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+47,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_willIncrement))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT___zz_logic_ram_port0),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready));
    }
}

void VarraySlice___024root__trace_chg_sub_14(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_14\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1412);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_valid));
        tracep->chgIData(oldp+1,(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_payload),32);
        tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid));
        tracep->chgIData(oldp+3,(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_payload),32);
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid));
        tracep->chgIData(oldp+5,(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_payload),32);
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid));
        tracep->chgIData(oldp+7,(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_payload),32);
        tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid));
        tracep->chgIData(oldp+9,(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_payload),32);
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid));
        tracep->chgIData(oldp+11,(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_payload),32);
        tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid));
        tracep->chgIData(oldp+13,(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_payload),32);
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid));
        tracep->chgIData(oldp+15,(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_payload),32);
        tracep->chgBit(oldp+16,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_full)))));
        tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0_io_pop_valid));
        tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0_io_occupancy),7);
        tracep->chgBit(oldp+19,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_full)))));
        tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1_io_pop_valid));
        tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1_io_occupancy),7);
        tracep->chgBit(oldp+22,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_full)))));
        tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2_io_pop_valid));
        tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2_io_occupancy),7);
        tracep->chgBit(oldp+25,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_full)))));
        tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3_io_pop_valid));
        tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3_io_occupancy),7);
        tracep->chgBit(oldp+28,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_full)))));
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4_io_pop_valid));
        tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4_io_occupancy),7);
        tracep->chgBit(oldp+31,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_full)))));
        tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5_io_pop_valid));
        tracep->chgCData(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5_io_occupancy),7);
        tracep->chgBit(oldp+34,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_full)))));
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6_io_pop_valid));
        tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6_io_occupancy),7);
        tracep->chgBit(oldp+37,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_full)))));
        tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7_io_pop_valid));
        tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7_io_occupancy),7);
        tracep->chgBit(oldp+40,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_full)))));
        tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8_io_pop_valid));
        tracep->chgCData(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8_io_occupancy),7);
        tracep->chgBit(oldp+43,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_full)))));
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_pop_valid));
        tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_occupancy),7);
        tracep->chgBit(oldp+46,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_full)))));
        tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_pop_valid));
        tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_occupancy),7);
        tracep->chgBit(oldp+49,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_full)))));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_pop_valid));
        tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_occupancy),7);
        tracep->chgBit(oldp+52,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_full)))));
        tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_pop_valid));
        tracep->chgCData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_occupancy),7);
        tracep->chgBit(oldp+55,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_full)))));
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_pop_valid));
        tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_occupancy),7);
        tracep->chgBit(oldp+58,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_full)))));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_pop_valid));
        tracep->chgCData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_occupancy),7);
        tracep->chgBit(oldp+61,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_full)))));
        tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_pop_valid));
        tracep->chgCData(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_occupancy),7);
        tracep->chgBit(oldp+64,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_full)))));
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16_io_pop_valid));
        tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16_io_occupancy),7);
        tracep->chgBit(oldp+67,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_full)))));
        tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17_io_pop_valid));
        tracep->chgCData(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17_io_occupancy),7);
        tracep->chgBit(oldp+70,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_full)))));
        tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18_io_pop_valid));
        tracep->chgCData(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18_io_occupancy),7);
        tracep->chgBit(oldp+73,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_full)))));
        tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19_io_pop_valid));
        tracep->chgCData(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19_io_occupancy),7);
        tracep->chgBit(oldp+76,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_full)))));
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20_io_pop_valid));
        tracep->chgCData(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20_io_occupancy),7);
        tracep->chgBit(oldp+79,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_full)))));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21_io_pop_valid));
        tracep->chgCData(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21_io_occupancy),7);
        tracep->chgBit(oldp+82,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_full)))));
        tracep->chgBit(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22_io_pop_valid));
        tracep->chgCData(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22_io_occupancy),7);
        tracep->chgBit(oldp+85,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_full)))));
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23_io_pop_valid));
        tracep->chgCData(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23_io_occupancy),7);
        tracep->chgBit(oldp+88,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_full)))));
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24_io_pop_valid));
        tracep->chgCData(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24_io_occupancy),7);
        tracep->chgBit(oldp+91,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_full)))));
        tracep->chgBit(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25_io_pop_valid));
        tracep->chgCData(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25_io_occupancy),7);
        tracep->chgBit(oldp+94,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_full)))));
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26_io_pop_valid));
        tracep->chgCData(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26_io_occupancy),7);
        tracep->chgBit(oldp+97,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_full)))));
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27_io_pop_valid));
        tracep->chgCData(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27_io_occupancy),7);
        tracep->chgBit(oldp+100,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_full)))));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28_io_pop_valid));
        tracep->chgCData(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28_io_occupancy),7);
        tracep->chgBit(oldp+103,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_full)))));
        tracep->chgBit(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29_io_pop_valid));
        tracep->chgCData(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29_io_occupancy),7);
        tracep->chgBit(oldp+106,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_full)))));
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30_io_pop_valid));
        tracep->chgCData(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30_io_occupancy),7);
        tracep->chgBit(oldp+109,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_full)))));
        tracep->chgBit(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31_io_pop_valid));
        tracep->chgCData(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31_io_occupancy),7);
        tracep->chgBit(oldp+112,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_full)))));
        tracep->chgBit(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32_io_pop_valid));
        tracep->chgCData(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32_io_occupancy),7);
        tracep->chgBit(oldp+115,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_full)))));
        tracep->chgBit(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33_io_pop_valid));
        tracep->chgCData(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33_io_occupancy),7);
        tracep->chgBit(oldp+118,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_full)))));
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34_io_pop_valid));
        tracep->chgCData(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34_io_occupancy),7);
        tracep->chgBit(oldp+121,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_full)))));
        tracep->chgBit(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35_io_pop_valid));
        tracep->chgCData(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35_io_occupancy),7);
        tracep->chgBit(oldp+124,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_full)))));
        tracep->chgBit(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36_io_pop_valid));
        tracep->chgCData(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36_io_occupancy),7);
        tracep->chgBit(oldp+127,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_full)))));
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37_io_pop_valid));
        tracep->chgCData(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37_io_occupancy),7);
        tracep->chgBit(oldp+130,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_full)))));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38_io_pop_valid));
        tracep->chgCData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38_io_occupancy),7);
        tracep->chgBit(oldp+133,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_full)))));
        tracep->chgBit(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39_io_pop_valid));
        tracep->chgCData(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39_io_occupancy),7);
        tracep->chgBit(oldp+136,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_full)))));
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40_io_pop_valid));
        tracep->chgCData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40_io_occupancy),7);
        tracep->chgBit(oldp+139,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_full)))));
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41_io_pop_valid));
        tracep->chgCData(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41_io_occupancy),7);
        tracep->chgBit(oldp+142,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_full)))));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42_io_pop_valid));
        tracep->chgCData(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42_io_occupancy),7);
        tracep->chgBit(oldp+145,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_full)))));
        tracep->chgBit(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43_io_pop_valid));
        tracep->chgCData(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43_io_occupancy),7);
        tracep->chgBit(oldp+148,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_full)))));
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44_io_pop_valid));
        tracep->chgCData(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44_io_occupancy),7);
        tracep->chgBit(oldp+151,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_full)))));
        tracep->chgBit(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45_io_pop_valid));
        tracep->chgCData(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45_io_occupancy),7);
        tracep->chgBit(oldp+154,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_full)))));
        tracep->chgBit(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46_io_pop_valid));
        tracep->chgCData(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46_io_occupancy),7);
        tracep->chgBit(oldp+157,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_full)))));
        tracep->chgBit(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47_io_pop_valid));
        tracep->chgCData(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47_io_occupancy),7);
        tracep->chgBit(oldp+160,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_full)))));
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48_io_pop_valid));
        tracep->chgCData(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48_io_occupancy),7);
        tracep->chgBit(oldp+163,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_full)))));
        tracep->chgBit(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49_io_pop_valid));
        tracep->chgCData(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49_io_occupancy),7);
        tracep->chgBit(oldp+166,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_full)))));
        tracep->chgBit(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50_io_pop_valid));
        tracep->chgCData(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50_io_occupancy),7);
        tracep->chgBit(oldp+169,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_full)))));
        tracep->chgBit(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51_io_pop_valid));
        tracep->chgCData(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51_io_occupancy),7);
        tracep->chgBit(oldp+172,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_full)))));
        tracep->chgBit(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52_io_pop_valid));
        tracep->chgCData(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52_io_occupancy),7);
        tracep->chgBit(oldp+175,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_full)))));
        tracep->chgBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53_io_pop_valid));
        tracep->chgCData(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53_io_occupancy),7);
        tracep->chgBit(oldp+178,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_full)))));
        tracep->chgBit(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54_io_pop_valid));
        tracep->chgCData(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54_io_occupancy),7);
        tracep->chgBit(oldp+181,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_full)))));
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55_io_pop_valid));
        tracep->chgCData(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55_io_occupancy),7);
        tracep->chgBit(oldp+184,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_full)))));
        tracep->chgBit(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56_io_pop_valid));
        tracep->chgCData(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56_io_occupancy),7);
        tracep->chgBit(oldp+187,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_full)))));
        tracep->chgBit(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57_io_pop_valid));
        tracep->chgCData(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57_io_occupancy),7);
        tracep->chgBit(oldp+190,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_full)))));
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58_io_pop_valid));
        tracep->chgCData(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58_io_occupancy),7);
        tracep->chgBit(oldp+193,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_full)))));
        tracep->chgBit(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59_io_pop_valid));
        tracep->chgCData(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59_io_occupancy),7);
        tracep->chgBit(oldp+196,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_full)))));
        tracep->chgBit(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60_io_pop_valid));
        tracep->chgCData(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60_io_occupancy),7);
        tracep->chgBit(oldp+199,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_full)))));
        tracep->chgBit(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61_io_pop_valid));
        tracep->chgCData(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61_io_occupancy),7);
        tracep->chgBit(oldp+202,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_full)))));
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62_io_pop_valid));
        tracep->chgCData(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62_io_occupancy),7);
        tracep->chgBit(oldp+205,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_full)))));
        tracep->chgBit(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63_io_pop_valid));
        tracep->chgCData(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63_io_occupancy),7);
        tracep->chgBit(oldp+208,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_full)))));
        tracep->chgBit(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64_io_pop_valid));
        tracep->chgCData(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64_io_occupancy),7);
        tracep->chgBit(oldp+211,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_full)))));
        tracep->chgBit(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65_io_pop_valid));
        tracep->chgCData(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65_io_occupancy),7);
        tracep->chgBit(oldp+214,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_full)))));
    }
}
