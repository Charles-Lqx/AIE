// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VPingPongBufferWithWriteOnlyMaster::VPingPongBufferWithWriteOnlyMaster(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPingPongBufferWithWriteOnlyMaster__Syms(_vcontextp__, _vcname__, this)}
    , startIn{vlSymsp->TOP.startIn}
    , aresetn{vlSymsp->TOP.aresetn}
    , aclk{vlSymsp->TOP.aclk}
    , streamIn_valid{vlSymsp->TOP.streamIn_valid}
    , streamIn_ready{vlSymsp->TOP.streamIn_ready}
    , bufferDepthIn{vlSymsp->TOP.bufferDepthIn}
    , interruptOut{vlSymsp->TOP.interruptOut}
    , pathNumb{vlSymsp->TOP.pathNumb}
    , full_aw_valid{vlSymsp->TOP.full_aw_valid}
    , full_aw_ready{vlSymsp->TOP.full_aw_ready}
    , full_aw_payload_region{vlSymsp->TOP.full_aw_payload_region}
    , full_aw_payload_len{vlSymsp->TOP.full_aw_payload_len}
    , full_aw_payload_size{vlSymsp->TOP.full_aw_payload_size}
    , full_aw_payload_burst{vlSymsp->TOP.full_aw_payload_burst}
    , full_aw_payload_cache{vlSymsp->TOP.full_aw_payload_cache}
    , full_aw_payload_qos{vlSymsp->TOP.full_aw_payload_qos}
    , full_aw_payload_prot{vlSymsp->TOP.full_aw_payload_prot}
    , full_w_valid{vlSymsp->TOP.full_w_valid}
    , full_w_ready{vlSymsp->TOP.full_w_ready}
    , full_w_payload_strb{vlSymsp->TOP.full_w_payload_strb}
    , full_w_payload_last{vlSymsp->TOP.full_w_payload_last}
    , full_b_valid{vlSymsp->TOP.full_b_valid}
    , full_b_ready{vlSymsp->TOP.full_b_ready}
    , full_b_payload_resp{vlSymsp->TOP.full_b_payload_resp}
    , streamIn_payload{vlSymsp->TOP.streamIn_payload}
    , startAddr{vlSymsp->TOP.startAddr}
    , offset{vlSymsp->TOP.offset}
    , full_aw_payload_addr{vlSymsp->TOP.full_aw_payload_addr}
    , full_w_payload_data{vlSymsp->TOP.full_w_payload_data}
    , PingPongBufferWithWriteOnlyMaster{vlSymsp->TOP.PingPongBufferWithWriteOnlyMaster}
    , rootp{&(vlSymsp->TOP)}
{
}

VPingPongBufferWithWriteOnlyMaster::VPingPongBufferWithWriteOnlyMaster(const char* _vcname__)
    : VPingPongBufferWithWriteOnlyMaster(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPingPongBufferWithWriteOnlyMaster::~VPingPongBufferWithWriteOnlyMaster() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPingPongBufferWithWriteOnlyMaster___024root___eval_initial(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf);
void VPingPongBufferWithWriteOnlyMaster___024root___eval_settle(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf);
void VPingPongBufferWithWriteOnlyMaster___024root___eval(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf);
QData VPingPongBufferWithWriteOnlyMaster___024root___change_request(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf);
#ifdef VL_DEBUG
void VPingPongBufferWithWriteOnlyMaster___024root___eval_debug_assertions(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf);
#endif  // VL_DEBUG
void VPingPongBufferWithWriteOnlyMaster___024root___final(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf);

static void _eval_initial_loop(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPingPongBufferWithWriteOnlyMaster___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPingPongBufferWithWriteOnlyMaster___024root___eval_settle(&(vlSymsp->TOP));
        VPingPongBufferWithWriteOnlyMaster___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPingPongBufferWithWriteOnlyMaster___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPingPongBufferWithWriteOnlyMaster___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPingPongBufferWithWriteOnlyMaster::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPingPongBufferWithWriteOnlyMaster::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPingPongBufferWithWriteOnlyMaster___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPingPongBufferWithWriteOnlyMaster___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPingPongBufferWithWriteOnlyMaster___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v", 7, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPingPongBufferWithWriteOnlyMaster___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VPingPongBufferWithWriteOnlyMaster::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPingPongBufferWithWriteOnlyMaster::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster::final() {
    VPingPongBufferWithWriteOnlyMaster___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VPingPongBufferWithWriteOnlyMaster___024root__trace_init_top(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPingPongBufferWithWriteOnlyMaster___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPingPongBufferWithWriteOnlyMaster___024root*>(voidSelf);
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPingPongBufferWithWriteOnlyMaster___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_register(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPingPongBufferWithWriteOnlyMaster___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
