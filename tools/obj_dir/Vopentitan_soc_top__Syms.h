// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOPENTITAN_SOC_TOP__SYMS_H_
#define VERILATED_VOPENTITAN_SOC_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vopentitan_soc_top.h"
#include "Vopentitan_soc_top_tlul_socket_1n__pi2.h"
#include "Vopentitan_soc_top_tlul_socket_m1__pi3.h"
#include "Vopentitan_soc_top_gpio_reg_pkg.h"
#include "Vopentitan_soc_top_rv_plic_reg_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vopentitan_soc_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vopentitan_soc_top*            TOPp;
    Vopentitan_soc_top_gpio_reg_pkg TOP__gpio_reg_pkg;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1;
    Vopentitan_soc_top_tlul_socket_m1__pi3 TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2;
    Vopentitan_soc_top_tlul_socket_1n__pi2 TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10;
    Vopentitan_soc_top_tlul_socket_1n__pi2 TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11;
    Vopentitan_soc_top_rv_plic_reg_pkg TOP__rv_plic_reg_pkg;
    
    // CREATORS
    Vopentitan_soc_top__Syms(VerilatedContext* contextp, Vopentitan_soc_top* topp, const char* namep);
    ~Vopentitan_soc_top__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
