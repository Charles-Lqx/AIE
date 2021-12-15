// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFifo2Axi4WriteMasterInterface.h for the primary calling header

#ifndef _VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface_H_
#define _VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface_H_

#include "verilated.h"
#include "VFifo2Axi4WriteMasterInterface__Dpi.h"

class VFifo2Axi4WriteMasterInterface__Syms;
class VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface;
class VerilatedVcd;

//----------

VL_MODULE(VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface) {
  public:
    // CELLS
    VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface*	axi4Interconnection;
    
    // PORTS
    VL_IN8(reset,0,0);
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
    VL_OUT8(ar_valid,0,0);
    VL_IN8(ar_ready,0,0);
    VL_OUT8(ar_payload_region,3,0);
    VL_OUT8(ar_payload_len,7,0);
    VL_OUT8(ar_payload_size,2,0);
    VL_OUT8(ar_payload_burst,1,0);
    VL_OUT8(ar_payload_cache,3,0);
    VL_OUT8(ar_payload_qos,3,0);
    VL_OUT8(ar_payload_prot,2,0);
    VL_IN8(r_valid,0,0);
    VL_OUT8(r_ready,0,0);
    VL_IN8(r_payload_resp,1,0);
    VL_IN8(r_payload_last,0,0);
    VL_IN(fifoInterface_payload,31,0);
    VL_OUT(aw_payload_addr,31,0);
    VL_OUT(w_payload_data,31,0);
    VL_OUT(ar_payload_addr,31,0);
    VL_IN(r_payload_data,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__fifoInstance_io_pop_valid,0,0);
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
    VL_SIG(__PVT__fifoInstance__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(__PVT__fifoInstance__DOT__logic_ram[256],31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0,7,0);
    VL_SIG8(__Vdlyvset__fifoInstance__DOT__logic_ram__v0,0,0);
    VL_SIG(__Vdlyvval__fifoInstance__DOT__logic_ram__v0,31,0);
    
    // INTERNAL VARIABLES
  private:
    VFifo2Axi4WriteMasterInterface__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface& operator= (const VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface&);  ///< Copying not allowed
    VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface(const VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface&);  ///< Copying not allowed
  public:
    VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface(const char* name="TOP");
    ~VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VFifo2Axi4WriteMasterInterface__Syms* symsp, bool first);
    static void _combo__TOP__Fifo2Axi4WriteMasterInterface__5(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__2(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__3(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__4(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__6(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Fifo2Axi4WriteMasterInterface__7(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void _settle__TOP__Fifo2Axi4WriteMasterInterface__1(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
