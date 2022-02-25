// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_8(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_8\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 962);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+1,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+2,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+3,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+4,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+5,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+6,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+7,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+8,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+9,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+10,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+11,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+12,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+13,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+14,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+15,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+16,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+17,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+18,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+19,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+20,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+21,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+22,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+23,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+24,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+25,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value)))))),7);
    }
}

void VarraySlice___024root__trace_chg_sub_9(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_9\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 988);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+1,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+2,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+3,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+4,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+5,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+6,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+7,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+8,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+9,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x48U)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x48U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+10,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+11,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+12,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+13,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+14,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+15,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+16,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch)
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
        tracep->chgCData(oldp+17,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+18,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+19,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+20,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+21,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+22,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+23,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+24,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value)))))),7);
        tracep->chgCData(oldp+25,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x48U)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x48U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value)))))),7);
    }
}

void VarraySlice___024root__trace_chg_sub_10(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_10\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1014);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch)
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
        tracep->chgBit(oldp+1,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+2,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+4,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+10,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+12,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+13,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+14,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+15,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+16,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+17,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+19,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+20,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+21,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+22,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+23,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+27,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+28,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+29,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+31,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+32,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+35,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+39,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+40,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+41,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+42,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+43,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+44,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+45,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+46,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+47,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+48,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+49,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+51,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+53,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+55,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+57,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+60,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+61,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+62,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+63,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+64,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+65,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+66,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+67,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+68,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+69,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+70,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+71,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+72,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+73,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+74,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+75,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+76,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+77,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+78,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+79,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+80,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_risingOccupancy)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+81,(((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_willIncrement))));
        tracep->chgBit(oldp+82,(((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_willIncrement))));
        tracep->chgBit(oldp+83,(((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_willIncrement))));
        tracep->chgBit(oldp+84,(((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_willIncrement))));
        tracep->chgBit(oldp+85,(((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_willIncrement))));
        tracep->chgBit(oldp+86,(((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_willIncrement))));
        tracep->chgBit(oldp+87,(((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_willIncrement))));
        tracep->chgBit(oldp+88,(((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_willIncrement))));
        tracep->chgBit(oldp+89,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_willIncrement))));
        tracep->chgBit(oldp+90,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_willIncrement))));
        tracep->chgBit(oldp+91,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_willIncrement))));
    }
}

void VarraySlice___024root__trace_chg_sub_11(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_11\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1106);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+0,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_willIncrement))));
        tracep->chgBit(oldp+1,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_willIncrement))));
        tracep->chgBit(oldp+2,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_willIncrement))));
        tracep->chgBit(oldp+3,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_willIncrement))));
        tracep->chgBit(oldp+4,(((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_willIncrement))));
        tracep->chgBit(oldp+5,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+6,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+7,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+8,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+9,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+10,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+11,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+12,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+13,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+14,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+15,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+16,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+17,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+18,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+19,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+20,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+21,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+22,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+23,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+24,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+25,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+26,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+27,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+28,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+29,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+30,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+31,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+32,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+33,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+34,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+35,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+36,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+37,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+38,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+39,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+40,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+41,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+42,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+43,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+44,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+45,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+46,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+47,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+48,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+49,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+50,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+51,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+52,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+53,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+54,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+55,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+56,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+57,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+58,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+59,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+60,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+61,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+62,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+63,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+64,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+65,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+66,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+67,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+68,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+69,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+70,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+71,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+72,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+73,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+74,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+75,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+76,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+77,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+78,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+79,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+80,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+81,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+82,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement))));
    }
}

void VarraySlice___024root__trace_chg_sub_12(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_12\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1189);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+0,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+1,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT___zz_logic_ram_port0),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready));
        tracep->chgBit(oldp+83,(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_valid));
        tracep->chgIData(oldp+84,(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_payload),32);
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid));
        tracep->chgIData(oldp+86,(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_payload),32);
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid));
        tracep->chgIData(oldp+88,(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_payload),32);
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid));
        tracep->chgIData(oldp+90,(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_payload),32);
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid));
        tracep->chgIData(oldp+92,(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_payload),32);
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid));
        tracep->chgIData(oldp+94,(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_payload),32);
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid));
        tracep->chgIData(oldp+96,(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_payload),32);
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid));
        tracep->chgIData(oldp+98,(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_payload),32);
        tracep->chgBit(oldp+99,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_full)))));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0_io_pop_valid));
        tracep->chgCData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0_io_occupancy),7);
        tracep->chgBit(oldp+102,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_full)))));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1_io_pop_valid));
        tracep->chgCData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1_io_occupancy),7);
        tracep->chgBit(oldp+105,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_full)))));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2_io_pop_valid));
        tracep->chgCData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2_io_occupancy),7);
        tracep->chgBit(oldp+108,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_full)))));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3_io_pop_valid));
        tracep->chgCData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3_io_occupancy),7);
        tracep->chgBit(oldp+111,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_full)))));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4_io_pop_valid));
        tracep->chgCData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4_io_occupancy),7);
        tracep->chgBit(oldp+114,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_full)))));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5_io_pop_valid));
        tracep->chgCData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5_io_occupancy),7);
        tracep->chgBit(oldp+117,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_full)))));
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6_io_pop_valid));
        tracep->chgCData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6_io_occupancy),7);
        tracep->chgBit(oldp+120,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_full)))));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7_io_pop_valid));
        tracep->chgCData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7_io_occupancy),7);
        tracep->chgBit(oldp+123,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_full)))));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8_io_pop_valid));
        tracep->chgCData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8_io_occupancy),7);
        tracep->chgBit(oldp+126,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_full)))));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_pop_valid));
        tracep->chgCData(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_occupancy),7);
        tracep->chgBit(oldp+129,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_full)))));
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_pop_valid));
        tracep->chgCData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_occupancy),7);
        tracep->chgBit(oldp+132,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_full)))));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_pop_valid));
        tracep->chgCData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_occupancy),7);
        tracep->chgBit(oldp+135,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_full)))));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_pop_valid));
        tracep->chgCData(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_occupancy),7);
        tracep->chgBit(oldp+138,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_full)))));
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_pop_valid));
        tracep->chgCData(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_occupancy),7);
        tracep->chgBit(oldp+141,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_full)))));
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_pop_valid));
        tracep->chgCData(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_occupancy),7);
        tracep->chgBit(oldp+144,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_full)))));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_pop_valid));
        tracep->chgCData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_occupancy),7);
        tracep->chgBit(oldp+147,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_full)))));
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16_io_pop_valid));
        tracep->chgCData(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16_io_occupancy),7);
        tracep->chgBit(oldp+150,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_full)))));
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17_io_pop_valid));
        tracep->chgCData(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17_io_occupancy),7);
        tracep->chgBit(oldp+153,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_full)))));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18_io_pop_valid));
        tracep->chgCData(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18_io_occupancy),7);
        tracep->chgBit(oldp+156,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_full)))));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19_io_pop_valid));
        tracep->chgCData(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19_io_occupancy),7);
        tracep->chgBit(oldp+159,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_full)))));
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20_io_pop_valid));
        tracep->chgCData(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20_io_occupancy),7);
        tracep->chgBit(oldp+162,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_full)))));
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21_io_pop_valid));
        tracep->chgCData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21_io_occupancy),7);
        tracep->chgBit(oldp+165,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_full)))));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22_io_pop_valid));
        tracep->chgCData(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22_io_occupancy),7);
        tracep->chgBit(oldp+168,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_full)))));
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23_io_pop_valid));
        tracep->chgCData(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23_io_occupancy),7);
        tracep->chgBit(oldp+171,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_full)))));
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24_io_pop_valid));
        tracep->chgCData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24_io_occupancy),7);
        tracep->chgBit(oldp+174,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_full)))));
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25_io_pop_valid));
        tracep->chgCData(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25_io_occupancy),7);
        tracep->chgBit(oldp+177,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_full)))));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26_io_pop_valid));
        tracep->chgCData(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26_io_occupancy),7);
        tracep->chgBit(oldp+180,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_full)))));
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27_io_pop_valid));
        tracep->chgCData(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27_io_occupancy),7);
        tracep->chgBit(oldp+183,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_full)))));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28_io_pop_valid));
        tracep->chgCData(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28_io_occupancy),7);
        tracep->chgBit(oldp+186,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_full)))));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29_io_pop_valid));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29_io_occupancy),7);
        tracep->chgBit(oldp+189,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_full)))));
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30_io_pop_valid));
        tracep->chgCData(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30_io_occupancy),7);
        tracep->chgBit(oldp+192,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_full)))));
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31_io_pop_valid));
        tracep->chgCData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31_io_occupancy),7);
        tracep->chgBit(oldp+195,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_full)))));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32_io_pop_valid));
        tracep->chgCData(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32_io_occupancy),7);
        tracep->chgBit(oldp+198,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_full)))));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33_io_pop_valid));
        tracep->chgCData(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33_io_occupancy),7);
        tracep->chgBit(oldp+201,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_full)))));
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34_io_pop_valid));
        tracep->chgCData(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34_io_occupancy),7);
        tracep->chgBit(oldp+204,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_full)))));
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35_io_pop_valid));
        tracep->chgCData(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35_io_occupancy),7);
        tracep->chgBit(oldp+207,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_full)))));
        tracep->chgBit(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36_io_pop_valid));
        tracep->chgCData(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36_io_occupancy),7);
        tracep->chgBit(oldp+210,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_full)))));
        tracep->chgBit(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37_io_pop_valid));
        tracep->chgCData(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37_io_occupancy),7);
        tracep->chgBit(oldp+213,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_full)))));
        tracep->chgBit(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38_io_pop_valid));
        tracep->chgCData(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38_io_occupancy),7);
        tracep->chgBit(oldp+216,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_full)))));
        tracep->chgBit(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39_io_pop_valid));
        tracep->chgCData(oldp+218,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39_io_occupancy),7);
    }
}

void VarraySlice___024root__trace_chg_sub_13(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_13\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1408);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_full)))));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40_io_pop_valid));
        tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40_io_occupancy),7);
        tracep->chgBit(oldp+3,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_full)))));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41_io_pop_valid));
        tracep->chgCData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41_io_occupancy),7);
        tracep->chgBit(oldp+6,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_full)))));
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42_io_pop_valid));
        tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42_io_occupancy),7);
        tracep->chgBit(oldp+9,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_full)))));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43_io_pop_valid));
        tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43_io_occupancy),7);
        tracep->chgBit(oldp+12,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_full)))));
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44_io_pop_valid));
        tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44_io_occupancy),7);
        tracep->chgBit(oldp+15,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_full)))));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45_io_pop_valid));
        tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45_io_occupancy),7);
        tracep->chgBit(oldp+18,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_full)))));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46_io_pop_valid));
        tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46_io_occupancy),7);
        tracep->chgBit(oldp+21,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_full)))));
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47_io_pop_valid));
        tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47_io_occupancy),7);
        tracep->chgBit(oldp+24,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_full)))));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48_io_pop_valid));
        tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48_io_occupancy),7);
        tracep->chgBit(oldp+27,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_full)))));
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49_io_pop_valid));
        tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49_io_occupancy),7);
        tracep->chgBit(oldp+30,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_full)))));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50_io_pop_valid));
        tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50_io_occupancy),7);
        tracep->chgBit(oldp+33,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_full)))));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51_io_pop_valid));
        tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51_io_occupancy),7);
        tracep->chgBit(oldp+36,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_full)))));
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52_io_pop_valid));
        tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52_io_occupancy),7);
        tracep->chgBit(oldp+39,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_full)))));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53_io_pop_valid));
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53_io_occupancy),7);
        tracep->chgBit(oldp+42,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_full)))));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54_io_pop_valid));
        tracep->chgCData(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54_io_occupancy),7);
        tracep->chgBit(oldp+45,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_full)))));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55_io_pop_valid));
        tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55_io_occupancy),7);
        tracep->chgBit(oldp+48,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_full)))));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56_io_pop_valid));
        tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56_io_occupancy),7);
        tracep->chgBit(oldp+51,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_full)))));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57_io_pop_valid));
        tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57_io_occupancy),7);
        tracep->chgBit(oldp+54,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_full)))));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58_io_pop_valid));
        tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58_io_occupancy),7);
        tracep->chgBit(oldp+57,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_full)))));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59_io_pop_valid));
        tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59_io_occupancy),7);
        tracep->chgBit(oldp+60,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_full)))));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60_io_pop_valid));
        tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60_io_occupancy),7);
        tracep->chgBit(oldp+63,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_full)))));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61_io_pop_valid));
        tracep->chgCData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61_io_occupancy),7);
        tracep->chgBit(oldp+66,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_full)))));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62_io_pop_valid));
        tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62_io_occupancy),7);
        tracep->chgBit(oldp+69,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_full)))));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63_io_pop_valid));
        tracep->chgCData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63_io_occupancy),7);
        tracep->chgBit(oldp+72,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_full)))));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64_io_pop_valid));
        tracep->chgCData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64_io_occupancy),7);
        tracep->chgBit(oldp+75,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_full)))));
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65_io_pop_valid));
        tracep->chgCData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65_io_occupancy),7);
        tracep->chgBit(oldp+78,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_full)))));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66_io_pop_valid));
        tracep->chgCData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66_io_occupancy),7);
        tracep->chgBit(oldp+81,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_full)))));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67_io_pop_valid));
        tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67_io_occupancy),7);
        tracep->chgBit(oldp+84,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_full)))));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68_io_pop_valid));
        tracep->chgCData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68_io_occupancy),7);
        tracep->chgBit(oldp+87,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_full)))));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69_io_pop_valid));
        tracep->chgCData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69_io_occupancy),7);
        tracep->chgBit(oldp+90,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_full)))));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70_io_pop_valid));
        tracep->chgCData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70_io_occupancy),7);
        tracep->chgBit(oldp+93,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_full)))));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71_io_pop_valid));
        tracep->chgCData(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71_io_occupancy),7);
        tracep->chgBit(oldp+96,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_full)))));
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72_io_pop_valid));
        tracep->chgCData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72_io_occupancy),7);
        tracep->chgBit(oldp+99,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_full)))));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73_io_pop_valid));
        tracep->chgCData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73_io_occupancy),7);
        tracep->chgBit(oldp+102,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_full)))));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74_io_pop_valid));
        tracep->chgCData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74_io_occupancy),7);
        tracep->chgBit(oldp+105,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_full)))));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75_io_pop_valid));
        tracep->chgCData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75_io_occupancy),7);
        tracep->chgBit(oldp+108,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_full)))));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76_io_pop_valid));
        tracep->chgCData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76_io_occupancy),7);
        tracep->chgBit(oldp+111,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_full)))));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77_io_pop_valid));
        tracep->chgCData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77_io_occupancy),7);
        tracep->chgBit(oldp+114,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_full)))));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78_io_pop_valid));
        tracep->chgCData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78_io_occupancy),7);
        tracep->chgBit(oldp+117,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_full)))));
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79_io_pop_valid));
        tracep->chgCData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79_io_occupancy),7);
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l204));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377));
        tracep->chgBit(oldp+122,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417))));
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_1));
        tracep->chgBit(oldp+124,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_1_1))));
        tracep->chgBit(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_2));
        tracep->chgBit(oldp+126,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_2_1))));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_3));
        tracep->chgBit(oldp+128,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_3_1))));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_4));
        tracep->chgBit(oldp+130,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_4_1))));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_5));
        tracep->chgBit(oldp+132,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_5))));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_6));
        tracep->chgBit(oldp+134,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_6))));
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_7));
        tracep->chgBit(oldp+136,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_7))));
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234));
        tracep->chgBit(oldp+138,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274))));
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_1));
        tracep->chgBit(oldp+140,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_1_1))));
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_2));
        tracep->chgBit(oldp+142,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_2_1))));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_3));
        tracep->chgBit(oldp+144,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_3_1))));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_4));
        tracep->chgBit(oldp+146,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_4_1))));
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_5));
        tracep->chgBit(oldp+148,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_5))));
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_6));
        tracep->chgBit(oldp+150,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_6))));
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_7));
        tracep->chgBit(oldp+152,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_7))));
        tracep->chgBit(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l337));
        tracep->chgCData(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+155,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_full));
        tracep->chgCData(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+160,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_full));
        tracep->chgCData(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+165,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_full));
        tracep->chgCData(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+170,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_full));
        tracep->chgCData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+175,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_full));
        tracep->chgCData(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+180,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_full));
        tracep->chgCData(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+185,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_full));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+190,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_full));
        tracep->chgCData(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+195,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_full));
        tracep->chgCData(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+200,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_full));
    }
}

void VarraySlice___024root__trace_chg_sub_14(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_14\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1611);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+2,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_full));
        tracep->chgCData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+7,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_full));
        tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+12,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_full));
        tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+17,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_full));
        tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+22,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_full));
        tracep->chgCData(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+27,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_full));
        tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+32,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_full));
        tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+37,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_full));
        tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+42,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_full));
        tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+47,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_full));
        tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+52,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_full));
        tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+57,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_full));
        tracep->chgCData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+62,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_full));
        tracep->chgCData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+67,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_full));
        tracep->chgCData(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+72,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_full));
        tracep->chgCData(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+77,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_full));
        tracep->chgCData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+82,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_full));
        tracep->chgCData(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+87,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_full));
        tracep->chgCData(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+92,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_full));
        tracep->chgCData(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+97,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_full));
        tracep->chgCData(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+102,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_full));
        tracep->chgCData(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+107,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_full));
        tracep->chgCData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+112,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_full));
        tracep->chgCData(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+117,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_full));
        tracep->chgCData(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+122,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_full));
        tracep->chgCData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+127,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_full));
        tracep->chgCData(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+132,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_full));
        tracep->chgCData(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+137,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_full));
        tracep->chgCData(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+142,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_full));
        tracep->chgCData(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+147,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_full));
        tracep->chgCData(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+152,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_full));
        tracep->chgCData(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+157,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_full));
        tracep->chgCData(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+162,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_full));
        tracep->chgCData(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+167,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_full));
        tracep->chgCData(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+172,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_full));
        tracep->chgCData(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+177,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_full));
        tracep->chgCData(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+182,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_full));
        tracep->chgCData(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+187,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_full));
        tracep->chgCData(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+192,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_full));
        tracep->chgCData(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+197,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_full));
        tracep->chgCData(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+202,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_full));
        tracep->chgCData(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+207,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value))));
    }
}

void VarraySlice___024root__trace_chg_sub_15(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_15\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1819);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_full));
        tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+4,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_full));
        tracep->chgCData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+9,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_full));
        tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+14,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_full));
        tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+19,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_full));
        tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+24,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_full));
        tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+29,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_full));
        tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+34,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_full));
        tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+39,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_full));
        tracep->chgCData(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+44,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_full));
        tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+49,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_full));
        tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+54,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_full));
        tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+59,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_full));
        tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+64,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_full));
        tracep->chgCData(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+69,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_full));
        tracep->chgCData(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+74,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_full));
        tracep->chgCData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+79,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_full));
        tracep->chgCData(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+84,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_full));
        tracep->chgCData(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+89,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_full));
        tracep->chgCData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+94,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_full));
        tracep->chgCData(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+99,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_full));
        tracep->chgCData(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+104,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_full));
        tracep->chgCData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+109,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_full));
        tracep->chgCData(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+114,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_full));
        tracep->chgCData(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+119,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_full));
        tracep->chgCData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+124,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_full));
        tracep->chgCData(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+129,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_full));
        tracep->chgCData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+134,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_full));
        tracep->chgCData(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+139,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_full));
        tracep->chgCData(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_ptrDif),7);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+143,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+144,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+145,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+146,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+147,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+148,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+149,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+150,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+151,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+152,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+153,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+154,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+155,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+156,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+157,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+158,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+159,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+160,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+161,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+162,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+163,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+164,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+165,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+166,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+167,(((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement))));
    }
}
