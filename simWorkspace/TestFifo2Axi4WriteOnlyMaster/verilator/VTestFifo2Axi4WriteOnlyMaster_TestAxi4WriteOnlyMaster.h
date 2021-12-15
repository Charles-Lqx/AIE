// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestFifo2Axi4WriteOnlyMaster.h for the primary calling header

#ifndef _VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster_H_
#define _VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster_H_

#include "verilated.h"
#include "VTestFifo2Axi4WriteOnlyMaster__Dpi.h"

class VTestFifo2Axi4WriteOnlyMaster__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster) {
  public:
    
    // PORTS
    VL_IN8(__PVT__resetn,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__fifoValid,0,0);
    VL_OUT8(__PVT__fifoReady,0,0);
    VL_OUT8(__PVT__awValid,0,0);
    VL_IN8(__PVT__awReady,0,0);
    VL_OUT8(__PVT__awid,0,0);
    VL_OUT8(__PVT__awregion,3,0);
    VL_OUT8(__PVT__awlen,7,0);
    VL_OUT8(__PVT__awsize,2,0);
    VL_OUT8(__PVT__awburst,1,0);
    VL_OUT8(__PVT__awlock,0,0);
    VL_OUT8(__PVT__awcache,3,0);
    VL_OUT8(__PVT__awqos,3,0);
    VL_OUT8(__PVT__awprot,2,0);
    VL_OUT8(__PVT__wValid,0,0);
    VL_IN8(__PVT__wReady,0,0);
    VL_OUT8(__PVT__wstrb,3,0);
    VL_OUT8(__PVT__wlast,0,0);
    VL_IN8(__PVT__bValid,0,0);
    VL_OUT8(__PVT__bReady,0,0);
    VL_IN8(__PVT__bid,0,0);
    VL_IN8(__PVT__bresp,1,0);
    VL_IN(__PVT__fifoPayload,31,0);
    VL_OUT(__PVT__awaddr,31,0);
    VL_OUT(__PVT__wdata,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT___zz_writeCounter,0,0);
    VL_SIG8(__PVT___zz_1,0,0);
    VL_SIG8(__PVT___zz_writeCounter_1,5,0);
    VL_SIG8(writeCounter,5,0);
    VL_SIG8(__PVT___zz_when_Axi4WriteOnlyMaster_l92,0,0);
    VL_SIG8(__PVT___zz_handshakeCounter,0,0);
    VL_SIG8(__PVT___zz_3,0,0);
    VL_SIG8(__PVT___zz_handshakeCounter_1,5,0);
    VL_SIG8(handshakeCounter,5,0);
    VL_SIG8(__PVT__axi4Interface_fifo_fire,0,0);
    VL_SIG8(__PVT__axi4Interface_controlAwValid,0,0);
    VL_SIG8(__PVT__axi4Interface_isTransferAfterReset,0,0);
    VL_SIG8(__PVT__axi4Interface_t_aw_fire,0,0);
    VL_SIG8(__PVT__when_Axi4WriteOnlyMaster_l92,0,0);
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
    VL_SIG(__PVT___zz_5,31,0);
    VL_SIG(debugAddress,31,0);
    VL_SIG(__PVT__Axi4Incr_result,31,0);
    VL_SIG(__PVT__axi4Interface_initialAddress,31,0);
    
    // LOCAL VARIABLES
    VL_SIG(__Vdly__debugAddress,31,0);
    
    // INTERNAL VARIABLES
  private:
    VTestFifo2Axi4WriteOnlyMaster__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster& operator= (const VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster&);  ///< Copying not allowed
    VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster(const VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster&);  ///< Copying not allowed
  public:
    VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster(const char* name="TOP");
    ~VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VTestFifo2Axi4WriteOnlyMaster__Syms* symsp, bool first);
    static void _combo__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__7(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__4(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__5(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__1(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__2(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
