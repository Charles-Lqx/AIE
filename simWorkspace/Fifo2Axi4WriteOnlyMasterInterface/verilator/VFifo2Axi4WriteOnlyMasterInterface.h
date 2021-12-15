// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFifo2Axi4WriteOnlyMasterInterface_H_
#define _VFifo2Axi4WriteOnlyMasterInterface_H_

#include "verilated.h"
#include "VFifo2Axi4WriteOnlyMasterInterface__Dpi.h"

class VFifo2Axi4WriteOnlyMasterInterface__Syms;
class VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface;
class VerilatedVcd;

//----------

VL_MODULE(VFifo2Axi4WriteOnlyMasterInterface) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface*	Fifo2Axi4WriteOnlyMasterInterface;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(resetn,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(fifoInterface_valid,0,0);
    VL_OUT8(fifoInterface_ready,0,0);
    VL_OUT8(aw_valid,0,0);
    VL_IN8(aw_ready,0,0);
    VL_OUT8(aw_payload_region,3,0);
    VL_OUT8(aw_payload_len,7,0);
    VL_OUT8(aw_payload_size,2,0);
    VL_OUT8(aw_payload_burst,1,0);
    VL_OUT8(aw_payload_cache,3,0);
    VL_OUT8(aw_payload_qos,3,0);
    VL_OUT8(aw_payload_prot,2,0);
    VL_OUT8(w_valid,0,0);
    VL_IN8(w_ready,0,0);
    VL_OUT8(w_payload_strb,3,0);
    VL_OUT8(w_payload_last,0,0);
    VL_IN8(b_valid,0,0);
    VL_OUT8(b_ready,0,0);
    VL_IN8(b_payload_resp,1,0);
    VL_IN(fifoInterface_payload,31,0);
    VL_OUT(aw_payload_addr,31,0);
    VL_OUT(w_payload_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__resetn,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VFifo2Axi4WriteOnlyMasterInterface__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VFifo2Axi4WriteOnlyMasterInterface& operator= (const VFifo2Axi4WriteOnlyMasterInterface&);  ///< Copying not allowed
    VFifo2Axi4WriteOnlyMasterInterface(const VFifo2Axi4WriteOnlyMasterInterface&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VFifo2Axi4WriteOnlyMasterInterface(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VFifo2Axi4WriteOnlyMasterInterface();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VFifo2Axi4WriteOnlyMasterInterface__Syms* symsp, bool first);
  private:
    static QData _change_request(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp);
    static QData _change_request_1(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp);
    static void _eval_settle(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp);
    static void traceChgThis(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
