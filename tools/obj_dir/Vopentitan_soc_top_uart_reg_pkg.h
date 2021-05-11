// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vopentitan_soc_top.h for the primary calling header

#ifndef VERILATED_VOPENTITAN_SOC_TOP_UART_REG_PKG_H_
#define VERILATED_VOPENTITAN_SOC_TOP_UART_REG_PKG_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"

//==========

class Vopentitan_soc_top__Syms;
class Vopentitan_soc_top_VerilatedVcd;


//----------

VL_MODULE(Vopentitan_soc_top_uart_reg_pkg) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vopentitan_soc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    // Begin mtask footprint all: 
    CData/*3:0*/ __PVT__UART_PERMIT[12];
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vopentitan_soc_top_uart_reg_pkg);  ///< Copying not allowed
  public:
    Vopentitan_soc_top_uart_reg_pkg(const char* name = "TOP");
    ~Vopentitan_soc_top_uart_reg_pkg();
    
    // INTERNAL METHODS
    void __Vconfigure(Vopentitan_soc_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__uart_reg_pkg__1(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
