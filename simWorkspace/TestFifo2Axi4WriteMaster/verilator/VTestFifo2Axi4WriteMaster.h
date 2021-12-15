// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTestFifo2Axi4WriteMaster_H_
#define _VTestFifo2Axi4WriteMaster_H_

#include "verilated.h"
#include "VTestFifo2Axi4WriteMaster__Dpi.h"

class VTestFifo2Axi4WriteMaster__Syms;
class VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster;
class VerilatedVcd;

//----------

VL_MODULE(VTestFifo2Axi4WriteMaster) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster*	TestFifo2Axi4WriteMaster;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(fifoInterface_valid,0,0);
    VL_OUT8(fifoInterface_ready,0,0);
    VL_OUT8(axi4WriteMasterInterface_aw_valid,0,0);
    VL_IN8(axi4WriteMasterInterface_aw_ready,0,0);
    VL_OUT8(axi4WriteMasterInterface_aw_payload_id,0,0);
    VL_OUT8(axi4WriteMasterInterface_aw_payload_region,3,0);
    VL_OUT8(axi4WriteMasterInterface_aw_payload_len,7,0);
    VL_OUT8(axi4WriteMasterInterface_aw_payload_size,2,0);
    VL_OUT8(axi4WriteMasterInterface_aw_payload_burst,1,0);
    VL_OUT8(axi4WriteMasterInterface_aw_payload_lock,0,0);
    VL_OUT8(axi4WriteMasterInterface_aw_payload_cache,3,0);
    VL_OUT8(axi4WriteMasterInterface_aw_payload_qos,3,0);
    VL_OUT8(axi4WriteMasterInterface_aw_payload_prot,2,0);
    VL_OUT8(axi4WriteMasterInterface_w_valid,0,0);
    VL_IN8(axi4WriteMasterInterface_w_ready,0,0);
    VL_OUT8(axi4WriteMasterInterface_w_payload_strb,3,0);
    VL_OUT8(axi4WriteMasterInterface_w_payload_last,0,0);
    VL_IN8(axi4WriteMasterInterface_b_valid,0,0);
    VL_OUT8(axi4WriteMasterInterface_b_ready,0,0);
    VL_IN8(axi4WriteMasterInterface_b_payload_id,0,0);
    VL_IN8(axi4WriteMasterInterface_b_payload_resp,1,0);
    VL_OUT8(axi4WriteMasterInterface_ar_valid,0,0);
    VL_IN8(axi4WriteMasterInterface_ar_ready,0,0);
    VL_OUT8(axi4WriteMasterInterface_ar_payload_id,0,0);
    VL_OUT8(axi4WriteMasterInterface_ar_payload_region,3,0);
    VL_OUT8(axi4WriteMasterInterface_ar_payload_len,7,0);
    VL_OUT8(axi4WriteMasterInterface_ar_payload_size,2,0);
    VL_OUT8(axi4WriteMasterInterface_ar_payload_burst,1,0);
    VL_OUT8(axi4WriteMasterInterface_ar_payload_lock,0,0);
    VL_OUT8(axi4WriteMasterInterface_ar_payload_cache,3,0);
    VL_OUT8(axi4WriteMasterInterface_ar_payload_qos,3,0);
    VL_OUT8(axi4WriteMasterInterface_ar_payload_prot,2,0);
    VL_IN8(axi4WriteMasterInterface_r_valid,0,0);
    VL_OUT8(axi4WriteMasterInterface_r_ready,0,0);
    VL_IN8(axi4WriteMasterInterface_r_payload_id,0,0);
    VL_IN8(axi4WriteMasterInterface_r_payload_resp,1,0);
    VL_IN8(axi4WriteMasterInterface_r_payload_last,0,0);
    VL_IN(fifoInterface_payload,31,0);
    VL_OUT(axi4WriteMasterInterface_aw_payload_addr,31,0);
    VL_OUT(axi4WriteMasterInterface_w_payload_data,31,0);
    VL_OUT(axi4WriteMasterInterface_ar_payload_addr,31,0);
    VL_IN(axi4WriteMasterInterface_r_payload_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTestFifo2Axi4WriteMaster__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VTestFifo2Axi4WriteMaster& operator= (const VTestFifo2Axi4WriteMaster&);  ///< Copying not allowed
    VTestFifo2Axi4WriteMaster(const VTestFifo2Axi4WriteMaster&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VTestFifo2Axi4WriteMaster(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTestFifo2Axi4WriteMaster();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTestFifo2Axi4WriteMaster__Syms* symsp, bool first);
  private:
    static QData _change_request(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp);
    static QData _change_request_1(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp);
    static void _eval_settle(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp);
    static void traceChgThis(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__7(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
