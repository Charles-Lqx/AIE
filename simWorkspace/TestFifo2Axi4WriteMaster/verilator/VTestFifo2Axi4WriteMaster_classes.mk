# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTestFifo2Axi4WriteMaster.mk for the caller.

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
	VTestFifo2Axi4WriteMaster \
	VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster \
	VTestFifo2Axi4WriteMaster_TestAxi4WriteMaster \
	VTestFifo2Axi4WriteMaster_TestAxi4WriteMaster__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTestFifo2Axi4WriteMaster__Slow \
	VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster__Slow \
	VTestFifo2Axi4WriteMaster_TestAxi4WriteMaster__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTestFifo2Axi4WriteMaster__Dpi \
	VTestFifo2Axi4WriteMaster__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTestFifo2Axi4WriteMaster__Syms \
	VTestFifo2Axi4WriteMaster__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
