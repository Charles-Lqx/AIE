// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"


//======================

void VPingPongBufferWithWriteOnlyMaster::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPingPongBufferWithWriteOnlyMaster* t=(VPingPongBufferWithWriteOnlyMaster*)userthis;
    VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VPingPongBufferWithWriteOnlyMaster::traceChgThis(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 4U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready));
	vcdp->chgBit  (c+2,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_valid));
	vcdp->chgBus  (c+3,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_data),32);
	vcdp->chgBit  (c+4,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_last));
	vcdp->chgBit  (c+5,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid));
	vcdp->chgBit  (c+6,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid));
	vcdp->chgBit  (c+7,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal));
	vcdp->chgBit  (c+8,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal));
	vcdp->chgBit  (c+9,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal));
	vcdp->chgBus  (c+10,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext),2);
	vcdp->chgBit  (c+11,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l159));
	vcdp->chgBit  (c+12,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l167));
	vcdp->chgBit  (c+13,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l206));
	vcdp->chgBit  (c+14,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l214));
	vcdp->chgBit  (c+15,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l111));
	vcdp->chgArray(c+16,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string),152);
	vcdp->chgBit  (c+21,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+22,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext),7);
	vcdp->chgBit  (c+23,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+24,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext),7);
	vcdp->chgBit  (c+25,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing));
	vcdp->chgBit  (c+26,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping));
	vcdp->chgBit  (c+27,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) 
			      != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping))));
	vcdp->chgBit  (c+28,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+29,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext),7);
	vcdp->chgBit  (c+30,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+31,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext),7);
	vcdp->chgBit  (c+32,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing));
	vcdp->chgBit  (c+33,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping));
	vcdp->chgBit  (c+34,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) 
			      != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping))));
	vcdp->chgBit  (c+35,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid));
	vcdp->chgBus  (c+36,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload),32);
	vcdp->chgBit  (c+37,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready));
	vcdp->chgBit  (c+38,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93));
	vcdp->chgBit  (c+39,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156));
	vcdp->chgBit  (c+40,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+41,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext),8);
	vcdp->chgBit  (c+42,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+43,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext),8);
	vcdp->chgBit  (c+44,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing));
	vcdp->chgBit  (c+45,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping));
	vcdp->chgBit  (c+46,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) 
			      != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping))));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+47,(((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_last)) 
			      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_w_payload_last_regNext))));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+48,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
			       ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal) 
				  & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))
			       : ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
				   ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) 
				      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))
				   : ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) 
				      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))))));
	vcdp->chgBit  (c+49,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
			      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready))));
	vcdp->chgBit  (c+50,(((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
			      & ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready)))));
	vcdp->chgBit  (c+51,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid) 
			      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))));
	vcdp->chgBit  (c+52,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid) 
			      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))));
	vcdp->chgBit  (c+53,(((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+54,(((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+55,(((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+56,(((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+57,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
			      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->chgBit  (c+58,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+59,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement))));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+60,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
			       ? (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid)
			       : ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
				  & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid)))));
	vcdp->chgBus  (c+61,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_streamOut_payload),32);
	vcdp->chgBit  (c+62,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))));
	vcdp->chgBit  (c+63,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid));
	vcdp->chgBus  (c+64,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy),8);
	vcdp->chgBus  (c+65,(((((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch)) 
			       << 7U) | (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value) 
						  - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))))),8);
	vcdp->chgBit  (c+66,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))));
	vcdp->chgBit  (c+67,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid));
	vcdp->chgBus  (c+68,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy),8);
	vcdp->chgBus  (c+69,(((((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch)) 
			       << 7U) | (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value) 
						  - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))))),8);
	vcdp->chgBit  (c+70,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart));
	vcdp->chgArray(c+71,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string),152);
	vcdp->chgBit  (c+76,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+77,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+78,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full));
	vcdp->chgBit  (c+79,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+80,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+81,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full));
	vcdp->chgBit  (c+82,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->chgBit  (c+83,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid));
	vcdp->chgBus  (c+84,(((((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
						  - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))))),9);
	vcdp->chgBus  (c+85,(((((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value) 
						  - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))))),9);
	vcdp->chgBit  (c+86,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+87,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+88,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__6(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+89,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete));
	vcdp->chgBus  (c+90,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0),32);
	vcdp->chgBus  (c+91,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0),32);
	vcdp->chgBus  (c+92,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0),32);
	vcdp->chgBit  (c+93,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_w_payload_last_regNext));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__7(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+94,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__8(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+95,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputInterrupt));
	vcdp->chgBit  (c+96,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal));
	vcdp->chgBit  (c+97,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal));
	vcdp->chgBit  (c+98,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady));
	vcdp->chgBus  (c+99,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg),2);
	vcdp->chgBit  (c+100,((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))));
	vcdp->chgBit  (c+101,((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))));
	vcdp->chgBus  (c+102,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value),7);
	vcdp->chgBit  (c+103,((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+104,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value),7);
	vcdp->chgBit  (c+105,((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+106,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+107,((0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
					- (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)))),7);
	vcdp->chgBus  (c+108,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value),7);
	vcdp->chgBit  (c+109,((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+110,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value),7);
	vcdp->chgBit  (c+111,((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+112,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+113,((0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
					- (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)))),7);
	vcdp->chgBit  (c+114,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset));
	vcdp->chgBit  (c+115,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete));
	vcdp->chgBus  (c+116,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value),8);
	vcdp->chgBit  (c+117,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+118,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value),8);
	vcdp->chgBit  (c+119,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+120,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+121,((0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
					- (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)))),8);
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__9(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+122,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__10(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+123,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__11(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+124,(vlTOPp->streamIn_valid));
	vcdp->chgBit  (c+125,(vlTOPp->streamIn_ready));
	vcdp->chgBus  (c+126,(vlTOPp->streamIn_payload),32);
	vcdp->chgBit  (c+127,(vlTOPp->startIn));
	vcdp->chgBus  (c+128,(vlTOPp->bufferDepthIn),8);
	vcdp->chgBit  (c+129,(vlTOPp->interruptOut));
	vcdp->chgBit  (c+130,(vlTOPp->full_aw_valid));
	vcdp->chgBit  (c+131,(vlTOPp->full_aw_ready));
	vcdp->chgBus  (c+132,(vlTOPp->full_aw_payload_addr),32);
	vcdp->chgBus  (c+133,(vlTOPp->full_aw_payload_region),4);
	vcdp->chgBus  (c+134,(vlTOPp->full_aw_payload_len),8);
	vcdp->chgBus  (c+135,(vlTOPp->full_aw_payload_size),3);
	vcdp->chgBus  (c+136,(vlTOPp->full_aw_payload_burst),2);
	vcdp->chgBus  (c+137,(vlTOPp->full_aw_payload_cache),4);
	vcdp->chgBus  (c+138,(vlTOPp->full_aw_payload_qos),4);
	vcdp->chgBus  (c+139,(vlTOPp->full_aw_payload_prot),3);
	vcdp->chgBit  (c+140,(vlTOPp->full_w_valid));
	vcdp->chgBit  (c+141,(vlTOPp->full_w_ready));
	vcdp->chgBus  (c+142,(vlTOPp->full_w_payload_data),32);
	vcdp->chgBus  (c+143,(vlTOPp->full_w_payload_strb),4);
	vcdp->chgBit  (c+144,(vlTOPp->full_w_payload_last));
	vcdp->chgBit  (c+145,(vlTOPp->full_b_valid));
	vcdp->chgBit  (c+146,(vlTOPp->full_b_ready));
	vcdp->chgBus  (c+147,(vlTOPp->full_b_payload_resp),2);
	vcdp->chgBus  (c+148,(vlTOPp->offset),32);
	vcdp->chgBit  (c+149,(vlTOPp->aresetn));
	vcdp->chgBit  (c+150,(vlTOPp->aclk));
	vcdp->chgBus  (c+151,((0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					- (IData)(1U)))),8);
	vcdp->chgBus  (c+152,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
			        ? 0U : ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
					 ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal)
					     ? vlTOPp->streamIn_payload
					     : 0U) : 
					((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal)
					  ? vlTOPp->streamIn_payload
					  : 0U)))),32);
	vcdp->chgBus  (c+153,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
			        ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal)
				    ? vlTOPp->streamIn_payload
				    : 0U) : 0U)),32);
	vcdp->chgBit  (c+154,(((0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					 - (IData)(1U))) 
			       <= (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy))));
	vcdp->chgBit  (c+155,(((0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					 - (IData)(1U))) 
			       <= (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy))));
	vcdp->chgBit  (c+156,(((IData)(vlTOPp->full_b_valid) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady))));
	vcdp->chgBit  (c+157,((((IData)(vlTOPp->full_b_valid) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady)) 
			       | (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset))));
	vcdp->chgBit  (c+158,(((IData)(vlTOPp->aresetn) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal))));
	vcdp->chgBit  (c+159,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal) 
			       & (IData)(vlTOPp->full_aw_ready))));
	vcdp->chgBit  (c+160,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_valid) 
			       & (IData)(vlTOPp->full_w_ready))));
    }
}
