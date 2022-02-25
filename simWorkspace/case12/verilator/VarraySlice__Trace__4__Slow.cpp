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
    tracep->declBit(c+2890,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2891,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1922,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1923,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2034,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2892,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2893,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+911,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+912,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1183,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1924,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2894,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2895,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1087,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1925,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2896,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1926,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_75 ");
    tracep->declBit(c+2267,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1513,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2268,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1514,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2269,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1266,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4349,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1515,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1010,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+2977,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2978,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2897,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2898,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1927,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1928,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2035,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2899,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2900,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+914,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+915,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1184,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1929,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2901,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2902,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1088,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1930,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2903,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1931,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_76 ");
    tracep->declBit(c+2270,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1516,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2271,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1517,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2272,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1267,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4349,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1518,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1011,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+2977,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2978,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2904,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2905,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1932,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1933,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2036,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2906,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2907,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+917,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+918,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1185,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1934,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2908,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2909,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1089,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1935,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2910,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1936,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_77 ");
    tracep->declBit(c+2273,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1519,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2274,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1520,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2275,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1268,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4349,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1521,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1012,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+2977,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2978,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2911,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2912,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1937,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1938,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2037,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2913,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2914,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+920,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+921,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1186,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1939,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+922,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2915,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2916,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1090,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1940,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2917,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1941,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_78 ");
    tracep->declBit(c+2276,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1522,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2277,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1523,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2278,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1269,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4349,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1524,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1013,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+2977,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2978,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2918,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2919,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1942,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1943,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2038,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2920,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2921,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+923,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+924,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1187,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1944,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2922,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2923,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1091,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1945,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2924,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1946,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_79 ");
    tracep->declBit(c+2279,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1525,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2280,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1526,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2281,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1270,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4349,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1527,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1014,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+2977,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2978,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2925,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2926,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1947,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1948,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2039,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2927,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2928,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+926,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+927,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1188,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1949,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2929,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2930,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1092,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1950,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2931,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1951,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_8 ");
    tracep->declBit(c+2066,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1312,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2067,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1313,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2068,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1199,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4349,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1314,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+943,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+2977,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2978,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2932,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2933,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1952,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1953,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2040,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2934,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2935,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+929,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+930,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1189,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VarraySlice___024root__trace_init_sub__TOP__arraySlice__54(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_init_sub__TOP__arraySlice__54\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1954,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2936,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2937,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1093,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1955,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2938,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1956,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifoGroup_9 ");
    tracep->declBit(c+2069,"io_push_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1315,"io_push_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2070,"io_push_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1316,"io_pop_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2071,"io_pop_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1200,"io_pop_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4349,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1317,"io_occupancy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+944,"io_availability",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+2977,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2978,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2939,"logic_pushPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_pushPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2940,"logic_pushPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+1957,"logic_pushPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1958,"logic_pushPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2041,"logic_pushPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2941,"logic_popPtr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4349,"logic_popPtr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2942,"logic_popPtr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+932,"logic_popPtr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+933,"logic_popPtr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1190,"logic_popPtr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1959,"logic_ptrMatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+934,"logic_risingOccupancy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2943,"logic_pushing",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2944,"logic_popping",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1094,"logic_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1960,"logic_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2945,"when_Stream_l954",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1961,"logic_ptrDif",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
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
    tracep->fullBit(oldp+6,((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value))));
    tracep->fullSData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value),13);
    tracep->fullBit(oldp+8,((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value))));
    tracep->fullSData(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value),13);
    tracep->fullBit(oldp+10,((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value))));
    tracep->fullSData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value),13);
    tracep->fullBit(oldp+12,((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value))));
    tracep->fullSData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value),13);
    tracep->fullBit(oldp+14,((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value))));
    tracep->fullSData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value),13);
    tracep->fullBit(oldp+16,((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))));
    tracep->fullSData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value),13);
    tracep->fullBit(oldp+18,((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value))));
    tracep->fullSData(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value),13);
    tracep->fullBit(oldp+20,((0x1680U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value))));
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
    tracep->fullBit(oldp+47,((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_value))));
    tracep->fullCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value),7);
    tracep->fullBit(oldp+49,((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value))));
    tracep->fullCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value),7);
    tracep->fullBit(oldp+51,((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value))));
    tracep->fullCData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value),7);
    tracep->fullBit(oldp+53,((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value))));
    tracep->fullCData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value),7);
    tracep->fullBit(oldp+55,((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value))));
    tracep->fullCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value),7);
    tracep->fullBit(oldp+57,((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value))));
    tracep->fullCData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value),7);
    tracep->fullBit(oldp+59,((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value))));
    tracep->fullCData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value),7);
    tracep->fullBit(oldp+61,((0x48U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value))));
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

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_5(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_5\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+615,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_364))));
    tracep->fullBit(oldp+616,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_365))));
    tracep->fullBit(oldp+617,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_366))));
    tracep->fullBit(oldp+618,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_367))));
    tracep->fullBit(oldp+619,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_44))));
    tracep->fullBit(oldp+620,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l307_6));
    tracep->fullBit(oldp+621,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_368))));
    tracep->fullBit(oldp+622,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_369))));
    tracep->fullBit(oldp+623,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_370))));
    tracep->fullBit(oldp+624,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_371))));
    tracep->fullBit(oldp+625,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_372))));
    tracep->fullBit(oldp+626,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_373))));
    tracep->fullBit(oldp+627,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_374))));
    tracep->fullBit(oldp+628,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_375))));
    tracep->fullBit(oldp+629,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l325_6));
    tracep->fullBit(oldp+630,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_45))));
    tracep->fullBit(oldp+631,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l252_7));
    tracep->fullBit(oldp+632,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_376))));
    tracep->fullBit(oldp+633,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_377))));
    tracep->fullBit(oldp+634,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_378))));
    tracep->fullBit(oldp+635,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_379))));
    tracep->fullBit(oldp+636,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_380))));
    tracep->fullBit(oldp+637,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_381))));
    tracep->fullBit(oldp+638,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_382))));
    tracep->fullBit(oldp+639,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_383))));
    tracep->fullBit(oldp+640,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_46))));
    tracep->fullBit(oldp+641,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l277_7));
    tracep->fullBit(oldp+642,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_384))));
    tracep->fullBit(oldp+643,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_385))));
    tracep->fullBit(oldp+644,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_386))));
    tracep->fullBit(oldp+645,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_387))));
    tracep->fullBit(oldp+646,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_388))));
    tracep->fullBit(oldp+647,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_389))));
    tracep->fullBit(oldp+648,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_390))));
    tracep->fullBit(oldp+649,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_391))));
    tracep->fullBit(oldp+650,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue1_0_47))));
    tracep->fullBit(oldp+651,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l307_7));
    tracep->fullBit(oldp+652,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_392))));
    tracep->fullBit(oldp+653,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_393))));
    tracep->fullBit(oldp+654,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_394))));
    tracep->fullBit(oldp+655,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_395))));
    tracep->fullBit(oldp+656,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_396))));
    tracep->fullBit(oldp+657,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_397))));
    tracep->fullBit(oldp+658,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_398))));
    tracep->fullBit(oldp+659,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_399))));
    tracep->fullBit(oldp+660,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l325_7));
    tracep->fullBit(oldp+661,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                               == (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0) 
                                            - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+662,(((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_0))));
    tracep->fullBit(oldp+663,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                               == (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                            - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+664,(((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_1))));
    tracep->fullBit(oldp+665,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                               == (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                            - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+666,(((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_2))));
    tracep->fullBit(oldp+667,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                               == (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                            - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+668,(((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_3))));
    tracep->fullBit(oldp+669,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                               == (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                            - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+670,(((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_4))));
    tracep->fullBit(oldp+671,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                               == (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                            - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+672,(((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_5))));
    tracep->fullBit(oldp+673,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                               == (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                            - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+674,(((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_6))));
    tracep->fullBit(oldp+675,(((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                               == (0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                            - VL_MODDIV_III(8, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg)))))));
    tracep->fullBit(oldp+676,(((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_7))));
    tracep->fullBit(oldp+677,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l336));
    tracep->fullBit(oldp+678,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_400))));
    tracep->fullBit(oldp+679,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_401))));
    tracep->fullBit(oldp+680,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_402))));
    tracep->fullBit(oldp+681,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_403))));
    tracep->fullBit(oldp+682,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_404))));
    tracep->fullBit(oldp+683,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_405))));
    tracep->fullBit(oldp+684,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_406))));
    tracep->fullBit(oldp+685,((0U != (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_realValue_0_407))));
    tracep->fullBit(oldp+686,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l361));
    tracep->fullWData(oldp+687,(vlSymsp->TOP__arraySlice.__PVT__arraySliceStateMachine_stateReg_string),104);
    tracep->fullWData(oldp+691,(vlSymsp->TOP__arraySlice.__PVT__arraySliceStateMachine_stateNext_string),104);
    tracep->fullCData(oldp+695,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+696,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+697,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+698,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+699,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+700,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+701,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+702,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+703,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+704,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+705,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+706,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+707,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+708,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+709,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+710,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+711,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+712,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+713,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+714,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+715,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+716,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+717,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+718,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+719,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+720,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+721,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+722,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+723,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+724,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+725,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+726,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+727,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+728,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+729,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+730,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+731,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+732,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+733,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+734,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+735,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+736,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+737,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+738,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+739,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+740,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+741,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+742,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+743,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+744,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+745,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+746,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+747,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+748,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+749,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+750,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+751,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+752,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+753,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+754,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+755,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+756,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+757,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+758,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+759,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+760,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+761,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value),7);
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_6(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_6\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+762,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+763,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+764,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+765,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+766,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+767,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+768,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+769,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+770,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+771,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+772,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+773,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+774,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+775,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+776,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+777,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+778,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+779,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+780,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+781,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+782,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+783,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+784,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+785,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+786,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+787,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+788,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+789,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+790,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+791,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+792,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+793,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+794,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+795,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+796,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+797,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+798,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+799,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+800,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+801,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+802,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+803,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+804,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+805,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+806,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+807,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+808,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+809,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+810,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+811,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+812,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+813,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+814,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+815,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+816,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+817,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+818,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+819,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+820,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+821,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+822,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+823,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+824,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+825,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+826,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+827,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+828,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+829,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+830,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+831,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+832,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+833,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+834,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+835,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+836,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+837,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+838,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+839,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+840,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+841,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+842,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+843,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+844,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+845,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+846,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+847,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+848,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+849,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+850,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+851,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+852,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+853,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+854,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+855,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+856,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+857,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+858,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+859,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+860,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+861,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+862,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+863,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+864,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+865,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+866,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+867,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+868,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+869,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+870,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+871,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+872,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+873,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+874,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+875,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+876,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+877,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+878,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+879,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+880,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+881,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+882,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+883,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+884,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+885,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+886,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+887,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+888,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+889,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+890,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+891,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+892,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+893,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+894,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+895,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+896,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+897,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+898,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+899,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+900,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+901,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+902,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+903,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+904,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+905,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+906,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+907,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+908,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+909,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+910,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+911,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+912,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+913,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+914,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+915,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+916,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+917,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+918,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+919,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+920,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+921,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+922,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+923,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+924,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+925,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+926,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+927,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+928,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+929,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+930,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+931,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+932,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value),7);
    tracep->fullBit(oldp+933,((0x47U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+934,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_risingOccupancy));
    tracep->fullCData(oldp+935,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+936,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+937,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value)))))),7);
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_7(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_7\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+938,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+939,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+940,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+941,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+942,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+943,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+944,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+945,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+946,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+947,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+948,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+949,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+950,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+951,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+952,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrMatch)
                                           ? ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_risingOccupancy)
                                               ? 0U
                                               : 0x48U)
                                           : (((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value) 
                                               < (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value))
                                               ? ((IData)(0x48U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value) 
                                                   - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value)))
                                               : ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value) 
                                                  - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value)))))),7);
    tracep->fullCData(oldp+953,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+954,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+955,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+956,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+957,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+958,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+959,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+960,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+961,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+962,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+963,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch)
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
    tracep->fullCData(oldp+964,((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch)
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
}
