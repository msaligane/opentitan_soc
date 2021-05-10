// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vopentitan_soc_top__Syms.h"
#include "Vopentitan_soc_top.h"
#include "Vopentitan_soc_top_uart_reg_pkg.h"
#include "Vopentitan_soc_top_rv_plic_reg_pkg.h"
#include "Vopentitan_soc_top_gpio_reg_pkg.h"



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
    , TOP__rv_plic_reg_pkg(Verilated::catName(topp->name(), "rv_plic_reg_pkg"))
    , TOP__uart_reg_pkg(Verilated::catName(topp->name(), "uart_reg_pkg"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__gpio_reg_pkg = &TOP__gpio_reg_pkg;
    TOPp->__PVT__rv_plic_reg_pkg = &TOP__rv_plic_reg_pkg;
    TOPp->__PVT__uart_reg_pkg = &TOP__uart_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__gpio_reg_pkg.__Vconfigure(this, true);
    TOP__rv_plic_reg_pkg.__Vconfigure(this, true);
    TOP__uart_reg_pkg.__Vconfigure(this, true);
}
