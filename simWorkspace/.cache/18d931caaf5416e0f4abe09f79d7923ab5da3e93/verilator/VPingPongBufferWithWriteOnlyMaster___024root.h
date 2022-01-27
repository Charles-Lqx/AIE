// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#ifndef VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER___024ROOT_H_
#define VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER___024ROOT_H_  // guard

#include "verilated.h"

class VPingPongBufferWithWriteOnlyMaster__Syms;
VL_MODULE(VPingPongBufferWithWriteOnlyMaster___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(startIn,0,0);
        VL_IN8(aresetn,0,0);
        VL_IN8(aclk,0,0);
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalReg;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
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
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferDepthReg;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willIncrement;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willClear;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_valueNext;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willIncrement;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willClear;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_valueNext;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_value;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal_regNext;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__realStartSignal;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__canReadData;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__readyForNextTransfer;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l223;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l228;
    };
    struct {
        CData/*1:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg;
        CData/*1:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l143;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l150;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l163;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__m_axi_wlast_regNext;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__burstLengthReg;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_newBurst;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l123;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_aw_fire;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_b_fire_3;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full;
        CData/*0:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid;
        CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1;
    };
    struct {
        CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalReg;
        CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4;
        CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2;
        CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
        CData/*0:0*/ __Vclklast__TOP__aclk;
        CData/*0:0*/ __Vclklast__TOP__aresetn;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1;
        CData/*0:0*/ __Vclklast__TOP__startIn;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalReg;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
        CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1;
        CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2;
        CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalReg;
        CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4;
        CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
        SData/*8:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_1;
        SData/*8:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2;
        SData/*8:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_1;
        SData/*8:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2;
        VL_IN(streamIn_payload,31,0);
        VL_IN(offset,31,0);
        VL_OUT(full_aw_payload_addr,31,0);
        VL_OUT(full_w_payload_data,31,0);
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_transferDataType;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startOffsetReg;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_rData;
        IData/*31:0*/ PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0;
        VlUnpacked<IData/*31:0*/, 256> PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram;
        VlUnpacked<IData/*31:0*/, 256> PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram;
        VlUnpacked<IData/*31:0*/, 256> PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VPingPongBufferWithWriteOnlyMaster__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPingPongBufferWithWriteOnlyMaster___024root(const char* name);
    ~VPingPongBufferWithWriteOnlyMaster___024root();
    VL_UNCOPYABLE(VPingPongBufferWithWriteOnlyMaster___024root);

    // INTERNAL METHODS
    void __Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
