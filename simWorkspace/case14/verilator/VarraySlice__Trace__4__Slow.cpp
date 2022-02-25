// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__54(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__54\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3463,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+911,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+912,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1333,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2224,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3464,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3465,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1207,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2225,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3466,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2226,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_66 ");
    tracep->declBit(c+2720,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1696,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2721,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1697,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2722,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1437,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1698,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1091,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3467,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3468,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2227,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2228,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2485,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3469,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3470,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+914,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+915,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1334,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2229,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3471,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3472,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1208,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2230,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3473,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2231,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_67 ");
    tracep->declBit(c+2723,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1699,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2724,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1700,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2725,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1438,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1701,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1092,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3474,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3475,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2232,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2233,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2486,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3476,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3477,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+917,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+918,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1335,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2234,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3478,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3479,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1209,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2235,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3480,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2236,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_68 ");
    tracep->declBit(c+2726,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1702,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2727,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1703,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2728,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1439,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1704,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1093,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3481,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3482,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2237,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2238,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2487,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3483,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3484,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+920,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+921,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1336,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2239,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+922,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3485,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3486,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1210,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2240,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3487,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2241,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_69 ");
    tracep->declBit(c+2729,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1705,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2730,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1706,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2731,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1440,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1707,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1094,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3488,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3489,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2242,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2243,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2488,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3490,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3491,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+923,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+924,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1337,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2244,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3492,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3493,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1211,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2245,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3494,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2246,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_7 ");
    tracep->declBit(c+2543,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1519,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2544,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1520,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2545,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1378,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1521,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1032,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3495,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3496,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2247,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2248,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2489,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3497,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3498,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+926,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+927,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1338,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2249,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3499,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3500,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1212,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2250,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3501,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2251,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_70 ");
    tracep->declBit(c+2732,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1708,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2733,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1709,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2734,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1441,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1710,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1095,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3502,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3503,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2252,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2253,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2490,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3504,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3505,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+929,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+930,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2254,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3506,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3507,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1213,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2255,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3508,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2256,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_71 ");
    tracep->declBit(c+2735,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1711,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__55(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__55\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2736,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1712,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2737,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1442,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1713,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1096,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3509,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3510,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2257,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2258,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2491,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3511,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3512,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+932,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+933,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1340,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2259,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+934,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3513,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3514,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1214,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2260,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3515,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2261,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_72 ");
    tracep->declBit(c+2738,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1714,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2739,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1715,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2740,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1443,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1716,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1097,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3516,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3517,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2262,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2263,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2492,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3518,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3519,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+935,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+936,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1341,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2264,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+937,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3520,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3521,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1215,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2265,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3522,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2266,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_73 ");
    tracep->declBit(c+2741,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1717,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2742,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1718,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2743,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1444,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1719,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1098,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3523,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3524,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2267,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2268,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2493,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3525,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3526,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+938,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+939,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1342,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2269,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+940,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3527,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3528,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1216,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2270,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3529,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2271,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_74 ");
    tracep->declBit(c+2744,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1720,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2745,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1721,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2746,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1445,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1722,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1099,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3530,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3531,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2272,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2273,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2494,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3532,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3533,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+941,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+942,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1343,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2274,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+943,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3534,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3535,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1217,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2275,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3536,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2276,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_75 ");
    tracep->declBit(c+2747,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1723,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2748,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1724,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2749,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1446,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1725,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1100,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3537,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3538,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2277,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2278,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2495,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3539,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3540,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+944,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+945,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1344,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2279,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3541,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3542,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2280,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3543,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2281,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_76 ");
    tracep->declBit(c+2750,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1726,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2751,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1727,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2752,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1447,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1728,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1101,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3544,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3545,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2282,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2283,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2496,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3546,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3547,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+947,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+948,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1345,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2284,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+949,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3548,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3549,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2285,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3550,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2286,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_77 ");
    tracep->declBit(c+2753,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1729,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2754,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1730,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2755,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1448,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1731,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1102,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3551,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__56(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__56\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3552,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2287,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2288,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2497,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3553,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3554,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+950,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+951,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1346,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2289,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+952,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3555,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3556,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1220,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2290,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3557,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2291,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_78 ");
    tracep->declBit(c+2756,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1732,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2757,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1733,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2758,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1449,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1734,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1103,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3558,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3559,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2292,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2293,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2498,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3560,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3561,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+953,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+954,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1347,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2294,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+955,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3562,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3563,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2295,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3564,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2296,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_79 ");
    tracep->declBit(c+2759,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1735,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2760,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1736,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2761,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1450,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1737,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1104,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3565,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3566,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2297,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2298,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2499,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3567,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3568,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+956,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+957,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1348,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2299,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+958,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3569,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3570,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2300,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3571,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2301,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_8 ");
    tracep->declBit(c+2546,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1522,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2547,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1523,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2548,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1379,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1524,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1033,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3572,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3573,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2302,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2303,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2500,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3574,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3575,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+959,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+960,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2304,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+961,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3576,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3577,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1223,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2305,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3578,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2306,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_80 ");
    tracep->declBit(c+2762,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1738,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2763,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1739,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2764,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1451,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1740,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1105,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3579,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3580,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2307,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2308,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2501,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3581,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3582,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+962,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+963,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1350,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2309,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+964,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3583,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3584,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1224,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2310,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3585,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2311,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_81 ");
    tracep->declBit(c+2765,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1741,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2766,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1742,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2767,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1452,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1743,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1106,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3586,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3587,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2312,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2313,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2502,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3588,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3589,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+965,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+966,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1351,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2314,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+967,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3590,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3591,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1225,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2315,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3592,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2316,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_82 ");
    tracep->declBit(c+2768,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1744,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2769,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1745,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2770,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1453,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1746,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1107,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3593,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3594,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2317,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2318,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2503,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3595,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3596,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+968,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+969,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1352,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2319,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+970,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3597,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3598,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1226,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2320,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__57(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__57\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+3599,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2321,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_83 ");
    tracep->declBit(c+2771,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1747,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2772,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1748,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2773,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1454,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1749,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1108,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3600,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3601,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2322,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2323,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2504,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3602,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3603,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+971,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+972,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1353,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2324,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+973,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3604,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3605,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1227,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2325,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3606,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2326,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_84 ");
    tracep->declBit(c+2774,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1750,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2775,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1751,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2776,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1455,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1752,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1109,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3607,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3608,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2327,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2328,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2505,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3609,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3610,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+974,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+975,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1354,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2329,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+976,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3611,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3612,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1228,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2330,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3613,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2331,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_85 ");
    tracep->declBit(c+2777,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1753,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2778,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1754,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2779,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1456,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1755,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1110,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3614,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3615,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2332,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2333,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2506,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3616,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3617,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+977,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+978,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1355,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2334,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+979,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3618,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3619,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1229,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2335,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3620,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2336,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_86 ");
    tracep->declBit(c+2780,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1756,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2781,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1757,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2782,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1457,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1758,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1111,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3621,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3622,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2337,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2338,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2507,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3623,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3624,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+980,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+981,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1356,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2339,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+982,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3625,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3626,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1230,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2340,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3627,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2341,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_87 ");
    tracep->declBit(c+2783,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1759,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2784,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1760,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2785,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1458,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1761,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1112,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3628,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3629,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2342,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2343,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2508,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3630,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3631,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+983,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+984,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1357,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2344,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+985,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3632,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3633,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1231,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2345,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3634,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2346,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_88 ");
    tracep->declBit(c+2786,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1762,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2787,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1763,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2788,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1459,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1764,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1113,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3635,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3636,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2347,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2348,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2509,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3637,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3638,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+986,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+987,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1358,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2349,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+988,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3639,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3640,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1232,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2350,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3641,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2351,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_89 ");
    tracep->declBit(c+2789,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1765,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2790,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1766,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2791,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1460,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1767,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1114,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__58(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__58\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+3642,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3643,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2352,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2353,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2510,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3644,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3645,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+989,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+990,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1359,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2354,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+991,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3646,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3647,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1233,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2355,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3648,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2356,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_9 ");
    tracep->declBit(c+2549,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1525,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2550,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1526,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2551,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1380,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1527,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1034,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3649,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3650,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2357,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2358,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2511,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3651,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3652,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+992,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+993,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1360,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2359,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+994,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3653,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3654,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1234,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2360,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3655,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2361,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_90 ");
    tracep->declBit(c+2792,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1768,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2793,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1769,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2794,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1461,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1770,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1115,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3656,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3657,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2362,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2363,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2512,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3658,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3659,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+995,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+996,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1361,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2364,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+997,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3660,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3661,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1235,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2365,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3662,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2366,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_91 ");
    tracep->declBit(c+2795,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1771,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2796,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1772,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2797,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1462,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1773,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1116,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3663,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3664,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2367,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2368,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2513,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3665,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3666,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+998,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+999,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1362,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2369,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1000,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3667,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3668,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1236,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2370,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3669,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2371,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_92 ");
    tracep->declBit(c+2798,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1774,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2799,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1775,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2800,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1463,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1776,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1117,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3670,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3671,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2372,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2373,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2514,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3672,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3673,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1001,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1002,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1363,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2374,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1003,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3674,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3675,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1237,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2375,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3676,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2376,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_93 ");
    tracep->declBit(c+2801,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1777,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2802,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1778,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2803,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1464,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1779,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1118,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3677,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3678,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2377,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2378,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2515,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3679,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3680,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1004,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1005,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1364,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2379,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3681,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3682,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1238,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2380,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3683,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2381,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_94 ");
    tracep->declBit(c+2804,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1780,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2805,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1781,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2806,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1465,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1782,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1119,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3684,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3685,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2382,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2383,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2516,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3686,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3687,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1007,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1008,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1365,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2384,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__59(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__59\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1009,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3688,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3689,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1239,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2385,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3690,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2386,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_95 ");
    tracep->declBit(c+2807,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1783,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2808,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1784,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2809,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1466,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1785,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1120,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3691,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3692,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2387,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2388,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2517,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3693,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3694,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1010,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1011,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1366,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2389,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1012,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3695,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3696,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1240,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2390,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3697,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2391,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_96 ");
    tracep->declBit(c+2810,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1786,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2811,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1787,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2812,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1467,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1788,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1121,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3698,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3699,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2392,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2393,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2518,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3700,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3701,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1013,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1014,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1367,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2394,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1015,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3702,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3703,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1241,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2395,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3704,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2396,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_97 ");
    tracep->declBit(c+2813,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1789,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2814,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1790,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2815,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1468,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1791,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1122,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3705,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3706,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2397,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2398,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2519,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3707,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3708,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1016,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1017,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1368,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2399,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3709,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3710,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1242,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2400,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3711,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2401,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_98 ");
    tracep->declBit(c+2816,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1792,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2817,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1793,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2818,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1469,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1794,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1123,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3712,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3713,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2402,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2403,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2520,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3714,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3715,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1019,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1020,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1369,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2404,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1021,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3716,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3717,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1243,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2405,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3718,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2406,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_99 ");
    tracep->declBit(c+2819,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1795,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2820,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1796,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2821,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1470,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5129,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1797,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1124,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3757,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3758,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3719,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3720,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2407,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+2408,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2521,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3721,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5129,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3722,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1022,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1023,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1370,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2409,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1024,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3723,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3724,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1244,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2410,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3725,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2411,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
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
VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__53(VarraySlice___024root* vlSelf, VerilatedFst* tracep);

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
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_0(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__wReg),7);
    tracep->fullCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__hReg),7);
    tracep->fullCData(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__aReg),4);
    tracep->fullCData(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__bReg),4);
    tracep->fullSData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value),13);
    tracep->fullBit(oldp+6,((0x1beeU == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value))));
    tracep->fullSData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value),13);
    tracep->fullBit(oldp+8,((0x1beeU == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value))));
    tracep->fullSData(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value),13);
    tracep->fullBit(oldp+10,((0x1beeU == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value))));
    tracep->fullSData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value),13);
    tracep->fullBit(oldp+12,((0x1beeU == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value))));
    tracep->fullSData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value),13);
    tracep->fullBit(oldp+14,((0x1beeU == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value))));
    tracep->fullSData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value),13);
    tracep->fullBit(oldp+16,((0x1beeU == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))));
    tracep->fullSData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value),13);
    tracep->fullBit(oldp+18,((0x1beeU == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value))));
    tracep->fullSData(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value),13);
    tracep->fullBit(oldp+20,((0x1beeU == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value))));
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
    tracep->fullCData(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_value),7);
    tracep->fullBit(oldp+47,((0x41U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_value))));
    tracep->fullCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value),7);
    tracep->fullBit(oldp+49,((0x41U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value))));
    tracep->fullCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value),7);
    tracep->fullBit(oldp+51,((0x41U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value))));
    tracep->fullCData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value),7);
    tracep->fullBit(oldp+53,((0x41U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value))));
    tracep->fullCData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value),7);
    tracep->fullBit(oldp+55,((0x41U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value))));
    tracep->fullCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value),7);
    tracep->fullBit(oldp+57,((0x41U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value))));
    tracep->fullCData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value),7);
    tracep->fullBit(oldp+59,((0x41U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value))));
    tracep->fullCData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value),7);
    tracep->fullBit(oldp+61,((0x41U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value))));
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

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_4(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_4\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+481,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_260))));
    tracep->fullBit(oldp+482,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_261))));
    tracep->fullBit(oldp+483,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_262))));
    tracep->fullBit(oldp+484,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_263))));
    tracep->fullBit(oldp+485,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_31))));
    tracep->fullBit(oldp+486,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l277_2));
    tracep->fullBit(oldp+487,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_264))));
    tracep->fullBit(oldp+488,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_265))));
    tracep->fullBit(oldp+489,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_266))));
    tracep->fullBit(oldp+490,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_267))));
    tracep->fullBit(oldp+491,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_268))));
    tracep->fullBit(oldp+492,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_269))));
    tracep->fullBit(oldp+493,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_270))));
    tracep->fullBit(oldp+494,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_271))));
    tracep->fullBit(oldp+495,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_32))));
    tracep->fullBit(oldp+496,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l307_2));
    tracep->fullBit(oldp+497,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_272))));
    tracep->fullBit(oldp+498,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_273))));
    tracep->fullBit(oldp+499,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_274))));
    tracep->fullBit(oldp+500,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_275))));
    tracep->fullBit(oldp+501,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_276))));
    tracep->fullBit(oldp+502,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_277))));
    tracep->fullBit(oldp+503,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_278))));
    tracep->fullBit(oldp+504,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_279))));
    tracep->fullBit(oldp+505,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l325_2));
    tracep->fullBit(oldp+506,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_33))));
    tracep->fullBit(oldp+507,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l252_3));
    tracep->fullBit(oldp+508,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_280))));
    tracep->fullBit(oldp+509,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_281))));
    tracep->fullBit(oldp+510,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_282))));
    tracep->fullBit(oldp+511,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_283))));
    tracep->fullBit(oldp+512,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_284))));
    tracep->fullBit(oldp+513,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_285))));
    tracep->fullBit(oldp+514,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_286))));
    tracep->fullBit(oldp+515,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_287))));
    tracep->fullBit(oldp+516,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_34))));
    tracep->fullBit(oldp+517,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l277_3));
    tracep->fullBit(oldp+518,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_288))));
    tracep->fullBit(oldp+519,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_289))));
    tracep->fullBit(oldp+520,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_290))));
    tracep->fullBit(oldp+521,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_291))));
    tracep->fullBit(oldp+522,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_292))));
    tracep->fullBit(oldp+523,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_293))));
    tracep->fullBit(oldp+524,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_294))));
    tracep->fullBit(oldp+525,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_295))));
    tracep->fullBit(oldp+526,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_35))));
    tracep->fullBit(oldp+527,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l307_3));
    tracep->fullBit(oldp+528,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_296))));
    tracep->fullBit(oldp+529,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_297))));
    tracep->fullBit(oldp+530,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_298))));
    tracep->fullBit(oldp+531,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_299))));
    tracep->fullBit(oldp+532,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_300))));
    tracep->fullBit(oldp+533,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_301))));
    tracep->fullBit(oldp+534,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_302))));
    tracep->fullBit(oldp+535,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_303))));
    tracep->fullBit(oldp+536,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l325_3));
    tracep->fullBit(oldp+537,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_36))));
    tracep->fullBit(oldp+538,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l252_4));
    tracep->fullBit(oldp+539,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_304))));
    tracep->fullBit(oldp+540,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_305))));
    tracep->fullBit(oldp+541,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_306))));
    tracep->fullBit(oldp+542,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_307))));
    tracep->fullBit(oldp+543,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_308))));
    tracep->fullBit(oldp+544,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_309))));
    tracep->fullBit(oldp+545,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_310))));
    tracep->fullBit(oldp+546,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_311))));
    tracep->fullBit(oldp+547,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_37))));
    tracep->fullBit(oldp+548,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l277_4));
    tracep->fullBit(oldp+549,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_312))));
    tracep->fullBit(oldp+550,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_313))));
    tracep->fullBit(oldp+551,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_314))));
    tracep->fullBit(oldp+552,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_315))));
    tracep->fullBit(oldp+553,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_316))));
    tracep->fullBit(oldp+554,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_317))));
    tracep->fullBit(oldp+555,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_318))));
    tracep->fullBit(oldp+556,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_319))));
    tracep->fullBit(oldp+557,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_38))));
    tracep->fullBit(oldp+558,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l307_4));
    tracep->fullBit(oldp+559,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_320))));
    tracep->fullBit(oldp+560,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_321))));
    tracep->fullBit(oldp+561,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_322))));
    tracep->fullBit(oldp+562,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_323))));
    tracep->fullBit(oldp+563,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_324))));
    tracep->fullBit(oldp+564,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_325))));
    tracep->fullBit(oldp+565,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_326))));
    tracep->fullBit(oldp+566,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_327))));
    tracep->fullBit(oldp+567,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l325_4));
    tracep->fullBit(oldp+568,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_39))));
    tracep->fullBit(oldp+569,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l252_5));
    tracep->fullBit(oldp+570,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_328))));
    tracep->fullBit(oldp+571,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_329))));
    tracep->fullBit(oldp+572,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_330))));
    tracep->fullBit(oldp+573,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_331))));
    tracep->fullBit(oldp+574,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_332))));
    tracep->fullBit(oldp+575,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_333))));
    tracep->fullBit(oldp+576,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_334))));
    tracep->fullBit(oldp+577,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_335))));
    tracep->fullBit(oldp+578,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_40))));
    tracep->fullBit(oldp+579,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l277_5));
    tracep->fullBit(oldp+580,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_336))));
    tracep->fullBit(oldp+581,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_337))));
    tracep->fullBit(oldp+582,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_338))));
    tracep->fullBit(oldp+583,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_339))));
    tracep->fullBit(oldp+584,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_340))));
    tracep->fullBit(oldp+585,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_341))));
    tracep->fullBit(oldp+586,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_342))));
    tracep->fullBit(oldp+587,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_343))));
    tracep->fullBit(oldp+588,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_41))));
    tracep->fullBit(oldp+589,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l307_5));
    tracep->fullBit(oldp+590,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_344))));
    tracep->fullBit(oldp+591,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_345))));
    tracep->fullBit(oldp+592,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_346))));
    tracep->fullBit(oldp+593,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_347))));
    tracep->fullBit(oldp+594,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_348))));
    tracep->fullBit(oldp+595,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_349))));
    tracep->fullBit(oldp+596,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_350))));
    tracep->fullBit(oldp+597,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_351))));
    tracep->fullBit(oldp+598,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l325_5));
    tracep->fullBit(oldp+599,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_42))));
    tracep->fullBit(oldp+600,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l252_6));
    tracep->fullBit(oldp+601,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_352))));
    tracep->fullBit(oldp+602,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_353))));
    tracep->fullBit(oldp+603,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_354))));
    tracep->fullBit(oldp+604,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_355))));
    tracep->fullBit(oldp+605,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_356))));
    tracep->fullBit(oldp+606,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_357))));
    tracep->fullBit(oldp+607,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_358))));
    tracep->fullBit(oldp+608,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_359))));
    tracep->fullBit(oldp+609,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_43))));
    tracep->fullBit(oldp+610,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l277_6));
    tracep->fullBit(oldp+611,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_360))));
    tracep->fullBit(oldp+612,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_361))));
    tracep->fullBit(oldp+613,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_362))));
    tracep->fullBit(oldp+614,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_363))));
}
