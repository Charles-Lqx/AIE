// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__385(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__385\n"); );
    // Body
    if (vlSymsp->TOP.resetn) {
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_valueNext;
    } else {
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_value = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__386(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__386\n"); );
    // Body
    if (vlSymsp->TOP.resetn) {
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_valueNext;
    } else {
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_value = 0U;
    }
    vlSelf->__PVT__fifoGroup_109__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_109__DOT__logic_popPtr_value)));
    vlSelf->__PVT__fifoGroup_109__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__fifoGroup_109__DOT__logic_popPtr_value));
    vlSelf->__PVT__fifoGroup_108__DOT__logic_ptrDif 
        = (0x7fU & ((IData)(vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_value) 
                    - (IData)(vlSelf->__PVT__fifoGroup_108__DOT__logic_popPtr_value)));
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__484(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__484\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_he98149ce__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hd37b8896__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_hb63406f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h38bdf031__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h64a49311__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h7aeebbc4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h64a88e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h6b9018ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h9452ceeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_he099a180__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h71bacb4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_hd4e6ce0e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h8d670bed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_hcd6c9e71__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8e605556__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h9e31e169__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_he12a0e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_h0ca75cf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h586e55f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h9c88caf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h8be11959__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h1c098322__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_hb6785514__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_h584ce273__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_hb96eb0cf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h895156f8__0;
    // Body
    vlSelf->__PVT__fifoGroup_0_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((1U & __Vtemp_he98149ce__0[0U])) {
                vlSelf->__PVT__fifoGroup_0_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((2U & __Vtemp_hb63406f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_1_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((4U & __Vtemp_h64a49311__0[0U])) {
                vlSelf->__PVT__fifoGroup_2_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((8U & __Vtemp_h64a88e5c__0[0U])) {
                vlSelf->__PVT__fifoGroup_3_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10U & __Vtemp_h9452ceeb__0[0U])) {
                vlSelf->__PVT__fifoGroup_4_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20U & __Vtemp_h71bacb4f__0[0U])) {
                vlSelf->__PVT__fifoGroup_5_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40U & __Vtemp_h8d670bed__0[0U])) {
                vlSelf->__PVT__fifoGroup_6_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80U & __Vtemp_h8e605556__0[0U])) {
                vlSelf->__PVT__fifoGroup_7_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100U & __Vtemp_he12a0e5c__0[0U])) {
                vlSelf->__PVT__fifoGroup_8_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200U & __Vtemp_h586e55f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_9_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400U & __Vtemp_h8be11959__0[0U])) {
                vlSelf->__PVT__fifoGroup_10_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_11_io_push_payload = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800U & __Vtemp_hb6785514__0[0U])) {
                vlSelf->__PVT__fifoGroup_11_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x1000U & __Vtemp_hb96eb0cf__0[0U])) {
                vlSelf->__PVT__fifoGroup_12_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_11_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l336) {
                if (vlSelf->__PVT__when_ArraySlice_l337) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd37b8896__0, __Vtemp_hc961b8db__1, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((1U & __Vtemp_hd37b8896__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((2U & __Vtemp_h38bdf031__0[0U])) {
                        vlSelf->__PVT__fifoGroup_1_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((4U & __Vtemp_h7aeebbc4__0[0U])) {
                        vlSelf->__PVT__fifoGroup_2_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((8U & __Vtemp_h6b9018ef__0[0U])) {
                        vlSelf->__PVT__fifoGroup_3_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10U & __Vtemp_he099a180__0[0U])) {
                        vlSelf->__PVT__fifoGroup_4_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20U & __Vtemp_hd4e6ce0e__0[0U])) {
                        vlSelf->__PVT__fifoGroup_5_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40U & __Vtemp_hcd6c9e71__0[0U])) {
                        vlSelf->__PVT__fifoGroup_6_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x80U & __Vtemp_h9e31e169__0[0U])) {
                        vlSelf->__PVT__fifoGroup_7_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100U & __Vtemp_h0ca75cf9__0[0U])) {
                        vlSelf->__PVT__fifoGroup_8_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200U & __Vtemp_h9c88caf9__0[0U])) {
                        vlSelf->__PVT__fifoGroup_9_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400U & __Vtemp_h1c098322__0[0U])) {
                        vlSelf->__PVT__fifoGroup_10_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_11_io_push_payload = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800U & __Vtemp_h584ce273__0[0U])) {
                        vlSelf->__PVT__fifoGroup_11_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x1000U & __Vtemp_h895156f8__0[0U])) {
                        vlSelf->__PVT__fifoGroup_12_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_11_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_11_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_11_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_11_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__485(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__485\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_he98149ce__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hd37b8896__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_hb63406f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h38bdf031__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h64a49311__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h7aeebbc4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h64a88e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h6b9018ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h9452ceeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_he099a180__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h71bacb4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_hd4e6ce0e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h8d670bed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_hcd6c9e71__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8e605556__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h9e31e169__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_he12a0e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_h0ca75cf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h586e55f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h9c88caf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h8be11959__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h1c098322__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_hb6785514__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_h584ce273__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_hb96eb0cf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h895156f8__0;
    // Body
    vlSelf->__PVT__fifoGroup_13_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000U & __Vtemp_he98149ce__0[0U])) {
                vlSelf->__PVT__fifoGroup_13_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x4000U & __Vtemp_hb63406f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_14_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x8000U & __Vtemp_h64a49311__0[0U])) {
                vlSelf->__PVT__fifoGroup_15_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10000U & __Vtemp_h64a88e5c__0[0U])) {
                vlSelf->__PVT__fifoGroup_16_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20000U & __Vtemp_h9452ceeb__0[0U])) {
                vlSelf->__PVT__fifoGroup_17_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40000U & __Vtemp_h71bacb4f__0[0U])) {
                vlSelf->__PVT__fifoGroup_18_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80000U & __Vtemp_h8d670bed__0[0U])) {
                vlSelf->__PVT__fifoGroup_19_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100000U & __Vtemp_h8e605556__0[0U])) {
                vlSelf->__PVT__fifoGroup_20_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200000U & __Vtemp_he12a0e5c__0[0U])) {
                vlSelf->__PVT__fifoGroup_21_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_22_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400000U & __Vtemp_h586e55f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_22_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800000U & __Vtemp_h8be11959__0[0U])) {
                vlSelf->__PVT__fifoGroup_23_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x1000000U & __Vtemp_hb6785514__0[0U])) {
                vlSelf->__PVT__fifoGroup_24_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000000U & __Vtemp_hb96eb0cf__0[0U])) {
                vlSelf->__PVT__fifoGroup_25_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_22_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l336) {
                if (vlSelf->__PVT__when_ArraySlice_l337) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd37b8896__0, __Vtemp_hc961b8db__1, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x2000U & __Vtemp_hd37b8896__0[0U])) {
                        vlSelf->__PVT__fifoGroup_13_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x4000U & __Vtemp_h38bdf031__0[0U])) {
                        vlSelf->__PVT__fifoGroup_14_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x8000U & __Vtemp_h7aeebbc4__0[0U])) {
                        vlSelf->__PVT__fifoGroup_15_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10000U & __Vtemp_h6b9018ef__0[0U])) {
                        vlSelf->__PVT__fifoGroup_16_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20000U & __Vtemp_he099a180__0[0U])) {
                        vlSelf->__PVT__fifoGroup_17_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40000U & __Vtemp_hd4e6ce0e__0[0U])) {
                        vlSelf->__PVT__fifoGroup_18_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x80000U & __Vtemp_hcd6c9e71__0[0U])) {
                        vlSelf->__PVT__fifoGroup_19_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100000U & __Vtemp_h9e31e169__0[0U])) {
                        vlSelf->__PVT__fifoGroup_20_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200000U & __Vtemp_h0ca75cf9__0[0U])) {
                        vlSelf->__PVT__fifoGroup_21_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_22_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400000U & __Vtemp_h9c88caf9__0[0U])) {
                        vlSelf->__PVT__fifoGroup_22_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800000U & __Vtemp_h1c098322__0[0U])) {
                        vlSelf->__PVT__fifoGroup_23_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x1000000U & __Vtemp_h584ce273__0[0U])) {
                        vlSelf->__PVT__fifoGroup_24_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x2000000U & __Vtemp_h895156f8__0[0U])) {
                        vlSelf->__PVT__fifoGroup_25_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_22_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_22_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_22_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_22_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__486(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__486\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_he98149ce__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hd37b8896__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_hb63406f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h38bdf031__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h64a49311__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h7aeebbc4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h64a88e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h6b9018ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h9452ceeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_he099a180__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h71bacb4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_hd4e6ce0e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h8d670bed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_hcd6c9e71__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8e605556__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h9e31e169__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_he12a0e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_h0ca75cf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h586e55f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h9c88caf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h8be11959__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h1c098322__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_hb6785514__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_h584ce273__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_hb96eb0cf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h895156f8__0;
    // Body
    vlSelf->__PVT__fifoGroup_26_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x4000000U & __Vtemp_he98149ce__0[0U])) {
                vlSelf->__PVT__fifoGroup_26_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x8000000U & __Vtemp_hb63406f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_27_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10000000U & __Vtemp_h64a49311__0[0U])) {
                vlSelf->__PVT__fifoGroup_28_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20000000U & __Vtemp_h64a88e5c__0[0U])) {
                vlSelf->__PVT__fifoGroup_29_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40000000U & __Vtemp_h9452ceeb__0[0U])) {
                vlSelf->__PVT__fifoGroup_30_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((__Vtemp_h71bacb4f__0[0U] >> 0x1fU)) {
                vlSelf->__PVT__fifoGroup_31_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((1U & __Vtemp_h8d670bed__0[1U])) {
                vlSelf->__PVT__fifoGroup_32_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_33_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((2U & __Vtemp_h8e605556__0[1U])) {
                vlSelf->__PVT__fifoGroup_33_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_34_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((4U & __Vtemp_he12a0e5c__0[1U])) {
                vlSelf->__PVT__fifoGroup_34_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_35_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((8U & __Vtemp_h586e55f3__0[1U])) {
                vlSelf->__PVT__fifoGroup_35_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_36_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10U & __Vtemp_h8be11959__0[1U])) {
                vlSelf->__PVT__fifoGroup_36_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_37_io_push_payload = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20U & __Vtemp_hb6785514__0[1U])) {
                vlSelf->__PVT__fifoGroup_37_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_38_io_push_payload = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40U & __Vtemp_hb96eb0cf__0[1U])) {
                vlSelf->__PVT__fifoGroup_38_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_33_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_34_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_35_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_36_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_37_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_38_io_push_payload = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l336) {
                if (vlSelf->__PVT__when_ArraySlice_l337) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd37b8896__0, __Vtemp_hc961b8db__1, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x4000000U & __Vtemp_hd37b8896__0[0U])) {
                        vlSelf->__PVT__fifoGroup_26_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x8000000U & __Vtemp_h38bdf031__0[0U])) {
                        vlSelf->__PVT__fifoGroup_27_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10000000U & __Vtemp_h7aeebbc4__0[0U])) {
                        vlSelf->__PVT__fifoGroup_28_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20000000U & __Vtemp_h6b9018ef__0[0U])) {
                        vlSelf->__PVT__fifoGroup_29_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40000000U & __Vtemp_he099a180__0[0U])) {
                        vlSelf->__PVT__fifoGroup_30_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((__Vtemp_hd4e6ce0e__0[0U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_31_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((1U & __Vtemp_hcd6c9e71__0[1U])) {
                        vlSelf->__PVT__fifoGroup_32_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_33_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((2U & __Vtemp_h9e31e169__0[1U])) {
                        vlSelf->__PVT__fifoGroup_33_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_34_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((4U & __Vtemp_h0ca75cf9__0[1U])) {
                        vlSelf->__PVT__fifoGroup_34_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_35_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((8U & __Vtemp_h9c88caf9__0[1U])) {
                        vlSelf->__PVT__fifoGroup_35_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_36_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10U & __Vtemp_h1c098322__0[1U])) {
                        vlSelf->__PVT__fifoGroup_36_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_37_io_push_payload = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20U & __Vtemp_h584ce273__0[1U])) {
                        vlSelf->__PVT__fifoGroup_37_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_38_io_push_payload = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40U & __Vtemp_h895156f8__0[1U])) {
                        vlSelf->__PVT__fifoGroup_38_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_33_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_34_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_35_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_36_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_37_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_38_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_33_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_34_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_35_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_36_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_37_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_38_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_33_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_34_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_35_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_36_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_37_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_38_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_33_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_34_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_35_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_36_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_37_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_38_io_push_payload = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__487(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__487\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_he98149ce__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hd37b8896__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_hb63406f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h38bdf031__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h64a49311__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h7aeebbc4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h64a88e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h6b9018ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h9452ceeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_he099a180__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h71bacb4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_hd4e6ce0e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h8d670bed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_hcd6c9e71__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8e605556__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h9e31e169__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_he12a0e5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_h0ca75cf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h586e55f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h9c88caf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h8be11959__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h1c098322__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_hb6785514__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_h584ce273__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_hb96eb0cf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_h895156f8__0;
    // Body
    vlSelf->__PVT__fifoGroup_39_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l204) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he98149ce__0, __Vtemp_hc961b8db__0, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80U & __Vtemp_he98149ce__0[1U])) {
                vlSelf->__PVT__fifoGroup_39_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_40_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb63406f3__0, __Vtemp_hc961b8db__2, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x100U & __Vtemp_hb63406f3__0[1U])) {
                vlSelf->__PVT__fifoGroup_40_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_41_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a49311__0, __Vtemp_hc961b8db__4, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x200U & __Vtemp_h64a49311__0[1U])) {
                vlSelf->__PVT__fifoGroup_41_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_42_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h64a88e5c__0, __Vtemp_hc961b8db__6, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x400U & __Vtemp_h64a88e5c__0[1U])) {
                vlSelf->__PVT__fifoGroup_42_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_43_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h9452ceeb__0, __Vtemp_hc961b8db__8, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x800U & __Vtemp_h9452ceeb__0[1U])) {
                vlSelf->__PVT__fifoGroup_43_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_44_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h71bacb4f__0, __Vtemp_hc961b8db__10, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x1000U & __Vtemp_h71bacb4f__0[1U])) {
                vlSelf->__PVT__fifoGroup_44_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_45_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d670bed__0, __Vtemp_hc961b8db__12, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x2000U & __Vtemp_h8d670bed__0[1U])) {
                vlSelf->__PVT__fifoGroup_45_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_46_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e605556__0, __Vtemp_hc961b8db__14, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x4000U & __Vtemp_h8e605556__0[1U])) {
                vlSelf->__PVT__fifoGroup_46_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_47_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he12a0e5c__0, __Vtemp_hc961b8db__16, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x8000U & __Vtemp_he12a0e5c__0[1U])) {
                vlSelf->__PVT__fifoGroup_47_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_48_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h586e55f3__0, __Vtemp_hc961b8db__18, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x10000U & __Vtemp_h586e55f3__0[1U])) {
                vlSelf->__PVT__fifoGroup_48_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_49_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be11959__0, __Vtemp_hc961b8db__20, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x20000U & __Vtemp_h8be11959__0[1U])) {
                vlSelf->__PVT__fifoGroup_49_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
            __Vtemp_hc961b8db__22[0U] = 1U;
            __Vtemp_hc961b8db__22[1U] = 0U;
            __Vtemp_hc961b8db__22[2U] = 0U;
            __Vtemp_hc961b8db__22[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6785514__0, __Vtemp_hc961b8db__22, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x40000U & __Vtemp_hb6785514__0[1U])) {
                vlSelf->__PVT__fifoGroup_50_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
            __Vtemp_hc961b8db__24[0U] = 1U;
            __Vtemp_hc961b8db__24[1U] = 0U;
            __Vtemp_hc961b8db__24[2U] = 0U;
            __Vtemp_hc961b8db__24[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96eb0cf__0, __Vtemp_hc961b8db__24, (IData)(vlSelf->__PVT__selectWriteFifo));
            if ((0x80000U & __Vtemp_hb96eb0cf__0[1U])) {
                vlSelf->__PVT__fifoGroup_51_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_40_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_41_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_42_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_43_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_44_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_45_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_46_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_47_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_48_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_49_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l336) {
                if (vlSelf->__PVT__when_ArraySlice_l337) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd37b8896__0, __Vtemp_hc961b8db__1, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x80U & __Vtemp_hd37b8896__0[1U])) {
                        vlSelf->__PVT__fifoGroup_39_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_40_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38bdf031__0, __Vtemp_hc961b8db__3, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x100U & __Vtemp_h38bdf031__0[1U])) {
                        vlSelf->__PVT__fifoGroup_40_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_41_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aeebbc4__0, __Vtemp_hc961b8db__5, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x200U & __Vtemp_h7aeebbc4__0[1U])) {
                        vlSelf->__PVT__fifoGroup_41_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_42_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b9018ef__0, __Vtemp_hc961b8db__7, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x400U & __Vtemp_h6b9018ef__0[1U])) {
                        vlSelf->__PVT__fifoGroup_42_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_43_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he099a180__0, __Vtemp_hc961b8db__9, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x800U & __Vtemp_he099a180__0[1U])) {
                        vlSelf->__PVT__fifoGroup_43_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_44_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4e6ce0e__0, __Vtemp_hc961b8db__11, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x1000U & __Vtemp_hd4e6ce0e__0[1U])) {
                        vlSelf->__PVT__fifoGroup_44_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_45_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd6c9e71__0, __Vtemp_hc961b8db__13, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x2000U & __Vtemp_hcd6c9e71__0[1U])) {
                        vlSelf->__PVT__fifoGroup_45_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_46_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e31e169__0, __Vtemp_hc961b8db__15, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x4000U & __Vtemp_h9e31e169__0[1U])) {
                        vlSelf->__PVT__fifoGroup_46_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_47_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ca75cf9__0, __Vtemp_hc961b8db__17, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x8000U & __Vtemp_h0ca75cf9__0[1U])) {
                        vlSelf->__PVT__fifoGroup_47_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_48_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c88caf9__0, __Vtemp_hc961b8db__19, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x10000U & __Vtemp_h9c88caf9__0[1U])) {
                        vlSelf->__PVT__fifoGroup_48_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_49_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c098322__0, __Vtemp_hc961b8db__21, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x20000U & __Vtemp_h1c098322__0[1U])) {
                        vlSelf->__PVT__fifoGroup_49_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h584ce273__0, __Vtemp_hc961b8db__23, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x40000U & __Vtemp_h584ce273__0[1U])) {
                        vlSelf->__PVT__fifoGroup_50_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h895156f8__0, __Vtemp_hc961b8db__25, (IData)(vlSelf->__PVT__selectWriteFifo));
                    if ((0x80000U & __Vtemp_h895156f8__0[1U])) {
                        vlSelf->__PVT__fifoGroup_51_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_40_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_41_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_42_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_43_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_44_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_45_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_46_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_47_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_48_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_49_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_40_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_41_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_42_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_43_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_44_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_45_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_46_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_47_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_48_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_49_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_40_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_41_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_42_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_43_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_44_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_45_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_46_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_47_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_48_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_49_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_40_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_41_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_42_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_43_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_44_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_45_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_46_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_47_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_48_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_49_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
    }
}
