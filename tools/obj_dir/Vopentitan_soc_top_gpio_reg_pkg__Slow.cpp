// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopentitan_soc_top.h for the primary calling header

#include "Vopentitan_soc_top_gpio_reg_pkg.h"
#include "Vopentitan_soc_top__Syms.h"

//==========

Vopentitan_soc_top_gpio_reg_pkg::Vopentitan_soc_top_gpio_reg_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vopentitan_soc_top_gpio_reg_pkg::__Vconfigure(Vopentitan_soc_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vopentitan_soc_top_gpio_reg_pkg::~Vopentitan_soc_top_gpio_reg_pkg() {
}

void Vopentitan_soc_top_gpio_reg_pkg::_initial__TOP__gpio_reg_pkg__1(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vopentitan_soc_top_gpio_reg_pkg::_initial__TOP__gpio_reg_pkg__1\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9U] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0xaU] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0xbU] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0xcU] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0xdU] = 0xfU;
    vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0xeU] = 0xfU;
}

void Vopentitan_soc_top_gpio_reg_pkg::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vopentitan_soc_top_gpio_reg_pkg::_ctor_var_reset\n"); );
    // Body
}
