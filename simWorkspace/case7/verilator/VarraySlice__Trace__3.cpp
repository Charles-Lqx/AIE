// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_24(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_24\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3067);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85_io_pop_ready));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86_io_push_valid));
        tracep->chgIData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86_io_push_payload),32);
        tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86_io_pop_ready));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87_io_push_valid));
        tracep->chgIData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87_io_push_payload),32);
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87_io_pop_ready));
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88_io_push_valid));
        tracep->chgIData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88_io_push_payload),32);
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88_io_pop_ready));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89_io_push_valid));
        tracep->chgIData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89_io_push_payload),32);
        tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89_io_pop_ready));
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90_io_push_valid));
        tracep->chgIData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90_io_push_payload),32);
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90_io_pop_ready));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91_io_push_valid));
        tracep->chgIData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91_io_push_payload),32);
        tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91_io_pop_ready));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92_io_push_valid));
        tracep->chgIData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92_io_push_payload),32);
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92_io_pop_ready));
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93_io_push_valid));
        tracep->chgIData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93_io_push_payload),32);
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93_io_pop_ready));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94_io_push_valid));
        tracep->chgIData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94_io_push_payload),32);
        tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94_io_pop_ready));
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95_io_push_valid));
        tracep->chgIData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95_io_push_payload),32);
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95_io_pop_ready));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96_io_push_valid));
        tracep->chgIData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96_io_push_payload),32);
        tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96_io_pop_ready));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97_io_push_valid));
        tracep->chgIData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97_io_push_payload),32);
        tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97_io_pop_ready));
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98_io_push_valid));
        tracep->chgIData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98_io_push_payload),32);
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98_io_pop_ready));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99_io_push_valid));
        tracep->chgIData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99_io_push_payload),32);
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99_io_pop_ready));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100_io_push_valid));
        tracep->chgIData(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100_io_push_payload),32);
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100_io_pop_ready));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101_io_push_valid));
        tracep->chgIData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101_io_push_payload),32);
        tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101_io_pop_ready));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102_io_push_valid));
        tracep->chgIData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102_io_push_payload),32);
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102_io_pop_ready));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103_io_push_valid));
        tracep->chgIData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103_io_push_payload),32);
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103_io_pop_ready));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104_io_push_valid));
        tracep->chgIData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104_io_push_payload),32);
        tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104_io_pop_ready));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105_io_push_valid));
        tracep->chgIData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105_io_push_payload),32);
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105_io_pop_ready));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106_io_push_valid));
        tracep->chgIData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106_io_push_payload),32);
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106_io_pop_ready));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107_io_push_valid));
        tracep->chgIData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107_io_push_payload),32);
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107_io_pop_ready));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108_io_push_valid));
        tracep->chgIData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108_io_push_payload),32);
        tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108_io_pop_ready));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109_io_push_valid));
        tracep->chgIData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109_io_push_payload),32);
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109_io_pop_ready));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110_io_push_valid));
        tracep->chgIData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110_io_push_payload),32);
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110_io_pop_ready));
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111_io_push_valid));
        tracep->chgIData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111_io_push_payload),32);
        tracep->chgBit(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111_io_pop_ready));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112_io_push_valid));
        tracep->chgIData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112_io_push_payload),32);
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112_io_pop_ready));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113_io_push_valid));
        tracep->chgIData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113_io_push_payload),32);
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113_io_pop_ready));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114_io_push_valid));
        tracep->chgIData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114_io_push_payload),32);
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114_io_pop_ready));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115_io_push_valid));
        tracep->chgIData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115_io_push_payload),32);
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115_io_pop_ready));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116_io_push_valid));
        tracep->chgIData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116_io_push_payload),32);
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116_io_pop_ready));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117_io_push_valid));
        tracep->chgIData(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117_io_push_payload),32);
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117_io_pop_ready));
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118_io_push_valid));
        tracep->chgIData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118_io_push_payload),32);
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118_io_pop_ready));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119_io_push_valid));
        tracep->chgIData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119_io_push_payload),32);
        tracep->chgBit(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119_io_pop_ready));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120_io_push_valid));
        tracep->chgIData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120_io_push_payload),32);
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120_io_pop_ready));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121_io_push_valid));
        tracep->chgIData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121_io_push_payload),32);
        tracep->chgBit(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121_io_pop_ready));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122_io_push_valid));
        tracep->chgIData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122_io_push_payload),32);
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122_io_pop_ready));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123_io_push_valid));
        tracep->chgIData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123_io_push_payload),32);
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123_io_pop_ready));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124_io_push_valid));
        tracep->chgIData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124_io_push_payload),32);
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124_io_pop_ready));
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125_io_push_valid));
        tracep->chgIData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125_io_push_payload),32);
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125_io_pop_ready));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126_io_push_valid));
        tracep->chgIData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126_io_push_payload),32);
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126_io_pop_ready));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127_io_push_valid));
        tracep->chgIData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127_io_push_payload),32);
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127_io_pop_ready));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_willIncrement));
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_willClear));
        tracep->chgSData(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_valueNext),14);
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_willIncrement));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_willClear));
        tracep->chgSData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_valueNext),14);
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_willIncrement));
        tracep->chgBit(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_willClear));
        tracep->chgSData(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_valueNext),14);
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_willIncrement));
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_willClear));
        tracep->chgSData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_valueNext),14);
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_willIncrement));
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_willClear));
        tracep->chgSData(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_valueNext),14);
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_willIncrement));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_willClear));
        tracep->chgSData(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_valueNext),14);
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_willIncrement));
        tracep->chgBit(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_willClear));
        tracep->chgSData(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_valueNext),14);
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_willIncrement));
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_willClear));
        tracep->chgSData(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_valueNext),14);
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_willIncrement));
        tracep->chgBit(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_willClear));
        tracep->chgCData(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_valueNext),7);
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_willIncrement));
        tracep->chgBit(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_willClear));
        tracep->chgCData(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_valueNext),7);
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_willIncrement));
        tracep->chgBit(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_willClear));
        tracep->chgCData(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_valueNext),7);
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_willIncrement));
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_willClear));
        tracep->chgCData(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_valueNext),7);
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_willIncrement));
        tracep->chgBit(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_willClear));
        tracep->chgCData(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_valueNext),7);
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_willIncrement));
        tracep->chgBit(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_willClear));
        tracep->chgCData(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_valueNext),7);
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_willIncrement));
        tracep->chgBit(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_willClear));
        tracep->chgCData(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_valueNext),7);
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_willIncrement));
        tracep->chgBit(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_willClear));
        tracep->chgCData(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_valueNext),7);
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383));
        tracep->chgBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392));
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_0_fire_6));
        tracep->chgBit(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_1));
        tracep->chgBit(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_1));
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_1));
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_1_fire_6));
        tracep->chgBit(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_2));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_2));
        tracep->chgBit(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_2));
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_2_fire_6));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_3));
        tracep->chgBit(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_3));
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_3));
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_3_fire_6));
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_4));
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_4));
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_4));
        tracep->chgBit(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_4_fire_6));
        tracep->chgBit(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_5));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_5));
        tracep->chgBit(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_5));
        tracep->chgBit(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_5_fire_6));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_6));
        tracep->chgBit(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_6));
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_6));
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_6_fire_6));
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l383_7));
        tracep->chgBit(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l392_7));
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l418_7));
        tracep->chgBit(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_7_fire_6));
        tracep->chgBit(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240));
        tracep->chgBit(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249));
        tracep->chgBit(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_0_fire_13));
        tracep->chgBit(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_1));
        tracep->chgBit(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_1));
        tracep->chgBit(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_1_fire_13));
        tracep->chgBit(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_2));
        tracep->chgBit(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_2));
        tracep->chgBit(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_2_fire_13));
        tracep->chgBit(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_3));
        tracep->chgBit(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_3));
        tracep->chgBit(oldp+218,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_3_fire_13));
        tracep->chgBit(oldp+219,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_4));
        tracep->chgBit(oldp+220,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_4));
        tracep->chgBit(oldp+221,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_4_fire_13));
        tracep->chgBit(oldp+222,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_5));
        tracep->chgBit(oldp+223,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_5));
        tracep->chgBit(oldp+224,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_5_fire_13));
        tracep->chgBit(oldp+225,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_6));
        tracep->chgBit(oldp+226,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_6));
        tracep->chgBit(oldp+227,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_6_fire_13));
        tracep->chgBit(oldp+228,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l240_7));
        tracep->chgBit(oldp+229,(vlSymsp->TOP__arraySlice.__PVT__when_ArraySlice_l249_7));
        tracep->chgBit(oldp+230,(vlSymsp->TOP__arraySlice.__PVT__outputStreamArrayData_7_fire_13));
        tracep->chgBit(oldp+231,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+232,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+233,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+234,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+235,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushing));
        tracep->chgBit(oldp+236,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popping));
        tracep->chgBit(oldp+237,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popping))));
        tracep->chgBit(oldp+238,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+239,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+240,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+241,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+242,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushing));
        tracep->chgBit(oldp+243,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popping));
        tracep->chgBit(oldp+244,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popping))));
        tracep->chgBit(oldp+245,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+246,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_valueNext),7);
    }
}

void VarraySlice___024root__trace_chg_sub_25(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_25\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3314);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushing));
        tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popping));
        tracep->chgBit(oldp+4,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popping))));
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushing));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popping));
        tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popping))));
        tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushing));
        tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popping));
        tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popping))));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushing));
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popping));
        tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popping))));
        tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushing));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popping));
        tracep->chgBit(oldp+32,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popping))));
        tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushing));
        tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popping));
        tracep->chgBit(oldp+39,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popping))));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushing));
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popping));
        tracep->chgBit(oldp+46,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popping))));
        tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushing));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popping));
        tracep->chgBit(oldp+53,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popping))));
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushing));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popping));
        tracep->chgBit(oldp+60,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popping))));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushing));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popping));
        tracep->chgBit(oldp+67,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popping))));
        tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushing));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popping));
        tracep->chgBit(oldp+74,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popping))));
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushing));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popping));
        tracep->chgBit(oldp+81,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popping))));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_pushing));
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popping));
        tracep->chgBit(oldp+88,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popping))));
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_pushing));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popping));
        tracep->chgBit(oldp+95,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popping))));
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_pushing));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popping));
        tracep->chgBit(oldp+102,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popping))));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_pushing));
        tracep->chgBit(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popping));
        tracep->chgBit(oldp+109,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popping))));
        tracep->chgBit(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_pushing));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popping));
        tracep->chgBit(oldp+116,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popping))));
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_pushing));
        tracep->chgBit(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popping));
        tracep->chgBit(oldp+123,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popping))));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_pushing));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popping));
        tracep->chgBit(oldp+130,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popping))));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_pushing));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popping));
        tracep->chgBit(oldp+137,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popping))));
        tracep->chgBit(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_pushing));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popping));
        tracep->chgBit(oldp+144,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popping))));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_pushing));
        tracep->chgBit(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popping));
        tracep->chgBit(oldp+151,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popping))));
        tracep->chgBit(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushing));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popping));
        tracep->chgBit(oldp+158,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popping))));
        tracep->chgBit(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_pushing));
        tracep->chgBit(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_popping));
        tracep->chgBit(oldp+165,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_popping))));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_pushing));
        tracep->chgBit(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_popping));
        tracep->chgBit(oldp+172,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_popping))));
        tracep->chgBit(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_pushing));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_popping));
        tracep->chgBit(oldp+179,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_popping))));
        tracep->chgBit(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_pushing));
        tracep->chgBit(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_popping));
        tracep->chgBit(oldp+186,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_popping))));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_pushing));
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_popping));
        tracep->chgBit(oldp+193,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_popping))));
        tracep->chgBit(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_pushing));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_popping));
        tracep->chgBit(oldp+200,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_popping))));
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_pushing));
        tracep->chgBit(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_popping));
        tracep->chgBit(oldp+207,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_popping))));
        tracep->chgBit(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_pushing));
        tracep->chgBit(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_popping));
        tracep->chgBit(oldp+214,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_popping))));
        tracep->chgBit(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement));
    }
}

void VarraySlice___024root__trace_chg_sub_26(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_26\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3532);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushing));
        tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popping));
        tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popping))));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushing));
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popping));
        tracep->chgBit(oldp+10,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popping))));
        tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushing));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popping));
        tracep->chgBit(oldp+17,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popping))));
        tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushing));
        tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popping));
        tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popping))));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushing));
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popping));
        tracep->chgBit(oldp+31,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popping))));
        tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushing));
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popping));
        tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popping))));
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushing));
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popping));
        tracep->chgBit(oldp+45,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popping))));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushing));
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popping));
        tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popping))));
        tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushing));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popping));
        tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popping))));
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushing));
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popping));
        tracep->chgBit(oldp+66,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popping))));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushing));
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popping));
        tracep->chgBit(oldp+73,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popping))));
        tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushing));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popping));
        tracep->chgBit(oldp+80,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popping))));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushing));
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popping));
        tracep->chgBit(oldp+87,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popping))));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushing));
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popping));
        tracep->chgBit(oldp+94,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popping))));
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushing));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popping));
        tracep->chgBit(oldp+101,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popping))));
        tracep->chgBit(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushing));
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popping));
        tracep->chgBit(oldp+108,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popping))));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushing));
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popping));
        tracep->chgBit(oldp+115,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popping))));
        tracep->chgBit(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushing));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popping));
        tracep->chgBit(oldp+122,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popping))));
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushing));
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popping));
        tracep->chgBit(oldp+129,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popping))));
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushing));
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popping));
        tracep->chgBit(oldp+136,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popping))));
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushing));
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popping));
        tracep->chgBit(oldp+143,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popping))));
        tracep->chgBit(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushing));
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popping));
        tracep->chgBit(oldp+150,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popping))));
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushing));
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popping));
        tracep->chgBit(oldp+157,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popping))));
        tracep->chgBit(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushing));
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popping));
        tracep->chgBit(oldp+164,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popping))));
        tracep->chgBit(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushing));
        tracep->chgBit(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popping));
        tracep->chgBit(oldp+171,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popping))));
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushing));
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popping));
        tracep->chgBit(oldp+178,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popping))));
        tracep->chgBit(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushing));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popping));
        tracep->chgBit(oldp+185,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popping))));
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushing));
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popping));
        tracep->chgBit(oldp+192,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popping))));
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushing));
        tracep->chgBit(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popping));
        tracep->chgBit(oldp+199,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popping))));
        tracep->chgBit(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushing));
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popping));
        tracep->chgBit(oldp+206,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popping))));
        tracep->chgBit(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushing));
        tracep->chgBit(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popping));
        tracep->chgBit(oldp+213,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popping))));
        tracep->chgBit(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_valueNext),7);
    }
}

void VarraySlice___024root__trace_chg_sub_27(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_27\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3750);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushing));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popping));
        tracep->chgBit(oldp+2,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popping))));
        tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushing));
        tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popping));
        tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popping))));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushing));
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popping));
        tracep->chgBit(oldp+16,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popping))));
        tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushing));
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popping));
        tracep->chgBit(oldp+23,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popping))));
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushing));
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popping));
        tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popping))));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushing));
        tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popping));
        tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popping))));
        tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushing));
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popping));
        tracep->chgBit(oldp+44,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popping))));
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushing));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popping));
        tracep->chgBit(oldp+51,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popping))));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushing));
        tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popping));
        tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popping))));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushing));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popping));
        tracep->chgBit(oldp+65,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popping))));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushing));
        tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popping));
        tracep->chgBit(oldp+72,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popping))));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushing));
        tracep->chgBit(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popping));
        tracep->chgBit(oldp+79,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popping))));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushing));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popping));
        tracep->chgBit(oldp+86,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popping))));
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushing));
        tracep->chgBit(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popping));
        tracep->chgBit(oldp+93,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popping))));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushing));
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popping));
        tracep->chgBit(oldp+100,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popping))));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushing));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popping));
        tracep->chgBit(oldp+107,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popping))));
        tracep->chgBit(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushing));
        tracep->chgBit(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popping));
        tracep->chgBit(oldp+114,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popping))));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushing));
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popping));
        tracep->chgBit(oldp+121,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popping))));
        tracep->chgBit(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushing));
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popping));
        tracep->chgBit(oldp+128,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popping))));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushing));
        tracep->chgBit(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popping));
        tracep->chgBit(oldp+135,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popping))));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushing));
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popping));
        tracep->chgBit(oldp+142,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popping))));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushing));
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popping));
        tracep->chgBit(oldp+149,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popping))));
        tracep->chgBit(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushing));
        tracep->chgBit(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popping));
        tracep->chgBit(oldp+156,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popping))));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushing));
        tracep->chgBit(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popping));
        tracep->chgBit(oldp+163,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popping))));
        tracep->chgBit(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushing));
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popping));
        tracep->chgBit(oldp+170,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popping))));
        tracep->chgBit(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushing));
        tracep->chgBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popping));
        tracep->chgBit(oldp+177,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popping))));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushing));
        tracep->chgBit(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popping));
        tracep->chgBit(oldp+184,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popping))));
        tracep->chgBit(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushing));
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popping));
        tracep->chgBit(oldp+191,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popping))));
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushing));
        tracep->chgBit(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popping));
        tracep->chgBit(oldp+198,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popping))));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushing));
        tracep->chgBit(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popping));
        tracep->chgBit(oldp+205,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popping))));
        tracep->chgBit(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushing));
        tracep->chgBit(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popping));
        tracep->chgBit(oldp+212,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popping))));
        tracep->chgBit(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushing));
    }
}

void VarraySlice___024root__trace_chg_sub_28(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_28\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3968);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popping));
        tracep->chgBit(oldp+1,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popping))));
        tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushing));
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popping));
        tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popping))));
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushing));
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popping));
        tracep->chgBit(oldp+15,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popping))));
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushing));
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popping));
        tracep->chgBit(oldp+22,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popping))));
        tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushing));
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popping));
        tracep->chgBit(oldp+29,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popping))));
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushing));
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popping));
        tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popping))));
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushing));
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popping));
        tracep->chgBit(oldp+43,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popping))));
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushing));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popping));
        tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popping))));
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushing));
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popping));
        tracep->chgBit(oldp+57,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popping))));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushing));
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popping));
        tracep->chgBit(oldp+64,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popping))));
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushing));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popping));
        tracep->chgBit(oldp+71,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popping))));
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushing));
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popping));
        tracep->chgBit(oldp+78,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popping))));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushing));
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popping));
        tracep->chgBit(oldp+85,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popping))));
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushing));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popping));
        tracep->chgBit(oldp+92,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popping))));
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushing));
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popping));
        tracep->chgBit(oldp+99,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popping))));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushing));
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popping));
        tracep->chgBit(oldp+106,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popping))));
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushing));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popping));
        tracep->chgBit(oldp+113,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popping))));
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushing));
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popping));
        tracep->chgBit(oldp+120,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popping))));
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushing));
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popping));
        tracep->chgBit(oldp+127,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popping))));
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushing));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popping));
        tracep->chgBit(oldp+134,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popping))));
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushing));
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popping));
        tracep->chgBit(oldp+141,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popping))));
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushing));
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popping));
        tracep->chgBit(oldp+148,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popping))));
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushing));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popping));
        tracep->chgBit(oldp+155,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popping))));
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushing));
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popping));
        tracep->chgBit(oldp+162,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popping))));
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushing));
        tracep->chgBit(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popping));
        tracep->chgBit(oldp+169,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popping))));
        tracep->chgBit(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushing));
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popping));
        tracep->chgBit(oldp+176,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popping))));
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushing));
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popping));
        tracep->chgBit(oldp+183,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popping))));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushing));
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popping));
        tracep->chgBit(oldp+190,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popping))));
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushing));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popping));
        tracep->chgBit(oldp+197,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popping))));
        tracep->chgBit(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushing));
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popping));
        tracep->chgBit(oldp+204,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popping))));
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushing));
        tracep->chgBit(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popping));
        tracep->chgBit(oldp+211,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popping))));
        tracep->chgBit(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushing));
        tracep->chgBit(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popping));
    }
}

void VarraySlice___024root__trace_chg_sub_29(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_29\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4186);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popping))));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_valueNext),7);
        tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_valueNext),7);
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushing));
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popping));
        tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popping))));
    }
    tracep->chgBit(oldp+8,(vlSelf->inputStreamArrayData_valid));
    tracep->chgBit(oldp+9,(vlSelf->inputStreamArrayData_ready));
    tracep->chgIData(oldp+10,(vlSelf->inputStreamArrayData_payload),32);
    tracep->chgCData(oldp+11,(vlSelf->inputFeatureMapWidth),8);
    tracep->chgCData(oldp+12,(vlSelf->inputFeatureMapHeight),7);
    tracep->chgCData(oldp+13,(vlSelf->outputFeatureMapHeight),4);
    tracep->chgCData(oldp+14,(vlSelf->outputFeatureMapWidth),5);
    tracep->chgBit(oldp+15,(vlSelf->outputStreamArrayData_0_valid));
    tracep->chgBit(oldp+16,(vlSelf->outputStreamArrayData_0_ready));
    tracep->chgIData(oldp+17,(vlSelf->outputStreamArrayData_0_payload),32);
    tracep->chgBit(oldp+18,(vlSelf->outputStreamArrayData_1_valid));
    tracep->chgBit(oldp+19,(vlSelf->outputStreamArrayData_1_ready));
    tracep->chgIData(oldp+20,(vlSelf->outputStreamArrayData_1_payload),32);
    tracep->chgBit(oldp+21,(vlSelf->outputStreamArrayData_2_valid));
    tracep->chgBit(oldp+22,(vlSelf->outputStreamArrayData_2_ready));
    tracep->chgIData(oldp+23,(vlSelf->outputStreamArrayData_2_payload),32);
    tracep->chgBit(oldp+24,(vlSelf->outputStreamArrayData_3_valid));
    tracep->chgBit(oldp+25,(vlSelf->outputStreamArrayData_3_ready));
    tracep->chgIData(oldp+26,(vlSelf->outputStreamArrayData_3_payload),32);
    tracep->chgBit(oldp+27,(vlSelf->outputStreamArrayData_4_valid));
    tracep->chgBit(oldp+28,(vlSelf->outputStreamArrayData_4_ready));
    tracep->chgIData(oldp+29,(vlSelf->outputStreamArrayData_4_payload),32);
    tracep->chgBit(oldp+30,(vlSelf->outputStreamArrayData_5_valid));
    tracep->chgBit(oldp+31,(vlSelf->outputStreamArrayData_5_ready));
    tracep->chgIData(oldp+32,(vlSelf->outputStreamArrayData_5_payload),32);
    tracep->chgBit(oldp+33,(vlSelf->outputStreamArrayData_6_valid));
    tracep->chgBit(oldp+34,(vlSelf->outputStreamArrayData_6_ready));
    tracep->chgIData(oldp+35,(vlSelf->outputStreamArrayData_6_payload),32);
    tracep->chgBit(oldp+36,(vlSelf->outputStreamArrayData_7_valid));
    tracep->chgBit(oldp+37,(vlSelf->outputStreamArrayData_7_ready));
    tracep->chgIData(oldp+38,(vlSelf->outputStreamArrayData_7_payload),32);
    tracep->chgBit(oldp+39,(vlSelf->clk));
    tracep->chgBit(oldp+40,(vlSelf->resetn));
    tracep->chgBit(oldp+41,(((IData)(vlSelf->inputStreamArrayData_valid) 
                             & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready))));
    tracep->chgBit(oldp+42,((((IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l208) 
                              == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__hReg) 
                                           - (IData)(1U)))) 
                             & ((IData)(vlSelf->inputStreamArrayData_valid) 
                                & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready)))));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_0));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_1));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_2));
    tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.debug_3));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.debug_4));
    tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.debug_5));
    tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.debug_6));
    tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.debug_7));
    tracep->chgSData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0),9);
    tracep->chgBit(oldp+52,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_1),9);
    tracep->chgBit(oldp+54,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_1) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_2),9);
    tracep->chgBit(oldp+56,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_2) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+57,(vlSymsp->TOP__arraySlice.realValue_0_3),9);
    tracep->chgBit(oldp+58,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_3) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+59,(vlSymsp->TOP__arraySlice.realValue_0_4),9);
    tracep->chgBit(oldp+60,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_4) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+61,(vlSymsp->TOP__arraySlice.realValue_0_5),9);
    tracep->chgBit(oldp+62,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_5) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+63,(vlSymsp->TOP__arraySlice.realValue_0_6),9);
    tracep->chgBit(oldp+64,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_6) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+65,(vlSymsp->TOP__arraySlice.realValue_0_7),9);
    tracep->chgBit(oldp+66,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_7) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+67,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_0_ready))));
    tracep->chgCData(oldp+68,(vlSymsp->TOP__arraySlice.realValue1_0),8);
    tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.debug_0_1));
    tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.debug_1_1));
    tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.debug_2_1));
    tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.debug_3_1));
    tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.debug_4_1));
    tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.debug_5_1));
    tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.debug_6_1));
    tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.debug_7_1));
    tracep->chgSData(oldp+77,(vlSymsp->TOP__arraySlice.realValue_0_8),9);
    tracep->chgBit(oldp+78,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_8) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+79,(vlSymsp->TOP__arraySlice.realValue_0_9),9);
    tracep->chgBit(oldp+80,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_9) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+81,(vlSymsp->TOP__arraySlice.realValue_0_10),9);
    tracep->chgBit(oldp+82,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_10) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+83,(vlSymsp->TOP__arraySlice.realValue_0_11),9);
    tracep->chgBit(oldp+84,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_11) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+85,(vlSymsp->TOP__arraySlice.realValue_0_12),9);
    tracep->chgBit(oldp+86,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_12) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+87,(vlSymsp->TOP__arraySlice.realValue_0_13),9);
    tracep->chgBit(oldp+88,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_13) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+89,(vlSymsp->TOP__arraySlice.realValue_0_14),9);
    tracep->chgBit(oldp+90,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_14) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+91,(vlSymsp->TOP__arraySlice.realValue_0_15),9);
    tracep->chgBit(oldp+92,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_15) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+93,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_1) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_1)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_1)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_1)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_1)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_1)))))));
    tracep->chgCData(oldp+94,(vlSymsp->TOP__arraySlice.realValue1_0_1),8);
    tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.debug_0_2));
    tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.debug_1_2));
    tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.debug_2_2));
    tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.debug_3_2));
    tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.debug_4_2));
    tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.debug_5_2));
}

void VarraySlice___024root__trace_chg_sub_30(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_30\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4287);
    // Body
    tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.debug_6_2));
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_7_2));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_16),9);
    tracep->chgBit(oldp+3,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_16) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_17),9);
    tracep->chgBit(oldp+5,(((0xffU & ((IData)(7U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_17) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_18),9);
    tracep->chgBit(oldp+7,(((0xffU & ((IData)(6U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_18) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+8,(vlSymsp->TOP__arraySlice.realValue_0_19),9);
    tracep->chgBit(oldp+9,(((0xffU & ((IData)(5U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_19) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x7fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_20),9);
    tracep->chgBit(oldp+11,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_20) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+12,(vlSymsp->TOP__arraySlice.realValue_0_21),9);
    tracep->chgBit(oldp+13,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_21) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+14,(vlSymsp->TOP__arraySlice.realValue_0_22),9);
    tracep->chgBit(oldp+15,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_22) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_23),9);
    tracep->chgBit(oldp+17,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_23) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+18,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_2) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_2)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_2)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_2)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_2)))))));
    tracep->chgBit(oldp+19,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                             (0x3fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_0_ready)))));
    tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.realValue1_0_2),8);
    tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.debug_0_3));
    tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.debug_1_3));
    tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.debug_2_3));
    tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.debug_3_3));
    tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.debug_4_3));
    tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.debug_5_3));
    tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.debug_6_3));
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_7_3));
    tracep->chgSData(oldp+29,(vlSymsp->TOP__arraySlice.realValue_0_24),9);
    tracep->chgBit(oldp+30,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_24) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+31,(vlSymsp->TOP__arraySlice.realValue_0_25),9);
    tracep->chgBit(oldp+32,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_25) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+33,(vlSymsp->TOP__arraySlice.realValue_0_26),9);
    tracep->chgBit(oldp+34,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_26) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_27),9);
    tracep->chgBit(oldp+36,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_27) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_28),9);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_28) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_29),9);
    tracep->chgBit(oldp+40,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_29) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_30),9);
    tracep->chgBit(oldp+42,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_30) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_31),9);
    tracep->chgBit(oldp+44,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_31) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+45,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_3) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_3)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_3)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_3)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_3)))))));
    tracep->chgBit(oldp+46,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_1_ready))));
    tracep->chgCData(oldp+47,(vlSymsp->TOP__arraySlice.realValue1_0_3),8);
    tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.debug_0_4));
    tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.debug_1_4));
    tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.debug_2_4));
    tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.debug_3_4));
    tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.debug_4_4));
    tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.debug_5_4));
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_6_4));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_7_4));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_32),9);
    tracep->chgBit(oldp+57,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_32) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_33),9);
    tracep->chgBit(oldp+59,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_33) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+60,(vlSymsp->TOP__arraySlice.realValue_0_34),9);
    tracep->chgBit(oldp+61,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_34) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+62,(vlSymsp->TOP__arraySlice.realValue_0_35),9);
    tracep->chgBit(oldp+63,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_35) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_31(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_31\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4351);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_36),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_36) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_37),9);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_37) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_38),9);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_38) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_39),9);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_39) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+8,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_4) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_4)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_4)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_4)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_4)))))));
    tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.realValue1_0_4),8);
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_0_5));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_1_5));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_2_5));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_3_5));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_4_5));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_5_5));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_6_5));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_7_5));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_40),9);
    tracep->chgBit(oldp+19,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_40) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_41),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_41) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_42),9);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_42) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_43),9);
    tracep->chgBit(oldp+25,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_43) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_44),9);
    tracep->chgBit(oldp+27,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_44) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_45),9);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_45) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_46),9);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_46) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_47),9);
    tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_47) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+34,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_5) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_5)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_5)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_5)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_5)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_5)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_5)))))));
    tracep->chgBit(oldp+35,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                             (0x3fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_1_ready)))));
    tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.realValue1_0_5),8);
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_0_6));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_1_6));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_2_6));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_3_6));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_4_6));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_5_6));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_6_6));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_7_6));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_48),9);
    tracep->chgBit(oldp+46,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_48) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_49),9);
    tracep->chgBit(oldp+48,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_49) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_50),9);
    tracep->chgBit(oldp+50,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_50) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_51),9);
    tracep->chgBit(oldp+52,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_51) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_52),9);
    tracep->chgBit(oldp+54,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_52) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_53),9);
    tracep->chgBit(oldp+56,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_53) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+57,(vlSymsp->TOP__arraySlice.realValue_0_54),9);
    tracep->chgBit(oldp+58,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_54) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+59,(vlSymsp->TOP__arraySlice.realValue_0_55),9);
    tracep->chgBit(oldp+60,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_55) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_32(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_32\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4412);
    // Body
    tracep->chgBit(oldp+0,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_6) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_6)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_6)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_6)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_6)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_6)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_6)))))));
    tracep->chgBit(oldp+1,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid) 
                            & (IData)(vlSelf->outputStreamArrayData_2_ready))));
    tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.realValue1_0_6),8);
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_0_7));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_1_7));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_2_7));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_3_7));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_4_7));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_5_7));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_6_7));
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_7_7));
    tracep->chgSData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_56),9);
    tracep->chgBit(oldp+12,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_56) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_57),9);
    tracep->chgBit(oldp+14,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_57) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_58),9);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_58) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_59),9);
    tracep->chgBit(oldp+18,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_59) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_60),9);
    tracep->chgBit(oldp+20,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_60) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_61),9);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_61) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_62),9);
    tracep->chgBit(oldp+24,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_62) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_63),9);
    tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_63) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+27,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_7) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_7)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_7)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_7)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_7)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_7)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_7)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_7)))))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue1_0_7),8);
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_0_8));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_1_8));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_2_8));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_3_8));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_4_8));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_5_8));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_6_8));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_7_8));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_64),9);
    tracep->chgBit(oldp+38,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_64) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_65),9);
    tracep->chgBit(oldp+40,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_65) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_66),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_66) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_67),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_67) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_68),9);
    tracep->chgBit(oldp+46,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_68) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_69),9);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_69) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_70),9);
    tracep->chgBit(oldp+50,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_70) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_71),9);
    tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_71) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+53,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_8) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_8)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_8)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_8)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_8)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_8)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_8)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_8)))))));
    tracep->chgBit(oldp+54,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                             (0x3fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_2_ready)))));
    tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.realValue1_0_8),8);
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_0_9));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_1_9));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_2_9));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_3_9));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_4_9));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_5_9));
    tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.debug_6_9));
    tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.debug_7_9));
    tracep->chgSData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_72),9);
    tracep->chgBit(oldp+65,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_72) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_73),9);
    tracep->chgBit(oldp+67,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_73) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}
