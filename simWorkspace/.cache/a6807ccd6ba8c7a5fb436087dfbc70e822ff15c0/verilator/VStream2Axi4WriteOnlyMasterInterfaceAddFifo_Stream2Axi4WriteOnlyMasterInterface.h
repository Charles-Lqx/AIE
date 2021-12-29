// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#ifndef _VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface_H_
#define _VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface_H_

#include "verilated.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Dpi.h"

class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface) {
  public:
    
    // PORTS
    VL_IN8(__PVT__start,0,0);
    VL_IN8(__PVT__aresetn,0,0);
    VL_IN8(__PVT__aclk,0,0);
    VL_IN8(__PVT__burstLen,7,0);
    VL_IN8(__PVT__s_axis_valid,0,0);
    VL_OUT8(__PVT__s_axis_ready,0,0);
    VL_OUT8(__PVT__m_axi_awvalid,0,0);
    VL_IN8(__PVT__m_axi_awready,0,0);
    VL_OUT8(__PVT__m_axi_awregion,3,0);
    VL_OUT8(__PVT__m_axi_awlen,7,0);
    VL_OUT8(__PVT__m_axi_awsize,2,0);
    VL_OUT8(__PVT__m_axi_awburst,1,0);
    VL_OUT8(__PVT__m_axi_awcache,3,0);
    VL_OUT8(__PVT__m_axi_awqos,3,0);
    VL_OUT8(__PVT__m_axi_awprot,2,0);
    VL_OUT8(__PVT__m_axi_wvalid,0,0);
    VL_IN8(__PVT__m_axi_wready,0,0);
    VL_OUT8(__PVT__m_axi_wstrb,3,0);
    VL_OUT8(__PVT__m_axi_wlast,0,0);
    VL_IN8(__PVT__m_axi_bvalid,0,0);
    VL_OUT8(__PVT__m_axi_bready,0,0);
    VL_IN8(__PVT__m_axi_bresp,1,0);
    VL_OUT8(__PVT__transInterrupt,0,0);
    VL_IN(__PVT__offset,31,0);
    VL_IN(__PVT__s_axis_payload,31,0);
    VL_OUT(__PVT__m_axi_awaddr,31,0);
    VL_OUT(__PVT__m_axi_wdata,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT___zz_4,0,0);
    VL_SIG8(__PVT__streamFifo_2_io_push_valid,0,0);
    VL_SIG8(__PVT__streamFifo_2_io_pop_ready,0,0);
    VL_SIG8(__PVT__streamFifo_2_io_pop_valid,0,0);
    VL_SIG8(__PVT___zz_writeDataCounter,0,0);
    VL_SIG8(__PVT___zz_1,0,0);
    VL_SIG8(__PVT__m_axi_wlast_regNext,0,0);
    VL_SIG8(__PVT__startSendSignal,0,0);
    VL_SIG8(__PVT___zz_getdataCounter,0,0);
    VL_SIG8(__PVT___zz_5,0,0);
    VL_SIG8(__PVT__burstLengthReg,7,0);
    VL_SIG8(__PVT__when_Axi4WriteOnlyMaster_l98,0,0);
    VL_SIG8(__PVT__axi4Interface_isTransferAfterReset,0,0);
    VL_SIG8(__PVT__when_Axi4WriteOnlyMaster_l124,0,0);
    VL_SIG8(__PVT__axi4Interface_lastBurstComplete,0,0);
    VL_SIG8(__PVT__axi4Interface_controlAwValidSignal,0,0);
    VL_SIG8(__PVT__axi4Interface_full_aw_fire,0,0);
    VL_SIG8(__PVT__when_Axi4WriteOnlyMaster_l161,0,0);
    VL_SIG8(__PVT__axi4Interface_controlBReady,0,0);
    VL_SIG8(__PVT__axi4Interface_full_b_fire_3,0,0);
    VL_SIG8(__PVT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__PVT__streamFifo_2__DOT___zz_1,0,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_pushPtr_valueNext,7,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_popPtr_valueNext,7,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_popPtr_value,7,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_ptrMatch,0,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_pushing,0,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_popping,0,0);
    VL_SIG8(__PVT__streamFifo_2__DOT__logic_full,0,0);
    VL_SIG8(__PVT__streamFifo_2__DOT___zz_io_pop_valid,0,0);
    VL_SIG16(__PVT___zz_writeDataCounter_1,8,0);
    VL_SIG16(writeDataCounter,8,0);
    VL_SIG16(__PVT___zz_getdataCounter_1,8,0);
    VL_SIG16(getdataCounter,8,0);
    VL_SIG(__PVT__streamFifo_2_io_push_payload,31,0);
    VL_SIG(__PVT__axi4Interface_transferDataType,31,0);
    VL_SIG(__PVT__streamFifo_2__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(__PVT__streamFifo_2__DOT__logic_ram[256],31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface& operator= (const VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface&);  ///< Copying not allowed
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface(const VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface&);  ///< Copying not allowed
  public:
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface(const char* name="TOP");
    ~VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* symsp, bool first);
    static void _combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__7(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__6(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
