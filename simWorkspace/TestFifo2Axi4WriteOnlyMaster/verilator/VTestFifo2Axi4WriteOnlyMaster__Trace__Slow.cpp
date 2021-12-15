// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestFifo2Axi4WriteOnlyMaster__Syms.h"


//======================

void VTestFifo2Axi4WriteOnlyMaster::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VTestFifo2Axi4WriteOnlyMaster::traceInit, &VTestFifo2Axi4WriteOnlyMaster::traceFull, &VTestFifo2Axi4WriteOnlyMaster::traceChg, this);
}
void VTestFifo2Axi4WriteOnlyMaster::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTestFifo2Axi4WriteOnlyMaster* t=(VTestFifo2Axi4WriteOnlyMaster*)userthis;
    VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTestFifo2Axi4WriteOnlyMaster::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTestFifo2Axi4WriteOnlyMaster* t=(VTestFifo2Axi4WriteOnlyMaster*)userthis;
    VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VTestFifo2Axi4WriteOnlyMaster::traceInitThis(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTestFifo2Axi4WriteOnlyMaster::traceFullThis(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTestFifo2Axi4WriteOnlyMaster::traceInitThis__1(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+95,"fifoInterface_valid",-1);
	vcdp->declBit  (c+96,"fifoInterface_ready",-1);
	vcdp->declBus  (c+97,"fifoInterface_payload",-1,31,0);
	vcdp->declBit  (c+98,"axi4WriteOnlyMasterInterface_aw_valid",-1);
	vcdp->declBit  (c+99,"axi4WriteOnlyMasterInterface_aw_ready",-1);
	vcdp->declBus  (c+100,"axi4WriteOnlyMasterInterface_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+101,"axi4WriteOnlyMasterInterface_aw_payload_id",-1,0,0);
	vcdp->declBus  (c+102,"axi4WriteOnlyMasterInterface_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+103,"axi4WriteOnlyMasterInterface_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+104,"axi4WriteOnlyMasterInterface_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+105,"axi4WriteOnlyMasterInterface_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+106,"axi4WriteOnlyMasterInterface_aw_payload_lock",-1,0,0);
	vcdp->declBus  (c+107,"axi4WriteOnlyMasterInterface_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+108,"axi4WriteOnlyMasterInterface_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+109,"axi4WriteOnlyMasterInterface_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+110,"axi4WriteOnlyMasterInterface_w_valid",-1);
	vcdp->declBit  (c+111,"axi4WriteOnlyMasterInterface_w_ready",-1);
	vcdp->declBus  (c+112,"axi4WriteOnlyMasterInterface_w_payload_data",-1,31,0);
	vcdp->declBus  (c+113,"axi4WriteOnlyMasterInterface_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+114,"axi4WriteOnlyMasterInterface_w_payload_last",-1);
	vcdp->declBit  (c+115,"axi4WriteOnlyMasterInterface_b_valid",-1);
	vcdp->declBit  (c+116,"axi4WriteOnlyMasterInterface_b_ready",-1);
	vcdp->declBus  (c+117,"axi4WriteOnlyMasterInterface_b_payload_id",-1,0,0);
	vcdp->declBus  (c+118,"axi4WriteOnlyMasterInterface_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+119,"resetn",-1);
	vcdp->declBit  (c+120,"clk",-1);
	vcdp->declBit  (c+95,"TestFifo2Axi4WriteOnlyMaster fifoInterface_valid",-1);
	vcdp->declBit  (c+1,"TestFifo2Axi4WriteOnlyMaster fifoInterface_ready",-1);
	vcdp->declBus  (c+97,"TestFifo2Axi4WriteOnlyMaster fifoInterface_payload",-1,31,0);
	vcdp->declBit  (c+21,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_valid",-1);
	vcdp->declBit  (c+99,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_ready",-1);
	vcdp->declBus  (c+121,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+135,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_id",-1,0,0);
	vcdp->declBus  (c+136,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+137,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+138,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+139,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+135,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_lock",-1,0,0);
	vcdp->declBus  (c+136,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+136,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+140,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+2,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_w_valid",-1);
	vcdp->declBit  (c+111,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_w_ready",-1);
	vcdp->declBus  (c+3,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_w_payload_data",-1,31,0);
	vcdp->declBus  (c+141,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+122,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_w_payload_last",-1);
	vcdp->declBit  (c+115,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_b_valid",-1);
	vcdp->declBit  (c+142,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_b_ready",-1);
	vcdp->declBus  (c+117,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_b_payload_id",-1,0,0);
	vcdp->declBus  (c+118,"TestFifo2Axi4WriteOnlyMaster axi4WriteOnlyMasterInterface_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+119,"TestFifo2Axi4WriteOnlyMaster resetn",-1);
	vcdp->declBit  (c+120,"TestFifo2Axi4WriteOnlyMaster clk",-1);
	vcdp->declBit  (c+4,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_fifoReady",-1);
	vcdp->declBit  (c+21,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awValid",-1);
	vcdp->declBus  (c+121,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awaddr",-1,31,0);
	vcdp->declBus  (c+135,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awid",-1,0,0);
	vcdp->declBus  (c+136,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awregion",-1,3,0);
	vcdp->declBus  (c+137,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awlen",-1,7,0);
	vcdp->declBus  (c+138,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awsize",-1,2,0);
	vcdp->declBus  (c+139,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awburst",-1,1,0);
	vcdp->declBus  (c+135,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awlock",-1,0,0);
	vcdp->declBus  (c+136,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awcache",-1,3,0);
	vcdp->declBus  (c+136,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awqos",-1,3,0);
	vcdp->declBus  (c+140,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_awprot",-1,2,0);
	vcdp->declBit  (c+2,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_wValid",-1);
	vcdp->declBus  (c+3,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_wdata",-1,31,0);
	vcdp->declBus  (c+141,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_wstrb",-1,3,0);
	vcdp->declBit  (c+122,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_wlast",-1);
	vcdp->declBit  (c+142,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection_bReady",-1);
	vcdp->declBit  (c+1,"TestFifo2Axi4WriteOnlyMaster fifoInstance_io_push_ready",-1);
	vcdp->declBit  (c+5,"TestFifo2Axi4WriteOnlyMaster fifoInstance_io_pop_valid",-1);
	vcdp->declBus  (c+62,"TestFifo2Axi4WriteOnlyMaster fifoInstance_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+6,"TestFifo2Axi4WriteOnlyMaster fifoInstance_io_occupancy",-1,5,0);
	vcdp->declBus  (c+7,"TestFifo2Axi4WriteOnlyMaster fifoInstance_io_availability",-1,5,0);
	vcdp->declBit  (c+95,"TestFifo2Axi4WriteOnlyMaster fifoInstance io_push_valid",-1);
	vcdp->declBit  (c+1,"TestFifo2Axi4WriteOnlyMaster fifoInstance io_push_ready",-1);
	vcdp->declBus  (c+97,"TestFifo2Axi4WriteOnlyMaster fifoInstance io_push_payload",-1,31,0);
	vcdp->declBit  (c+5,"TestFifo2Axi4WriteOnlyMaster fifoInstance io_pop_valid",-1);
	vcdp->declBit  (c+4,"TestFifo2Axi4WriteOnlyMaster fifoInstance io_pop_ready",-1);
	vcdp->declBus  (c+62,"TestFifo2Axi4WriteOnlyMaster fifoInstance io_pop_payload",-1,31,0);
	vcdp->declBit  (c+143,"TestFifo2Axi4WriteOnlyMaster fifoInstance io_flush",-1);
	vcdp->declBus  (c+6,"TestFifo2Axi4WriteOnlyMaster fifoInstance io_occupancy",-1,5,0);
	vcdp->declBus  (c+7,"TestFifo2Axi4WriteOnlyMaster fifoInstance io_availability",-1,5,0);
	vcdp->declBit  (c+120,"TestFifo2Axi4WriteOnlyMaster fifoInstance clk",-1);
	vcdp->declBit  (c+119,"TestFifo2Axi4WriteOnlyMaster fifoInstance resetn",-1);
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:132
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:133
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:134
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:135
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:136
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:137
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:138
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:139
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:140
	vcdp->declBit  (c+17,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+143,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+18,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_pushPtr_valueNext",-1,4,0);
	vcdp->declBus  (c+22,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_pushPtr_value",-1,4,0);
	vcdp->declBit  (c+23,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+15,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+8,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+143,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_popPtr_willClear",-1);
	vcdp->declBus  (c+20,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_popPtr_valueNext",-1,4,0);
	vcdp->declBus  (c+24,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_popPtr_value",-1,4,0);
	vcdp->declBit  (c+25,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+9,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+10,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_ptrMatch",-1);
	vcdp->declBit  (c+26,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_risingOccupancy",-1);
	vcdp->declBit  (c+19,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_pushing",-1);
	vcdp->declBit  (c+11,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_popping",-1);
	vcdp->declBit  (c+12,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_empty",-1);
	vcdp->declBit  (c+13,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_full",-1);
	// Tracing: TestFifo2Axi4WriteOnlyMaster fifoInstance _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:159
	vcdp->declBit  (c+16,"TestFifo2Axi4WriteOnlyMaster fifoInstance when_Stream_l933",-1);
	vcdp->declBus  (c+27,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_ptrDif",-1,4,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus  (c+63+i*1,"TestFifo2Axi4WriteOnlyMaster fifoInstance logic_ram",(i+0),31,0);}}
	vcdp->declBit  (c+5,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoValid",-1);
	vcdp->declBit  (c+4,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoReady",-1);
	vcdp->declBus  (c+62,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoPayload",-1,31,0);
	vcdp->declBit  (c+21,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awValid",-1);
	vcdp->declBit  (c+99,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awReady",-1);
	vcdp->declBus  (c+121,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awaddr",-1,31,0);
	vcdp->declBus  (c+143,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awid",-1,0,0);
	vcdp->declBus  (c+136,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awregion",-1,3,0);
	vcdp->declBus  (c+137,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awlen",-1,7,0);
	vcdp->declBus  (c+138,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awsize",-1,2,0);
	vcdp->declBus  (c+139,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awburst",-1,1,0);
	vcdp->declBus  (c+143,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awlock",-1,0,0);
	vcdp->declBus  (c+136,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awcache",-1,3,0);
	vcdp->declBus  (c+136,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awqos",-1,3,0);
	vcdp->declBus  (c+140,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection awprot",-1,2,0);
	vcdp->declBit  (c+2,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection wValid",-1);
	vcdp->declBit  (c+111,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection wReady",-1);
	vcdp->declBus  (c+3,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection wdata",-1,31,0);
	vcdp->declBus  (c+141,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection wstrb",-1,3,0);
	vcdp->declBit  (c+122,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection wlast",-1);
	vcdp->declBit  (c+115,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection bValid",-1);
	vcdp->declBit  (c+142,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection bReady",-1);
	vcdp->declBus  (c+117,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection bid",-1,0,0);
	vcdp->declBus  (c+118,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection bresp",-1,1,0);
	vcdp->declBit  (c+119,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection resetn",-1);
	vcdp->declBit  (c+120,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection clk",-1);
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz__zz_writeCounter_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:297
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz__zz_writeCounter_1_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:298
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz__zz_handshakeCounter_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:299
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz__zz_handshakeCounter_1_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:300
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz__zz_5 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:301
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_alignMask // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:302
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_base // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:303
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_base_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:304
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_baseIncr // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:305
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_wrapCase_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:306
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_wrapCase_2 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:307
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:308
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:309
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_2 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:310
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_3 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:311
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_4 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:312
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_5 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:313
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_6 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:314
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_7 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:315
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_8 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:316
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_9 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:317
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_10 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:318
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_11 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:319
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_result_12 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:320
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_wdata // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:321
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_wdata_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:322
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_writeCounter // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:323
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:324
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_writeCounter_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:325
	vcdp->declBus  (c+123,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection writeCounter",-1,5,0);
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_when_Axi4WriteOnlyMaster_l92 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:327
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_2 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:328
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_handshakeCounter // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:329
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_3 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:330
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_handshakeCounter_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:331
	vcdp->declBus  (c+124,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection handshakeCounter",-1,5,0);
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_when_Axi4WriteOnlyMaster_l54 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:333
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_4 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:334
	vcdp->declBus  (c+28,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_0",-1,31,0);
	vcdp->declBus  (c+29,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_1",-1,31,0);
	vcdp->declBus  (c+30,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_2",-1,31,0);
	vcdp->declBus  (c+31,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_3",-1,31,0);
	vcdp->declBus  (c+32,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_4",-1,31,0);
	vcdp->declBus  (c+33,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_5",-1,31,0);
	vcdp->declBus  (c+34,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_6",-1,31,0);
	vcdp->declBus  (c+35,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_7",-1,31,0);
	vcdp->declBus  (c+36,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_8",-1,31,0);
	vcdp->declBus  (c+37,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_9",-1,31,0);
	vcdp->declBus  (c+38,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_10",-1,31,0);
	vcdp->declBus  (c+39,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_11",-1,31,0);
	vcdp->declBus  (c+40,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_12",-1,31,0);
	vcdp->declBus  (c+41,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_13",-1,31,0);
	vcdp->declBus  (c+42,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_14",-1,31,0);
	vcdp->declBus  (c+43,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_15",-1,31,0);
	vcdp->declBus  (c+44,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_16",-1,31,0);
	vcdp->declBus  (c+45,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_17",-1,31,0);
	vcdp->declBus  (c+46,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_18",-1,31,0);
	vcdp->declBus  (c+47,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_19",-1,31,0);
	vcdp->declBus  (c+48,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_20",-1,31,0);
	vcdp->declBus  (c+49,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_21",-1,31,0);
	vcdp->declBus  (c+50,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_22",-1,31,0);
	vcdp->declBus  (c+51,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_23",-1,31,0);
	vcdp->declBus  (c+52,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_24",-1,31,0);
	vcdp->declBus  (c+53,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_25",-1,31,0);
	vcdp->declBus  (c+54,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_26",-1,31,0);
	vcdp->declBus  (c+55,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_27",-1,31,0);
	vcdp->declBus  (c+56,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_28",-1,31,0);
	vcdp->declBus  (c+57,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_29",-1,31,0);
	vcdp->declBus  (c+58,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_30",-1,31,0);
	vcdp->declBus  (c+59,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection fifoDataBuffer_31",-1,31,0);
	vcdp->declBit  (c+14,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection axi4Interface_fifo_fire",-1);
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_5 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:368
	vcdp->declBit  (c+125,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection when_Axi4WriteOnlyMaster_l54",-1);
	vcdp->declBus  (c+126,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection debugAddress",-1,31,0);
	vcdp->declBit  (c+127,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection axi4Interface_t_w_fire",-1);
	vcdp->declBus  (c+144,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection Axi4Incr_validSize",-1,1,0);
	vcdp->declBus  (c+128,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection Axi4Incr_result",-1,31,0);
	vcdp->declBus  (c+129,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection Axi4Incr_highCat",-1,19,0);
	vcdp->declBus  (c+145,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection Axi4Incr_sizeValue",-1,2,0);
	vcdp->declBus  (c+146,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection Axi4Incr_alignMask",-1,11,0);
	vcdp->declBus  (c+130,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection Axi4Incr_base",-1,11,0);
	vcdp->declBus  (c+131,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection Axi4Incr_baseIncr",-1,11,0);
	// Tracing: TestFifo2Axi4WriteOnlyMaster axi4Interconnection _zz_Axi4Incr_wrapCase // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:379
	vcdp->declBus  (c+147,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection Axi4Incr_wrapCase",-1,2,0);
	vcdp->declBit  (c+21,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection axi4Interface_controlAwValid",-1);
	vcdp->declBit  (c+60,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection axi4Interface_isTransferAfterReset",-1);
	vcdp->declBit  (c+132,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection axi4Interface_t_aw_fire",-1);
	vcdp->declBit  (c+133,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection when_Axi4WriteOnlyMaster_l92",-1);
	vcdp->declBus  (c+61,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection axi4Interface_initialAddress",-1,31,0);
	vcdp->declBit  (c+127,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection axi4Interface_t_w_fire_1",-1);
	vcdp->declBit  (c+134,"TestFifo2Axi4WriteOnlyMaster axi4Interconnection when_Axi4WriteOnlyMaster_l144",-1);
    }
}

void VTestFifo2Axi4WriteOnlyMaster::traceFullThis__1(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,((1U & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full)))));
	vcdp->fullBit  (c+2,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wValid));
	vcdp->fullBus  (c+3,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wdata),32);
	vcdp->fullBit  (c+4,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoReady));
	vcdp->fullBit  (c+5,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance_io_pop_valid));
	vcdp->fullBus  (c+6,(((((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy) 
				& (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch)) 
			       << 5U) | (0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
						  - (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value))))),6);
	vcdp->fullBus  (c+7,(((((~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy)) 
				& (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch)) 
			       << 5U) | (0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value) 
						  - (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value))))),6);
	vcdp->fullBit  (c+8,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement));
	vcdp->fullBit  (c+9,(((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value)) 
			      & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+10,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+11,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popping));
	vcdp->fullBit  (c+12,(((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+13,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full));
	vcdp->fullBit  (c+14,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_fifo_fire));
	vcdp->fullBit  (c+15,(((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value)) 
			       & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+16,(((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing) 
			       != (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popping))));
	vcdp->fullBit  (c+17,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+18,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext),5);
	vcdp->fullBit  (c+19,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing));
	vcdp->fullBus  (c+20,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext),5);
	vcdp->fullBit  (c+21,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_controlAwValid));
	vcdp->fullBus  (c+22,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value),5);
	vcdp->fullBit  (c+23,((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+24,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value),5);
	vcdp->fullBit  (c+25,((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+26,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+27,((0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
					- (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value)))),5);
	vcdp->fullBus  (c+28,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_0),32);
	vcdp->fullBus  (c+29,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_1),32);
	vcdp->fullBus  (c+30,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_2),32);
	vcdp->fullBus  (c+31,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_3),32);
	vcdp->fullBus  (c+32,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_4),32);
	vcdp->fullBus  (c+33,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_5),32);
	vcdp->fullBus  (c+34,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_6),32);
	vcdp->fullBus  (c+35,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_7),32);
	vcdp->fullBus  (c+36,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_8),32);
	vcdp->fullBus  (c+37,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_9),32);
	vcdp->fullBus  (c+38,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_10),32);
	vcdp->fullBus  (c+39,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_11),32);
	vcdp->fullBus  (c+40,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_12),32);
	vcdp->fullBus  (c+41,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_13),32);
	vcdp->fullBus  (c+42,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_14),32);
	vcdp->fullBus  (c+43,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_15),32);
	vcdp->fullBus  (c+44,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_16),32);
	vcdp->fullBus  (c+45,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_17),32);
	vcdp->fullBus  (c+46,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_18),32);
	vcdp->fullBus  (c+47,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_19),32);
	vcdp->fullBus  (c+48,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_20),32);
	vcdp->fullBus  (c+49,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_21),32);
	vcdp->fullBus  (c+50,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_22),32);
	vcdp->fullBus  (c+51,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_23),32);
	vcdp->fullBus  (c+52,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_24),32);
	vcdp->fullBus  (c+53,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_25),32);
	vcdp->fullBus  (c+54,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_26),32);
	vcdp->fullBus  (c+55,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_27),32);
	vcdp->fullBus  (c+56,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_28),32);
	vcdp->fullBus  (c+57,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_29),32);
	vcdp->fullBus  (c+58,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_30),32);
	vcdp->fullBus  (c+59,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_31),32);
	vcdp->fullBit  (c+60,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_isTransferAfterReset));
	vcdp->fullBus  (c+61,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_initialAddress),32);
	vcdp->fullBus  (c+62,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_logic_ram_port0),32);
	vcdp->fullBus  (c+63,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[0]),32);
	vcdp->fullBus  (c+64,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[1]),32);
	vcdp->fullBus  (c+65,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[2]),32);
	vcdp->fullBus  (c+66,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[3]),32);
	vcdp->fullBus  (c+67,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[4]),32);
	vcdp->fullBus  (c+68,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[5]),32);
	vcdp->fullBus  (c+69,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[6]),32);
	vcdp->fullBus  (c+70,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[7]),32);
	vcdp->fullBus  (c+71,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[8]),32);
	vcdp->fullBus  (c+72,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[9]),32);
	vcdp->fullBus  (c+73,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[10]),32);
	vcdp->fullBus  (c+74,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[11]),32);
	vcdp->fullBus  (c+75,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[12]),32);
	vcdp->fullBus  (c+76,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[13]),32);
	vcdp->fullBus  (c+77,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[14]),32);
	vcdp->fullBus  (c+78,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[15]),32);
	vcdp->fullBus  (c+79,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[16]),32);
	vcdp->fullBus  (c+80,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[17]),32);
	vcdp->fullBus  (c+81,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[18]),32);
	vcdp->fullBus  (c+82,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[19]),32);
	vcdp->fullBus  (c+83,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[20]),32);
	vcdp->fullBus  (c+84,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[21]),32);
	vcdp->fullBus  (c+85,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[22]),32);
	vcdp->fullBus  (c+86,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[23]),32);
	vcdp->fullBus  (c+87,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[24]),32);
	vcdp->fullBus  (c+88,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[25]),32);
	vcdp->fullBus  (c+89,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[26]),32);
	vcdp->fullBus  (c+90,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[27]),32);
	vcdp->fullBus  (c+91,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[28]),32);
	vcdp->fullBus  (c+92,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[29]),32);
	vcdp->fullBus  (c+93,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[30]),32);
	vcdp->fullBus  (c+94,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[31]),32);
	vcdp->fullBit  (c+95,(vlTOPp->fifoInterface_valid));
	vcdp->fullBit  (c+96,(vlTOPp->fifoInterface_ready));
	vcdp->fullBus  (c+97,(vlTOPp->fifoInterface_payload),32);
	vcdp->fullBit  (c+98,(vlTOPp->axi4WriteOnlyMasterInterface_aw_valid));
	vcdp->fullBit  (c+99,(vlTOPp->axi4WriteOnlyMasterInterface_aw_ready));
	vcdp->fullBus  (c+100,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_addr),32);
	vcdp->fullBus  (c+101,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_id),1);
	vcdp->fullBus  (c+102,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_region),4);
	vcdp->fullBus  (c+103,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_len),8);
	vcdp->fullBus  (c+104,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_size),3);
	vcdp->fullBus  (c+105,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_burst),2);
	vcdp->fullBus  (c+106,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_lock),1);
	vcdp->fullBus  (c+107,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_cache),4);
	vcdp->fullBus  (c+108,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_qos),4);
	vcdp->fullBus  (c+109,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_prot),3);
	vcdp->fullBit  (c+110,(vlTOPp->axi4WriteOnlyMasterInterface_w_valid));
	vcdp->fullBit  (c+111,(vlTOPp->axi4WriteOnlyMasterInterface_w_ready));
	vcdp->fullBus  (c+112,(vlTOPp->axi4WriteOnlyMasterInterface_w_payload_data),32);
	vcdp->fullBus  (c+113,(vlTOPp->axi4WriteOnlyMasterInterface_w_payload_strb),4);
	vcdp->fullBit  (c+114,(vlTOPp->axi4WriteOnlyMasterInterface_w_payload_last));
	vcdp->fullBit  (c+115,(vlTOPp->axi4WriteOnlyMasterInterface_b_valid));
	vcdp->fullBit  (c+116,(vlTOPp->axi4WriteOnlyMasterInterface_b_ready));
	vcdp->fullBus  (c+117,(vlTOPp->axi4WriteOnlyMasterInterface_b_payload_id),1);
	vcdp->fullBus  (c+118,(vlTOPp->axi4WriteOnlyMasterInterface_b_payload_resp),2);
	vcdp->fullBit  (c+119,(vlTOPp->resetn));
	vcdp->fullBit  (c+120,(vlTOPp->clk));
	vcdp->fullBus  (c+121,(((0x20U == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter))
				 ? vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress
				 : vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_initialAddress)),32);
	vcdp->fullBit  (c+122,((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter))));
	vcdp->fullBus  (c+123,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter),6);
	vcdp->fullBus  (c+124,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.handshakeCounter),6);
	vcdp->fullBit  (c+125,((0x20U != (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.handshakeCounter))));
	vcdp->fullBus  (c+126,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress),32);
	vcdp->fullBit  (c+127,(((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wValid) 
				& (IData)(vlTOPp->axi4WriteOnlyMasterInterface_w_ready))));
	vcdp->fullBus  (c+128,(((0xfffff000U & vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress) 
				| (0xfffU & ((IData)(4U) 
					     + (0xffcU 
						& vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress))))),32);
	vcdp->fullBus  (c+129,((0xfffffU & (vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress 
					    >> 0xcU))),20);
	vcdp->fullBus  (c+130,((0xffcU & vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress)),12);
	vcdp->fullBus  (c+131,((0xfffU & ((IData)(4U) 
					  + (0xffcU 
					     & vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress)))),12);
	vcdp->fullBit  (c+132,(((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_controlAwValid) 
				& (IData)(vlTOPp->axi4WriteOnlyMasterInterface_aw_ready))));
	vcdp->fullBit  (c+133,(((0x20U == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter)) 
				| (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_isTransferAfterReset))));
	vcdp->fullBit  (c+134,((((0U < (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.handshakeCounter)) 
				 & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter) 
				    < (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.handshakeCounter))) 
				& (0x20U != (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter)))));
	vcdp->fullBus  (c+135,(0U),1);
	vcdp->fullBus  (c+136,(0U),4);
	vcdp->fullBus  (c+137,(0x1fU),8);
	vcdp->fullBus  (c+138,(2U),3);
	vcdp->fullBus  (c+139,(1U),2);
	vcdp->fullBus  (c+140,(0U),3);
	vcdp->fullBus  (c+141,(0xfU),4);
	vcdp->fullBit  (c+142,(1U));
	vcdp->fullBit  (c+143,(0U));
	vcdp->fullBus  (c+144,(2U),2);
	vcdp->fullBus  (c+145,(4U),3);
	vcdp->fullBus  (c+146,(3U),12);
	vcdp->fullBus  (c+147,(5U),3);
    }
}
