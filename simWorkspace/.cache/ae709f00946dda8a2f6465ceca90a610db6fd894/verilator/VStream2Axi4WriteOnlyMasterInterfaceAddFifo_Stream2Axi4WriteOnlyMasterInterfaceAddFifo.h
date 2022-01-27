// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#ifndef VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_STREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_H_
#define VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_STREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_H_  // guard

#include "verilated.h"

class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms;
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface;

VL_MODULE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo) {
  public:
    // CELLS
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface* axi4Interconnection;

    // DESIGN SPECIFIC STATE
    VL_IN8(aresetn,0,0);
    VL_IN8(aclk,0,0);
    VL_IN8(s_axis_valid,0,0);
    VL_OUT8(s_axis_ready,0,0);
    VL_OUT8(m_axi_awvalid,0,0);
    VL_IN8(m_axi_awready,0,0);
    VL_OUT8(__PVT__m_axi_awregion,3,0);
    VL_OUT8(m_axi_awlen,7,0);
    VL_OUT8(__PVT__m_axi_awsize,2,0);
    VL_OUT8(__PVT__m_axi_awburst,1,0);
    VL_OUT8(__PVT__m_axi_awcache,3,0);
    VL_OUT8(__PVT__m_axi_awqos,3,0);
    VL_OUT8(__PVT__m_axi_awprot,2,0);
    VL_OUT8(m_axi_wvalid,0,0);
    VL_IN8(m_axi_wready,0,0);
    VL_OUT8(__PVT__m_axi_wstrb,3,0);
    VL_OUT8(m_axi_wlast,0,0);
    VL_IN8(m_axi_bvalid,0,0);
    VL_OUT8(m_axi_bready,0,0);
    VL_IN8(m_axi_bresp,1,0);
    VL_IN8(start,0,0);
    VL_IN8(burstLen,7,0);
    VL_IN8(pathNumb,7,0);
    VL_OUT8(transInterrupt,0,0);
    CData/*0:0*/ __PVT__fifoInstance_io_pop_valid;
    CData/*0:0*/ __PVT__fifoInstance__DOT___zz_1;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_pushPtr_willIncrement;
    CData/*7:0*/ __PVT__fifoInstance__DOT__logic_pushPtr_valueNext;
    CData/*7:0*/ __PVT__fifoInstance__DOT__logic_pushPtr_value;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_popPtr_willIncrement;
    CData/*7:0*/ __PVT__fifoInstance__DOT__logic_popPtr_valueNext;
    CData/*7:0*/ __PVT__fifoInstance__DOT__logic_popPtr_value;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_ptrMatch;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_risingOccupancy;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_pushing;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_popping;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_full;
    CData/*0:0*/ __PVT__fifoInstance__DOT___zz_io_pop_valid;
    VL_IN(s_axis_payload,31,0);
    VL_OUT(m_axi_awaddr,31,0);
    VL_OUT(m_axi_wdata,31,0);
    VL_IN(startAddr,31,0);
    VL_IN(offset,31,0);
    IData/*31:0*/ __PVT__fifoInstance__DOT___zz_logic_ram_port0;
    VlUnpacked<IData/*31:0*/, 256> __PVT__fifoInstance__DOT__logic_ram;

    // INTERNAL VARIABLES
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo(const char* name);
    ~VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo();
    VL_UNCOPYABLE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo);

    // INTERNAL METHODS
    void __Vconfigure(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
