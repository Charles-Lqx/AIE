// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_15(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_15\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1525);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_full)))));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_pop_valid));
        tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_occupancy),7);
        tracep->chgBit(oldp+3,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_full)))));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_pop_valid));
        tracep->chgCData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_occupancy),7);
        tracep->chgBit(oldp+6,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_full)))));
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_pop_valid));
        tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_occupancy),7);
        tracep->chgBit(oldp+9,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_full)))));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_pop_valid));
        tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_occupancy),7);
        tracep->chgBit(oldp+12,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_full)))));
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_pop_valid));
        tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_occupancy),7);
        tracep->chgBit(oldp+15,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_full)))));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_pop_valid));
        tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_occupancy),7);
        tracep->chgBit(oldp+18,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_full)))));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_pop_valid));
        tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_occupancy),7);
        tracep->chgBit(oldp+21,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_full)))));
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16_io_pop_valid));
        tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16_io_occupancy),7);
        tracep->chgBit(oldp+24,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_full)))));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17_io_pop_valid));
        tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17_io_occupancy),7);
        tracep->chgBit(oldp+27,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_full)))));
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18_io_pop_valid));
        tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18_io_occupancy),7);
        tracep->chgBit(oldp+30,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_full)))));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19_io_pop_valid));
        tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19_io_occupancy),7);
        tracep->chgBit(oldp+33,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_full)))));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20_io_pop_valid));
        tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20_io_occupancy),7);
        tracep->chgBit(oldp+36,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_full)))));
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21_io_pop_valid));
        tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21_io_occupancy),7);
        tracep->chgBit(oldp+39,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_full)))));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22_io_pop_valid));
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22_io_occupancy),7);
        tracep->chgBit(oldp+42,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_full)))));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23_io_pop_valid));
        tracep->chgCData(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23_io_occupancy),7);
        tracep->chgBit(oldp+45,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_full)))));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24_io_pop_valid));
        tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24_io_occupancy),7);
        tracep->chgBit(oldp+48,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_full)))));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25_io_pop_valid));
        tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25_io_occupancy),7);
        tracep->chgBit(oldp+51,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_full)))));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26_io_pop_valid));
        tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26_io_occupancy),7);
        tracep->chgBit(oldp+54,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_full)))));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27_io_pop_valid));
        tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27_io_occupancy),7);
        tracep->chgBit(oldp+57,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_full)))));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28_io_pop_valid));
        tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28_io_occupancy),7);
        tracep->chgBit(oldp+60,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_full)))));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29_io_pop_valid));
        tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29_io_occupancy),7);
        tracep->chgBit(oldp+63,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_full)))));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30_io_pop_valid));
        tracep->chgCData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30_io_occupancy),7);
        tracep->chgBit(oldp+66,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_full)))));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31_io_pop_valid));
        tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31_io_occupancy),7);
        tracep->chgBit(oldp+69,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_full)))));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32_io_pop_valid));
        tracep->chgCData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32_io_occupancy),7);
        tracep->chgBit(oldp+72,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_full)))));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33_io_pop_valid));
        tracep->chgCData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33_io_occupancy),7);
        tracep->chgBit(oldp+75,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_full)))));
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34_io_pop_valid));
        tracep->chgCData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34_io_occupancy),7);
        tracep->chgBit(oldp+78,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_full)))));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35_io_pop_valid));
        tracep->chgCData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35_io_occupancy),7);
        tracep->chgBit(oldp+81,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_full)))));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36_io_pop_valid));
        tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36_io_occupancy),7);
        tracep->chgBit(oldp+84,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_full)))));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37_io_pop_valid));
        tracep->chgCData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37_io_occupancy),7);
        tracep->chgBit(oldp+87,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_full)))));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38_io_pop_valid));
        tracep->chgCData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38_io_occupancy),7);
        tracep->chgBit(oldp+90,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_full)))));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39_io_pop_valid));
        tracep->chgCData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39_io_occupancy),7);
        tracep->chgBit(oldp+93,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_full)))));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40_io_pop_valid));
        tracep->chgCData(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40_io_occupancy),7);
        tracep->chgBit(oldp+96,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_full)))));
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41_io_pop_valid));
        tracep->chgCData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41_io_occupancy),7);
        tracep->chgBit(oldp+99,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_full)))));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42_io_pop_valid));
        tracep->chgCData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42_io_occupancy),7);
        tracep->chgBit(oldp+102,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_full)))));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43_io_pop_valid));
        tracep->chgCData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43_io_occupancy),7);
        tracep->chgBit(oldp+105,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_full)))));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44_io_pop_valid));
        tracep->chgCData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44_io_occupancy),7);
        tracep->chgBit(oldp+108,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_full)))));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45_io_pop_valid));
        tracep->chgCData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45_io_occupancy),7);
        tracep->chgBit(oldp+111,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_full)))));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46_io_pop_valid));
        tracep->chgCData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46_io_occupancy),7);
        tracep->chgBit(oldp+114,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_full)))));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47_io_pop_valid));
        tracep->chgCData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47_io_occupancy),7);
        tracep->chgBit(oldp+117,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_full)))));
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48_io_pop_valid));
        tracep->chgCData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48_io_occupancy),7);
        tracep->chgBit(oldp+120,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_full)))));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49_io_pop_valid));
        tracep->chgCData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49_io_occupancy),7);
        tracep->chgBit(oldp+123,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_full)))));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50_io_pop_valid));
        tracep->chgCData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50_io_occupancy),7);
        tracep->chgBit(oldp+126,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_full)))));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51_io_pop_valid));
        tracep->chgCData(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51_io_occupancy),7);
        tracep->chgBit(oldp+129,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_full)))));
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52_io_pop_valid));
        tracep->chgCData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52_io_occupancy),7);
        tracep->chgBit(oldp+132,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_full)))));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53_io_pop_valid));
        tracep->chgCData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53_io_occupancy),7);
        tracep->chgBit(oldp+135,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_full)))));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54_io_pop_valid));
        tracep->chgCData(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54_io_occupancy),7);
        tracep->chgBit(oldp+138,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_full)))));
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55_io_pop_valid));
        tracep->chgCData(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55_io_occupancy),7);
        tracep->chgBit(oldp+141,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_full)))));
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56_io_pop_valid));
        tracep->chgCData(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56_io_occupancy),7);
        tracep->chgBit(oldp+144,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_full)))));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57_io_pop_valid));
        tracep->chgCData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57_io_occupancy),7);
        tracep->chgBit(oldp+147,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_full)))));
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58_io_pop_valid));
        tracep->chgCData(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58_io_occupancy),7);
        tracep->chgBit(oldp+150,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_full)))));
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59_io_pop_valid));
        tracep->chgCData(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59_io_occupancy),7);
        tracep->chgBit(oldp+153,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_full)))));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60_io_pop_valid));
        tracep->chgCData(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60_io_occupancy),7);
        tracep->chgBit(oldp+156,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_full)))));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61_io_pop_valid));
        tracep->chgCData(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61_io_occupancy),7);
        tracep->chgBit(oldp+159,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_full)))));
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62_io_pop_valid));
        tracep->chgCData(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62_io_occupancy),7);
        tracep->chgBit(oldp+162,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_full)))));
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63_io_pop_valid));
        tracep->chgCData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63_io_occupancy),7);
        tracep->chgBit(oldp+165,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_full)))));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64_io_pop_valid));
        tracep->chgCData(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64_io_occupancy),7);
        tracep->chgBit(oldp+168,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_full)))));
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65_io_pop_valid));
        tracep->chgCData(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65_io_occupancy),7);
        tracep->chgBit(oldp+171,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_full)))));
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66_io_pop_valid));
        tracep->chgCData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66_io_occupancy),7);
        tracep->chgBit(oldp+174,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_full)))));
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67_io_pop_valid));
        tracep->chgCData(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67_io_occupancy),7);
        tracep->chgBit(oldp+177,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_full)))));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68_io_pop_valid));
        tracep->chgCData(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68_io_occupancy),7);
        tracep->chgBit(oldp+180,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_full)))));
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69_io_pop_valid));
        tracep->chgCData(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69_io_occupancy),7);
        tracep->chgBit(oldp+183,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_full)))));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70_io_pop_valid));
        tracep->chgCData(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70_io_occupancy),7);
        tracep->chgBit(oldp+186,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_full)))));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71_io_pop_valid));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71_io_occupancy),7);
        tracep->chgBit(oldp+189,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_full)))));
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72_io_pop_valid));
        tracep->chgCData(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72_io_occupancy),7);
        tracep->chgBit(oldp+192,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_full)))));
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73_io_pop_valid));
        tracep->chgCData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73_io_occupancy),7);
        tracep->chgBit(oldp+195,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_full)))));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74_io_pop_valid));
        tracep->chgCData(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74_io_occupancy),7);
        tracep->chgBit(oldp+198,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_full)))));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75_io_pop_valid));
        tracep->chgCData(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75_io_occupancy),7);
        tracep->chgBit(oldp+201,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_full)))));
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76_io_pop_valid));
        tracep->chgCData(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76_io_occupancy),7);
        tracep->chgBit(oldp+204,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_full)))));
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77_io_pop_valid));
        tracep->chgCData(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77_io_occupancy),7);
        tracep->chgBit(oldp+207,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_full)))));
        tracep->chgBit(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78_io_pop_valid));
        tracep->chgCData(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78_io_occupancy),7);
        tracep->chgBit(oldp+210,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_full)))));
        tracep->chgBit(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79_io_pop_valid));
        tracep->chgCData(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79_io_occupancy),7);
    }
}

void VarraySlice___024root__trace_chg_sub_16(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_16\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1738);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_full)))));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80_io_pop_valid));
        tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80_io_occupancy),7);
        tracep->chgBit(oldp+3,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_full)))));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81_io_pop_valid));
        tracep->chgCData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81_io_occupancy),7);
        tracep->chgBit(oldp+6,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_full)))));
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82_io_pop_valid));
        tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82_io_occupancy),7);
        tracep->chgBit(oldp+9,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_full)))));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83_io_pop_valid));
        tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83_io_occupancy),7);
        tracep->chgBit(oldp+12,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_full)))));
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84_io_pop_valid));
        tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84_io_occupancy),7);
        tracep->chgBit(oldp+15,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_full)))));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85_io_pop_valid));
        tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85_io_occupancy),7);
        tracep->chgBit(oldp+18,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_full)))));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86_io_pop_valid));
        tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86_io_occupancy),7);
        tracep->chgBit(oldp+21,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_full)))));
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87_io_pop_valid));
        tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87_io_occupancy),7);
        tracep->chgBit(oldp+24,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_full)))));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88_io_pop_valid));
        tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88_io_occupancy),7);
        tracep->chgBit(oldp+27,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_full)))));
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89_io_pop_valid));
        tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89_io_occupancy),7);
        tracep->chgBit(oldp+30,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_full)))));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90_io_pop_valid));
        tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90_io_occupancy),7);
        tracep->chgBit(oldp+33,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_full)))));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91_io_pop_valid));
        tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91_io_occupancy),7);
        tracep->chgBit(oldp+36,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_full)))));
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92_io_pop_valid));
        tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92_io_occupancy),7);
        tracep->chgBit(oldp+39,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_full)))));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93_io_pop_valid));
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93_io_occupancy),7);
        tracep->chgBit(oldp+42,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_full)))));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94_io_pop_valid));
        tracep->chgCData(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94_io_occupancy),7);
        tracep->chgBit(oldp+45,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_full)))));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95_io_pop_valid));
        tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95_io_occupancy),7);
        tracep->chgBit(oldp+48,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_full)))));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96_io_pop_valid));
        tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96_io_occupancy),7);
        tracep->chgBit(oldp+51,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_full)))));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97_io_pop_valid));
        tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97_io_occupancy),7);
        tracep->chgBit(oldp+54,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_full)))));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98_io_pop_valid));
        tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98_io_occupancy),7);
        tracep->chgBit(oldp+57,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_full)))));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99_io_pop_valid));
        tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99_io_occupancy),7);
        tracep->chgBit(oldp+60,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_full)))));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100_io_pop_valid));
        tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100_io_occupancy),7);
        tracep->chgBit(oldp+63,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_full)))));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101_io_pop_valid));
        tracep->chgCData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101_io_occupancy),7);
        tracep->chgBit(oldp+66,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_full)))));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102_io_pop_valid));
        tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102_io_occupancy),7);
        tracep->chgBit(oldp+69,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_full)))));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103_io_pop_valid));
        tracep->chgCData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103_io_occupancy),7);
        tracep->chgBit(oldp+72,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_full)))));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104_io_pop_valid));
        tracep->chgCData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104_io_occupancy),7);
        tracep->chgBit(oldp+75,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_full)))));
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105_io_pop_valid));
        tracep->chgCData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105_io_occupancy),7);
        tracep->chgBit(oldp+78,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_full)))));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106_io_pop_valid));
        tracep->chgCData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106_io_occupancy),7);
        tracep->chgBit(oldp+81,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_full)))));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107_io_pop_valid));
        tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107_io_occupancy),7);
        tracep->chgBit(oldp+84,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_full)))));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108_io_pop_valid));
        tracep->chgCData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108_io_occupancy),7);
        tracep->chgBit(oldp+87,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_full)))));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109_io_pop_valid));
        tracep->chgCData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109_io_occupancy),7);
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l204));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377));
        tracep->chgBit(oldp+92,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417))));
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_1));
        tracep->chgBit(oldp+94,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_1_1))));
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_2));
        tracep->chgBit(oldp+96,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_2_1))));
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_3));
        tracep->chgBit(oldp+98,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_3_1))));
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_4));
        tracep->chgBit(oldp+100,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_4_1))));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_5));
        tracep->chgBit(oldp+102,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_5))));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_6));
        tracep->chgBit(oldp+104,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_6))));
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l377_7));
        tracep->chgBit(oldp+106,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l417_7))));
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234));
        tracep->chgBit(oldp+108,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274))));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_1));
        tracep->chgBit(oldp+110,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_1_1))));
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_2));
        tracep->chgBit(oldp+112,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_2_1))));
        tracep->chgBit(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_3));
        tracep->chgBit(oldp+114,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_3_1))));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_4));
        tracep->chgBit(oldp+116,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_4_1))));
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_5));
        tracep->chgBit(oldp+118,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_5))));
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_6));
        tracep->chgBit(oldp+120,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_6))));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l234_7));
        tracep->chgBit(oldp+122,((0U == (IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l274_7))));
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l337));
        tracep->chgCData(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+125,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_full));
        tracep->chgCData(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+130,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_full));
        tracep->chgCData(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+135,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_full));
        tracep->chgCData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+140,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_full));
        tracep->chgCData(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+145,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_full));
        tracep->chgCData(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+150,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_full));
        tracep->chgCData(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+155,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_full));
        tracep->chgCData(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+160,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_full));
        tracep->chgCData(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+165,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_full));
        tracep->chgCData(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+170,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_full));
        tracep->chgCData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+175,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_full));
        tracep->chgCData(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+180,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_full));
        tracep->chgCData(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+185,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_full));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+190,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_full));
        tracep->chgCData(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+195,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_full));
        tracep->chgCData(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+200,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrMatch));
    }
}

void VarraySlice___024root__trace_chg_sub_17(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_17\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1940);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_full));
        tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+3,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_full));
        tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+8,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_full));
        tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+13,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_full));
        tracep->chgCData(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+18,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_full));
        tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+23,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_full));
        tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+28,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_full));
        tracep->chgCData(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+33,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_full));
        tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+38,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_full));
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+43,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_full));
        tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+48,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_full));
        tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+53,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_full));
        tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+58,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_full));
        tracep->chgCData(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+63,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_full));
        tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+68,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_full));
        tracep->chgCData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+73,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_full));
        tracep->chgCData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+78,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_full));
        tracep->chgCData(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+83,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_full));
        tracep->chgCData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+88,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_full));
        tracep->chgCData(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+93,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_full));
        tracep->chgCData(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+98,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_full));
        tracep->chgCData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+103,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_full));
        tracep->chgCData(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+108,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_full));
        tracep->chgCData(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+113,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_full));
        tracep->chgCData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+118,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_full));
        tracep->chgCData(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+123,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_full));
        tracep->chgCData(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+128,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_full));
        tracep->chgCData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+133,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_full));
        tracep->chgCData(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+138,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_full));
        tracep->chgCData(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+143,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_full));
        tracep->chgCData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+148,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_full));
        tracep->chgCData(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+153,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_full));
        tracep->chgCData(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+158,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_full));
        tracep->chgCData(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+163,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_full));
        tracep->chgCData(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+168,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_full));
        tracep->chgCData(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+173,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_full));
        tracep->chgCData(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+178,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_full));
        tracep->chgCData(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+183,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_full));
        tracep->chgCData(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+188,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_full));
        tracep->chgCData(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+193,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_full));
        tracep->chgCData(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+198,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_full));
        tracep->chgCData(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+203,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_full));
        tracep->chgCData(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value),7);
    }
}

void VarraySlice___024root__trace_chg_sub_18(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_18\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 2148);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_full));
        tracep->chgCData(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+5,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_full));
        tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+10,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_full));
        tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+15,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_full));
        tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+20,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_full));
        tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+25,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_full));
        tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+30,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_full));
        tracep->chgCData(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+35,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_full));
        tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+40,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_full));
        tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+45,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_full));
        tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+50,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_full));
        tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+55,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_full));
        tracep->chgCData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+60,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_full));
        tracep->chgCData(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+65,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_full));
        tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+70,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_full));
        tracep->chgCData(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+75,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_full));
        tracep->chgCData(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+80,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_full));
        tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+85,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_full));
        tracep->chgCData(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+90,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_full));
        tracep->chgCData(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+95,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_full));
        tracep->chgCData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+100,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_full));
        tracep->chgCData(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+105,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_full));
        tracep->chgCData(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+110,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_full));
        tracep->chgCData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+115,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_full));
        tracep->chgCData(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+120,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_full));
        tracep->chgCData(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+125,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_full));
        tracep->chgCData(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+130,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_full));
        tracep->chgCData(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+135,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_full));
        tracep->chgCData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+140,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_full));
        tracep->chgCData(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+145,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_full));
        tracep->chgCData(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+150,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_full));
        tracep->chgCData(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+155,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_full));
        tracep->chgCData(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+160,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_full));
        tracep->chgCData(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+165,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_full));
        tracep->chgCData(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+170,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_full));
        tracep->chgCData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+175,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_full));
        tracep->chgCData(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+180,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_full));
        tracep->chgCData(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+185,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_full));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+190,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_full));
        tracep->chgCData(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+195,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_full));
        tracep->chgCData(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+200,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_full));
        tracep->chgCData(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+205,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_ptrMatch));
    }
}

void VarraySlice___024root__trace_chg_sub_19(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_19\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 2355);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_full));
        tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+3,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_full));
        tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+8,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_full));
        tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+13,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_full));
        tracep->chgCData(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+18,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_full));
        tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+23,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_full));
        tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+28,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_full));
        tracep->chgCData(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+33,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_full));
        tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+38,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_full));
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+43,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_full));
        tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+48,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_full));
        tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_ptrDif),7);
        tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value),7);
        tracep->chgBit(oldp+53,((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value))));
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_ptrMatch));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_full));
        tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_ptrDif),7);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+57,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+58,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+59,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+60,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+61,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+62,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+63,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+64,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+65,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+66,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+67,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+68,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+69,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+70,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+71,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+72,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+73,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+74,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+75,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+76,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+77,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+78,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+79,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+80,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+81,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+82,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+83,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+84,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+85,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+86,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+87,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+88,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+89,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+90,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+91,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+92,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+93,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+94,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+95,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+96,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+97,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+98,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+99,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+100,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+101,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+102,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+103,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+104,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+105,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+106,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+107,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+108,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+109,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+110,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+111,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+112,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+113,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+114,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+115,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement))));
    }
}

void VarraySlice___024root__trace_chg_sub_20(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_20\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 2471);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+0,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+1,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+2,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+3,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+4,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+5,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+6,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+7,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+8,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+9,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+10,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+11,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+12,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+13,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+14,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+15,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+16,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+17,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+18,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+19,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+20,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+21,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+22,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+23,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+24,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+25,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+26,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+27,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+28,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+29,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+30,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+31,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+32,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+33,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+34,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+35,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+36,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+37,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+38,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+39,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+40,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+41,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+42,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+43,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+44,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+45,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+46,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+47,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+48,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+49,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement))));
        tracep->chgBit(oldp+50,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0_io_push_valid));
        tracep->chgIData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0_io_push_payload),32);
        tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0_io_pop_ready));
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1_io_push_valid));
        tracep->chgIData(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1_io_push_payload),32);
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1_io_pop_ready));
        tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2_io_push_valid));
        tracep->chgIData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2_io_push_payload),32);
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2_io_pop_ready));
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3_io_push_valid));
        tracep->chgIData(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3_io_push_payload),32);
        tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3_io_pop_ready));
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4_io_push_valid));
        tracep->chgIData(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4_io_push_payload),32);
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4_io_pop_ready));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5_io_push_valid));
        tracep->chgIData(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5_io_push_payload),32);
        tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5_io_pop_ready));
        tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6_io_push_valid));
        tracep->chgIData(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6_io_push_payload),32);
        tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6_io_pop_ready));
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7_io_push_valid));
        tracep->chgIData(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7_io_push_payload),32);
        tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7_io_pop_ready));
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8_io_push_valid));
        tracep->chgIData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8_io_push_payload),32);
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8_io_pop_ready));
        tracep->chgBit(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_push_valid));
        tracep->chgIData(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_push_payload),32);
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_pop_ready));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_push_valid));
        tracep->chgIData(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_push_payload),32);
        tracep->chgBit(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_pop_ready));
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_push_valid));
        tracep->chgIData(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_push_payload),32);
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_pop_ready));
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_push_valid));
        tracep->chgIData(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_push_payload),32);
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_pop_ready));
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_push_valid));
        tracep->chgIData(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_push_payload),32);
        tracep->chgBit(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_pop_ready));
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_push_valid));
        tracep->chgIData(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_push_payload),32);
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_pop_ready));
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_push_valid));
        tracep->chgIData(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_push_payload),32);
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_pop_ready));
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16_io_push_valid));
        tracep->chgIData(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16_io_push_payload),32);
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16_io_pop_ready));
        tracep->chgBit(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17_io_push_valid));
        tracep->chgIData(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17_io_push_payload),32);
        tracep->chgBit(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17_io_pop_ready));
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18_io_push_valid));
        tracep->chgIData(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18_io_push_payload),32);
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18_io_pop_ready));
        tracep->chgBit(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19_io_push_valid));
        tracep->chgIData(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19_io_push_payload),32);
        tracep->chgBit(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19_io_pop_ready));
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20_io_push_valid));
        tracep->chgIData(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20_io_push_payload),32);
        tracep->chgBit(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20_io_pop_ready));
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21_io_push_valid));
        tracep->chgIData(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21_io_push_payload),32);
        tracep->chgBit(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21_io_pop_ready));
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22_io_push_valid));
        tracep->chgIData(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22_io_push_payload),32);
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22_io_pop_ready));
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23_io_push_valid));
        tracep->chgIData(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23_io_push_payload),32);
        tracep->chgBit(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23_io_pop_ready));
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24_io_push_valid));
        tracep->chgIData(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24_io_push_payload),32);
        tracep->chgBit(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24_io_pop_ready));
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25_io_push_valid));
        tracep->chgIData(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25_io_push_payload),32);
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25_io_pop_ready));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26_io_push_valid));
        tracep->chgIData(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26_io_push_payload),32);
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26_io_pop_ready));
        tracep->chgBit(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27_io_push_valid));
        tracep->chgIData(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27_io_push_payload),32);
        tracep->chgBit(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27_io_pop_ready));
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28_io_push_valid));
        tracep->chgIData(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28_io_push_payload),32);
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28_io_pop_ready));
        tracep->chgBit(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29_io_push_valid));
        tracep->chgIData(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29_io_push_payload),32);
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29_io_pop_ready));
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30_io_push_valid));
        tracep->chgIData(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30_io_push_payload),32);
    }
}

void VarraySlice___024root__trace_chg_sub_21(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_21\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 2614);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30_io_pop_ready));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31_io_push_valid));
        tracep->chgIData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31_io_push_payload),32);
        tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31_io_pop_ready));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32_io_push_valid));
        tracep->chgIData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32_io_push_payload),32);
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32_io_pop_ready));
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33_io_push_valid));
        tracep->chgIData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33_io_push_payload),32);
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33_io_pop_ready));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34_io_push_valid));
        tracep->chgIData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34_io_push_payload),32);
        tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34_io_pop_ready));
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35_io_push_valid));
        tracep->chgIData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35_io_push_payload),32);
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35_io_pop_ready));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36_io_push_valid));
        tracep->chgIData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36_io_push_payload),32);
        tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36_io_pop_ready));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37_io_push_valid));
        tracep->chgIData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37_io_push_payload),32);
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37_io_pop_ready));
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38_io_push_valid));
        tracep->chgIData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38_io_push_payload),32);
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38_io_pop_ready));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39_io_push_valid));
        tracep->chgIData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39_io_push_payload),32);
        tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39_io_pop_ready));
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40_io_push_valid));
        tracep->chgIData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40_io_push_payload),32);
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40_io_pop_ready));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41_io_push_valid));
        tracep->chgIData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41_io_push_payload),32);
        tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41_io_pop_ready));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42_io_push_valid));
        tracep->chgIData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42_io_push_payload),32);
        tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42_io_pop_ready));
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43_io_push_valid));
        tracep->chgIData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43_io_push_payload),32);
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43_io_pop_ready));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44_io_push_valid));
        tracep->chgIData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44_io_push_payload),32);
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44_io_pop_ready));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45_io_push_valid));
        tracep->chgIData(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45_io_push_payload),32);
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45_io_pop_ready));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46_io_push_valid));
        tracep->chgIData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46_io_push_payload),32);
        tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46_io_pop_ready));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47_io_push_valid));
        tracep->chgIData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47_io_push_payload),32);
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47_io_pop_ready));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48_io_push_valid));
        tracep->chgIData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48_io_push_payload),32);
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48_io_pop_ready));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49_io_push_valid));
        tracep->chgIData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49_io_push_payload),32);
        tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49_io_pop_ready));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50_io_push_valid));
        tracep->chgIData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50_io_push_payload),32);
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50_io_pop_ready));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51_io_push_valid));
        tracep->chgIData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51_io_push_payload),32);
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51_io_pop_ready));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52_io_push_valid));
        tracep->chgIData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52_io_push_payload),32);
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52_io_pop_ready));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53_io_push_valid));
        tracep->chgIData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53_io_push_payload),32);
        tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53_io_pop_ready));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54_io_push_valid));
        tracep->chgIData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54_io_push_payload),32);
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54_io_pop_ready));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55_io_push_valid));
        tracep->chgIData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55_io_push_payload),32);
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55_io_pop_ready));
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56_io_push_valid));
        tracep->chgIData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56_io_push_payload),32);
        tracep->chgBit(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56_io_pop_ready));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57_io_push_valid));
        tracep->chgIData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57_io_push_payload),32);
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57_io_pop_ready));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58_io_push_valid));
        tracep->chgIData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58_io_push_payload),32);
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58_io_pop_ready));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59_io_push_valid));
        tracep->chgIData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59_io_push_payload),32);
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59_io_pop_ready));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60_io_push_valid));
        tracep->chgIData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60_io_push_payload),32);
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60_io_pop_ready));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61_io_push_valid));
        tracep->chgIData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61_io_push_payload),32);
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61_io_pop_ready));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62_io_push_valid));
        tracep->chgIData(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62_io_push_payload),32);
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62_io_pop_ready));
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63_io_push_valid));
        tracep->chgIData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63_io_push_payload),32);
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63_io_pop_ready));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64_io_push_valid));
        tracep->chgIData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64_io_push_payload),32);
        tracep->chgBit(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64_io_pop_ready));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65_io_push_valid));
        tracep->chgIData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65_io_push_payload),32);
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65_io_pop_ready));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66_io_push_valid));
        tracep->chgIData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66_io_push_payload),32);
        tracep->chgBit(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66_io_pop_ready));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67_io_push_valid));
        tracep->chgIData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67_io_push_payload),32);
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67_io_pop_ready));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68_io_push_valid));
        tracep->chgIData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68_io_push_payload),32);
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68_io_pop_ready));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69_io_push_valid));
        tracep->chgIData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69_io_push_payload),32);
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69_io_pop_ready));
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70_io_push_valid));
        tracep->chgIData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70_io_push_payload),32);
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70_io_pop_ready));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71_io_push_valid));
        tracep->chgIData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71_io_push_payload),32);
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71_io_pop_ready));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72_io_push_valid));
        tracep->chgIData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72_io_push_payload),32);
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72_io_pop_ready));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73_io_push_valid));
        tracep->chgIData(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73_io_push_payload),32);
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73_io_pop_ready));
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74_io_push_valid));
        tracep->chgIData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74_io_push_payload),32);
        tracep->chgBit(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74_io_pop_ready));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75_io_push_valid));
        tracep->chgIData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75_io_push_payload),32);
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75_io_pop_ready));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76_io_push_valid));
        tracep->chgIData(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76_io_push_payload),32);
        tracep->chgBit(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76_io_pop_ready));
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77_io_push_valid));
        tracep->chgIData(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77_io_push_payload),32);
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77_io_pop_ready));
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78_io_push_valid));
        tracep->chgIData(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78_io_push_payload),32);
        tracep->chgBit(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78_io_pop_ready));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79_io_push_valid));
        tracep->chgIData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79_io_push_payload),32);
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79_io_pop_ready));
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80_io_push_valid));
        tracep->chgIData(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80_io_push_payload),32);
        tracep->chgBit(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80_io_pop_ready));
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81_io_push_valid));
        tracep->chgIData(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81_io_push_payload),32);
        tracep->chgBit(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81_io_pop_ready));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82_io_push_valid));
        tracep->chgIData(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82_io_push_payload),32);
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82_io_pop_ready));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83_io_push_valid));
        tracep->chgIData(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83_io_push_payload),32);
        tracep->chgBit(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83_io_pop_ready));
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84_io_push_valid));
        tracep->chgIData(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84_io_push_payload),32);
        tracep->chgBit(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84_io_pop_ready));
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85_io_push_valid));
        tracep->chgIData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85_io_push_payload),32);
        tracep->chgBit(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85_io_pop_ready));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86_io_push_valid));
        tracep->chgIData(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86_io_push_payload),32);
        tracep->chgBit(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86_io_pop_ready));
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87_io_push_valid));
        tracep->chgIData(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87_io_push_payload),32);
        tracep->chgBit(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87_io_pop_ready));
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88_io_push_valid));
        tracep->chgIData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88_io_push_payload),32);
        tracep->chgBit(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88_io_pop_ready));
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89_io_push_valid));
        tracep->chgIData(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89_io_push_payload),32);
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89_io_pop_ready));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90_io_push_valid));
        tracep->chgIData(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90_io_push_payload),32);
        tracep->chgBit(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90_io_pop_ready));
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91_io_push_valid));
        tracep->chgIData(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91_io_push_payload),32);
        tracep->chgBit(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91_io_pop_ready));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92_io_push_valid));
        tracep->chgIData(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92_io_push_payload),32);
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92_io_pop_ready));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93_io_push_valid));
        tracep->chgIData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93_io_push_payload),32);
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93_io_pop_ready));
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94_io_push_valid));
        tracep->chgIData(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94_io_push_payload),32);
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94_io_pop_ready));
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95_io_push_valid));
        tracep->chgIData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95_io_push_payload),32);
        tracep->chgBit(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95_io_pop_ready));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96_io_push_valid));
        tracep->chgIData(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96_io_push_payload),32);
        tracep->chgBit(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96_io_pop_ready));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97_io_push_valid));
        tracep->chgIData(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97_io_push_payload),32);
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97_io_pop_ready));
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98_io_push_valid));
        tracep->chgIData(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98_io_push_payload),32);
        tracep->chgBit(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98_io_pop_ready));
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99_io_push_valid));
        tracep->chgIData(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99_io_push_payload),32);
        tracep->chgBit(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99_io_pop_ready));
        tracep->chgBit(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100_io_push_valid));
        tracep->chgIData(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100_io_push_payload),32);
        tracep->chgBit(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100_io_pop_ready));
        tracep->chgBit(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101_io_push_valid));
        tracep->chgIData(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101_io_push_payload),32);
        tracep->chgBit(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101_io_pop_ready));
        tracep->chgBit(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102_io_push_valid));
        tracep->chgIData(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102_io_push_payload),32);
        tracep->chgBit(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102_io_pop_ready));
        tracep->chgBit(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103_io_push_valid));
        tracep->chgIData(oldp+218,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103_io_push_payload),32);
        tracep->chgBit(oldp+219,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103_io_pop_ready));
        tracep->chgBit(oldp+220,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104_io_push_valid));
        tracep->chgIData(oldp+221,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104_io_push_payload),32);
        tracep->chgBit(oldp+222,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104_io_pop_ready));
        tracep->chgBit(oldp+223,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105_io_push_valid));
        tracep->chgIData(oldp+224,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105_io_push_payload),32);
        tracep->chgBit(oldp+225,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105_io_pop_ready));
        tracep->chgBit(oldp+226,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106_io_push_valid));
        tracep->chgIData(oldp+227,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106_io_push_payload),32);
        tracep->chgBit(oldp+228,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106_io_pop_ready));
        tracep->chgBit(oldp+229,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107_io_push_valid));
        tracep->chgIData(oldp+230,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107_io_push_payload),32);
        tracep->chgBit(oldp+231,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107_io_pop_ready));
        tracep->chgBit(oldp+232,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108_io_push_valid));
        tracep->chgIData(oldp+233,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108_io_push_payload),32);
        tracep->chgBit(oldp+234,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108_io_pop_ready));
        tracep->chgBit(oldp+235,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109_io_push_valid));
        tracep->chgIData(oldp+236,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109_io_push_payload),32);
        tracep->chgBit(oldp+237,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109_io_pop_ready));
        tracep->chgBit(oldp+238,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_willIncrement));
        tracep->chgBit(oldp+239,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_willClear));
        tracep->chgSData(oldp+240,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_valueNext),13);
        tracep->chgBit(oldp+241,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_willIncrement));
        tracep->chgBit(oldp+242,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_willClear));
        tracep->chgSData(oldp+243,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_valueNext),13);
        tracep->chgBit(oldp+244,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_willIncrement));
        tracep->chgBit(oldp+245,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_willClear));
        tracep->chgSData(oldp+246,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_valueNext),13);
        tracep->chgBit(oldp+247,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_willIncrement));
        tracep->chgBit(oldp+248,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_willClear));
    }
}

void VarraySlice___024root__trace_chg_sub_22(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_22\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 2863);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_valueNext),13);
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_willIncrement));
        tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_willClear));
        tracep->chgSData(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_valueNext),13);
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_willIncrement));
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_willClear));
        tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_valueNext),13);
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_willIncrement));
        tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_willClear));
        tracep->chgSData(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_valueNext),13);
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_willIncrement));
        tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_willClear));
        tracep->chgSData(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_valueNext),13);
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_willIncrement));
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_willClear));
        tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_valueNext),7);
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_willIncrement));
        tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_willClear));
        tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_valueNext),7);
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_willIncrement));
        tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_willClear));
        tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_valueNext),7);
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_willIncrement));
        tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_willClear));
        tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_valueNext),7);
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_willIncrement));
        tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_willClear));
        tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_valueNext),7);
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_willIncrement));
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_willClear));
        tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_valueNext),7);
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_willIncrement));
        tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_willClear));
        tracep->chgCData(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_valueNext),7);
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_willIncrement));
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_willClear));
        tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_valueNext),7);
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383));
        tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392));
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_0_fire_6));
        tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_1));
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_1));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_1));
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_1_fire_6));
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_2));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_2));
        tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_2));
        tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_2_fire_6));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_3));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_3));
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_3));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_3_fire_6));
        tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_4));
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_4));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_4));
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_4_fire_6));
        tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_5));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_5));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_5));
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_5_fire_6));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_6));
        tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_6));
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_6));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_6_fire_6));
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_7));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_7));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_7));
        tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_7_fire_6));
        tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249));
        tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_0_fire_13));
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_1));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_1));
        tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_1_fire_13));
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_2));
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_2));
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_2_fire_13));
        tracep->chgBit(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_3));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_3));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_3_fire_13));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_4));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_4));
        tracep->chgBit(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_4_fire_13));
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_5));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_5));
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_5_fire_13));
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_6));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_6));
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_6_fire_13));
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_7));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_7));
        tracep->chgBit(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_7_fire_13));
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushing));
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popping));
        tracep->chgBit(oldp+99,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popping))));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushing));
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popping));
        tracep->chgBit(oldp+106,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popping))));
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushing));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popping));
        tracep->chgBit(oldp+113,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popping))));
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushing));
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popping));
        tracep->chgBit(oldp+120,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popping))));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushing));
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popping));
        tracep->chgBit(oldp+127,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popping))));
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushing));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popping));
        tracep->chgBit(oldp+134,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popping))));
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushing));
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popping));
        tracep->chgBit(oldp+141,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popping))));
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushing));
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popping));
        tracep->chgBit(oldp+148,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popping))));
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushing));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popping));
        tracep->chgBit(oldp+155,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popping))));
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushing));
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popping));
        tracep->chgBit(oldp+162,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popping))));
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushing));
        tracep->chgBit(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popping));
        tracep->chgBit(oldp+169,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popping))));
        tracep->chgBit(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushing));
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popping));
        tracep->chgBit(oldp+176,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popping))));
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushing));
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popping));
        tracep->chgBit(oldp+183,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popping))));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushing));
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popping));
        tracep->chgBit(oldp+190,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popping))));
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushing));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popping));
        tracep->chgBit(oldp+197,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popping))));
        tracep->chgBit(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushing));
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popping));
        tracep->chgBit(oldp+204,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popping))));
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushing));
        tracep->chgBit(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popping));
        tracep->chgBit(oldp+211,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popping))));
        tracep->chgBit(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushing));
        tracep->chgBit(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popping));
        tracep->chgBit(oldp+218,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popping))));
        tracep->chgBit(oldp+219,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+220,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+221,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+222,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+223,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushing));
        tracep->chgBit(oldp+224,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popping));
        tracep->chgBit(oldp+225,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popping))));
        tracep->chgBit(oldp+226,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+227,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+228,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+229,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_valueNext),7);
    }
}

void VarraySlice___024root__trace_chg_sub_23(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_23\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3093);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushing));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popping));
        tracep->chgBit(oldp+2,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popping))));
        tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushing));
        tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popping));
        tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popping))));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushing));
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popping));
        tracep->chgBit(oldp+16,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popping))));
        tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushing));
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popping));
        tracep->chgBit(oldp+23,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popping))));
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushing));
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popping));
        tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popping))));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushing));
        tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popping));
        tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popping))));
        tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushing));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popping));
        tracep->chgBit(oldp+44,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popping))));
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushing));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popping));
        tracep->chgBit(oldp+51,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popping))));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushing));
        tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popping));
        tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popping))));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushing));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popping));
        tracep->chgBit(oldp+65,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popping))));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushing));
        tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popping));
        tracep->chgBit(oldp+72,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popping))));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushing));
        tracep->chgBit(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popping));
        tracep->chgBit(oldp+79,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popping))));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushing));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popping));
        tracep->chgBit(oldp+86,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popping))));
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushing));
        tracep->chgBit(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popping));
        tracep->chgBit(oldp+93,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popping))));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushing));
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popping));
        tracep->chgBit(oldp+100,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popping))));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushing));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popping));
        tracep->chgBit(oldp+107,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popping))));
        tracep->chgBit(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushing));
        tracep->chgBit(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popping));
        tracep->chgBit(oldp+114,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popping))));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushing));
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popping));
        tracep->chgBit(oldp+121,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popping))));
        tracep->chgBit(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushing));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popping));
        tracep->chgBit(oldp+128,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popping))));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushing));
        tracep->chgBit(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popping));
        tracep->chgBit(oldp+135,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popping))));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushing));
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popping));
        tracep->chgBit(oldp+142,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popping))));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushing));
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popping));
        tracep->chgBit(oldp+149,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popping))));
        tracep->chgBit(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushing));
        tracep->chgBit(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popping));
        tracep->chgBit(oldp+156,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popping))));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushing));
        tracep->chgBit(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popping));
        tracep->chgBit(oldp+163,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popping))));
        tracep->chgBit(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushing));
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popping));
        tracep->chgBit(oldp+170,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popping))));
        tracep->chgBit(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushing));
        tracep->chgBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popping));
        tracep->chgBit(oldp+177,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popping))));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushing));
        tracep->chgBit(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popping));
        tracep->chgBit(oldp+184,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popping))));
        tracep->chgBit(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushing));
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popping));
        tracep->chgBit(oldp+191,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popping))));
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushing));
        tracep->chgBit(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popping));
        tracep->chgBit(oldp+198,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popping))));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushing));
        tracep->chgBit(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popping));
        tracep->chgBit(oldp+205,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popping))));
        tracep->chgBit(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushing));
        tracep->chgBit(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popping));
        tracep->chgBit(oldp+212,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popping))));
        tracep->chgBit(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushing));
    }
}
