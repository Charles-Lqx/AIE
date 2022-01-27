// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#ifndef VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO___024ROOT_H_
#define VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO___024ROOT_H_  // guard

#include "verilated.h"

class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms;
VL_MODULE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(aresetn,0,0);
        VL_IN8(start,0,0);
        VL_IN8(aclk,0,0);
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4;
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
        VL_IN8(pathNumb,7,0);
        VL_OUT8(transInterrupt,0,0);
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_ready;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_1;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__m_axi_wlast_regNext;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l105;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_5;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__burstLengthReg;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l105;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_newBurst;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l131;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_full_aw_fire;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_axi4Interface_isInitialIterate_1;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_axi4Interface_isInitialIterate_2;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isRefreshAddr;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l158;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l163;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l186;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_rValid;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_full_b_fire_6;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_1;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping;
    };
    struct {
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_io_pop_valid;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_1;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full;
        CData/*0:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_io_pop_valid;
        CData/*0:0*/ __VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4;
        CData/*0:0*/ __Vclklast__TOP__aclk;
        CData/*0:0*/ __Vclklast__TOP__aresetn;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4;
        CData/*0:0*/ __Vclklast__TOP__start;
        CData/*0:0*/ __Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4;
        SData/*8:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_1;
        SData/*8:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2;
        SData/*8:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l105_1;
        SData/*8:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l105_2;
        VL_IN(s_axis_payload,31,0);
        VL_OUT(m_axi_awaddr,31,0);
        VL_OUT(m_axi_wdata,31,0);
        VL_IN(startAddr,31,0);
        VL_IN(offset,31,0);
        IData/*31:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata;
        IData/*31:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_payload;
        IData/*31:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_transferDataType;
        IData/*31:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__offsetAddressReg;
        IData/*31:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_finalAddressReg;
        IData/*31:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_rData;
        IData/*31:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0;
        IData/*31:0*/ Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_logic_ram_port0;
        IData/*31:0*/ __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_finalAddressReg;
        VlUnpacked<IData/*31:0*/, 256> Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram;
        VlUnpacked<IData/*31:0*/, 256> Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root(const char* name);
    ~VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root();
    VL_UNCOPYABLE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
