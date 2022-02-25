// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_45(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_45\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+4864,(0U),2);
    tracep->fullCData(oldp+4865,(1U),2);
    tracep->fullCData(oldp+4866,(2U),2);
    tracep->fullCData(oldp+4867,(3U),2);
    tracep->fullIData(oldp+4868,(vlSymsp->TOP__arraySlice.__PVT__arrayDataType),32);
    tracep->fullBit(oldp+4869,(0U));
}
