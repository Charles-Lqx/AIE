// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFifo2Axi4WriteMasterInterface.h for the primary calling header

#ifndef _VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface_H_
#define _VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface_H_

#include "verilated.h"
#include "VFifo2Axi4WriteMasterInterface__Dpi.h"

class VFifo2Axi4WriteMasterInterface__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface) {
  public:
    
    // PORTS
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__fifoValid,0,0);
    VL_OUT8(__PVT__fifoReady,0,0);
    VL_OUT8(__PVT__awValid,0,0);
    VL_IN8(__PVT__awReady,0,0);
    VL_OUT8(__PVT__awregion,3,0);
    VL_OUT8(__PVT__awlen,7,0);
    VL_OUT8(__PVT__awsize,2,0);
    VL_OUT8(__PVT__awburst,1,0);
    VL_OUT8(__PVT__awcache,3,0);
    VL_OUT8(__PVT__awqos,3,0);
    VL_OUT8(__PVT__awprot,2,0);
    VL_OUT8(__PVT__wValid,0,0);
    VL_IN8(__PVT__wReady,0,0);
    VL_OUT8(__PVT__wstrb,3,0);
    VL_OUT8(__PVT__wlast,0,0);
    VL_IN8(__PVT__bValid,0,0);
    VL_OUT8(__PVT__bReady,0,0);
    VL_IN8(__PVT__bresp,1,0);
    VL_OUT8(__PVT__arValid,0,0);
    VL_IN8(__PVT__arReady,0,0);
    VL_OUT8(__PVT__arregion,3,0);
    VL_OUT8(__PVT__arlen,7,0);
    VL_OUT8(__PVT__arsize,2,0);
    VL_OUT8(__PVT__arburst,1,0);
    VL_OUT8(__PVT__arcache,3,0);
    VL_OUT8(__PVT__arqos,3,0);
    VL_OUT8(__PVT__arprot,2,0);
    VL_IN8(__PVT__rValid,0,0);
    VL_OUT8(__PVT__rReady,0,0);
    VL_IN8(__PVT__rresp,1,0);
    VL_IN8(__PVT__rlast,0,0);
    VL_IN(__PVT__fifoPayload,31,0);
    VL_OUT(__PVT__awaddr,31,0);
    VL_OUT(__PVT__wdata,31,0);
    VL_OUT(__PVT__araddr,31,0);
    VL_IN(__PVT__rdata,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT___zz_wdata,0,0);
    VL_SIG8(__PVT___zz_1,0,0);
    VL_SIG8(__PVT___zz_when_Axi4WriteMaster_l92,0,0);
    VL_SIG8(__PVT___zz_when_Axi4WriteMaster_l55,0,0);
    VL_SIG8(__PVT___zz_3,0,0);
    VL_SIG8(__PVT__axi4Interface_fifo_fire,0,0);
    VL_SIG8(__PVT__axi4Interface_controlAwValid,0,0);
    VL_SIG8(__PVT__axi4Interface_isTransferAfterReset,0,0);
    VL_SIG8(__PVT__axi4Interface_t_aw_fire,0,0);
    VL_SIG8(__PVT__when_Axi4WriteMaster_l92,0,0);
    VL_SIG16(__PVT___zz_wdata_1,8,0);
    VL_SIG16(__PVT___zz_wdata_2,8,0);
    VL_SIG16(__PVT___zz_when_Axi4WriteMaster_l55_1,8,0);
    VL_SIG16(__PVT___zz_when_Axi4WriteMaster_l55_2,8,0);
    VL_SIG(__PVT__fifoDataBuffer_0,31,0);
    VL_SIG(__PVT__fifoDataBuffer_1,31,0);
    VL_SIG(__PVT__fifoDataBuffer_2,31,0);
    VL_SIG(__PVT__fifoDataBuffer_3,31,0);
    VL_SIG(__PVT__fifoDataBuffer_4,31,0);
    VL_SIG(__PVT__fifoDataBuffer_5,31,0);
    VL_SIG(__PVT__fifoDataBuffer_6,31,0);
    VL_SIG(__PVT__fifoDataBuffer_7,31,0);
    VL_SIG(__PVT__fifoDataBuffer_8,31,0);
    VL_SIG(__PVT__fifoDataBuffer_9,31,0);
    VL_SIG(__PVT__fifoDataBuffer_10,31,0);
    VL_SIG(__PVT__fifoDataBuffer_11,31,0);
    VL_SIG(__PVT__fifoDataBuffer_12,31,0);
    VL_SIG(__PVT__fifoDataBuffer_13,31,0);
    VL_SIG(__PVT__fifoDataBuffer_14,31,0);
    VL_SIG(__PVT__fifoDataBuffer_15,31,0);
    VL_SIG(__PVT__fifoDataBuffer_16,31,0);
    VL_SIG(__PVT__fifoDataBuffer_17,31,0);
    VL_SIG(__PVT__fifoDataBuffer_18,31,0);
    VL_SIG(__PVT__fifoDataBuffer_19,31,0);
    VL_SIG(__PVT__fifoDataBuffer_20,31,0);
    VL_SIG(__PVT__fifoDataBuffer_21,31,0);
    VL_SIG(__PVT__fifoDataBuffer_22,31,0);
    VL_SIG(__PVT__fifoDataBuffer_23,31,0);
    VL_SIG(__PVT__fifoDataBuffer_24,31,0);
    VL_SIG(__PVT__fifoDataBuffer_25,31,0);
    VL_SIG(__PVT__fifoDataBuffer_26,31,0);
    VL_SIG(__PVT__fifoDataBuffer_27,31,0);
    VL_SIG(__PVT__fifoDataBuffer_28,31,0);
    VL_SIG(__PVT__fifoDataBuffer_29,31,0);
    VL_SIG(__PVT__fifoDataBuffer_30,31,0);
    VL_SIG(__PVT__fifoDataBuffer_31,31,0);
    VL_SIG(__PVT__fifoDataBuffer_32,31,0);
    VL_SIG(__PVT__fifoDataBuffer_33,31,0);
    VL_SIG(__PVT__fifoDataBuffer_34,31,0);
    VL_SIG(__PVT__fifoDataBuffer_35,31,0);
    VL_SIG(__PVT__fifoDataBuffer_36,31,0);
    VL_SIG(__PVT__fifoDataBuffer_37,31,0);
    VL_SIG(__PVT__fifoDataBuffer_38,31,0);
    VL_SIG(__PVT__fifoDataBuffer_39,31,0);
    VL_SIG(__PVT__fifoDataBuffer_40,31,0);
    VL_SIG(__PVT__fifoDataBuffer_41,31,0);
    VL_SIG(__PVT__fifoDataBuffer_42,31,0);
    VL_SIG(__PVT__fifoDataBuffer_43,31,0);
    VL_SIG(__PVT__fifoDataBuffer_44,31,0);
    VL_SIG(__PVT__fifoDataBuffer_45,31,0);
    VL_SIG(__PVT__fifoDataBuffer_46,31,0);
    VL_SIG(__PVT__fifoDataBuffer_47,31,0);
    VL_SIG(__PVT__fifoDataBuffer_48,31,0);
    VL_SIG(__PVT__fifoDataBuffer_49,31,0);
    VL_SIG(__PVT__fifoDataBuffer_50,31,0);
    VL_SIG(__PVT__fifoDataBuffer_51,31,0);
    VL_SIG(__PVT__fifoDataBuffer_52,31,0);
    VL_SIG(__PVT__fifoDataBuffer_53,31,0);
    VL_SIG(__PVT__fifoDataBuffer_54,31,0);
    VL_SIG(__PVT__fifoDataBuffer_55,31,0);
    VL_SIG(__PVT__fifoDataBuffer_56,31,0);
    VL_SIG(__PVT__fifoDataBuffer_57,31,0);
    VL_SIG(__PVT__fifoDataBuffer_58,31,0);
    VL_SIG(__PVT__fifoDataBuffer_59,31,0);
    VL_SIG(__PVT__fifoDataBuffer_60,31,0);
    VL_SIG(__PVT__fifoDataBuffer_61,31,0);
    VL_SIG(__PVT__fifoDataBuffer_62,31,0);
    VL_SIG(__PVT__fifoDataBuffer_63,31,0);
    VL_SIG(__PVT__fifoDataBuffer_64,31,0);
    VL_SIG(__PVT__fifoDataBuffer_65,31,0);
    VL_SIG(__PVT__fifoDataBuffer_66,31,0);
    VL_SIG(__PVT__fifoDataBuffer_67,31,0);
    VL_SIG(__PVT__fifoDataBuffer_68,31,0);
    VL_SIG(__PVT__fifoDataBuffer_69,31,0);
    VL_SIG(__PVT__fifoDataBuffer_70,31,0);
    VL_SIG(__PVT__fifoDataBuffer_71,31,0);
    VL_SIG(__PVT__fifoDataBuffer_72,31,0);
    VL_SIG(__PVT__fifoDataBuffer_73,31,0);
    VL_SIG(__PVT__fifoDataBuffer_74,31,0);
    VL_SIG(__PVT__fifoDataBuffer_75,31,0);
    VL_SIG(__PVT__fifoDataBuffer_76,31,0);
    VL_SIG(__PVT__fifoDataBuffer_77,31,0);
    VL_SIG(__PVT__fifoDataBuffer_78,31,0);
    VL_SIG(__PVT__fifoDataBuffer_79,31,0);
    VL_SIG(__PVT__fifoDataBuffer_80,31,0);
    VL_SIG(__PVT__fifoDataBuffer_81,31,0);
    VL_SIG(__PVT__fifoDataBuffer_82,31,0);
    VL_SIG(__PVT__fifoDataBuffer_83,31,0);
    VL_SIG(__PVT__fifoDataBuffer_84,31,0);
    VL_SIG(__PVT__fifoDataBuffer_85,31,0);
    VL_SIG(__PVT__fifoDataBuffer_86,31,0);
    VL_SIG(__PVT__fifoDataBuffer_87,31,0);
    VL_SIG(__PVT__fifoDataBuffer_88,31,0);
    VL_SIG(__PVT__fifoDataBuffer_89,31,0);
    VL_SIG(__PVT__fifoDataBuffer_90,31,0);
    VL_SIG(__PVT__fifoDataBuffer_91,31,0);
    VL_SIG(__PVT__fifoDataBuffer_92,31,0);
    VL_SIG(__PVT__fifoDataBuffer_93,31,0);
    VL_SIG(__PVT__fifoDataBuffer_94,31,0);
    VL_SIG(__PVT__fifoDataBuffer_95,31,0);
    VL_SIG(__PVT__fifoDataBuffer_96,31,0);
    VL_SIG(__PVT__fifoDataBuffer_97,31,0);
    VL_SIG(__PVT__fifoDataBuffer_98,31,0);
    VL_SIG(__PVT__fifoDataBuffer_99,31,0);
    VL_SIG(__PVT__fifoDataBuffer_100,31,0);
    VL_SIG(__PVT__fifoDataBuffer_101,31,0);
    VL_SIG(__PVT__fifoDataBuffer_102,31,0);
    VL_SIG(__PVT__fifoDataBuffer_103,31,0);
    VL_SIG(__PVT__fifoDataBuffer_104,31,0);
    VL_SIG(__PVT__fifoDataBuffer_105,31,0);
    VL_SIG(__PVT__fifoDataBuffer_106,31,0);
    VL_SIG(__PVT__fifoDataBuffer_107,31,0);
    VL_SIG(__PVT__fifoDataBuffer_108,31,0);
    VL_SIG(__PVT__fifoDataBuffer_109,31,0);
    VL_SIG(__PVT__fifoDataBuffer_110,31,0);
    VL_SIG(__PVT__fifoDataBuffer_111,31,0);
    VL_SIG(__PVT__fifoDataBuffer_112,31,0);
    VL_SIG(__PVT__fifoDataBuffer_113,31,0);
    VL_SIG(__PVT__fifoDataBuffer_114,31,0);
    VL_SIG(__PVT__fifoDataBuffer_115,31,0);
    VL_SIG(__PVT__fifoDataBuffer_116,31,0);
    VL_SIG(__PVT__fifoDataBuffer_117,31,0);
    VL_SIG(__PVT__fifoDataBuffer_118,31,0);
    VL_SIG(__PVT__fifoDataBuffer_119,31,0);
    VL_SIG(__PVT__fifoDataBuffer_120,31,0);
    VL_SIG(__PVT__fifoDataBuffer_121,31,0);
    VL_SIG(__PVT__fifoDataBuffer_122,31,0);
    VL_SIG(__PVT__fifoDataBuffer_123,31,0);
    VL_SIG(__PVT__fifoDataBuffer_124,31,0);
    VL_SIG(__PVT__fifoDataBuffer_125,31,0);
    VL_SIG(__PVT__fifoDataBuffer_126,31,0);
    VL_SIG(__PVT__fifoDataBuffer_127,31,0);
    VL_SIG(__PVT__fifoDataBuffer_128,31,0);
    VL_SIG(__PVT__fifoDataBuffer_129,31,0);
    VL_SIG(__PVT__fifoDataBuffer_130,31,0);
    VL_SIG(__PVT__fifoDataBuffer_131,31,0);
    VL_SIG(__PVT__fifoDataBuffer_132,31,0);
    VL_SIG(__PVT__fifoDataBuffer_133,31,0);
    VL_SIG(__PVT__fifoDataBuffer_134,31,0);
    VL_SIG(__PVT__fifoDataBuffer_135,31,0);
    VL_SIG(__PVT__fifoDataBuffer_136,31,0);
    VL_SIG(__PVT__fifoDataBuffer_137,31,0);
    VL_SIG(__PVT__fifoDataBuffer_138,31,0);
    VL_SIG(__PVT__fifoDataBuffer_139,31,0);
    VL_SIG(__PVT__fifoDataBuffer_140,31,0);
    VL_SIG(__PVT__fifoDataBuffer_141,31,0);
    VL_SIG(__PVT__fifoDataBuffer_142,31,0);
    VL_SIG(__PVT__fifoDataBuffer_143,31,0);
    VL_SIG(__PVT__fifoDataBuffer_144,31,0);
    VL_SIG(__PVT__fifoDataBuffer_145,31,0);
    VL_SIG(__PVT__fifoDataBuffer_146,31,0);
    VL_SIG(__PVT__fifoDataBuffer_147,31,0);
    VL_SIG(__PVT__fifoDataBuffer_148,31,0);
    VL_SIG(__PVT__fifoDataBuffer_149,31,0);
    VL_SIG(__PVT__fifoDataBuffer_150,31,0);
    VL_SIG(__PVT__fifoDataBuffer_151,31,0);
    VL_SIG(__PVT__fifoDataBuffer_152,31,0);
    VL_SIG(__PVT__fifoDataBuffer_153,31,0);
    VL_SIG(__PVT__fifoDataBuffer_154,31,0);
    VL_SIG(__PVT__fifoDataBuffer_155,31,0);
    VL_SIG(__PVT__fifoDataBuffer_156,31,0);
    VL_SIG(__PVT__fifoDataBuffer_157,31,0);
    VL_SIG(__PVT__fifoDataBuffer_158,31,0);
    VL_SIG(__PVT__fifoDataBuffer_159,31,0);
    VL_SIG(__PVT__fifoDataBuffer_160,31,0);
    VL_SIG(__PVT__fifoDataBuffer_161,31,0);
    VL_SIG(__PVT__fifoDataBuffer_162,31,0);
    VL_SIG(__PVT__fifoDataBuffer_163,31,0);
    VL_SIG(__PVT__fifoDataBuffer_164,31,0);
    VL_SIG(__PVT__fifoDataBuffer_165,31,0);
    VL_SIG(__PVT__fifoDataBuffer_166,31,0);
    VL_SIG(__PVT__fifoDataBuffer_167,31,0);
    VL_SIG(__PVT__fifoDataBuffer_168,31,0);
    VL_SIG(__PVT__fifoDataBuffer_169,31,0);
    VL_SIG(__PVT__fifoDataBuffer_170,31,0);
    VL_SIG(__PVT__fifoDataBuffer_171,31,0);
    VL_SIG(__PVT__fifoDataBuffer_172,31,0);
    VL_SIG(__PVT__fifoDataBuffer_173,31,0);
    VL_SIG(__PVT__fifoDataBuffer_174,31,0);
    VL_SIG(__PVT__fifoDataBuffer_175,31,0);
    VL_SIG(__PVT__fifoDataBuffer_176,31,0);
    VL_SIG(__PVT__fifoDataBuffer_177,31,0);
    VL_SIG(__PVT__fifoDataBuffer_178,31,0);
    VL_SIG(__PVT__fifoDataBuffer_179,31,0);
    VL_SIG(__PVT__fifoDataBuffer_180,31,0);
    VL_SIG(__PVT__fifoDataBuffer_181,31,0);
    VL_SIG(__PVT__fifoDataBuffer_182,31,0);
    VL_SIG(__PVT__fifoDataBuffer_183,31,0);
    VL_SIG(__PVT__fifoDataBuffer_184,31,0);
    VL_SIG(__PVT__fifoDataBuffer_185,31,0);
    VL_SIG(__PVT__fifoDataBuffer_186,31,0);
    VL_SIG(__PVT__fifoDataBuffer_187,31,0);
    VL_SIG(__PVT__fifoDataBuffer_188,31,0);
    VL_SIG(__PVT__fifoDataBuffer_189,31,0);
    VL_SIG(__PVT__fifoDataBuffer_190,31,0);
    VL_SIG(__PVT__fifoDataBuffer_191,31,0);
    VL_SIG(__PVT__fifoDataBuffer_192,31,0);
    VL_SIG(__PVT__fifoDataBuffer_193,31,0);
    VL_SIG(__PVT__fifoDataBuffer_194,31,0);
    VL_SIG(__PVT__fifoDataBuffer_195,31,0);
    VL_SIG(__PVT__fifoDataBuffer_196,31,0);
    VL_SIG(__PVT__fifoDataBuffer_197,31,0);
    VL_SIG(__PVT__fifoDataBuffer_198,31,0);
    VL_SIG(__PVT__fifoDataBuffer_199,31,0);
    VL_SIG(__PVT__fifoDataBuffer_200,31,0);
    VL_SIG(__PVT__fifoDataBuffer_201,31,0);
    VL_SIG(__PVT__fifoDataBuffer_202,31,0);
    VL_SIG(__PVT__fifoDataBuffer_203,31,0);
    VL_SIG(__PVT__fifoDataBuffer_204,31,0);
    VL_SIG(__PVT__fifoDataBuffer_205,31,0);
    VL_SIG(__PVT__fifoDataBuffer_206,31,0);
    VL_SIG(__PVT__fifoDataBuffer_207,31,0);
    VL_SIG(__PVT__fifoDataBuffer_208,31,0);
    VL_SIG(__PVT__fifoDataBuffer_209,31,0);
    VL_SIG(__PVT__fifoDataBuffer_210,31,0);
    VL_SIG(__PVT__fifoDataBuffer_211,31,0);
    VL_SIG(__PVT__fifoDataBuffer_212,31,0);
    VL_SIG(__PVT__fifoDataBuffer_213,31,0);
    VL_SIG(__PVT__fifoDataBuffer_214,31,0);
    VL_SIG(__PVT__fifoDataBuffer_215,31,0);
    VL_SIG(__PVT__fifoDataBuffer_216,31,0);
    VL_SIG(__PVT__fifoDataBuffer_217,31,0);
    VL_SIG(__PVT__fifoDataBuffer_218,31,0);
    VL_SIG(__PVT__fifoDataBuffer_219,31,0);
    VL_SIG(__PVT__fifoDataBuffer_220,31,0);
    VL_SIG(__PVT__fifoDataBuffer_221,31,0);
    VL_SIG(__PVT__fifoDataBuffer_222,31,0);
    VL_SIG(__PVT__fifoDataBuffer_223,31,0);
    VL_SIG(__PVT__fifoDataBuffer_224,31,0);
    VL_SIG(__PVT__fifoDataBuffer_225,31,0);
    VL_SIG(__PVT__fifoDataBuffer_226,31,0);
    VL_SIG(__PVT__fifoDataBuffer_227,31,0);
    VL_SIG(__PVT__fifoDataBuffer_228,31,0);
    VL_SIG(__PVT__fifoDataBuffer_229,31,0);
    VL_SIG(__PVT__fifoDataBuffer_230,31,0);
    VL_SIG(__PVT__fifoDataBuffer_231,31,0);
    VL_SIG(__PVT__fifoDataBuffer_232,31,0);
    VL_SIG(__PVT__fifoDataBuffer_233,31,0);
    VL_SIG(__PVT__fifoDataBuffer_234,31,0);
    VL_SIG(__PVT__fifoDataBuffer_235,31,0);
    VL_SIG(__PVT__fifoDataBuffer_236,31,0);
    VL_SIG(__PVT__fifoDataBuffer_237,31,0);
    VL_SIG(__PVT__fifoDataBuffer_238,31,0);
    VL_SIG(__PVT__fifoDataBuffer_239,31,0);
    VL_SIG(__PVT__fifoDataBuffer_240,31,0);
    VL_SIG(__PVT__fifoDataBuffer_241,31,0);
    VL_SIG(__PVT__fifoDataBuffer_242,31,0);
    VL_SIG(__PVT__fifoDataBuffer_243,31,0);
    VL_SIG(__PVT__fifoDataBuffer_244,31,0);
    VL_SIG(__PVT__fifoDataBuffer_245,31,0);
    VL_SIG(__PVT__fifoDataBuffer_246,31,0);
    VL_SIG(__PVT__fifoDataBuffer_247,31,0);
    VL_SIG(__PVT__fifoDataBuffer_248,31,0);
    VL_SIG(__PVT__fifoDataBuffer_249,31,0);
    VL_SIG(__PVT__fifoDataBuffer_250,31,0);
    VL_SIG(__PVT__fifoDataBuffer_251,31,0);
    VL_SIG(__PVT__fifoDataBuffer_252,31,0);
    VL_SIG(__PVT__fifoDataBuffer_253,31,0);
    VL_SIG(__PVT__fifoDataBuffer_254,31,0);
    VL_SIG(__PVT__fifoDataBuffer_255,31,0);
    VL_SIGW(__PVT___zz_5,255,0,8);
    VL_SIG(axi4Interface_address,31,0);
    VL_SIG(__PVT__Axi4Incr_result,31,0);
    VL_SIG(__PVT__axi4Interface_initialAddress,31,0);
    
    // LOCAL VARIABLES
    VL_SIG(__Vdly__axi4Interface_address,31,0);
    
    // INTERNAL VARIABLES
  private:
    VFifo2Axi4WriteMasterInterface__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface& operator= (const VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface&);  ///< Copying not allowed
    VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface(const VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface&);  ///< Copying not allowed
  public:
    VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface(const char* name="TOP");
    ~VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VFifo2Axi4WriteMasterInterface__Syms* symsp, bool first);
    static void _combo__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__14(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__10(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__11(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__12(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__13(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__8(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _settle__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__1(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _settle__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__2(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _settle__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__3(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
