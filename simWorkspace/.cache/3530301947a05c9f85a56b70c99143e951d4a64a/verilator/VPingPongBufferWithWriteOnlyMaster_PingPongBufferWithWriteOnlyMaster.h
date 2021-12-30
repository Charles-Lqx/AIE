// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#ifndef _VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster_H_
#define _VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster_H_

#include "verilated.h"
#include "VPingPongBufferWithWriteOnlyMaster__Dpi.h"

class VPingPongBufferWithWriteOnlyMaster__Syms;
class VPingPongBufferWithWriteOnlyMaster_PingPongBuffer;
class VerilatedVcd;

//----------

VL_MODULE(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster) {
  public:
    // CELLS
    VPingPongBufferWithWriteOnlyMaster_PingPongBuffer*	pingPongBuffer_1;
    
    // PORTS
    VL_IN8(aresetn,0,0);
    VL_IN8(aclk,0,0);
    VL_IN8(streamIn_valid,0,0);
    VL_OUT8(streamIn_ready,0,0);
    VL_IN8(startIn,0,0);
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
    VL_SIG8(__PVT__writeOnlyMater__DOT___zz_4,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__PVT__writeOnlyMater_s_axis_ready,0,0);
    VL_SIG8(__PVT__writeOnlyMater_m_axi_wvalid,0,0);
    VL_SIG8(__PVT__writeOnlyMater_m_axi_wlast,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT___zz_m_axi_wlast,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT___zz_1,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_1,7,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2,7,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__m_axi_wlast_regNext,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__startSendSignal,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT___zz_5,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_1,7,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2,7,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__burstLengthReg,7,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__axi4Interface_newBurst,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__axi4Interface_full_b_fire_1,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__axi4Interface_full_aw_fire,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext,7,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext,7,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value,7,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full,0,0);
    VL_SIG8(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid,0,0);
    VL_SIG(__PVT__writeOnlyMater_m_axi_wdata,31,0);
    VL_SIG(__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_payload,31,0);
    VL_SIG(__PVT__writeOnlyMater__DOT__axi4Interface_transferDataType,31,0);
    VL_SIG(__PVT__writeOnlyMater__DOT__startOffsetReg,31,0);
    VL_SIG(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram[256],31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VPingPongBufferWithWriteOnlyMaster__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster& operator= (const VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster&);  ///< Copying not allowed
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster(const VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster&);  ///< Copying not allowed
  public:
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster(const char* name="TOP");
    ~VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* symsp, bool first);
    static void _combo__TOP__PingPongBufferWithWriteOnlyMaster__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _combo__TOP__PingPongBufferWithWriteOnlyMaster__7(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _combo__TOP__PingPongBufferWithWriteOnlyMaster__9(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _multiclk__TOP__PingPongBufferWithWriteOnlyMaster__8(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__PingPongBufferWithWriteOnlyMaster__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__PingPongBufferWithWriteOnlyMaster__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__PingPongBufferWithWriteOnlyMaster__6(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__PingPongBufferWithWriteOnlyMaster__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__PingPongBufferWithWriteOnlyMaster__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
