// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_8(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_8\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1065);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+1,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+2,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+3,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+4,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+5,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+6,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+7,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+8,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+9,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+10,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+11,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+12,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+13,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+14,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+15,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+16,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+17,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+18,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+19,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+20,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+21,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+22,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+23,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+24,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+25,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value)))))),6);
    }
}

void VarraySlice___024root__trace_chg_sub_9(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_9\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1091);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+1,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+2,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+3,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+4,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+5,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+6,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+7,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+8,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+9,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+10,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+11,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+12,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+13,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+14,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+15,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+16,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+17,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+18,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+19,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+20,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+21,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+22,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+23,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+24,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+25,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value)))))),6);
    }
}

void VarraySlice___024root__trace_chg_sub_10(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_10\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1117);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+1,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+2,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+3,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+4,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+5,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+6,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+7,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+8,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+9,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+10,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+11,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+12,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+13,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+14,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+15,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+16,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+17,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+18,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+19,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+20,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+21,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+22,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+23,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+24,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+25,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value)))))),6);
    }
}

void VarraySlice___024root__trace_chg_sub_11(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_11\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1143);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+1,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+2,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+3,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+4,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+5,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+6,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+7,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+8,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+9,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+10,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+11,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+12,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+13,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+14,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+15,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+16,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+17,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+18,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+19,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+20,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+21,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+22,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+23,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+24,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+25,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_ptrMatch)
                                             ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_risingOccupancy)
                                                 ? 0U
                                                 : 0x3cU)
                                             : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_value) 
                                                 < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_pushPtr_value))
                                                 ? 
                                                ((IData)(0x3cU) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_pushPtr_value)))
                                                 : 
                                                ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_pushPtr_value)))))),6);
    }
}

void VarraySlice___024root__trace_chg_sub_12(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_12\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1169);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+1,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+2,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+3,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+4,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_pushPtr_value)))))),6);
        tracep->chgCData(oldp+5,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_ptrMatch)
                                            ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_risingOccupancy)
                                                ? 0U
                                                : 0x3cU)
                                            : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_value) 
                                                < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_pushPtr_value))
                                                ? ((IData)(0x3cU) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_value) 
                                                    - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_pushPtr_value)))
                                                : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_pushPtr_value)))))),6);
        tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+10,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+12,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+13,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+14,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+15,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+16,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+17,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+19,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+20,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+21,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+22,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+23,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+27,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+28,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+29,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+31,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+32,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+35,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+39,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+40,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+41,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+42,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+43,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+44,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+45,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+46,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+47,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+48,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+49,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+51,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+53,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+55,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+57,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+60,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+61,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+62,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+63,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+64,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+65,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+66,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+67,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+68,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+69,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+70,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+71,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+72,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+73,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+74,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+75,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+76,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+77,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+78,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+79,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+80,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+81,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_risingOccupancy)))));
    }
}

void VarraySlice___024root__trace_chg_sub_13(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_13\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1251);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgBit(oldp+0,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+1,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+2,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+4,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+10,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+12,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+13,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+14,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+15,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+16,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+17,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+19,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+20,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+21,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+22,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+23,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+27,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+28,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+29,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+31,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+32,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+35,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+39,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+40,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+41,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+42,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_risingOccupancy)))));
        tracep->chgBit(oldp+43,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_risingOccupancy)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+44,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_willIncrement))));
        tracep->chgBit(oldp+45,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_willIncrement))));
        tracep->chgBit(oldp+46,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_willIncrement))));
        tracep->chgBit(oldp+47,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_willIncrement))));
        tracep->chgBit(oldp+48,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_willIncrement))));
        tracep->chgBit(oldp+49,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_willIncrement))));
        tracep->chgBit(oldp+50,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_willIncrement))));
        tracep->chgBit(oldp+51,(((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_willIncrement))));
        tracep->chgBit(oldp+52,(((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_willIncrement))));
        tracep->chgBit(oldp+53,(((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_willIncrement))));
        tracep->chgBit(oldp+54,(((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_willIncrement))));
        tracep->chgBit(oldp+55,(((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_willIncrement))));
        tracep->chgBit(oldp+56,(((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_willIncrement))));
        tracep->chgBit(oldp+57,(((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_willIncrement))));
        tracep->chgBit(oldp+58,(((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_willIncrement))));
        tracep->chgBit(oldp+59,(((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_willIncrement))));
        tracep->chgBit(oldp+60,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+61,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+62,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+63,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+64,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+65,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+66,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+67,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+68,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+69,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+70,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+71,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+72,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+73,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+74,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+75,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+76,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+77,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+78,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+79,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+80,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+81,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+82,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+83,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+84,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+85,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+86,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+87,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+88,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement))));
    }
}

void VarraySlice___024root__trace_chg_sub_14(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_14\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1340);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+0,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+1,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+2,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+3,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+4,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+5,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+6,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+7,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+8,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+9,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+10,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+11,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+12,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+13,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+14,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+15,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+16,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+17,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+18,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+19,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+20,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+21,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+22,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+23,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+24,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+25,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+26,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+27,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+28,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+29,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+30,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+31,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+32,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+33,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+34,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+35,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+36,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+37,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+38,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+39,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+40,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+41,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+42,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+43,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+44,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+45,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+46,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+47,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+48,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+49,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+50,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+51,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+52,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+53,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+54,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+55,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+56,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+57,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+58,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+59,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+60,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+61,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+62,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+63,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+64,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+65,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+66,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+67,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+68,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+69,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+70,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+71,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+72,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+73,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+74,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+75,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+76,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+77,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+78,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+79,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+80,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+81,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+82,(((0x3bU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_willIncrement))));
    }
}
