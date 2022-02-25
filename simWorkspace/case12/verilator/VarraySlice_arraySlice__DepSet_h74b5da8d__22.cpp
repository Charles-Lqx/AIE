// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__321(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__321\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_6_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
    vlSelf->__PVT___zz_outputStreamArrayData_7_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__322(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__322\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_1_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
    vlSelf->__PVT___zz_outputStreamArrayData_2_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__323(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__323\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_3_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
    vlSelf->__PVT___zz_outputStreamArrayData_4_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__324(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__324\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_5_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
    vlSelf->__PVT___zz_outputStreamArrayData_6_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__327(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__327\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_79__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_79__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_78__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_78__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_77__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_77__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_76__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_76__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_75__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_75__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_74__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_74__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_73__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_73__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_72__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_72__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_71__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_71__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_70__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_70__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_69__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_69__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_68__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_68__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_67__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_67__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_66__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_66__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_65__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_65__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_64__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_64__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_63__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_63__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_62__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_62__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_61__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_61__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_60__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_60__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_59__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_59__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_58__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_58__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_57__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_57__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_56__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_56__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_55__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_55__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_54__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_54__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_53__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_53__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_52__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_52__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_51__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_51__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_50__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_value)));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__328(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__328\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_50__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_49__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_49__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_48__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_48__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_47__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_47__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_46__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_46__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_45__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_45__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_44__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_44__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_43__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_43__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_42__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_42__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_41__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_41__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_40__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_40__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_39__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_39__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_38__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_38__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_37__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_37__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_36__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_36__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_35__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_35__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_34__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_34__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_33__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_33__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_32__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_32__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_31__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_31__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_30__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_30__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_29__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_29__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_28__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_28__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_27__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_27__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_26__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_26__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_25__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_25__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_24__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_24__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_23__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_23__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_22__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_22__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_21__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_21__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_20__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_20__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_19__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_19__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_18__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_18__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_17__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_17__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_16__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_16__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_15__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_15__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_14__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_14__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_13__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_13__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_12__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_12__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_11__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_11__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_10__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_10__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_9__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_9__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_8__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_8__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_7__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_7__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_6__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_6__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_5__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_5__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_4__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_4__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_3__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_3__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_2__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_2__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_1__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_1__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_0__DOT__logic_ptrDif = 
        (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_value) 
                  - (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_0__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_value));
}
