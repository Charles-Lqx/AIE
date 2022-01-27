# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root__DepSet_h9c2c28cc__0 \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root__DepSet_hfbb6d310__0 \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DepSet_h219912e7__0 \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface__DepSet_hfa09fcdb__0 \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface__DepSet_h21184780__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root__Slow \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root__DepSet_h9c2c28cc__0__Slow \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root__DepSet_hfbb6d310__0__Slow \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo__Slow \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DepSet_hb12957a8__0__Slow \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DepSet_h219912e7__0__Slow \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface__Slow \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface__DepSet_hfa09fcdb__0__Slow \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface__DepSet_h21184780__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Dpi \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms \
	VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
