// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_H_
#define VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms;
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root;
class VerilatedVcdC;
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo;


// This class is the main interface to the Verilated model
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&aresetn,0,0);
    VL_IN8(&start,0,0);
    VL_IN8(&aclk,0,0);
    VL_IN8(&s_axis_valid,0,0);
    VL_OUT8(&s_axis_ready,0,0);
    VL_OUT8(&m_axi_awvalid,0,0);
    VL_IN8(&m_axi_awready,0,0);
    VL_OUT8(&m_axi_awregion,3,0);
    VL_OUT8(&m_axi_awlen,7,0);
    VL_OUT8(&m_axi_awsize,2,0);
    VL_OUT8(&m_axi_awburst,1,0);
    VL_OUT8(&m_axi_awcache,3,0);
    VL_OUT8(&m_axi_awqos,3,0);
    VL_OUT8(&m_axi_awprot,2,0);
    VL_OUT8(&m_axi_wvalid,0,0);
    VL_IN8(&m_axi_wready,0,0);
    VL_OUT8(&m_axi_wstrb,3,0);
    VL_OUT8(&m_axi_wlast,0,0);
    VL_IN8(&m_axi_bvalid,0,0);
    VL_OUT8(&m_axi_bready,0,0);
    VL_IN8(&m_axi_bresp,1,0);
    VL_IN8(&burstLen,7,0);
    VL_IN8(&pathNumb,7,0);
    VL_OUT8(&transInterrupt,0,0);
    VL_IN(&s_axis_payload,31,0);
    VL_OUT(&m_axi_awaddr,31,0);
    VL_OUT(&m_axi_wdata,31,0);
    VL_IN(&startAddr,31,0);
    VL_IN(&offset,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo* const Stream2Axi4WriteOnlyMasterInterfaceAddFifo;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VStream2Axi4WriteOnlyMasterInterfaceAddFifo(VerilatedContext* contextp, const char* name = "TOP");
    explicit VStream2Axi4WriteOnlyMasterInterfaceAddFifo(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VStream2Axi4WriteOnlyMasterInterfaceAddFifo();
  private:
    VL_UNCOPYABLE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
