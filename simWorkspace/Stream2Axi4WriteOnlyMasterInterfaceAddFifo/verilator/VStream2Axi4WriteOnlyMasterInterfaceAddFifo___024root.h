// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#ifndef VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO___024ROOT_H_
#define VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO___024ROOT_H_  // guard

#include "verilated.h"

class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms;
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo;

VL_MODULE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root) {
  public:
    // CELLS
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo* Stream2Axi4WriteOnlyMasterInterfaceAddFifo;

    // DESIGN SPECIFIC STATE
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
    VL_IN8(pathNumb,7,0);
    VL_OUT8(transInterrupt,0,0);
    CData/*0:0*/ __VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4;
    CData/*0:0*/ __Vclklast__TOP__aclk;
    CData/*0:0*/ __Vclklast__TOP__aresetn;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4;
    CData/*0:0*/ __Vclklast__TOP__start;
    CData/*0:0*/ __Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection___zz_4;
    VL_IN(s_axis_payload,31,0);
    VL_OUT(m_axi_awaddr,31,0);
    VL_OUT(m_axi_wdata,31,0);
    VL_IN(startAddr,31,0);
    VL_IN(offset,31,0);
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

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
