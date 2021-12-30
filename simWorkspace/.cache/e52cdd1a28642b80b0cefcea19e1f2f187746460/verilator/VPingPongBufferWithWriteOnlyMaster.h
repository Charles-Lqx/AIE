// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPingPongBufferWithWriteOnlyMaster_H_
#define _VPingPongBufferWithWriteOnlyMaster_H_

#include "verilated.h"
#include "VPingPongBufferWithWriteOnlyMaster__Dpi.h"

class VPingPongBufferWithWriteOnlyMaster__Syms;
class VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster;
class VerilatedVcd;

//----------

VL_MODULE(VPingPongBufferWithWriteOnlyMaster) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster*	PingPongBufferWithWriteOnlyMaster;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(startIn,0,0);
    VL_IN8(aresetn,0,0);
    VL_IN8(aclk,0,0);
    VL_IN8(streamIn_valid,0,0);
    VL_OUT8(streamIn_ready,0,0);
    VL_IN8(bufferDepthIn,7,0);
    VL_OUT8(interruptOut,0,0);
    VL_OUT8(full_aw_valid,0,0);
    VL_IN8(full_aw_ready,0,0);
    VL_OUT8(full_aw_payload_region,3,0);
    VL_OUT8(full_aw_payload_len,7,0);
    VL_OUT8(full_aw_payload_size,2,0);
    VL_OUT8(full_aw_payload_burst,1,0);
    VL_OUT8(full_aw_payload_cache,3,0);
    VL_OUT8(full_aw_payload_qos,3,0);
    VL_OUT8(full_aw_payload_prot,2,0);
    VL_OUT8(full_w_valid,0,0);
    VL_IN8(full_w_ready,0,0);
    VL_OUT8(full_w_payload_strb,3,0);
    VL_OUT8(full_w_payload_last,0,0);
    VL_IN8(full_b_valid,0,0);
    VL_OUT8(full_b_ready,0,0);
    VL_IN8(full_b_payload_resp,1,0);
    VL_IN(streamIn_payload,31,0);
    VL_IN(dataOffsetIn,31,0);
    VL_OUT(full_aw_payload_addr,31,0);
    VL_OUT(full_w_payload_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1,0,0);
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_2,0,0);
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg,0,0);
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4,0,0);
    VL_SIG8(__Vclklast__TOP__aclk,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1,0,0);
    VL_SIG8(__Vclklast__TOP__startIn,0,0);
    VL_SIG8(__Vclklast__TOP__aresetn,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_2,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT___zz_4,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_1,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_2,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__outputStartSignalReg,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPingPongBufferWithWriteOnlyMaster__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VPingPongBufferWithWriteOnlyMaster& operator= (const VPingPongBufferWithWriteOnlyMaster&);  ///< Copying not allowed
    VPingPongBufferWithWriteOnlyMaster(const VPingPongBufferWithWriteOnlyMaster&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VPingPongBufferWithWriteOnlyMaster(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPingPongBufferWithWriteOnlyMaster();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* symsp, bool first);
  private:
    static QData _change_request(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _eval_settle(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void traceChgThis(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__17(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
