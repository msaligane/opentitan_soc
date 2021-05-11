# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vopentitan_soc_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 4
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
	Vopentitan_soc_top \
	Vopentitan_soc_top__1 \
	Vopentitan_soc_top__2 \
	Vopentitan_soc_top__3 \
	Vopentitan_soc_top_uart_reg_pkg \
	Vopentitan_soc_top_rv_plic_reg_pkg \
	Vopentitan_soc_top_gpio_reg_pkg \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vopentitan_soc_top__Slow \
	Vopentitan_soc_top__1__Slow \
	Vopentitan_soc_top__2__Slow \
	Vopentitan_soc_top_uart_reg_pkg__Slow \
	Vopentitan_soc_top_rv_plic_reg_pkg__Slow \
	Vopentitan_soc_top_gpio_reg_pkg__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vopentitan_soc_top__Trace \
	Vopentitan_soc_top__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vopentitan_soc_top__Syms \
	Vopentitan_soc_top__Trace__Slow \
	Vopentitan_soc_top__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
