// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTestAxi4WriteMaster_H_
#define _VTestAxi4WriteMaster_H_

#include "verilated.h"

class VTestAxi4WriteMaster__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTestAxi4WriteMaster) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(fifoValid,0,0);
    VL_OUT8(fifoReady,0,0);
    VL_OUT8(awValid,0,0);
    VL_IN8(awReady,0,0);
    VL_OUT8(awid,0,0);
    VL_OUT8(awregion,3,0);
    VL_OUT8(awlen,7,0);
    VL_OUT8(awsize,2,0);
    VL_OUT8(awburst,1,0);
    VL_OUT8(awlock,0,0);
    VL_OUT8(awcache,3,0);
    VL_OUT8(awqos,3,0);
    VL_OUT8(awprot,2,0);
    VL_OUT8(wValid,0,0);
    VL_IN8(wReady,0,0);
    VL_OUT8(wstrb,3,0);
    VL_OUT8(wlast,0,0);
    VL_IN8(bValid,0,0);
    VL_OUT8(bReady,0,0);
    VL_IN8(bid,0,0);
    VL_IN8(bresp,1,0);
    VL_OUT8(arValid,0,0);
    VL_IN8(arReady,0,0);
    VL_OUT8(arid,0,0);
    VL_OUT8(arregion,3,0);
    VL_OUT8(arlen,7,0);
    VL_OUT8(arsize,2,0);
    VL_OUT8(arburst,1,0);
    VL_OUT8(arlock,0,0);
    VL_OUT8(arcache,3,0);
    VL_OUT8(arqos,3,0);
    VL_OUT8(arprot,2,0);
    VL_IN8(rValid,0,0);
    VL_OUT8(rReady,0,0);
    VL_IN8(rid,0,0);
    VL_IN8(rresp,1,0);
    VL_IN8(rlast,0,0);
    VL_IN(fifoPayload,31,0);
    VL_OUT(awaddr,31,0);
    VL_OUT(wdata,31,0);
    VL_OUT(araddr,31,0);
    VL_IN(rdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(TestAxi4WriteMaster__DOT___zz_wdata,0,0);
    VL_SIG8(TestAxi4WriteMaster__DOT___zz_1,0,0);
    VL_SIG8(TestAxi4WriteMaster__DOT___zz_wdata_1,4,0);
    VL_SIG8(TestAxi4WriteMaster__DOT___zz_wdata_2,4,0);
    VL_SIG8(TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53,0,0);
    VL_SIG8(TestAxi4WriteMaster__DOT___zz_3,0,0);
    VL_SIG8(TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_1,4,0);
    VL_SIG8(TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2,4,0);
    VL_SIG8(TestAxi4WriteMaster__DOT__axi4Interface_fifo_fire,0,0);
    VL_SIG8(TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase,2,0);
    VL_SIG8(TestAxi4WriteMaster__DOT__when_Axi4WriteMaster_l87,0,0);
    VL_SIG16(TestAxi4WriteMaster__DOT___zz_5,15,0);
    VL_SIG16(TestAxi4WriteMaster__DOT__Axi4Incr_base,11,0);
    VL_SIG16(TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr,11,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_0,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_1,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_2,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_3,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_4,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_5,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_6,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_7,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_8,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_9,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_10,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_11,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_12,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_13,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_14,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__fifoDataBuffer_15,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__axi4Interface_address,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__Axi4Incr_result,31,0);
    VL_SIG(TestAxi4WriteMaster__DOT__axi4Interface_initialAddress,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG(__Vdly__TestAxi4WriteMaster__DOT__axi4Interface_address,31,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTestAxi4WriteMaster__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VTestAxi4WriteMaster& operator= (const VTestAxi4WriteMaster&);  ///< Copying not allowed
    VTestAxi4WriteMaster(const VTestAxi4WriteMaster&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VTestAxi4WriteMaster(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTestAxi4WriteMaster();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTestAxi4WriteMaster__Syms* symsp, bool first);
  private:
    static QData _change_request(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
    static QData _change_request_1(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
    static void _eval_settle(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VTestAxi4WriteMaster__Syms* __restrict vlSymsp);
    static void traceChgThis(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
