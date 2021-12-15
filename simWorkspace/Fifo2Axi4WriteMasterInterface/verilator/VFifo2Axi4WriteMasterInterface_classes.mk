# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VFifo2Axi4WriteMasterInterface.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VFifo2Axi4WriteMasterInterface \
	VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface \
	VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface \
	VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VFifo2Axi4WriteMasterInterface__Slow \
	VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface__Slow \
	VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VFifo2Axi4WriteMasterInterface__Dpi \
	VFifo2Axi4WriteMasterInterface__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VFifo2Axi4WriteMasterInterface__Syms \
	VFifo2Axi4WriteMasterInterface__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
