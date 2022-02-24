# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VArraySlice.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VArraySlice \
	VArraySlice___024root__DepSet_ha2068c2b__0 \
	VArraySlice___024root__DepSet_h259c1c0d__0 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__0 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__1 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__2 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__3 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__4 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__5 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__6 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__7 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__8 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__9 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__10 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__11 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__12 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__13 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__14 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__15 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__16 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__17 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__18 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__19 \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__20 \
	VArraySlice_ArraySlice__DepSet_hb60d166b__0 \
	VArraySlice_ArraySlice__DepSet_hb60d166b__1 \
	VArraySlice_ArraySlice__DepSet_hb60d166b__2 \
	VArraySlice_ArraySlice__DepSet_hb60d166b__3 \
	VArraySlice_ArraySlice__DepSet_hb60d166b__4 \
	VArraySlice_ArraySlice__DepSet_hb60d166b__5 \
	VArraySlice_ArraySlice__DepSet_hb60d166b__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VArraySlice__ConstPool_0 \
	VArraySlice___024root__Slow \
	VArraySlice___024root__DepSet_ha2068c2b__0__Slow \
	VArraySlice___024root__DepSet_h259c1c0d__0__Slow \
	VArraySlice_ArraySlice__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__0__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__1__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__2__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__3__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__4__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__5__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__6__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__7__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__8__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__9__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__10__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__11__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__12__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__13__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__14__Slow \
	VArraySlice_ArraySlice__DepSet_h6655b6b4__15__Slow \
	VArraySlice_ArraySlice__DepSet_hb60d166b__0__Slow \
	VArraySlice_ArraySlice__DepSet_hb60d166b__1__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VArraySlice__Dpi \
	VArraySlice__Trace__0 \
	VArraySlice__Trace__1 \
	VArraySlice__Trace__2 \
	VArraySlice__Trace__3 \
	VArraySlice__Trace__4 \
	VArraySlice__Trace__5 \
	VArraySlice__Trace__6 \
	VArraySlice__Trace__7 \
	VArraySlice__Trace__8 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VArraySlice__Syms \
	VArraySlice__Trace__0__Slow \
	VArraySlice__Trace__1__Slow \
	VArraySlice__Trace__2__Slow \
	VArraySlice__Trace__3__Slow \
	VArraySlice__Trace__4__Slow \
	VArraySlice__Trace__5__Slow \
	VArraySlice__Trace__6__Slow \
	VArraySlice__Trace__7__Slow \
	VArraySlice__Trace__8__Slow \
	VArraySlice__Trace__9__Slow \
	VArraySlice__Trace__10__Slow \
	VArraySlice__Trace__11__Slow \
	VArraySlice__Trace__12__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
