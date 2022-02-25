// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__53(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__53\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2831,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1480,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1717,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1104,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3594,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3595,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2282,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2283,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2626,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3596,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3597,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+887,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+888,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1375,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2284,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+889,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3598,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3599,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1239,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2285,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3600,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2286,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_5 ");
    tracep->declBit(c+2697,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1583,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2698,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1584,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2699,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1436,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1585,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1060,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3601,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3602,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2287,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2288,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2627,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3603,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3604,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+890,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+891,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1376,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2289,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+892,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3605,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3606,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1240,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2290,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3607,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2291,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_50 ");
    tracep->declBit(c+2832,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1718,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2833,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1719,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2834,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1481,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1720,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1105,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3608,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3609,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2292,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2293,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2628,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3610,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3611,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+893,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+894,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1377,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2294,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+895,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3612,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3613,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1241,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2295,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3614,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2296,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_51 ");
    tracep->declBit(c+2835,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1721,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2836,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1722,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2837,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1482,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1723,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1106,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3615,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3616,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2297,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2298,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2629,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3617,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3618,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+896,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+897,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1378,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2299,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3619,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3620,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1242,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2300,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3621,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2301,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_52 ");
    tracep->declBit(c+2838,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1724,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2839,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1725,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2840,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1483,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1726,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1107,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3622,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3623,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2302,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2303,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2630,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3624,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3625,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+899,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+900,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1379,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2304,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+901,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3626,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3627,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1243,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2305,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3628,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2306,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_53 ");
    tracep->declBit(c+2841,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1727,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2842,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1728,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2843,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1484,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1729,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1108,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3629,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3630,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2307,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2308,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2631,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3631,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3632,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+902,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+903,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1380,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2309,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+904,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3633,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3634,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1244,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2310,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3635,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2311,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_54 ");
    tracep->declBit(c+2844,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1730,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2845,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1731,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2846,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1485,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1732,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1109,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3636,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3637,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2312,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__54(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__54\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2313,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2632,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3638,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3639,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+905,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+906,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1381,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2314,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+907,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3640,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3641,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1245,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2315,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3642,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2316,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_55 ");
    tracep->declBit(c+2847,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1733,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2848,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1734,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2849,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1486,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1735,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1110,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3643,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3644,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2317,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2318,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2633,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3645,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3646,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+908,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+909,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1382,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2319,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+910,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3647,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3648,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1246,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2320,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3649,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2321,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_56 ");
    tracep->declBit(c+2850,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1736,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2851,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1737,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2852,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1487,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1738,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1111,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3650,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3651,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2322,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2323,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2634,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3652,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3653,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+911,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+912,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1383,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2324,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3654,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3655,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2325,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3656,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2326,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_57 ");
    tracep->declBit(c+2853,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1739,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2854,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1740,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2855,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1488,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1741,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1112,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3657,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3658,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2327,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2328,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2635,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3659,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3660,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+914,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+915,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1384,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2329,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3661,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3662,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1248,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2330,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3663,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2331,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_58 ");
    tracep->declBit(c+2856,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1742,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2857,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1743,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2858,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1489,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1744,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1113,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3664,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3665,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2332,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2333,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2636,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3666,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3667,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+917,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+918,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1385,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2334,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3668,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3669,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1249,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2335,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3670,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2336,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_59 ");
    tracep->declBit(c+2859,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1745,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2860,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1746,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2861,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1490,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1747,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1114,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3671,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3672,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2337,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2338,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2637,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3673,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3674,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+920,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+921,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1386,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2339,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+922,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3675,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3676,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1250,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2340,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3677,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2341,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_6 ");
    tracep->declBit(c+2700,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1586,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2701,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1587,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2702,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1437,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1588,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1061,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3678,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3679,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2342,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2343,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2638,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3680,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3681,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+923,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+924,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1387,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2344,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3682,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3683,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1251,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2345,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3684,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2346,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__55(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__55\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_60 ");
    tracep->declBit(c+2862,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1748,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2863,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1749,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2864,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1491,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1750,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1115,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3685,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3686,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2347,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2348,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2639,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3687,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3688,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+926,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+927,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1388,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2349,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3689,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3690,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1252,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2350,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3691,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2351,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_61 ");
    tracep->declBit(c+2865,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1751,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2866,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1752,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2867,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1492,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1753,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1116,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3692,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3693,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2352,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2353,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2640,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3694,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3695,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+929,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+930,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1389,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2354,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3696,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3697,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1253,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2355,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3698,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2356,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_62 ");
    tracep->declBit(c+2868,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1754,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2869,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1755,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2870,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1493,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1756,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1117,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3699,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3700,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2357,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2358,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2641,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3701,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3702,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+932,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+933,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1390,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2359,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+934,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3703,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3704,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1254,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2360,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3705,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2361,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_63 ");
    tracep->declBit(c+2871,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1757,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2872,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1758,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2873,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1494,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1759,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1118,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3706,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3707,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2362,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2363,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2642,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3708,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3709,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+935,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+936,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1391,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2364,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+937,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3710,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3711,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2365,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3712,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2366,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_64 ");
    tracep->declBit(c+2874,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1760,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2875,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1761,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2876,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1495,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1762,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1119,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3713,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3714,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2367,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2368,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2643,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3715,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3716,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+938,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+939,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1392,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2369,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+940,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3717,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3718,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1256,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2370,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3719,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2371,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_65 ");
    tracep->declBit(c+2877,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1763,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2878,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1764,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2879,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1496,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1765,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1120,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3720,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3721,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2372,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2373,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2644,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3722,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3723,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+941,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+942,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1393,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2374,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+943,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3724,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3725,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1257,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2375,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3726,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2376,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_66 ");
    tracep->declBit(c+2880,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1766,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2881,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1767,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2882,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1497,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1768,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1121,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__56(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__56\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+3727,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3728,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2377,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2378,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2645,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3729,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3730,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+944,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+945,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1394,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2379,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3731,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3732,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1258,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2380,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3733,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2381,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_67 ");
    tracep->declBit(c+2883,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1769,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2884,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1770,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2885,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1498,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1771,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1122,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3734,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3735,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2382,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2383,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2646,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3736,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3737,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+947,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+948,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1395,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2384,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+949,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3738,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3739,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1259,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2385,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3740,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2386,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_68 ");
    tracep->declBit(c+2886,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1772,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2887,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1773,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2888,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1499,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1774,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1123,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3741,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3742,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2387,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2388,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2647,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3743,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3744,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+950,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+951,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1396,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2389,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+952,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3745,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3746,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1260,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2390,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3747,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2391,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_69 ");
    tracep->declBit(c+2889,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1775,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2890,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1776,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2891,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1500,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1777,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1124,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3748,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3749,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2392,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2393,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2648,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3750,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3751,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+953,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+954,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1397,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2394,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+955,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3752,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3753,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1261,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2395,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3754,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2396,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_7 ");
    tracep->declBit(c+2703,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1589,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2704,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1590,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2705,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1438,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1591,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1062,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3755,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3756,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2397,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2398,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2649,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3757,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3758,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+956,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+957,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1398,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2399,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+958,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3759,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3760,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1262,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2400,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3761,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2401,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_70 ");
    tracep->declBit(c+2892,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1778,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2893,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1779,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2894,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1501,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1780,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1125,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3762,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3763,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2402,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2403,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2650,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3764,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3765,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+959,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+960,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1399,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2404,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+961,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3766,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3767,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1263,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2405,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3768,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2406,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_71 ");
    tracep->declBit(c+2895,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1781,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2896,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1782,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2897,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1502,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1783,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1126,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3769,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3770,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2407,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2408,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2651,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3771,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3772,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+962,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+963,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1400,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2409,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+964,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3773,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__57(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__57\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+3774,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1264,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2410,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3775,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2411,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_72 ");
    tracep->declBit(c+2898,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1784,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2899,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1785,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2900,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1503,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1786,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1127,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3776,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3777,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2412,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2413,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2652,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3778,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3779,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+965,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+966,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1401,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2414,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+967,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3780,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3781,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1265,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2415,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3782,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2416,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_73 ");
    tracep->declBit(c+2901,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1787,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2902,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1788,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2903,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1504,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1789,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1128,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3783,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3784,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2417,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2418,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2653,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3785,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3786,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+968,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+969,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1402,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2419,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+970,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3787,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3788,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1266,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2420,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3789,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2421,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_74 ");
    tracep->declBit(c+2904,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1790,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2905,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1791,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2906,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1505,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1792,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1129,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3790,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3791,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2422,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2423,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2654,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3792,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3793,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+971,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+972,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1403,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2424,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+973,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3794,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3795,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1267,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2425,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3796,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2426,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_75 ");
    tracep->declBit(c+2907,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1793,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2908,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1794,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2909,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1506,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1795,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1130,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3797,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3798,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2427,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2428,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2655,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3799,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3800,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+974,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+975,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1404,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2429,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+976,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3801,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3802,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1268,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2430,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3803,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2431,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_76 ");
    tracep->declBit(c+2910,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1796,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2911,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1797,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2912,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1507,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1798,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1131,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3804,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3805,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2432,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2433,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2656,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3806,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3807,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+977,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+978,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1405,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2434,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+979,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3808,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3809,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1269,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2435,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3810,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2436,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_77 ");
    tracep->declBit(c+2913,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1799,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2914,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1800,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2915,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1508,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1801,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1132,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3811,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3812,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2437,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2438,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2657,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3813,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3814,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+980,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+981,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1406,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2439,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+982,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3815,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3816,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1270,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2440,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3817,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2441,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_78 ");
    tracep->declBit(c+2916,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1802,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2917,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1803,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2918,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1509,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1804,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1133,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__58(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__58\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3818,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3819,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2442,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2443,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2658,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3820,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3821,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+983,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+984,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1407,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2444,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+985,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3822,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3823,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1271,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2445,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3824,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2446,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_79 ");
    tracep->declBit(c+2919,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1805,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2920,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1806,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2921,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1510,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1807,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1134,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3825,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3826,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2447,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2448,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2659,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3827,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3828,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+986,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+987,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1408,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2449,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+988,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3829,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3830,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1272,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2450,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3831,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2451,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_8 ");
    tracep->declBit(c+2706,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1592,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2707,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1593,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2708,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1439,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1594,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1063,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3832,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3833,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2452,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2453,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2660,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3834,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3835,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+989,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+990,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1409,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2454,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+991,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3836,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3837,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1273,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2455,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3838,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2456,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_80 ");
    tracep->declBit(c+2922,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1808,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2923,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1809,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2924,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1511,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1810,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1135,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3839,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3840,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2457,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2458,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2661,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3841,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3842,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+992,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+993,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1410,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2459,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+994,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3843,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3844,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1274,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2460,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3845,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2461,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_81 ");
    tracep->declBit(c+2925,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1811,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2926,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1812,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2927,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1512,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1813,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1136,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3846,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3847,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2462,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2463,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2662,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3848,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3849,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+995,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+996,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1411,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2464,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+997,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3850,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3851,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1275,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2465,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3852,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2466,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_82 ");
    tracep->declBit(c+2928,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1814,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2929,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1815,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2930,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1513,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1816,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1137,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3853,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3854,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2467,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2468,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2663,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3855,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3856,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+998,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+999,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1412,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2469,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1000,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3857,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3858,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1276,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2470,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3859,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2471,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_83 ");
    tracep->declBit(c+2931,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1817,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2932,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1818,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2933,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1514,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1819,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1138,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3860,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3861,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2472,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2473,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2664,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3862,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3863,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1001,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__59(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__59\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1002,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1413,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2474,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1003,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3864,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3865,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1277,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2475,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3866,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2476,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_84 ");
    tracep->declBit(c+2934,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1820,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2935,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1821,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2936,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1515,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1822,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1139,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3867,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3868,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2477,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2478,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2665,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3869,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3870,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1004,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1005,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1414,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2479,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3871,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3872,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1278,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2480,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3873,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2481,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_85 ");
    tracep->declBit(c+2937,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1823,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2938,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1824,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2939,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1516,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1825,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1140,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3874,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3875,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2482,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2483,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2666,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3876,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3877,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1007,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1008,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1415,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2484,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1009,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3878,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3879,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1279,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2485,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3880,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2486,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_86 ");
    tracep->declBit(c+2940,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1826,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2941,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1827,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2942,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1517,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1828,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1141,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3881,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3882,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2487,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2488,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2667,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3883,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3884,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1010,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1011,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1416,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2489,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1012,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3885,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3886,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1280,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2490,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3887,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2491,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_87 ");
    tracep->declBit(c+2943,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1829,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2944,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1830,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2945,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1518,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1831,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1142,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3888,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3889,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2492,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2493,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2668,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3890,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3891,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1013,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1014,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1417,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2494,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1015,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3892,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3893,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1281,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2495,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3894,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2496,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_88 ");
    tracep->declBit(c+2946,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1832,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2947,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1833,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2948,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1519,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1834,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1143,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3895,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3896,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2497,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2498,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2669,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3897,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3898,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1016,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1017,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1418,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2499,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3899,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3900,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1282,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2500,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3901,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2501,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_89 ");
    tracep->declBit(c+2949,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1835,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2950,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1836,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2951,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1520,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1837,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1144,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3902,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3903,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2502,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2503,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2670,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3904,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3905,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1019,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1020,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1419,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2504,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1021,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3906,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3907,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1283,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2505,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3908,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2506,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_9 ");
    tracep->declBit(c+2709,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1595,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2710,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1596,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2711,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__60(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__60\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1440,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1597,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1064,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3909,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3910,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2507,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2508,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2671,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3911,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3912,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1022,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1023,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1420,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2509,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1024,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3913,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3914,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1284,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2510,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3915,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2511,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_90 ");
    tracep->declBit(c+2952,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1838,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2953,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1839,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2954,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1521,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1840,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1145,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3916,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3917,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2512,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2513,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2672,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3918,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3919,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1025,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1026,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1421,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2514,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1027,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3920,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3921,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1285,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2515,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3922,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2516,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_91 ");
    tracep->declBit(c+2955,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1841,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2956,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1842,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2957,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1522,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1843,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1146,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3923,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3924,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2517,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2518,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2673,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3925,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3926,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1028,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1029,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1422,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2519,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1030,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3927,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3928,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1286,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2520,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3929,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2521,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_92 ");
    tracep->declBit(c+2958,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1844,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2959,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1845,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2960,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1523,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1846,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1147,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3930,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3931,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2522,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2523,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2674,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3932,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3933,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1031,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1032,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1423,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2524,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1033,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3934,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3935,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1287,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2525,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3936,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2526,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_93 ");
    tracep->declBit(c+2961,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1847,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2962,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1848,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2963,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1524,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1849,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1148,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3937,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3938,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2527,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2528,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2675,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3939,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3940,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1034,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1035,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1424,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2529,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1036,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3941,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3942,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1288,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2530,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3943,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2531,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_94 ");
    tracep->declBit(c+2964,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1850,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2965,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1851,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2966,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1525,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1852,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1149,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3944,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3945,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2532,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2533,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2676,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3946,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3947,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1037,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1038,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1425,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2534,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1039,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3948,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3949,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1289,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2535,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3950,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2536,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_95 ");
    tracep->declBit(c+2967,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1853,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2968,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1854,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2969,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1526,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1855,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1150,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3951,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3952,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2537,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2538,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__61(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__61\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2677,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3953,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3954,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1040,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1041,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1426,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2539,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1042,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3955,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3956,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1290,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2540,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3957,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2541,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_96 ");
    tracep->declBit(c+2970,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1856,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2971,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1857,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2972,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1527,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1858,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1151,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3958,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3959,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2542,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2543,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2678,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3960,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3961,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1043,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1044,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1427,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2544,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3962,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3963,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1291,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2545,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3964,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2546,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_97 ");
    tracep->declBit(c+2973,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1859,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2974,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1860,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2975,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1528,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1861,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1152,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3965,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3966,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2547,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2548,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2679,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3967,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3968,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1046,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1047,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1428,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2549,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1048,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3969,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3970,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1292,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2550,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3971,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2551,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_98 ");
    tracep->declBit(c+2976,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1862,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2977,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1863,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2978,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1529,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1864,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1153,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3972,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3973,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2552,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2553,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2680,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3974,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3975,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1049,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1050,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1429,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2554,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1051,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3976,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3977,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1293,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2555,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3978,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2556,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_99 ");
    tracep->declBit(c+2979,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1865,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2980,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1866,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2981,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1530,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5389,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1867,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+1154,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+4017,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4018,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3979,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3980,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2557,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+2558,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2681,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3981,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5389,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3982,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1052,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1053,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1430,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2559,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1054,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3983,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3984,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1294,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2560,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3985,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2561,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__0(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__0(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__1(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__2(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__3(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__4(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__5(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__6(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__7(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__8(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__9(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__10(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__11(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__12(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__13(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__14(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__15(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__16(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__17(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__18(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__19(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__20(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__21(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__22(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__23(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__24(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__25(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__26(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__27(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__28(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__29(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__30(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__31(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__32(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__33(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__34(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__35(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__36(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__37(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__38(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__39(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__40(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__41(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__42(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__43(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__44(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__45(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__46(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__47(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__48(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__49(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__50(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__51(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__52(VarraySlice___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VarraySlice___024root__trace_init_top(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_top\n"); );
    // Body
    VarraySlice___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("arraySlice ");
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__0(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__1(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__2(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__3(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__4(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__5(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__6(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__7(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__8(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__9(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__10(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__11(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__12(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__13(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__14(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__15(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__16(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__17(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__18(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__19(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__20(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__21(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__22(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__23(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__24(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__25(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__26(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__27(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__28(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__29(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__30(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__31(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__32(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__33(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__34(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__35(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__36(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__37(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__38(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__39(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__40(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__41(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__42(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__43(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__44(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__45(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__46(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__47(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__48(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__49(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__50(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__51(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__52(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__53(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__54(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__55(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__56(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__57(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__58(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__59(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__60(vlSelf, tracep);
    VarraySlice___024root__trace_init_sub__TOP__arraySlice__61(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep);
void VarraySlice___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep);
void VarraySlice___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VarraySlice___024root__trace_register(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VarraySlice___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VarraySlice___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VarraySlice___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_0(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_1(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_2(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_3(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_4(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_5(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_6(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_7(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_8(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_9(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_10(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_11(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_12(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_13(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_14(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_15(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_16(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_17(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_18(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_19(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_20(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_21(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_22(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_23(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_24(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_25(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_26(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_27(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_28(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_29(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_30(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_31(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_32(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_33(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_34(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_35(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_36(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_37(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_38(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_39(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_40(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_41(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_42(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_43(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_44(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_45(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_46(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_47(VarraySlice___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_48(VarraySlice___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VarraySlice___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_top_0\n"); );
    // Init
    VarraySlice___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VarraySlice___024root*>(voidSelf);
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VarraySlice___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_1((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_2((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_3((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_4((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_5((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_6((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_7((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_8((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_9((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_10((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_11((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_12((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_13((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_14((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_15((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_16((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_17((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_18((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_19((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_20((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_21((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_22((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_23((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_24((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_25((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_26((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_27((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_28((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_29((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_30((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_31((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_32((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_33((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_34((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_35((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_36((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_37((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_38((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_39((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_40((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_41((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_42((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_43((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_44((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_45((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_46((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_47((&vlSymsp->TOP), tracep);
    VarraySlice___024root__trace_full_sub_48((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_0(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__wReg),7);
    tracep->fullCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__hReg),6);
    tracep->fullCData(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__aReg),3);
    tracep->fullCData(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__bReg),4);
    tracep->fullSData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value),13);
    tracep->fullBit(oldp+6,((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value))));
    tracep->fullSData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value),13);
    tracep->fullBit(oldp+8,((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value))));
    tracep->fullSData(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value),13);
    tracep->fullBit(oldp+10,((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value))));
    tracep->fullSData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value),13);
    tracep->fullBit(oldp+12,((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value))));
    tracep->fullSData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value),13);
    tracep->fullBit(oldp+14,((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value))));
    tracep->fullSData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value),13);
    tracep->fullBit(oldp+16,((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))));
    tracep->fullSData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value),13);
    tracep->fullBit(oldp+18,((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value))));
    tracep->fullSData(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value),13);
    tracep->fullBit(oldp+20,((0x1c20U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value))));
    tracep->fullCData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo),7);
    tracep->fullCData(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0),8);
    tracep->fullCData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1),8);
    tracep->fullCData(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2),8);
    tracep->fullCData(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3),8);
    tracep->fullCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4),8);
    tracep->fullCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5),8);
    tracep->fullCData(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6),8);
    tracep->fullCData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7),8);
    tracep->fullBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0));
    tracep->fullBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1));
    tracep->fullBit(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2));
    tracep->fullBit(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3));
    tracep->fullBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4));
    tracep->fullBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5));
    tracep->fullBit(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6));
    tracep->fullBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7));
    tracep->fullBit(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__allowPadding_0));
    tracep->fullBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__allowPadding_1));
    tracep->fullBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__allowPadding_2));
    tracep->fullBit(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__allowPadding_3));
    tracep->fullBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__allowPadding_4));
    tracep->fullBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__allowPadding_5));
    tracep->fullBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__allowPadding_6));
    tracep->fullBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__allowPadding_7));
    tracep->fullCData(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_value),6);
    tracep->fullBit(oldp+47,((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_value))));
    tracep->fullCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value),6);
    tracep->fullBit(oldp+49,((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value))));
    tracep->fullCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value),6);
    tracep->fullBit(oldp+51,((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value))));
    tracep->fullCData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value),6);
    tracep->fullBit(oldp+53,((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value))));
    tracep->fullCData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value),6);
    tracep->fullBit(oldp+55,((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value))));
    tracep->fullCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value),6);
    tracep->fullBit(oldp+57,((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value))));
    tracep->fullCData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value),6);
    tracep->fullBit(oldp+59,((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value))));
    tracep->fullCData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value),6);
    tracep->fullBit(oldp+61,((0x3cU == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value))));
    tracep->fullBit(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__writeAround));
    tracep->fullBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__readAround_0));
    tracep->fullBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__readAround_1));
    tracep->fullBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__readAround_2));
    tracep->fullBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__readAround_3));
    tracep->fullBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__readAround_4));
    tracep->fullBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__readAround_5));
    tracep->fullBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__readAround_6));
    tracep->fullBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__readAround_7));
    tracep->fullBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__arraySliceStateMachine_wantStart));
    tracep->fullCData(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__arraySliceStateMachine_stateReg),2);
    tracep->fullCData(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__arraySliceStateMachine_stateNext),2);
    tracep->fullBit(oldp+74,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                              == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                                           - (IData)(1U))))));
    tracep->fullBit(oldp+75,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0) 
                              <= (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))));
    tracep->fullBit(oldp+76,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                              (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                        - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0))))));
    tracep->fullBit(oldp+77,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0))));
    tracep->fullBit(oldp+78,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                              <= (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))));
    tracep->fullBit(oldp+79,(((0x7fU & ((IData)(7U) 
                                        * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                              <= (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+80,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                        + (0x3fU & 
                                           ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                            << 1U)))) 
                              <= (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))));
    tracep->fullBit(oldp+81,(((0x7fU & ((IData)(6U) 
                                        * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                              <= (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U))))))));
    tracep->fullBit(oldp+82,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                        + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                              <= (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))));
    tracep->fullBit(oldp+83,(((0x7fU & ((IData)(5U) 
                                        * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                              <= (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+84,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                        + (0x7fU & 
                                           ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                            << 2U)))) 
                              <= (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))));
    tracep->fullBit(oldp+85,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 2U)) <= 
                              (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                        - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                           + (0x7fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                 << 2U))))))));
    tracep->fullBit(oldp+86,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                        + (0x7fU & 
                                           ((IData)(5U) 
                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                              <= (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))));
    tracep->fullBit(oldp+87,(((0x3fU & ((IData)(3U) 
                                        * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                              <= (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+88,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                        + (0x7fU & 
                                           ((IData)(6U) 
                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                              <= (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))));
    tracep->fullBit(oldp+89,(((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 1U)) <= 
                              (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                        - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                           + (0x7fU 
                                              & ((IData)(6U) 
                                                 * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+90,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                        + (0x7fU & 
                                           ((IData)(7U) 
                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                              <= (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))));
    tracep->fullBit(oldp+91,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                              <= (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l216));
    tracep->fullBit(oldp+93,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__allowPadding_0)))));
    tracep->fullBit(oldp+94,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__allowPadding_1)))));
    tracep->fullBit(oldp+95,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__allowPadding_2)))));
    tracep->fullBit(oldp+96,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__allowPadding_3)))));
    tracep->fullBit(oldp+97,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__allowPadding_4)))));
    tracep->fullBit(oldp+98,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__allowPadding_5)))));
    tracep->fullBit(oldp+99,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__allowPadding_6)))));
    tracep->fullBit(oldp+100,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__allowPadding_7)))));
    tracep->fullBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l376));
    tracep->fullBit(oldp+102,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0)))));
    tracep->fullBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l384));
    tracep->fullBit(oldp+104,((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                              (0x1fffU 
                                                               & ((IData)(1U) 
                                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg))))));
    tracep->fullBit(oldp+105,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0))));
    tracep->fullBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l395));
    tracep->fullBit(oldp+107,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_8))));
    tracep->fullBit(oldp+108,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_9))));
    tracep->fullBit(oldp+109,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_10))));
    tracep->fullBit(oldp+110,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_11))));
    tracep->fullBit(oldp+111,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_12))));
    tracep->fullBit(oldp+112,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_13))));
    tracep->fullBit(oldp+113,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_14))));
    tracep->fullBit(oldp+114,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_15))));
    tracep->fullBit(oldp+115,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+116,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_1))));
    tracep->fullBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l420));
    tracep->fullBit(oldp+118,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_16))));
    tracep->fullBit(oldp+119,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_17))));
    tracep->fullBit(oldp+120,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_18))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_1(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_1\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+121,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_19))));
    tracep->fullBit(oldp+122,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_20))));
    tracep->fullBit(oldp+123,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_21))));
    tracep->fullBit(oldp+124,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_22))));
    tracep->fullBit(oldp+125,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_23))));
    tracep->fullBit(oldp+126,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_2))));
    tracep->fullBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l450));
    tracep->fullBit(oldp+128,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_24))));
    tracep->fullBit(oldp+129,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_25))));
    tracep->fullBit(oldp+130,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_26))));
    tracep->fullBit(oldp+131,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_27))));
    tracep->fullBit(oldp+132,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_28))));
    tracep->fullBit(oldp+133,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_29))));
    tracep->fullBit(oldp+134,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_30))));
    tracep->fullBit(oldp+135,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_31))));
    tracep->fullBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l447));
    tracep->fullBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l468));
    tracep->fullBit(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l376_1));
    tracep->fullBit(oldp+139,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)))));
    tracep->fullBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l384_1));
    tracep->fullBit(oldp+141,((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                              (0x1fffU 
                                                               & ((IData)(1U) 
                                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg))))));
    tracep->fullBit(oldp+142,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_3))));
    tracep->fullBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l395_1));
    tracep->fullBit(oldp+144,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_32))));
    tracep->fullBit(oldp+145,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_33))));
    tracep->fullBit(oldp+146,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_34))));
    tracep->fullBit(oldp+147,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_35))));
    tracep->fullBit(oldp+148,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_36))));
    tracep->fullBit(oldp+149,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_37))));
    tracep->fullBit(oldp+150,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_38))));
    tracep->fullBit(oldp+151,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_39))));
    tracep->fullBit(oldp+152,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+153,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+154,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_4))));
    tracep->fullBit(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l420_1));
    tracep->fullBit(oldp+156,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_40))));
    tracep->fullBit(oldp+157,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_41))));
    tracep->fullBit(oldp+158,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_42))));
    tracep->fullBit(oldp+159,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_43))));
    tracep->fullBit(oldp+160,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_44))));
    tracep->fullBit(oldp+161,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_45))));
    tracep->fullBit(oldp+162,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_46))));
    tracep->fullBit(oldp+163,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_47))));
    tracep->fullBit(oldp+164,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_5))));
    tracep->fullBit(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l450_1));
    tracep->fullBit(oldp+166,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_48))));
    tracep->fullBit(oldp+167,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_49))));
    tracep->fullBit(oldp+168,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_50))));
    tracep->fullBit(oldp+169,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_51))));
    tracep->fullBit(oldp+170,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_52))));
    tracep->fullBit(oldp+171,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_53))));
    tracep->fullBit(oldp+172,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_54))));
    tracep->fullBit(oldp+173,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_55))));
    tracep->fullBit(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l447_1));
    tracep->fullBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l468_1));
    tracep->fullBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l376_2));
    tracep->fullBit(oldp+177,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)))));
    tracep->fullBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l384_2));
    tracep->fullBit(oldp+179,((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                              (0x1fffU 
                                                               & ((IData)(1U) 
                                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg))))));
    tracep->fullBit(oldp+180,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_6))));
    tracep->fullBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l395_2));
    tracep->fullBit(oldp+182,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_56))));
    tracep->fullBit(oldp+183,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_57))));
    tracep->fullBit(oldp+184,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_58))));
    tracep->fullBit(oldp+185,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_59))));
    tracep->fullBit(oldp+186,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_60))));
    tracep->fullBit(oldp+187,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_61))));
    tracep->fullBit(oldp+188,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_62))));
    tracep->fullBit(oldp+189,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_63))));
    tracep->fullBit(oldp+190,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))) 
                                               + (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U))))))));
    tracep->fullBit(oldp+191,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+192,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_7))));
    tracep->fullBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l420_2));
    tracep->fullBit(oldp+194,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_64))));
    tracep->fullBit(oldp+195,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_65))));
    tracep->fullBit(oldp+196,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_66))));
    tracep->fullBit(oldp+197,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_67))));
    tracep->fullBit(oldp+198,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_68))));
    tracep->fullBit(oldp+199,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_69))));
    tracep->fullBit(oldp+200,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_70))));
    tracep->fullBit(oldp+201,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_71))));
    tracep->fullBit(oldp+202,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_8))));
    tracep->fullBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l450_2));
    tracep->fullBit(oldp+204,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_72))));
    tracep->fullBit(oldp+205,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_73))));
    tracep->fullBit(oldp+206,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_74))));
    tracep->fullBit(oldp+207,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_75))));
    tracep->fullBit(oldp+208,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_76))));
    tracep->fullBit(oldp+209,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_77))));
    tracep->fullBit(oldp+210,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_78))));
    tracep->fullBit(oldp+211,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_79))));
    tracep->fullBit(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l447_2));
    tracep->fullBit(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l468_2));
    tracep->fullBit(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l376_3));
    tracep->fullBit(oldp+215,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)))));
    tracep->fullBit(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l384_3));
    tracep->fullBit(oldp+217,((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                              (0x1fffU 
                                                               & ((IData)(1U) 
                                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg))))));
    tracep->fullBit(oldp+218,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_9))));
    tracep->fullBit(oldp+219,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l395_3));
    tracep->fullBit(oldp+220,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_80))));
    tracep->fullBit(oldp+221,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_81))));
    tracep->fullBit(oldp+222,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_82))));
    tracep->fullBit(oldp+223,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_83))));
    tracep->fullBit(oldp+224,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_84))));
    tracep->fullBit(oldp+225,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_85))));
    tracep->fullBit(oldp+226,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_86))));
    tracep->fullBit(oldp+227,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_87))));
    tracep->fullBit(oldp+228,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))) 
                                               + (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+229,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+230,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_10))));
    tracep->fullBit(oldp+231,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l420_3));
    tracep->fullBit(oldp+232,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_88))));
    tracep->fullBit(oldp+233,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_89))));
    tracep->fullBit(oldp+234,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_90))));
    tracep->fullBit(oldp+235,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_91))));
    tracep->fullBit(oldp+236,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_92))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_2(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_2\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+237,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_93))));
    tracep->fullBit(oldp+238,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_94))));
    tracep->fullBit(oldp+239,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_95))));
    tracep->fullBit(oldp+240,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_11))));
    tracep->fullBit(oldp+241,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l450_3));
    tracep->fullBit(oldp+242,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_96))));
    tracep->fullBit(oldp+243,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_97))));
    tracep->fullBit(oldp+244,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_98))));
    tracep->fullBit(oldp+245,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_99))));
    tracep->fullBit(oldp+246,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_100))));
    tracep->fullBit(oldp+247,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_101))));
    tracep->fullBit(oldp+248,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_102))));
    tracep->fullBit(oldp+249,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_103))));
    tracep->fullBit(oldp+250,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l447_3));
    tracep->fullBit(oldp+251,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l468_3));
    tracep->fullBit(oldp+252,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l376_4));
    tracep->fullBit(oldp+253,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)))));
    tracep->fullBit(oldp+254,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l384_4));
    tracep->fullBit(oldp+255,((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                              (0x1fffU 
                                                               & ((IData)(1U) 
                                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg))))));
    tracep->fullBit(oldp+256,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_12))));
    tracep->fullBit(oldp+257,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l395_4));
    tracep->fullBit(oldp+258,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_104))));
    tracep->fullBit(oldp+259,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_105))));
    tracep->fullBit(oldp+260,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_106))));
    tracep->fullBit(oldp+261,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_107))));
    tracep->fullBit(oldp+262,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_108))));
    tracep->fullBit(oldp+263,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_109))));
    tracep->fullBit(oldp+264,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_110))));
    tracep->fullBit(oldp+265,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_111))));
    tracep->fullBit(oldp+266,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U))))))));
    tracep->fullBit(oldp+267,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+268,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_13))));
    tracep->fullBit(oldp+269,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l420_4));
    tracep->fullBit(oldp+270,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_112))));
    tracep->fullBit(oldp+271,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_113))));
    tracep->fullBit(oldp+272,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_114))));
    tracep->fullBit(oldp+273,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_115))));
    tracep->fullBit(oldp+274,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_116))));
    tracep->fullBit(oldp+275,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_117))));
    tracep->fullBit(oldp+276,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_118))));
    tracep->fullBit(oldp+277,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_119))));
    tracep->fullBit(oldp+278,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_14))));
    tracep->fullBit(oldp+279,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l450_4));
    tracep->fullBit(oldp+280,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_120))));
    tracep->fullBit(oldp+281,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_121))));
    tracep->fullBit(oldp+282,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_122))));
    tracep->fullBit(oldp+283,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_123))));
    tracep->fullBit(oldp+284,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_124))));
    tracep->fullBit(oldp+285,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_125))));
    tracep->fullBit(oldp+286,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_126))));
    tracep->fullBit(oldp+287,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_127))));
    tracep->fullBit(oldp+288,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l447_4));
    tracep->fullBit(oldp+289,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l468_4));
    tracep->fullBit(oldp+290,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l376_5));
    tracep->fullBit(oldp+291,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)))));
    tracep->fullBit(oldp+292,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l384_5));
    tracep->fullBit(oldp+293,((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                              (0x1fffU 
                                                               & ((IData)(1U) 
                                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg))))));
    tracep->fullBit(oldp+294,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_15))));
    tracep->fullBit(oldp+295,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l395_5));
    tracep->fullBit(oldp+296,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_128))));
    tracep->fullBit(oldp+297,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_129))));
    tracep->fullBit(oldp+298,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_130))));
    tracep->fullBit(oldp+299,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_131))));
    tracep->fullBit(oldp+300,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_132))));
    tracep->fullBit(oldp+301,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_133))));
    tracep->fullBit(oldp+302,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_134))));
    tracep->fullBit(oldp+303,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_135))));
    tracep->fullBit(oldp+304,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))) 
                                               + (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+305,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+306,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_16))));
    tracep->fullBit(oldp+307,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l420_5));
    tracep->fullBit(oldp+308,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_136))));
    tracep->fullBit(oldp+309,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_137))));
    tracep->fullBit(oldp+310,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_138))));
    tracep->fullBit(oldp+311,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_139))));
    tracep->fullBit(oldp+312,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_140))));
    tracep->fullBit(oldp+313,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_141))));
    tracep->fullBit(oldp+314,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_142))));
    tracep->fullBit(oldp+315,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_143))));
    tracep->fullBit(oldp+316,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_17))));
    tracep->fullBit(oldp+317,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l450_5));
    tracep->fullBit(oldp+318,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_144))));
    tracep->fullBit(oldp+319,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_145))));
    tracep->fullBit(oldp+320,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_146))));
    tracep->fullBit(oldp+321,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_147))));
    tracep->fullBit(oldp+322,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_148))));
    tracep->fullBit(oldp+323,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_149))));
    tracep->fullBit(oldp+324,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_150))));
    tracep->fullBit(oldp+325,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_151))));
    tracep->fullBit(oldp+326,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l447_5));
    tracep->fullBit(oldp+327,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l468_5));
    tracep->fullBit(oldp+328,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l376_6));
    tracep->fullBit(oldp+329,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)))));
    tracep->fullBit(oldp+330,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l384_6));
    tracep->fullBit(oldp+331,((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                              (0x1fffU 
                                                               & ((IData)(1U) 
                                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg))))));
    tracep->fullBit(oldp+332,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_18))));
    tracep->fullBit(oldp+333,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l395_6));
    tracep->fullBit(oldp+334,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_152))));
    tracep->fullBit(oldp+335,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_153))));
    tracep->fullBit(oldp+336,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_154))));
    tracep->fullBit(oldp+337,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_155))));
    tracep->fullBit(oldp+338,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_156))));
    tracep->fullBit(oldp+339,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_157))));
    tracep->fullBit(oldp+340,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_158))));
    tracep->fullBit(oldp+341,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_159))));
    tracep->fullBit(oldp+342,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))) 
                                               + (0x7fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+343,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+344,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_19))));
    tracep->fullBit(oldp+345,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l420_6));
    tracep->fullBit(oldp+346,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_160))));
    tracep->fullBit(oldp+347,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_161))));
    tracep->fullBit(oldp+348,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_162))));
    tracep->fullBit(oldp+349,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_163))));
    tracep->fullBit(oldp+350,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_164))));
    tracep->fullBit(oldp+351,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_165))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_3(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_3\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+352,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_166))));
    tracep->fullBit(oldp+353,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_167))));
    tracep->fullBit(oldp+354,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_20))));
    tracep->fullBit(oldp+355,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l450_6));
    tracep->fullBit(oldp+356,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_168))));
    tracep->fullBit(oldp+357,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_169))));
    tracep->fullBit(oldp+358,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_170))));
    tracep->fullBit(oldp+359,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_171))));
    tracep->fullBit(oldp+360,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_172))));
    tracep->fullBit(oldp+361,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_173))));
    tracep->fullBit(oldp+362,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_174))));
    tracep->fullBit(oldp+363,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_175))));
    tracep->fullBit(oldp+364,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l447_6));
    tracep->fullBit(oldp+365,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l468_6));
    tracep->fullBit(oldp+366,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l376_7));
    tracep->fullBit(oldp+367,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)))));
    tracep->fullBit(oldp+368,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l384_7));
    tracep->fullBit(oldp+369,((0U == (0x1fffU & VL_MODDIV_III(13, 
                                                              (0x1fffU 
                                                               & ((IData)(1U) 
                                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg))))));
    tracep->fullBit(oldp+370,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_21))));
    tracep->fullBit(oldp+371,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l395_7));
    tracep->fullBit(oldp+372,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_176))));
    tracep->fullBit(oldp+373,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_177))));
    tracep->fullBit(oldp+374,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_178))));
    tracep->fullBit(oldp+375,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_179))));
    tracep->fullBit(oldp+376,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_180))));
    tracep->fullBit(oldp+377,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_181))));
    tracep->fullBit(oldp+378,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_182))));
    tracep->fullBit(oldp+379,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_183))));
    tracep->fullBit(oldp+380,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+381,(((IData)(vlSymsp->TOP__arraySlice.__PVT__wReg) 
                               <= (0xffU & ((IData)(1U) 
                                            + ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))))));
    tracep->fullBit(oldp+382,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_22))));
    tracep->fullBit(oldp+383,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l420_7));
    tracep->fullBit(oldp+384,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_184))));
    tracep->fullBit(oldp+385,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_185))));
    tracep->fullBit(oldp+386,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_186))));
    tracep->fullBit(oldp+387,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_187))));
    tracep->fullBit(oldp+388,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_188))));
    tracep->fullBit(oldp+389,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_189))));
    tracep->fullBit(oldp+390,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_190))));
    tracep->fullBit(oldp+391,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_191))));
    tracep->fullBit(oldp+392,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_23))));
    tracep->fullBit(oldp+393,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l450_7));
    tracep->fullBit(oldp+394,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_192))));
    tracep->fullBit(oldp+395,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_193))));
    tracep->fullBit(oldp+396,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_194))));
    tracep->fullBit(oldp+397,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_195))));
    tracep->fullBit(oldp+398,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_196))));
    tracep->fullBit(oldp+399,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_197))));
    tracep->fullBit(oldp+400,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_198))));
    tracep->fullBit(oldp+401,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_199))));
    tracep->fullBit(oldp+402,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l447_7));
    tracep->fullBit(oldp+403,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l468_7));
    tracep->fullBit(oldp+404,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_200))));
    tracep->fullBit(oldp+405,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_201))));
    tracep->fullBit(oldp+406,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_202))));
    tracep->fullBit(oldp+407,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_203))));
    tracep->fullBit(oldp+408,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_204))));
    tracep->fullBit(oldp+409,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_205))));
    tracep->fullBit(oldp+410,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_206))));
    tracep->fullBit(oldp+411,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_207))));
    tracep->fullBit(oldp+412,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l478));
    tracep->fullBit(oldp+413,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_24))));
    tracep->fullBit(oldp+414,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l252));
    tracep->fullBit(oldp+415,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_208))));
    tracep->fullBit(oldp+416,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_209))));
    tracep->fullBit(oldp+417,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_210))));
    tracep->fullBit(oldp+418,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_211))));
    tracep->fullBit(oldp+419,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_212))));
    tracep->fullBit(oldp+420,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_213))));
    tracep->fullBit(oldp+421,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_214))));
    tracep->fullBit(oldp+422,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_215))));
    tracep->fullBit(oldp+423,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_25))));
    tracep->fullBit(oldp+424,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l277));
    tracep->fullBit(oldp+425,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_216))));
    tracep->fullBit(oldp+426,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_217))));
    tracep->fullBit(oldp+427,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_218))));
    tracep->fullBit(oldp+428,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_219))));
    tracep->fullBit(oldp+429,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_220))));
    tracep->fullBit(oldp+430,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_221))));
    tracep->fullBit(oldp+431,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_222))));
    tracep->fullBit(oldp+432,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_223))));
    tracep->fullBit(oldp+433,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_26))));
    tracep->fullBit(oldp+434,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l307));
    tracep->fullBit(oldp+435,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_224))));
    tracep->fullBit(oldp+436,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_225))));
    tracep->fullBit(oldp+437,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_226))));
    tracep->fullBit(oldp+438,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_227))));
    tracep->fullBit(oldp+439,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_228))));
    tracep->fullBit(oldp+440,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_229))));
    tracep->fullBit(oldp+441,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_230))));
    tracep->fullBit(oldp+442,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_231))));
    tracep->fullBit(oldp+443,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l325));
    tracep->fullBit(oldp+444,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_27))));
    tracep->fullBit(oldp+445,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l252_1));
    tracep->fullBit(oldp+446,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_232))));
    tracep->fullBit(oldp+447,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_233))));
    tracep->fullBit(oldp+448,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_234))));
    tracep->fullBit(oldp+449,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_235))));
    tracep->fullBit(oldp+450,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_236))));
    tracep->fullBit(oldp+451,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_237))));
    tracep->fullBit(oldp+452,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_238))));
    tracep->fullBit(oldp+453,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_239))));
    tracep->fullBit(oldp+454,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_28))));
    tracep->fullBit(oldp+455,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l277_1));
    tracep->fullBit(oldp+456,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_240))));
    tracep->fullBit(oldp+457,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_241))));
    tracep->fullBit(oldp+458,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_242))));
    tracep->fullBit(oldp+459,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_243))));
    tracep->fullBit(oldp+460,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_244))));
    tracep->fullBit(oldp+461,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_245))));
    tracep->fullBit(oldp+462,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_246))));
    tracep->fullBit(oldp+463,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_247))));
    tracep->fullBit(oldp+464,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_29))));
    tracep->fullBit(oldp+465,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l307_1));
    tracep->fullBit(oldp+466,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_248))));
    tracep->fullBit(oldp+467,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_249))));
    tracep->fullBit(oldp+468,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_250))));
    tracep->fullBit(oldp+469,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_251))));
    tracep->fullBit(oldp+470,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_252))));
    tracep->fullBit(oldp+471,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_253))));
    tracep->fullBit(oldp+472,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_254))));
    tracep->fullBit(oldp+473,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_255))));
    tracep->fullBit(oldp+474,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l325_1));
    tracep->fullBit(oldp+475,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_30))));
    tracep->fullBit(oldp+476,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l252_2));
    tracep->fullBit(oldp+477,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_256))));
    tracep->fullBit(oldp+478,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_257))));
    tracep->fullBit(oldp+479,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_258))));
    tracep->fullBit(oldp+480,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_259))));
}
