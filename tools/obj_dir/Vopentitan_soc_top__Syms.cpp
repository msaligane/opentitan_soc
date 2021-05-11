// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vopentitan_soc_top__Syms.h"
#include "Vopentitan_soc_top.h"
<<<<<<< HEAD
#include "Vopentitan_soc_top_uart_reg_pkg.h"
#include "Vopentitan_soc_top_rv_plic_reg_pkg.h"
=======
#include "Vopentitan_soc_top_tlul_socket_1n__pi2.h"
#include "Vopentitan_soc_top_tlul_socket_m1__pi3.h"
>>>>>>> 82476d8e0429e7ee13a12171e2161bfef65b56dc
#include "Vopentitan_soc_top_gpio_reg_pkg.h"
#include "Vopentitan_soc_top_rv_plic_reg_pkg.h"



// FUNCTIONS
Vopentitan_soc_top__Syms::~Vopentitan_soc_top__Syms()
{
}

Vopentitan_soc_top__Syms::Vopentitan_soc_top__Syms(VerilatedContext* contextp, Vopentitan_soc_top* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__gpio_reg_pkg(Verilated::catName(topp->name(), "gpio_reg_pkg"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.DAP"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.DCCM"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.DCDC"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.DEBUG_ROM"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.GPIO"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.ICCM"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.LDO1"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.LDO2"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.PLIC"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.PLL1"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.TSEN1"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.TSEN2"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.u_s1n_10"))
    , TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11(Verilated::catName(topp->name(), "opentitan_soc_top.periph_switch.u_s1n_11"))
    , TOP__rv_plic_reg_pkg(Verilated::catName(topp->name(), "rv_plic_reg_pkg"))
    , TOP__uart_reg_pkg(Verilated::catName(topp->name(), "uart_reg_pkg"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__gpio_reg_pkg = &TOP__gpio_reg_pkg;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__DAP = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__DCCM = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__DCDC = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__GPIO = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__ICCM = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__LDO1 = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__LDO2 = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__PLIC = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__PLL1 = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1 = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2 = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10 = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10;
    TOPp->__PVT__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11 = &TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11;
    TOPp->__PVT__rv_plic_reg_pkg = &TOP__rv_plic_reg_pkg;
    TOPp->__PVT__uart_reg_pkg = &TOP__uart_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__gpio_reg_pkg.__Vconfigure(this, true);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vconfigure(this, true);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vconfigure(this, false);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vconfigure(this, true);
    TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vconfigure(this, false);
    TOP__rv_plic_reg_pkg.__Vconfigure(this, true);
<<<<<<< HEAD
    TOP__uart_reg_pkg.__Vconfigure(this, true);
=======
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
>>>>>>> 82476d8e0429e7ee13a12171e2161bfef65b56dc
}
