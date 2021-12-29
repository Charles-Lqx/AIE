// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#ifndef _VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo_H_
#define _VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo_H_

#include "verilated.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Dpi.h"

class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo) {
  public:
    
    // PORTS
    VL_IN8(aresetn,0,0);
    VL_IN8(start,0,0);
    VL_IN8(aclk,0,0);
    VL_IN8(s_axis_valid,0,0);
    VL_OUT8(s_axis_ready,0,0);
    VL_OUT8(m_axi_awvalid,0,0);
    VL_IN8(m_axi_awready,0,0);
    VL_OUT8(m_axi_awregion,3,0);
    VL_OUT8(m_axi_awlen,7,0);
    VL_OUT8(m_axi_awsize,2,0);
    VL_OUT8(m_axi_awburst,1,0);
    VL_OUT8(m_axi_awcache,3,0);
    VL_OUT8(m_axi_awqos,3,0);
    VL_OUT8(m_axi_awprot,2,0);
    VL_OUT8(m_axi_wvalid,0,0);
    VL_IN8(m_axi_wready,0,0);
    VL_OUT8(m_axi_wstrb,3,0);
    VL_OUT8(m_axi_wlast,0,0);
    VL_IN8(m_axi_bvalid,0,0);
    VL_OUT8(m_axi_bready,0,0);
    VL_IN8(m_axi_bresp,1,0);
    VL_IN8(burstLen,7,0);
    VL_OUT8(transInterrupt,0,0);
    VL_IN(s_axis_payload,31,0);
    VL_OUT(m_axi_awaddr,31,0);
    VL_OUT(m_axi_wdata,31,0);
    VL_IN(offset,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__axi4Interconnection__DOT___zz_4,0,0);
    VL_SIG8(__PVT__axi4Interconnection_s_axis_ready,0,0);
    VL_SIG8(__PVT__axi4Interconnection_m_axi_wvalid,0,0);
    VL_SIG8(__PVT__axi4Interconnection_m_axi_wlast,0,0);
    VL_SIG8(__PVT__fifoInstance_io_pop_valid,0,0);
    VL_SIG8(inFire,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2_io_push_valid,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2_io_pop_ready,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT___zz_m_axi_wlast,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT___zz_1,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__m_axi_wlast_regNext,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__startSendSignal,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l96,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT___zz_5,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__burstLengthReg,7,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l96,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__axi4Interface_isTransferAfterReset,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l122,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__axi4Interface_full_aw_fire,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l159,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__axi4Interface_controlBReady,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__axi4Interface_full_b_fire_3,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_1,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_valueNext,7,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext,7,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value,7,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full,0,0);
    VL_SIG8(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_io_pop_valid,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT___zz_1,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_pushPtr_valueNext,7,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_popPtr_valueNext,7,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_popPtr_value,7,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_ptrMatch,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_pushing,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_popping,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_full,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT___zz_io_pop_valid,0,0);
    VL_SIG16(__PVT__axi4Interconnection__DOT___zz_m_axi_wlast_1,8,0);
    VL_SIG16(__PVT__axi4Interconnection__DOT___zz_m_axi_wlast_2,8,0);
    VL_SIG16(__PVT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l96_1,8,0);
    VL_SIG16(__PVT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l96_2,8,0);
    VL_SIG(__PVT__axi4Interconnection_m_axi_wdata,31,0);
    VL_SIG(__PVT__axi4Interconnection__DOT__streamFifo_2_io_push_payload,31,0);
    VL_SIG(__PVT__axi4Interconnection__DOT__axi4Interface_transferDataType,31,0);
    VL_SIG(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(__PVT__fifoInstance__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(__PVT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram[256],31,0);
    VL_SIG(__PVT__fifoInstance__DOT__logic_ram[256],31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo& operator= (const VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo&);  ///< Copying not allowed
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo(const VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo&);  ///< Copying not allowed
  public:
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo(const char* name="TOP");
    ~VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* symsp, bool first);
    static void _combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__7(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__9(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _multiclk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__8(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__6(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
