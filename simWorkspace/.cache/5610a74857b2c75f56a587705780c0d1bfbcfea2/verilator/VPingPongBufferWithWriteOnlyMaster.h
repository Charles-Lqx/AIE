// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPingPongBufferWithWriteOnlyMaster_H_
#define _VPingPongBufferWithWriteOnlyMaster_H_

#include "verilated.h"

class VPingPongBufferWithWriteOnlyMaster__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VPingPongBufferWithWriteOnlyMaster) {
  public:
    
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
    VL_OUT(full_aw_payload_addr,31,0);
    VL_OUT(full_w_payload_data,31,0);
    VL_IN(offset,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputInterrupt,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg,1,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext,1,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l159,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l167,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l206,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l214,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l111,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__m_axi_wlast_regNext,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l119,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_aw_fire,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_b_fire_3,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value,7,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full,0,0);
    VL_SIG8(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid,0,0);
    VL_SIG16(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy,8,0);
    VL_SIG16(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy,8,0);
    VL_SIG16(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_1,8,0);
    VL_SIG16(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2,8,0);
    VL_SIG16(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_1,8,0);
    VL_SIG16(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2,8,0);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload,31,0);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata,31,0);
    VL_SIGW(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string,151,0,5);
    VL_SIGW(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string,151,0,5);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload,31,0);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_transferDataType,31,0);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram[256],31,0);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram[256],31,0);
    VL_SIG(PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram[256],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIGW(__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[4],151,0,5);
    static VL_ST_SIGW(__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[4],151,0,5);
    static VL_ST_SIG8(__Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[128],0,0);
    VL_SIG8(__Vtableidx1,1,0);
    VL_SIG8(__Vtableidx2,1,0);
    VL_SIG8(__Vtableidx3,6,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputInterrupt,0,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal,0,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg,1,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete,0,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1,0,0);
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2,0,0);
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal,0,0);
    VL_SIG8(__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4,0,0);
    VL_SIG8(__Vclklast__TOP__aclk,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1,0,0);
    VL_SIG8(__Vclklast__TOP__startIn,0,0);
    VL_SIG8(__Vclklast__TOP__aresetn,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4,0,0);
    VL_SIG8(__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
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
  public:
    static void _combo__TOP__11(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _combo__TOP__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
  private:
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
    static void _sequent__TOP__10(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void traceChgThis(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
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
    static void traceFullThis__12(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
