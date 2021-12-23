// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"


//======================

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* t=(VStream2Axi4WriteOnlyMasterInterfaceAddFifo*)userthis;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
					      >> 3U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
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
	vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready));
	vcdp->chgBit  (c+2,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid));
	vcdp->chgBus  (c+3,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata),32);
	vcdp->chgBit  (c+4,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast));
	vcdp->chgBit  (c+5,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid));
	vcdp->chgBus  (c+6,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_payload),32);
	vcdp->chgBit  (c+7,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_ready));
	vcdp->chgBit  (c+8,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l93));
	vcdp->chgBit  (c+9,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l156));
	vcdp->chgBit  (c+10,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+11,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_valueNext),8);
	vcdp->chgBit  (c+12,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+13,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext),8);
	vcdp->chgBit  (c+14,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing));
	vcdp->chgBit  (c+15,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping));
	vcdp->chgBit  (c+16,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing) 
			      != (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping))));
	vcdp->chgBit  (c+17,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+18,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_valueNext),8);
	vcdp->chgBit  (c+19,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+20,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_valueNext),8);
	vcdp->chgBit  (c+21,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing));
	vcdp->chgBit  (c+22,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping));
	vcdp->chgBit  (c+23,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing) 
			      != (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping))));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+24,(((~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast)) 
			      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__m_axi_wlast_regNext))));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+25,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid) 
			      & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)))));
	vcdp->chgBit  (c+26,(((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+27,(((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+28,(((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+29,(((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement))));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+30,((1U & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full)))));
	vcdp->chgBit  (c+31,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid));
	vcdp->chgBus  (c+32,(((((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value) 
						  - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value))))),9);
	vcdp->chgBus  (c+33,(((((~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value) 
						  - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value))))),9);
	vcdp->chgBit  (c+34,((1U & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)))));
	vcdp->chgBit  (c+35,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid));
	vcdp->chgBus  (c+36,(((((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value) 
						  - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value))))),9);
	vcdp->chgBus  (c+37,(((((~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value) 
						  - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value))))),9);
	vcdp->chgBit  (c+38,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+39,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+40,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full));
	vcdp->chgBit  (c+41,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+42,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+43,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__6(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+44,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete));
	vcdp->chgBus  (c+45,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_logic_ram_port0),32);
	vcdp->chgBus  (c+46,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0),32);
	vcdp->chgBit  (c+47,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__m_axi_wlast_regNext));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__7(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+48,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal));
	vcdp->chgBit  (c+49,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady));
	vcdp->chgBit  (c+50,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isTransferAfterReset));
	vcdp->chgBit  (c+51,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete));
	vcdp->chgBus  (c+52,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value),8);
	vcdp->chgBit  (c+53,((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+54,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value),8);
	vcdp->chgBit  (c+55,((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+56,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+57,((0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value) 
				       - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value)))),8);
	vcdp->chgBus  (c+58,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value),8);
	vcdp->chgBit  (c+59,((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+60,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value),8);
	vcdp->chgBit  (c+61,((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+62,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+63,((0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value) 
				       - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value)))),8);
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__8(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+64,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__9(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+65,(vlTOPp->s_axis_valid));
	vcdp->chgBit  (c+66,(vlTOPp->s_axis_ready));
	vcdp->chgBus  (c+67,(vlTOPp->s_axis_payload),32);
	vcdp->chgBit  (c+68,(vlTOPp->m_axi_awvalid));
	vcdp->chgBit  (c+69,(vlTOPp->m_axi_awready));
	vcdp->chgBus  (c+70,(vlTOPp->m_axi_awaddr),32);
	vcdp->chgBus  (c+71,(vlTOPp->m_axi_awregion),4);
	vcdp->chgBus  (c+72,(vlTOPp->m_axi_awlen),8);
	vcdp->chgBus  (c+73,(vlTOPp->m_axi_awsize),3);
	vcdp->chgBus  (c+74,(vlTOPp->m_axi_awburst),2);
	vcdp->chgBus  (c+75,(vlTOPp->m_axi_awcache),4);
	vcdp->chgBus  (c+76,(vlTOPp->m_axi_awqos),4);
	vcdp->chgBus  (c+77,(vlTOPp->m_axi_awprot),3);
	vcdp->chgBit  (c+78,(vlTOPp->m_axi_wvalid));
	vcdp->chgBit  (c+79,(vlTOPp->m_axi_wready));
	vcdp->chgBus  (c+80,(vlTOPp->m_axi_wdata),32);
	vcdp->chgBus  (c+81,(vlTOPp->m_axi_wstrb),4);
	vcdp->chgBit  (c+82,(vlTOPp->m_axi_wlast));
	vcdp->chgBit  (c+83,(vlTOPp->m_axi_bvalid));
	vcdp->chgBit  (c+84,(vlTOPp->m_axi_bready));
	vcdp->chgBus  (c+85,(vlTOPp->m_axi_bresp),2);
	vcdp->chgBit  (c+86,(vlTOPp->aresetn));
	vcdp->chgBit  (c+87,(vlTOPp->start));
	vcdp->chgBus  (c+88,(vlTOPp->burstLen),8);
	vcdp->chgBus  (c+89,(vlTOPp->offset),32);
	vcdp->chgBit  (c+90,(vlTOPp->transInterrupt));
	vcdp->chgBit  (c+91,(vlTOPp->aclk));
	vcdp->chgBus  (c+92,((0xffU & ((IData)(vlTOPp->burstLen) 
				       - (IData)(1U)))),8);
	vcdp->chgBit  (c+93,(((IData)(vlTOPp->m_axi_bvalid) 
			      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady))));
	vcdp->chgBit  (c+94,((((IData)(vlTOPp->m_axi_bvalid) 
			       & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady)) 
			      | (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isTransferAfterReset))));
	vcdp->chgBit  (c+95,(((IData)(vlTOPp->aresetn) 
			      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal))));
	vcdp->chgBit  (c+96,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal) 
			      & (IData)(vlTOPp->m_axi_awready))));
	vcdp->chgBit  (c+97,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid) 
			      & (IData)(vlTOPp->m_axi_wready))));
    }
}
