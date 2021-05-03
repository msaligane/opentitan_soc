// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vopentitan_soc_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp1895[3];
    WData/*95:0*/ __Vtemp1911[3];
    WData/*95:0*/ __Vtemp1927[3];
    WData/*95:0*/ __Vtemp1943[3];
    WData/*95:0*/ __Vtemp1959[3];
    WData/*95:0*/ __Vtemp1975[3];
    WData/*95:0*/ __Vtemp1991[3];
    WData/*95:0*/ __Vtemp2007[3];
    WData/*95:0*/ __Vtemp2023[3];
    WData/*95:0*/ __Vtemp2039[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err),2);
            tracep->chgBit(oldp+1,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err))));
            tracep->chgBit(oldp+2,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
            tracep->chgIData(oldp+3,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
            tracep->chgBit(oldp+4,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err) 
                                          >> 1U))));
            tracep->chgIData(oldp+5,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
            tracep->chgIData(oldp+6,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
            tracep->chgIData(oldp+7,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
            tracep->chgIData(oldp+8,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
            tracep->chgIData(oldp+9,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
            tracep->chgIData(oldp+10,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
            tracep->chgIData(oldp+11,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
            tracep->chgIData(oldp+12,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
            tracep->chgIData(oldp+13,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
            tracep->chgIData(oldp+14,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
            tracep->chgIData(oldp+15,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
            tracep->chgIData(oldp+16,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
            tracep->chgIData(oldp+17,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
            tracep->chgIData(oldp+18,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
            tracep->chgIData(oldp+19,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
            tracep->chgIData(oldp+20,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
            tracep->chgCData(oldp+21,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
            tracep->chgCData(oldp+22,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
            tracep->chgCData(oldp+23,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
            tracep->chgCData(oldp+24,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
            tracep->chgCData(oldp+25,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
            tracep->chgCData(oldp+26,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
            tracep->chgCData(oldp+27,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
            tracep->chgCData(oldp+28,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
            tracep->chgCData(oldp+29,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
            tracep->chgCData(oldp+30,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
            tracep->chgCData(oldp+31,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
            tracep->chgCData(oldp+32,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
            tracep->chgCData(oldp+33,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
            tracep->chgCData(oldp+34,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
            tracep->chgCData(oldp+35,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
            tracep->chgCData(oldp+36,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
            tracep->chgIData(oldp+37,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
            tracep->chgIData(oldp+38,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
            tracep->chgIData(oldp+39,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
            tracep->chgIData(oldp+40,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
            tracep->chgIData(oldp+41,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
            tracep->chgIData(oldp+42,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
            tracep->chgIData(oldp+43,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
            tracep->chgIData(oldp+44,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
            tracep->chgIData(oldp+45,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
            tracep->chgIData(oldp+46,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
            tracep->chgIData(oldp+47,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
            tracep->chgIData(oldp+48,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
            tracep->chgIData(oldp+49,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
            tracep->chgIData(oldp+50,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
            tracep->chgIData(oldp+51,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
            tracep->chgIData(oldp+52,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
            tracep->chgIData(oldp+53,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
            tracep->chgIData(oldp+54,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
            tracep->chgIData(oldp+55,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
            tracep->chgIData(oldp+56,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
            tracep->chgIData(oldp+57,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
            tracep->chgIData(oldp+58,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
            tracep->chgIData(oldp+59,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
            tracep->chgIData(oldp+60,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
            tracep->chgIData(oldp+61,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
            tracep->chgIData(oldp+62,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
            tracep->chgIData(oldp+63,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
            tracep->chgIData(oldp+64,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
            tracep->chgIData(oldp+65,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
            tracep->chgIData(oldp+66,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
            tracep->chgIData(oldp+67,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
            tracep->chgIData(oldp+68,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
            tracep->chgCData(oldp+69,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
            tracep->chgCData(oldp+70,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0]),4);
            tracep->chgCData(oldp+71,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[1]),4);
            tracep->chgCData(oldp+72,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[2]),4);
            tracep->chgCData(oldp+73,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[3]),4);
            tracep->chgCData(oldp+74,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[4]),4);
            tracep->chgCData(oldp+75,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[5]),4);
            tracep->chgCData(oldp+76,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[6]),4);
            tracep->chgCData(oldp+77,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[7]),4);
            tracep->chgCData(oldp+78,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[8]),4);
            tracep->chgCData(oldp+79,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[9]),4);
            tracep->chgCData(oldp+80,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[10]),4);
            tracep->chgCData(oldp+81,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[11]),4);
            tracep->chgCData(oldp+82,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[12]),4);
            tracep->chgCData(oldp+83,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[13]),4);
            tracep->chgCData(oldp+84,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[14]),4);
            tracep->chgCData(oldp+85,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[15]),4);
            tracep->chgCData(oldp+86,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[16]),4);
            tracep->chgCData(oldp+87,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[17]),4);
            tracep->chgCData(oldp+88,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[18]),4);
            tracep->chgCData(oldp+89,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[19]),4);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[20]),4);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[21]),4);
            tracep->chgCData(oldp+92,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[22]),4);
            tracep->chgCData(oldp+93,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[23]),4);
            tracep->chgCData(oldp+94,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[24]),4);
            tracep->chgCData(oldp+95,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[25]),4);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[26]),4);
            tracep->chgCData(oldp+97,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[27]),4);
            tracep->chgCData(oldp+98,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[28]),4);
            tracep->chgCData(oldp+99,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[29]),4);
            tracep->chgCData(oldp+100,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[30]),4);
            tracep->chgCData(oldp+101,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[31]),4);
            tracep->chgCData(oldp+102,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[32]),4);
            tracep->chgCData(oldp+103,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[33]),4);
            tracep->chgCData(oldp+104,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[34]),4);
            tracep->chgCData(oldp+105,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[35]),4);
            tracep->chgCData(oldp+106,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[36]),4);
            tracep->chgCData(oldp+107,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[37]),4);
            tracep->chgCData(oldp+108,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0]),4);
            tracep->chgCData(oldp+109,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1]),4);
            tracep->chgCData(oldp+110,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2]),4);
            tracep->chgCData(oldp+111,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3]),4);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4]),4);
            tracep->chgCData(oldp+113,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5]),4);
            tracep->chgCData(oldp+114,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6]),4);
            tracep->chgCData(oldp+115,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7]),4);
            tracep->chgCData(oldp+116,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8]),4);
            tracep->chgCData(oldp+117,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9]),4);
            tracep->chgCData(oldp+118,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[10]),4);
            tracep->chgCData(oldp+119,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[11]),4);
            tracep->chgCData(oldp+120,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[12]),4);
            tracep->chgCData(oldp+121,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[13]),4);
            tracep->chgCData(oldp+122,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[14]),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+123,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q));
            tracep->chgCData(oldp+124,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+125,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_size),2);
            tracep->chgIData(oldp+126,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
            tracep->chgBit(oldp+127,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgBit(oldp+128,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe));
            tracep->chgCData(oldp+129,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+130,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgBit(oldp+131,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgCData(oldp+132,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+133,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q),5);
            tracep->chgIData(oldp+134,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id),32);
            tracep->chgBit(oldp+135,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+136,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q),32);
            tracep->chgIData(oldp+137,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q),32);
            tracep->chgSData(oldp+138,(((0x3e0U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                   >> 0xaU)) 
                                        | (0x1fU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                            >> 7U)))),10);
            tracep->chgBit(oldp+139,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q));
            tracep->chgBit(oldp+140,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q));
            tracep->chgBit(oldp+141,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q));
            tracep->chgCData(oldp+142,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+143,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgIData(oldp+144,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgBit(oldp+145,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgCData(oldp+146,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgCData(oldp+147,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+148,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+149,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
            tracep->chgBit(oldp+150,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgCData(oldp+151,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+152,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+153,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id),32);
            tracep->chgBit(oldp+154,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id));
            tracep->chgIData(oldp+155,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id),32);
            tracep->chgCData(oldp+156,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))),5);
            tracep->chgIData(oldp+157,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+158,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | ((0xfe0U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+159,(((0xffffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xdU)) 
                                        | ((0x1000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 7U))))))),32);
            tracep->chgIData(oldp+160,((0xfffff000U 
                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+161,(((0xfff00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0x14U)) 
                                        | ((0xff000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                           | ((0x800U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))))),32);
            tracep->chgIData(oldp+162,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),32);
            tracep->chgCData(oldp+163,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x1bU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgCData(oldp+164,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),6);
            tracep->chgBit(oldp+165,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+166,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+167,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+168,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+169,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+170,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgCData(oldp+171,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgBit(oldp+172,((8U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+173,(((3U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (6U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+174,(((4U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (7U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgWData(oldp+175,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg),1024);
            tracep->chgWData(oldp+207,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q),992);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+238,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgWData(oldp+239,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q),68);
            tracep->chgBit(oldp+242,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval));
            tracep->chgCData(oldp+243,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+244,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+245,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access));
            tracep->chgCData(oldp+246,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+247,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgCData(oldp+248,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                         ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                             ? 1U : 0U)
                                         : 2U)),2);
            tracep->chgBit(oldp+249,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+250,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+251,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+252,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+253,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+254,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+255,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+256,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+257,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+258,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+259,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+260,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
            tracep->chgBit(oldp+261,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
            tracep->chgBit(oldp+262,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+263,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+264,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+265,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgQData(oldp+266,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
            tracep->chgQData(oldp+268,((((QData)((IData)(
                                                         ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                             >> 2U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])))),64);
            tracep->chgBit(oldp+270,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
            tracep->chgIData(oldp+271,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]),32);
            tracep->chgCData(oldp+272,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgCData(oldp+273,((3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgIData(oldp+274,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+275,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding),4);
            tracep->chgCData(oldp+276,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgBit(oldp+277,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
            tracep->chgBit(oldp+278,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
            tracep->chgBit(oldp+279,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
            tracep->chgBit(oldp+280,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
            tracep->chgBit(oldp+281,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
            tracep->chgBit(oldp+282,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
            tracep->chgBit(oldp+283,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
            tracep->chgBit(oldp+284,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
            tracep->chgBit(oldp+285,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
            tracep->chgBit(oldp+286,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
            tracep->chgBit(oldp+287,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
            tracep->chgBit(oldp+288,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
            tracep->chgBit(oldp+289,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
            tracep->chgBit(oldp+290,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
            tracep->chgBit(oldp+291,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
            tracep->chgBit(oldp+292,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
            tracep->chgBit(oldp+293,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
            tracep->chgBit(oldp+294,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
            tracep->chgBit(oldp+295,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
            tracep->chgBit(oldp+296,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
            tracep->chgBit(oldp+297,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
            tracep->chgBit(oldp+298,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
            tracep->chgBit(oldp+299,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
            tracep->chgBit(oldp+300,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe));
            tracep->chgBit(oldp+301,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
            tracep->chgBit(oldp+302,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
            tracep->chgBit(oldp+303,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
            tracep->chgBit(oldp+304,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
            tracep->chgBit(oldp+305,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
            tracep->chgBit(oldp+306,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
            tracep->chgBit(oldp+307,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
            tracep->chgBit(oldp+308,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgIData(oldp+309,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgCData(oldp+310,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+311,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgBit(oldp+312,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgBit(oldp+313,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgBit(oldp+314,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
            tracep->chgIData(oldp+315,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip),32);
            tracep->chgBit(oldp+316,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
            tracep->chgBit(oldp+317,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q));
            tracep->chgBit(oldp+318,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q));
            tracep->chgBit(oldp+319,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q));
            tracep->chgBit(oldp+320,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgIData(oldp+321,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+322,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+323,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+324,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgCData(oldp+325,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgCData(oldp+326,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+327,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+328,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 2U))));
            tracep->chgCData(oldp+329,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+330,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+331,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                            >> 5U))));
            tracep->chgBit(oldp+332,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+333,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+334,((3U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                               ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                  >> 2U)
                                               : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+335,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgBit(oldp+336,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 2U))));
            tracep->chgBit(oldp+337,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 0xfU))));
            tracep->chgBit(oldp+338,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 0xcU))));
            tracep->chgCData(oldp+339,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+340,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+341,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+342,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+343,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgCData(oldp+344,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
            tracep->chgIData(oldp+345,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgBit(oldp+346,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgCData(oldp+347,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+348,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+349,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+350,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+351,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+352,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+353,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+354,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+355,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+356,((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                >> 2U))),32);
            tracep->chgBit(oldp+357,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 1U)))));
            tracep->chgBit(oldp+358,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+359,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__outstanding_load_wb));
            tracep->chgBit(oldp+360,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+361,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgCData(oldp+362,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+363,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+364,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+365,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+366,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+367,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+368,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+369,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+370,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgBit(oldp+371,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__instr_valid));
            tracep->chgSData(oldp+372,((0x1fffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
            tracep->chgSData(oldp+373,((0x1fffU & (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                   >> 0xdU))),13);
            tracep->chgCData(oldp+374,((0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
            tracep->chgCData(oldp+375,((0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                 >> 5U))),5);
            tracep->chgQData(oldp+376,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+378,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                              >> 1U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgCData(oldp+380,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+381,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+382,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+383,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+384,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+385,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+386,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+387,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+388,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+389,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+390,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+391,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+392,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+393,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+394,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+395,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+396,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+397,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+398,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+399,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x13U])) {
            tracep->chgCData(oldp+400,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+401,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+402,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 8U))),2);
            tracep->chgCData(oldp+403,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+404,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+405,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                >> 1U))),4);
            tracep->chgBit(oldp+406,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+407,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+408,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x14U])) {
            tracep->chgBit(oldp+409,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+410,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask),32);
            tracep->chgBit(oldp+411,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+412,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x15U])) {
            tracep->chgBit(oldp+413,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+414,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+415,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+416,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+417,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+418,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+419,((IData)((vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                >> 2U))),32);
            tracep->chgBit(oldp+420,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 1U)))));
            tracep->chgBit(oldp+421,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar))));
            tracep->chgIData(oldp+422,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+423,((IData)((vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                >> 1U))),32);
            tracep->chgBit(oldp+424,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgIData(oldp+425,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgQData(oldp+426,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                        << 1U)),33);
            tracep->chgQData(oldp+428,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x16U])) {
            tracep->chgIData(oldp+430,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
            tracep->chgIData(oldp+431,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
            tracep->chgIData(oldp+432,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
            tracep->chgBit(oldp+433,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
            tracep->chgBit(oldp+434,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
            tracep->chgBit(oldp+435,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
            tracep->chgBit(oldp+436,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
            tracep->chgBit(oldp+437,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
            tracep->chgBit(oldp+438,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
            tracep->chgBit(oldp+439,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
            tracep->chgBit(oldp+440,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
            tracep->chgBit(oldp+441,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
            tracep->chgBit(oldp+442,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
            tracep->chgCData(oldp+443,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
            tracep->chgCData(oldp+444,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
            tracep->chgCData(oldp+445,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
            tracep->chgCData(oldp+446,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
            tracep->chgCData(oldp+447,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
            tracep->chgCData(oldp+448,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
            tracep->chgCData(oldp+449,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
            tracep->chgCData(oldp+450,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
            tracep->chgCData(oldp+451,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
            tracep->chgCData(oldp+452,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
            tracep->chgCData(oldp+453,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
            tracep->chgCData(oldp+454,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
            tracep->chgCData(oldp+455,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
            tracep->chgCData(oldp+456,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
            tracep->chgCData(oldp+457,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
            tracep->chgCData(oldp+458,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
            tracep->chgBit(oldp+459,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
            tracep->chgBit(oldp+460,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
            tracep->chgBit(oldp+461,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
            tracep->chgBit(oldp+462,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
            tracep->chgBit(oldp+463,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
            tracep->chgBit(oldp+464,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
            tracep->chgBit(oldp+465,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
            tracep->chgBit(oldp+466,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
            tracep->chgBit(oldp+467,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
            tracep->chgBit(oldp+468,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
            tracep->chgCData(oldp+469,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
            tracep->chgBit(oldp+470,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x17U])) {
            tracep->chgSData(oldp+471,((0x1fffU & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage))),13);
            tracep->chgSData(oldp+472,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0xdU)))),13);
            tracep->chgSData(oldp+473,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x1aU)))),13);
            tracep->chgSData(oldp+474,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x27U)))),13);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x18U])) {
            tracep->chgBit(oldp+475,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
            tracep->chgBit(oldp+476,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
            tracep->chgBit(oldp+477,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
            tracep->chgBit(oldp+478,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
            tracep->chgBit(oldp+479,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
            tracep->chgBit(oldp+480,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
            tracep->chgBit(oldp+481,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
            tracep->chgBit(oldp+482,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
            tracep->chgBit(oldp+483,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
            tracep->chgBit(oldp+484,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
            tracep->chgBit(oldp+485,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
            tracep->chgBit(oldp+486,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
            tracep->chgBit(oldp+487,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
            tracep->chgBit(oldp+488,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
            tracep->chgBit(oldp+489,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
            tracep->chgBit(oldp+490,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
            tracep->chgBit(oldp+491,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
            tracep->chgBit(oldp+492,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
            tracep->chgBit(oldp+493,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
            tracep->chgBit(oldp+494,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
            tracep->chgBit(oldp+495,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
            tracep->chgBit(oldp+496,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
            tracep->chgBit(oldp+497,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
            tracep->chgBit(oldp+498,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
            tracep->chgBit(oldp+499,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
            tracep->chgBit(oldp+500,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
            tracep->chgBit(oldp+501,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
            tracep->chgBit(oldp+502,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
            tracep->chgBit(oldp+503,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
            tracep->chgBit(oldp+504,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
            tracep->chgBit(oldp+505,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
            tracep->chgBit(oldp+506,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x19U])) {
            tracep->chgIData(oldp+507,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
            tracep->chgIData(oldp+508,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
            tracep->chgCData(oldp+509,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+510,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgBit(oldp+511,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
            tracep->chgBit(oldp+512,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
            tracep->chgBit(oldp+513,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
            tracep->chgCData(oldp+514,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
            tracep->chgCData(oldp+515,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
            tracep->chgCData(oldp+516,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
            tracep->chgCData(oldp+517,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
            tracep->chgCData(oldp+518,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
            tracep->chgCData(oldp+519,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
            tracep->chgCData(oldp+520,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
            tracep->chgCData(oldp+521,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
            tracep->chgCData(oldp+522,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
            tracep->chgCData(oldp+523,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
            tracep->chgCData(oldp+524,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
            tracep->chgCData(oldp+525,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
            tracep->chgCData(oldp+526,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
            tracep->chgCData(oldp+527,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
            tracep->chgBit(oldp+528,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
            tracep->chgBit(oldp+529,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
            tracep->chgBit(oldp+530,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
            tracep->chgBit(oldp+531,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q));
            tracep->chgBit(oldp+532,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
            tracep->chgBit(oldp+533,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
            tracep->chgBit(oldp+534,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
            tracep->chgBit(oldp+535,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
            tracep->chgBit(oldp+536,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1aU])) {
            tracep->chgCData(oldp+537,((0x1fU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)),5);
            tracep->chgCData(oldp+538,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 5U))),5);
            tracep->chgCData(oldp+539,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+540,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xfU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1bU])) {
            tracep->chgBit(oldp+541,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
            tracep->chgIData(oldp+542,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
            tracep->chgIData(oldp+543,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
            tracep->chgWData(oldp+544,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1cU])) {
            tracep->chgIData(oldp+547,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+548,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+549,((0xffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgBit(oldp+550,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
            tracep->chgIData(oldp+551,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+552,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+553,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+554,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+555,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+556,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+557,((0xfffffff8U 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
            tracep->chgCData(oldp+558,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
            tracep->chgQData(oldp+559,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+561,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1dU])) {
            tracep->chgBit(oldp+563,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
            tracep->chgCData(oldp+564,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U))),2);
            tracep->chgCData(oldp+565,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1eU])) {
            tracep->chgBit(oldp+566,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int));
            tracep->chgIData(oldp+567,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+568,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
            tracep->chgQData(oldp+569,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+571,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+573,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+575,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+577,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+579,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+581,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+583,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+585,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+587,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+589,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+591,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+593,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+595,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+597,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+599,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+601,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+603,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+605,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+607,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+609,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+611,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+613,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+615,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+617,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+619,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+621,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+623,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+625,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+627,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+629,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+631,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1fU])) {
            tracep->chgCData(oldp+633,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause),3);
            tracep->chgBit(oldp+634,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save));
            tracep->chgCData(oldp+635,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x20U])) {
            tracep->chgBit(oldp+636,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
            tracep->chgBit(oldp+637,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
            tracep->chgBit(oldp+638,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
            tracep->chgBit(oldp+639,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
            tracep->chgBit(oldp+640,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
            tracep->chgBit(oldp+641,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
            tracep->chgCData(oldp+642,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
            tracep->chgBit(oldp+643,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe));
            tracep->chgBit(oldp+644,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe));
            tracep->chgBit(oldp+645,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe));
            tracep->chgBit(oldp+646,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe));
            tracep->chgBit(oldp+647,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe));
            tracep->chgBit(oldp+648,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe));
            tracep->chgBit(oldp+649,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe));
            tracep->chgBit(oldp+650,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe));
            tracep->chgBit(oldp+651,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe));
            tracep->chgBit(oldp+652,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe));
            tracep->chgBit(oldp+653,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe));
            tracep->chgBit(oldp+654,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe));
            tracep->chgBit(oldp+655,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe));
            tracep->chgBit(oldp+656,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe));
            tracep->chgBit(oldp+657,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe));
            tracep->chgBit(oldp+658,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe));
            tracep->chgBit(oldp+659,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe));
            tracep->chgBit(oldp+660,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe));
            tracep->chgBit(oldp+661,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe));
            tracep->chgBit(oldp+662,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
            tracep->chgBit(oldp+663,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe));
            tracep->chgBit(oldp+664,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe));
            tracep->chgBit(oldp+665,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe));
            tracep->chgBit(oldp+666,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe));
            tracep->chgBit(oldp+667,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe));
            tracep->chgBit(oldp+668,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe));
            tracep->chgBit(oldp+669,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe));
            tracep->chgBit(oldp+670,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe));
            tracep->chgBit(oldp+671,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe));
            tracep->chgBit(oldp+672,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x20U] | vlTOPp->__Vm_traceActivity
                         [0x37U]))) {
            tracep->chgBit(oldp+673,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+674,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+675,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+676,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+677,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+678,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+679,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+680,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+681,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+682,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+683,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+684,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+685,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+686,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+687,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+688,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+689,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+690,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+691,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+692,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+693,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+694,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U])));
            tracep->chgBit(oldp+695,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 1U))));
            tracep->chgBit(oldp+696,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 2U))));
            tracep->chgBit(oldp+697,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 3U))));
            tracep->chgBit(oldp+698,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 4U))));
            tracep->chgBit(oldp+699,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 5U))));
            tracep->chgBit(oldp+700,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 6U))));
            tracep->chgBit(oldp+701,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 7U))));
            tracep->chgBit(oldp+702,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 8U))));
            tracep->chgBit(oldp+703,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 9U))));
            tracep->chgBit(oldp+704,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+705,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+706,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                               << 0x17U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                 >> 9U)))),3);
            tracep->chgCData(oldp+707,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                               << 0x1aU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                 >> 6U)))),3);
            tracep->chgCData(oldp+708,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                               << 0x1dU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                 >> 3U)))),3);
            tracep->chgCData(oldp+709,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U])),3);
            tracep->chgCData(oldp+710,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 3U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x1dU)))),3);
            tracep->chgCData(oldp+711,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 6U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x1aU)))),3);
            tracep->chgCData(oldp+712,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 9U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x17U)))),3);
            tracep->chgCData(oldp+713,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0xcU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x14U)))),3);
            tracep->chgCData(oldp+714,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0xfU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0x11U)))),3);
            tracep->chgCData(oldp+715,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x12U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0xeU)))),3);
            tracep->chgCData(oldp+716,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x15U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 0xbU)))),3);
            tracep->chgCData(oldp+717,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 8U)))),3);
            tracep->chgCData(oldp+718,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x1bU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 5U)))),3);
            tracep->chgCData(oldp+719,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               << 0x1eU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                 >> 2U)))),3);
            tracep->chgCData(oldp+720,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 1U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x1fU)))),3);
            tracep->chgCData(oldp+721,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 4U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x1cU)))),3);
            tracep->chgCData(oldp+722,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 7U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x19U)))),3);
            tracep->chgCData(oldp+723,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0xaU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x16U)))),3);
            tracep->chgCData(oldp+724,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0xdU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x13U)))),3);
            tracep->chgCData(oldp+725,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0x10U)))),3);
            tracep->chgCData(oldp+726,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x13U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0xdU)))),3);
            tracep->chgCData(oldp+727,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 0xaU)))),3);
            tracep->chgCData(oldp+728,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x19U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 7U)))),3);
            tracep->chgCData(oldp+729,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x1cU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 4U)))),3);
            tracep->chgCData(oldp+730,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                 >> 1U)))),3);
            tracep->chgCData(oldp+731,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 2U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x1eU)))),3);
            tracep->chgCData(oldp+732,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 5U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x1bU)))),3);
            tracep->chgCData(oldp+733,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 8U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x18U)))),3);
            tracep->chgCData(oldp+734,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 0xbU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x15U)))),3);
            tracep->chgCData(oldp+735,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 0xeU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0x12U)))),3);
            tracep->chgCData(oldp+736,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 0x11U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0xfU)))),3);
            tracep->chgCData(oldp+737,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               << 0x14U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                 >> 0xcU)))),3);
            tracep->chgBit(oldp+738,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+739,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+740,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+741,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+742,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+743,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+744,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+745,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+746,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+747,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+748,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+749,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+750,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+751,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+752,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+753,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+754,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+755,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+756,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+757,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+758,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U])));
            tracep->chgBit(oldp+759,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+760,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+761,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+762,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+763,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+764,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+765,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+766,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+767,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+768,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+769,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+770,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               << 0x17U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                 >> 9U)))),3);
            tracep->chgCData(oldp+771,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                    >> 3U)))),6);
            tracep->chgBit(oldp+772,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+773,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+774,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+775,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+776,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                            >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x21U])) {
            tracep->chgIData(oldp+777,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+778,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+779,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgCData(oldp+780,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgCData(oldp+781,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+782,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgBit(oldp+783,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+784,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+785,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+786,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgCData(oldp+787,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+788,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgBit(oldp+789,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+790,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+791,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+792,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+793,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+794,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x22U])) {
            tracep->chgCData(oldp+795,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q),8);
            tracep->chgBit(oldp+796,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q));
            tracep->chgBit(oldp+797,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rvalid));
            tracep->chgQData(oldp+798,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+800,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                                 >> 1U))))),33);
            tracep->chgQData(oldp+802,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                 >> 2U))))),33);
            tracep->chgQData(oldp+804,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                              >> 3U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x23U])) {
            tracep->chgCData(oldp+806,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+807,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+808,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x24U])) {
            tracep->chgBit(oldp+809,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+810,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+811,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+812,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+813,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+814,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+815,((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                >> 2U))),32);
            tracep->chgBit(oldp+816,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 1U)))));
            tracep->chgBit(oldp+817,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgBit(oldp+818,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+819,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+820,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+821,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+822,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+823,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+824,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+825,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+826,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+827,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+828,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x25U])) {
            tracep->chgBit(oldp+829,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgCData(oldp+830,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+831,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+832,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 8U))),2);
            tracep->chgCData(oldp+833,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+834,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+835,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                >> 1U))),4);
            tracep->chgBit(oldp+836,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+837,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+838,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x25U] | vlTOPp->__Vm_traceActivity
                         [0x26U]))) {
            tracep->chgBit(oldp+839,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+840,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+841,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+842,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+843,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+844,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+845,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+846,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+847,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [0U]))));
            tracep->chgBit(oldp+848,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+849,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+850,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+851,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+852,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+853,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+854,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+855,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+856,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [1U]))));
            tracep->chgBit(oldp+857,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+858,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+859,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+860,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+861,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+862,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+863,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+864,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+865,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [2U]))));
            tracep->chgBit(oldp+866,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+867,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+868,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+869,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+870,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+871,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+872,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+873,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+874,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [3U]))));
            tracep->chgBit(oldp+875,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+876,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+877,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+878,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+879,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+880,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+881,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+882,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+883,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [4U]))));
            tracep->chgBit(oldp+884,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+885,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+886,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+887,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+888,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+889,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+890,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+891,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+892,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [5U]))));
            tracep->chgBit(oldp+893,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+894,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+895,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+896,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+897,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+898,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+899,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+900,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+901,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [6U]))));
            tracep->chgBit(oldp+902,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+903,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+904,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+905,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+906,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+907,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+908,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+909,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+910,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [7U]))));
            tracep->chgBit(oldp+911,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+912,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+913,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+914,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+915,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+916,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+917,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+918,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+919,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [8U]))));
            tracep->chgBit(oldp+920,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+921,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+922,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+923,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+924,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+925,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+926,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+927,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+928,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                   [9U]))));
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0x25U] | vlTOPp->__Vm_traceActivity
                          [0x26U]) | vlTOPp->__Vm_traceActivity
                         [0x34U]))) {
            tracep->chgBit(oldp+929,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+930,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+931,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+932,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+933,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+934,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+935,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+936,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+937,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x26U])) {
            tracep->chgBit(oldp+938,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+939,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+940,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+941,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+942,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+943,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+944,((IData)((vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                >> 2U))),32);
            tracep->chgBit(oldp+945,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 1U)))));
            tracep->chgBit(oldp+946,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+947,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+948,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+949,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+950,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+951,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+952,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+953,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+954,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+955,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+956,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+957,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+958,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+959,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+960,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+961,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+962,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+963,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+964,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+965,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+966,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+967,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+968,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+969,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+970,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+971,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+972,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+973,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+974,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+975,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+976,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+977,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+978,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+979,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+980,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+981,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+982,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+983,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+984,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+985,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+986,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+987,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+988,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+989,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+990,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+991,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+992,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+993,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+994,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+995,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+996,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+997,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+998,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+999,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+1000,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1001,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1002,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1003,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1004,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1005,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1006,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1007,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1008,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1009,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1010,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1011,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1012,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1013,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1014,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1015,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1016,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1017,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1018,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1019,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1020,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1021,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1022,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1023,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1024,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1025,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1026,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1027,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1028,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1029,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1030,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1031,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1032,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1033,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1034,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1035,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1036,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1037,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1038,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1039,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1040,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1041,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1042,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1043,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1044,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1045,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1046,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1047,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1048,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1049,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1050,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1051,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1052,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1053,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1054,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1055,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1056,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1057,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1059,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1060,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1061,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1062,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1063,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1064,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1065,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1066,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1067,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1068,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1069,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1070,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1071,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1072,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1073,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1074,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1075,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1076,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1077,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1078,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1079,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1081,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1082,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1083,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1084,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1085,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1086,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1087,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1088,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1089,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1090,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1091,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1092,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1093,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1094,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1095,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1096,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1097,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1098,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1099,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1100,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1101,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [2U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [2U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [2U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [2U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1103,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1104,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1105,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1106,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1107,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1108,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1109,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1110,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1111,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1112,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1113,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1114,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1115,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1116,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1117,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1118,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1119,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1120,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1121,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1122,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1123,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [3U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [3U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [3U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [3U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1125,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1126,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1127,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1128,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1129,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1130,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1131,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1132,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1133,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1134,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1135,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1136,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1137,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1138,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1139,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1140,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1141,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1142,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1143,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1144,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1145,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [4U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [4U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [4U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [4U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1147,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1148,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1149,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1150,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1151,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1152,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1153,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1154,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1155,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1156,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1157,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1158,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1159,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1160,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1161,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1162,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1163,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1164,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1165,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1166,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1167,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [5U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [5U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [5U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [5U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1169,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1170,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1171,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1172,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1173,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1174,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1175,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1176,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1177,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1178,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1179,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1180,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1181,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1182,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1183,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1184,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1185,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1186,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1187,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1188,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1189,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [6U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [6U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [6U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [6U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1191,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1192,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1193,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1194,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1195,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1196,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1197,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1198,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1199,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1200,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1201,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1202,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1203,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1204,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1205,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1206,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1207,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1208,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1209,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1210,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1211,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [7U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [7U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [7U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [7U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1213,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1214,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1215,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1216,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1217,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1218,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1219,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1220,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1221,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1222,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1223,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1224,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1225,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1226,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1227,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1228,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1229,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1230,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1231,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1232,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1233,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [8U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [8U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [8U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [8U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1235,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1236,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1237,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1238,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1239,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1240,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1241,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1242,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1243,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1244,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1245,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1246,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1247,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1248,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1249,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1250,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1251,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1252,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1253,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1254,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1255,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                      [9U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [9U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                          [9U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                                           [9U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1257,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+1258,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+1259,((IData)((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+1260,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgBit(oldp+1261,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid));
            tracep->chgIData(oldp+1262,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask),32);
            tracep->chgIData(oldp+1263,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgQData(oldp+1264,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                         << 1U)),33);
            tracep->chgQData(oldp+1266,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+1268,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1269,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x26U] | vlTOPp->__Vm_traceActivity
                         [0x34U]))) {
            tracep->chgBit(oldp+1270,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1271,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1272,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1273,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1274,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1275,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1276,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1277,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1278,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0U]))));
            tracep->chgBit(oldp+1279,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1280,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1281,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1282,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1283,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1284,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1285,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1286,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1287,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [1U]))));
            tracep->chgBit(oldp+1288,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1289,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1290,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1291,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1292,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1293,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1294,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1295,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1296,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [2U]))));
            tracep->chgBit(oldp+1297,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1298,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1299,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1300,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1301,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1302,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1303,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1304,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1305,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [3U]))));
            tracep->chgBit(oldp+1306,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1307,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1308,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1309,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1310,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1311,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1312,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1313,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1314,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [4U]))));
            tracep->chgBit(oldp+1315,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1316,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1317,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1318,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1319,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1320,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1321,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1322,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1323,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [5U]))));
            tracep->chgBit(oldp+1324,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1325,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1326,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1327,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1328,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1329,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1330,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1331,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1332,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [6U]))));
            tracep->chgBit(oldp+1333,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1334,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1335,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1336,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1337,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1338,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1339,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1340,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1341,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [7U]))));
            tracep->chgBit(oldp+1342,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1343,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1344,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1345,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1346,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1347,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1348,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1349,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1350,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [8U]))));
            tracep->chgBit(oldp+1351,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1352,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1353,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1354,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1355,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1356,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1357,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1358,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1359,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [9U]))));
            tracep->chgBit(oldp+1360,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1361,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1362,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1363,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1364,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [0xaU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1365,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1366,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [0xaU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1367,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1368,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0xaU]))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x27U])) {
            tracep->chgBit(oldp+1369,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgCData(oldp+1370,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+1371,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+1372,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
            tracep->chgBit(oldp+1373,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)))));
            tracep->chgBit(oldp+1374,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
            tracep->chgBit(oldp+1375,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
            tracep->chgBit(oldp+1376,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
            tracep->chgBit(oldp+1377,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
            tracep->chgIData(oldp+1378,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x28U])) {
            tracep->chgBit(oldp+1379,((0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)));
            tracep->chgIData(oldp+1380,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs),18);
            tracep->chgCData(oldp+1381,(((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                          ? 0xeU : 
                                         ((0x2000U 
                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                           ? 0xdU : 
                                          ((0x1000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                            ? 0xcU : 
                                           ((0x800U 
                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                             ? 0xbU
                                             : ((0x400U 
                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                 ? 0xaU
                                                 : 
                                                ((0x200U 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                  ? 9U
                                                  : 
                                                 ((0x100U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                   ? 8U
                                                   : 
                                                  ((0x80U 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                    ? 7U
                                                    : 
                                                   ((0x40U 
                                                     & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                     ? 6U
                                                     : 
                                                    ((0x20U 
                                                      & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                      ? 5U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                       ? 4U
                                                       : 
                                                      ((8U 
                                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                        ? 3U
                                                        : 
                                                       ((4U 
                                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                         ? 2U
                                                         : 
                                                        ((2U 
                                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                          ? 1U
                                                          : 0U))))))))))))))),4);
            tracep->chgBit(oldp+1382,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs 
                                             >> 0x10U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x29U])) {
            tracep->chgCData(oldp+1383,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
            tracep->chgCData(oldp+1384,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
            tracep->chgBit(oldp+1385,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
            tracep->chgBit(oldp+1386,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
            tracep->chgBit(oldp+1387,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2aU])) {
            tracep->chgCData(oldp+1388,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+1389,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op),2);
            tracep->chgBit(oldp+1390,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid));
            tracep->chgBit(oldp+1391,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+1392,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+1393,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+1394,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+1395,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+1396,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+1397,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+1398,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+1399,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+1400,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
            tracep->chgBit(oldp+1401,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+1402,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+1403,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+1404,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+1405,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgQData(oldp+1406,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
            tracep->chgBit(oldp+1408,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
            tracep->chgCData(oldp+1409,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
            tracep->chgBit(oldp+1410,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2aU] | vlTOPp->__Vm_traceActivity
                         [0x57U]))) {
            tracep->chgBit(oldp+1411,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+1412,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+1413,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+1414,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+1415,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2bU])) {
            tracep->chgCData(oldp+1416,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause),6);
            tracep->chgBit(oldp+1417,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause));
            tracep->chgBit(oldp+1418,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                             >> 5U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2cU])) {
            tracep->chgCData(oldp+1419,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+1420,((0xfffffffcU 
                                         & ((IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)) 
                                            << 2U))),32);
            tracep->chgIData(oldp+1421,(((1U & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 2U)))
                                          ? ((1U & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                              ? ((0xff000000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                     << 0x18U)) 
                                                 | (0xffffffU 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                       >> 8U)))
                                              : ((0xffff0000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                       >> 0x10U))))
                                          : ((1U & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                              ? ((0xffffff00U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                       >> 0x18U)))
                                              : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))),32);
            tracep->chgIData(oldp+1422,((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U))),32);
            tracep->chgIData(oldp+1423,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+1424,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+1425,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
            tracep->chgIData(oldp+1426,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd),32);
            tracep->chgQData(oldp+1427,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgQData(oldp+1429,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+1431,((0U == (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))));
            tracep->chgQData(oldp+1432,((0x1ffffffffULL 
                                         & (~ ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U)))),33);
            tracep->chgCData(oldp+1434,((0x3fU & ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgCData(oldp+1435,(((0x10U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                   >> 0x18U))))) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                             >> 0x18U)))),5);
            tracep->chgCData(oldp+1436,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                  >> 0x10U))),5);
            tracep->chgIData(oldp+1437,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1438,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1439,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgBit(oldp+1440,((1U & (((IData)(0x20U) 
                                              - (0x1fU 
                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                             >> 5U))));
            tracep->chgCData(oldp+1441,(((2U & ((IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 0x21U)) 
                                                << 1U)) 
                                         | (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
            tracep->chgCData(oldp+1442,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2dU])) {
            tracep->chgBit(oldp+1443,((1U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1444,((7U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1445,((7U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1446,((3U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1447,((0xffU & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1448,(((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1449,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1450,(((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1451,((1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgCData(oldp+1452,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10),4);
            tracep->chgCData(oldp+1453,((0xfU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgBit(oldp+1454,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1455,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1456,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1457,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1458,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1459,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1460,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1461,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1462,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U])));
            tracep->chgBit(oldp+1463,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests));
            tracep->chgBit(oldp+1464,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1465,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1466,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1467,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1468,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1469,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1470,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1471,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1472,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1473,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1474,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1475,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1476,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1477,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1478,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1479,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1480,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1481,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1482,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1483,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1484,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1485,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1486,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1487,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1488,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1489,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1490,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1491,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1492,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1493,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1494,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1495,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1496,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1497,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1498,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1499,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1500,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1501,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1502,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1503,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1504,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1505,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1506,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1507,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1508,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1509,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1510,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1511,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1512,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1513,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1514,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1515,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1516,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1517,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1518,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1519,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1520,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1521,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1522,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1523,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1524,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1525,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1526,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1527,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1528,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1529,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1530,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1531,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1532,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1533,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1534,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1535,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1536,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1537,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1538,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1539,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1540,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1541,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1542,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1543,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1544,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1545,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1546,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1547,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1548,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1549,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1550,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1551,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1552,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1553,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1554,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1555,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1556,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1557,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1558,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1559,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1560,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1561,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1562,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1563,((1U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgWData(oldp+1564,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+1567,((1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgBit(oldp+1568,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1569,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1570,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1571,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1572,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1573,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1574,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1575,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1576,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1577,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1578,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1579,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1580,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1581,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1582,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1583,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1584,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1585,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1586,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp1895[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1895[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1895[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+1587,(__Vtemp1895),85);
            tracep->chgBit(oldp+1590,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1591,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1592,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1593,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1594,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1595,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1596,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1597,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1598,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1599,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1600,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp1911[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1911[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1911[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+1601,(__Vtemp1911),85);
            tracep->chgBit(oldp+1604,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1605,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1606,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1607,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1608,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1609,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1610,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1611,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1612,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1613,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1614,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp1927[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1927[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1927[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+1615,(__Vtemp1927),85);
            tracep->chgBit(oldp+1618,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1619,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1620,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1621,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1622,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1623,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1624,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1625,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1626,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1627,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1628,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp1943[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp1943[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp1943[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+1629,(__Vtemp1943),85);
            tracep->chgBit(oldp+1632,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1633,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1634,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1635,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1636,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1637,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1638,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1639,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1640,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1641,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1642,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp1959[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp1959[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp1959[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+1643,(__Vtemp1959),85);
            tracep->chgBit(oldp+1646,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1647,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1648,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1649,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1650,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1651,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1652,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1653,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1654,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1655,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1656,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp1975[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp1975[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp1975[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+1657,(__Vtemp1975),85);
            tracep->chgBit(oldp+1660,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1661,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1662,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1663,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1664,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1665,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1666,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1667,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1668,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1669,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1670,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp1991[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp1991[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp1991[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+1671,(__Vtemp1991),85);
            tracep->chgBit(oldp+1674,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1675,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1676,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1677,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1678,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1679,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1680,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1681,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1682,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1683,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1684,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp2007[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp2007[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp2007[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+1685,(__Vtemp2007),85);
            tracep->chgBit(oldp+1688,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1689,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1690,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1691,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1692,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1693,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1694,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1695,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1696,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1697,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1698,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp2023[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp2023[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp2023[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+1699,(__Vtemp2023),85);
            tracep->chgBit(oldp+1702,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1703,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1704,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1705,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1706,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1707,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1708,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1709,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1710,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1711,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1712,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            __Vtemp2039[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][0U]);
            __Vtemp2039[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][1U]));
            __Vtemp2039[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+1713,(__Vtemp2039),85);
            tracep->chgBit(oldp+1716,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                       [9U][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2eU])) {
            tracep->chgBit(oldp+1717,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1718,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1719,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1720,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1721,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1722,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1723,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1724,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1725,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1726,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1727,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1728,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1729,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1730,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1731,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1732,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1733,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1734,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2fU])) {
            tracep->chgBit(oldp+1735,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1736,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1737,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1738,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1739,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1740,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1741,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1742,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1743,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1744,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1745,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1746,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1747,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1748,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1749,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1750,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1751,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1752,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x30U])) {
            tracep->chgBit(oldp+1753,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1754,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1755,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1756,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1757,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1758,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1759,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1760,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1761,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1762,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1763,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1764,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1765,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1766,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1767,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1768,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1769,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1770,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x31U])) {
            tracep->chgBit(oldp+1771,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1772,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1773,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1774,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1775,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1776,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1777,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1778,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1779,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1780,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1781,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1782,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1783,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1784,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1785,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1786,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1787,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1788,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x32U])) {
            tracep->chgBit(oldp+1789,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1790,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1791,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1792,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1793,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1794,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1795,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1796,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1797,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1798,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1799,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1800,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1801,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1802,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1803,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1804,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1805,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1806,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x33U])) {
            tracep->chgBit(oldp+1807,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1808,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1809,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1810,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1811,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1812,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1813,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1814,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1815,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+1816,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1817,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1818,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1819,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1820,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1821,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1822,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1823,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1824,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+1825,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1826,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1827,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1828,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1829,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1830,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1831,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1832,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1833,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][0U])));
            tracep->chgBit(oldp+1834,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1835,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1836,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1837,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1838,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1839,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1840,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1841,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1842,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+1843,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1844,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1845,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1846,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1847,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1848,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1849,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1850,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1851,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+1852,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1853,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1854,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1855,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1856,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1857,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1858,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1859,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1860,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+1861,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1862,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1863,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1864,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1865,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1866,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1867,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1868,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1869,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+1870,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1871,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1872,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1873,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1874,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1875,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1876,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1877,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1878,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+1879,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1880,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1881,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1882,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1883,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1884,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1885,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1886,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1887,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+1888,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1889,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1890,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1891,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1892,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1893,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1894,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1895,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1896,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [8U][0U])));
            tracep->chgBit(oldp+1897,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1898,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1899,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1900,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1901,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1902,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1903,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1904,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1905,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+1906,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1907,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1908,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1909,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1910,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1911,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1912,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1913,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1914,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+1915,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1916,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1917,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1918,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1919,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1920,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1921,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1922,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1923,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+1924,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1925,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1926,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1927,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1928,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1929,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1930,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1931,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1932,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+1933,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1934,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1935,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1936,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1937,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1938,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1939,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1940,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1941,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+1942,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1943,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1944,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1945,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1946,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1947,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1948,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1949,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1950,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+1951,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1952,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1953,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1954,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1955,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1956,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1957,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1958,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1959,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+1960,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1961,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1962,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1963,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1964,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1965,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1966,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1967,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1968,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+1969,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1970,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1971,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1972,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1973,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1974,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1975,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1976,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1977,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [8U][0U])));
            tracep->chgBit(oldp+1978,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1979,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1980,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1981,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1982,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1983,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1984,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1985,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1986,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][0U])));
            tracep->chgBit(oldp+1987,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1988,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1989,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1990,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1991,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1992,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1993,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1994,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1995,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1996,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1997,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1998,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1999,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2000,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2001,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2002,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2003,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2004,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2005,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2006,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2007,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2008,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2009,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2010,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2011,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2012,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2013,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [2U][0U])));
            tracep->chgBit(oldp+2014,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2015,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2016,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2017,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2018,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2019,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2020,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2021,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2022,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [3U][0U])));
            tracep->chgBit(oldp+2023,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2024,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2025,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2026,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2027,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2028,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2029,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2030,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2031,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [4U][0U])));
            tracep->chgBit(oldp+2032,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2033,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2034,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2035,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2036,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2037,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2038,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2039,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2040,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [5U][0U])));
            tracep->chgBit(oldp+2041,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2042,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2043,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2044,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2045,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2046,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2047,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2048,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2049,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [6U][0U])));
            tracep->chgBit(oldp+2050,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2051,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2052,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2053,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2054,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2055,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2056,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2057,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2058,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [7U][0U])));
            tracep->chgBit(oldp+2059,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2060,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2061,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2062,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2063,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2064,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2065,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2066,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2067,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [8U][0U])));
            tracep->chgBit(oldp+2068,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2069,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2070,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2071,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2072,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2073,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2074,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2075,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2076,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [9U][0U])));
            tracep->chgCData(oldp+2077,((0x3cU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   << 0x1bU) 
                                                  | (0x7fffffcU 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][1U] 
                                                        >> 5U))))),6);
            tracep->chgIData(oldp+2078,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+2079,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgSData(oldp+2080,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][0U] 
                                                      >> 1U)))),10);
            tracep->chgSData(oldp+2081,((0xfc00U | 
                                         (0x3ffU & 
                                          ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            << 0x15U) 
                                           | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][0U] 
                                              >> 0xbU))))),16);
            tracep->chgSData(oldp+2082,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 1U)))),16);
            tracep->chgSData(oldp+2083,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0xfU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 0x11U)))),16);
            tracep->chgBit(oldp+2084,((((0U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2085,((0U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2086,((1U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2087,((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2088,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgSData(oldp+2089,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][0U] 
                                                      >> 1U)))),16);
            tracep->chgCData(oldp+2090,(((4U != (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgCData(oldp+2091,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2092,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgCData(oldp+2093,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+2094,((((0U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [0U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2095,((0U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2096,((1U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2097,((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2098,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [0U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+2099,((0x1eU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][1U])),5);
            tracep->chgSData(oldp+2100,((0x1fcU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))),9);
            tracep->chgIData(oldp+2101,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+2102,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+2103,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2104,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2105,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2106,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2107,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2108,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2109,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2110,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2111,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2112,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2113,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2114,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2115,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2116,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2117,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2118,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2119,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2120,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2121,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2122,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2123,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2124,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2125,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2126,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2127,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2128,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2129,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2130,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2131,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2132,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2133,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2134,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+2135,((7U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][0U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2136,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][1U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][0U] 
                                                     >> 1U)))),6);
            tracep->chgBit(oldp+2137,((((0U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2138,((0U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2139,((1U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2140,((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2141,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [9U][1U] 
                                                        >> 5U)))))),4);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x33U] | vlTOPp->__Vm_traceActivity
                         [0x4eU]))) {
            tracep->chgIData(oldp+2142,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2143,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2144,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2145,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2146,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2147,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgBit(oldp+2148,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2149,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2150,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2151,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2152,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2153,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 8U))));
            tracep->chgBit(oldp+2154,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2155,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2156,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2157,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2158,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2159,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2160,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2161,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2162,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2163,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+2164,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                                       & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgBit(oldp+2165,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2166,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2167,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2168,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2169,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2170,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2171,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+2172,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2173,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2174,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2175,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1eU))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x33U] | vlTOPp->__Vm_traceActivity
                         [0x55U]))) {
            tracep->chgBit(oldp+2176,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2177,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2178,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2179,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2180,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2181,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2182,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2183,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2184,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2185,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+2186,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1fU))));
            tracep->chgCData(oldp+2187,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2188,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2189,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2190,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2191,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2192,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2193,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2194,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2195,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2196,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2197,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2198,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2199,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2200,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2201,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2202,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2203,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2204,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2205,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2206,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2207,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2208,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2209,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2210,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2211,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2212,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2213,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2214,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2215,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2216,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2217,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2218,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2219,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2220,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2221,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2222,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2223,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                                              ? (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][0U] 
                                                 >> 8U)
                                              : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)))));
            tracep->chgBit(oldp+2224,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2225,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2226,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2227,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2228,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2229,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2230,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2231,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2232,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2233,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2234,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+2235,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2236,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+2237,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                                       & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+2238,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2239,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x33U] | vlTOPp->__Vm_traceActivity
                         [0x5eU]))) {
            tracep->chgBit(oldp+2240,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2241,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2242,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2243,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1aU))));
            tracep->chgCData(oldp+2244,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x34U])) {
            tracep->chgBit(oldp+2245,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2246,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2247,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2248,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2249,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2250,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2251,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2252,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2253,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
            tracep->chgBit(oldp+2254,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
            tracep->chgBit(oldp+2255,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+2256,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2257,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2258,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb));
            tracep->chgBit(oldp+2259,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
            tracep->chgBit(oldp+2260,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)))));
            tracep->chgBit(oldp+2261,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access));
            tracep->chgBit(oldp+2262,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done));
            tracep->chgBit(oldp+2263,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2264,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2265,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2266,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2267,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2268,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2269,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2270,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2271,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
            tracep->chgBit(oldp+2272,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_req));
            tracep->chgBit(oldp+2273,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_rsp));
            tracep->chgBit(oldp+2274,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2275,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2276,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2277,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2278,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2279,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2280,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2281,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2282,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p))));
            tracep->chgBit(oldp+2283,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready));
            tracep->chgBit(oldp+2284,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
            tracep->chgBit(oldp+2285,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2286,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x35U])) {
            tracep->chgBit(oldp+2288,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+2289,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
            tracep->chgBit(oldp+2290,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+2291,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+2292,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+2293,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+2294,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2295,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2296,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x36U])) {
            tracep->chgBit(oldp+2297,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+2298,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re));
            tracep->chgBit(oldp+2299,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+2300,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)))))));
            tracep->chgBit(oldp+2301,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+2302,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2303,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2304,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2305,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2306,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2307,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2308,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2309,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2310,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2311,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2312,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2313,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2314,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+2315,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit),15);
            tracep->chgBit(oldp+2316,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+2317,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+2318,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+2319,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+2320,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2321,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2322,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgSData(oldp+2323,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr),12);
            tracep->chgIData(oldp+2324,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+2325,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we),32);
            tracep->chgCData(oldp+2326,((0xfU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we)),4);
            tracep->chgIData(oldp+2327,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+2328,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x38U])) {
            tracep->chgCData(oldp+2329,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0]),3);
            tracep->chgCData(oldp+2330,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[1]),3);
            tracep->chgCData(oldp+2331,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[2]),3);
            tracep->chgCData(oldp+2332,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[3]),3);
            tracep->chgCData(oldp+2333,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[4]),3);
            tracep->chgCData(oldp+2334,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[5]),3);
            tracep->chgCData(oldp+2335,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[6]),3);
            tracep->chgCData(oldp+2336,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[7]),3);
            tracep->chgCData(oldp+2337,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[8]),3);
            tracep->chgCData(oldp+2338,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[9]),3);
            tracep->chgCData(oldp+2339,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[10]),3);
            tracep->chgCData(oldp+2340,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[11]),3);
            tracep->chgCData(oldp+2341,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[12]),3);
            tracep->chgCData(oldp+2342,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[13]),3);
            tracep->chgCData(oldp+2343,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[14]),3);
            tracep->chgCData(oldp+2344,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[15]),3);
            tracep->chgCData(oldp+2345,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[16]),3);
            tracep->chgCData(oldp+2346,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[17]),3);
            tracep->chgCData(oldp+2347,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[18]),3);
            tracep->chgCData(oldp+2348,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[19]),3);
            tracep->chgCData(oldp+2349,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[20]),3);
            tracep->chgCData(oldp+2350,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[21]),3);
            tracep->chgCData(oldp+2351,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[22]),3);
            tracep->chgCData(oldp+2352,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[23]),3);
            tracep->chgCData(oldp+2353,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[24]),3);
            tracep->chgCData(oldp+2354,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[25]),3);
            tracep->chgCData(oldp+2355,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[26]),3);
            tracep->chgCData(oldp+2356,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[27]),3);
            tracep->chgCData(oldp+2357,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[28]),3);
            tracep->chgCData(oldp+2358,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[29]),3);
            tracep->chgCData(oldp+2359,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[30]),3);
            tracep->chgCData(oldp+2360,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[31]),3);
            tracep->chgCData(oldp+2361,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0]),3);
            tracep->chgCData(oldp+2362,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1]),3);
            tracep->chgCData(oldp+2363,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2]),3);
            tracep->chgCData(oldp+2364,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3]),3);
            tracep->chgCData(oldp+2365,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4]),3);
            tracep->chgCData(oldp+2366,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5]),3);
            tracep->chgCData(oldp+2367,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6]),3);
            tracep->chgCData(oldp+2368,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7]),3);
            tracep->chgCData(oldp+2369,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8]),3);
            tracep->chgCData(oldp+2370,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9]),3);
            tracep->chgCData(oldp+2371,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[10]),3);
            tracep->chgCData(oldp+2372,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[11]),3);
            tracep->chgCData(oldp+2373,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[12]),3);
            tracep->chgCData(oldp+2374,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[13]),3);
            tracep->chgCData(oldp+2375,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[14]),3);
            tracep->chgCData(oldp+2376,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[15]),3);
            tracep->chgCData(oldp+2377,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[16]),3);
            tracep->chgCData(oldp+2378,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[17]),3);
            tracep->chgCData(oldp+2379,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[18]),3);
            tracep->chgCData(oldp+2380,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[19]),3);
            tracep->chgCData(oldp+2381,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[20]),3);
            tracep->chgCData(oldp+2382,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[21]),3);
            tracep->chgCData(oldp+2383,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[22]),3);
            tracep->chgCData(oldp+2384,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[23]),3);
            tracep->chgCData(oldp+2385,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[24]),3);
            tracep->chgCData(oldp+2386,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[25]),3);
            tracep->chgCData(oldp+2387,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[26]),3);
            tracep->chgCData(oldp+2388,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[27]),3);
            tracep->chgCData(oldp+2389,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[28]),3);
            tracep->chgCData(oldp+2390,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[29]),3);
            tracep->chgCData(oldp+2391,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[30]),3);
            tracep->chgCData(oldp+2392,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[31]),3);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x38U] | vlTOPp->__Vm_traceActivity
                         [0x3aU]))) {
            tracep->chgCData(oldp+2393,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U])),3);
            tracep->chgCData(oldp+2394,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+2395,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+2396,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+2397,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+2398,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x11U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+2399,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+2400,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xbU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+2401,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+2402,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 5U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+2403,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+2404,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2405,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+2406,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x19U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+2407,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+2408,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x13U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+2409,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+2410,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xdU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+2411,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+2412,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 7U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+2413,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+2414,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 1U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+2415,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 2U)))),3);
            tracep->chgCData(oldp+2416,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1bU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 5U)))),3);
            tracep->chgCData(oldp+2417,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 8U)))),3);
            tracep->chgCData(oldp+2418,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x15U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xbU)))),3);
            tracep->chgCData(oldp+2419,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xeU)))),3);
            tracep->chgCData(oldp+2420,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xfU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x11U)))),3);
            tracep->chgCData(oldp+2421,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x14U)))),3);
            tracep->chgCData(oldp+2422,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 9U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x17U)))),3);
            tracep->chgCData(oldp+2423,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1aU)))),3);
            tracep->chgCData(oldp+2424,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 3U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1dU)))),3);
            tracep->chgCData(oldp+2425,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U])),3);
            tracep->chgCData(oldp+2426,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+2427,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+2428,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+2429,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+2430,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x11U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+2431,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+2432,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+2433,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+2434,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 5U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+2435,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+2436,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2437,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+2438,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x19U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+2439,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+2440,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x13U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+2441,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+2442,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xdU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+2443,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+2444,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 7U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+2445,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+2446,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 1U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+2447,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 2U))),3);
            tracep->chgCData(oldp+2448,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 5U))),3);
            tracep->chgCData(oldp+2449,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 8U))),3);
            tracep->chgCData(oldp+2450,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xbU))),3);
            tracep->chgCData(oldp+2451,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xeU))),3);
            tracep->chgCData(oldp+2452,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x11U))),3);
            tracep->chgCData(oldp+2453,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x14U))),3);
            tracep->chgCData(oldp+2454,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x17U))),3);
            tracep->chgCData(oldp+2455,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x1aU))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x39U])) {
            tracep->chgCData(oldp+2456,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])),6);
            tracep->chgCData(oldp+2457,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2458,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2459,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2460,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2461,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 2U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2462,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2463,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2464,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2465,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2466,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 4U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2467,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+2468,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+2469,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+2470,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+2471,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 6U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+2472,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U])),6);
            tracep->chgCData(oldp+2473,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2474,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2475,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2476,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2477,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 2U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2478,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2479,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2480,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2481,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2482,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 4U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2483,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+2484,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+2485,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+2486,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+2487,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 6U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+2488,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U])),6);
            tracep->chgCData(oldp+2489,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2490,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2491,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2492,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 8U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2493,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 2U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2494,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2495,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2496,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2497,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2498,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 4U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2499,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+2500,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+2501,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+2502,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+2503,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 6U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+2504,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U])),6);
            tracep->chgCData(oldp+2505,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+2506,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0x14U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+2507,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0xeU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+2508,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 8U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+2509,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 2U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+2510,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+2511,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x16U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+2512,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+2513,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+2514,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 4U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+2515,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 2U))),6);
            tracep->chgCData(oldp+2516,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 8U))),6);
            tracep->chgCData(oldp+2517,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 0xeU))),6);
            tracep->chgCData(oldp+2518,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 0x14U))),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3bU])) {
            tracep->chgCData(oldp+2519,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2520,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2521,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2522,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2523,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2524,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2525,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2526,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2527,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2528,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2529,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2530,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2531,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2532,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2533,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2534,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2535,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2536,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2537,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2538,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2539,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2540,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2541,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2542,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2543,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2544,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2545,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2546,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2547,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2548,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2549,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2550,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2551,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2552,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2553,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2554,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2555,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2556,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2557,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2558,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2559,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2560,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2561,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2562,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2563,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2564,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2565,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2566,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2567,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe));
            tracep->chgBit(oldp+2568,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe));
            tracep->chgBit(oldp+2569,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe));
            tracep->chgBit(oldp+2570,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe));
            tracep->chgBit(oldp+2571,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe));
            tracep->chgBit(oldp+2572,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe));
            tracep->chgBit(oldp+2573,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe));
            tracep->chgBit(oldp+2574,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe));
            tracep->chgBit(oldp+2575,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe));
            tracep->chgBit(oldp+2576,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3cU])) {
            tracep->chgCData(oldp+2577,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2578,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2579,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2580,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2581,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2582,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2583,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2584,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2585,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2586,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2587,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2588,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2589,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2590,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2591,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2592,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2593,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2594,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2595,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2596,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2597,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2598,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2599,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2600,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2601,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2602,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2603,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2604,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2605,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2606,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2607,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2608,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3dU])) {
            tracep->chgCData(oldp+2609,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__irq_id_o[0]),5);
            tracep->chgBit(oldp+2610,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2611,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2612,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2613,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2614,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2615,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2616,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2617,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2618,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2619,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2620,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2621,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2622,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2623,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2624,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2625,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2626,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2627,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2628,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2629,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2630,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2631,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2632,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2633,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2634,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2635,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2636,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2637,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
            tracep->chgBit(oldp+2638,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2639,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2640,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2641,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2642,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2643,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2644,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2645,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2646,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2647,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2648,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2649,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2650,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2651,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2652,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2653,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2654,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2655,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2656,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2657,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2658,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2659,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2660,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2661,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2662,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2663,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2664,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2665,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2666,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2667,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2668,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2669,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+2670,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2671,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2672,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2673,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 4U))));
            tracep->chgCData(oldp+2674,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgCData(oldp+2675,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim_id[0]),5);
            tracep->chgCData(oldp+2676,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__cc_id[0]),5);
            tracep->chgBit(oldp+2677,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
            tracep->chgBit(oldp+2678,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
            tracep->chgBit(oldp+2679,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
            tracep->chgBit(oldp+2680,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
            tracep->chgBit(oldp+2681,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
            tracep->chgBit(oldp+2682,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
            tracep->chgBit(oldp+2683,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
            tracep->chgBit(oldp+2684,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
            tracep->chgBit(oldp+2685,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
            tracep->chgBit(oldp+2686,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
            tracep->chgBit(oldp+2687,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
            tracep->chgBit(oldp+2688,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
            tracep->chgBit(oldp+2689,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
            tracep->chgBit(oldp+2690,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
            tracep->chgBit(oldp+2691,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
            tracep->chgBit(oldp+2692,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
            tracep->chgBit(oldp+2693,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
            tracep->chgBit(oldp+2694,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
            tracep->chgBit(oldp+2695,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
            tracep->chgBit(oldp+2696,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
            tracep->chgBit(oldp+2697,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
            tracep->chgBit(oldp+2698,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
            tracep->chgBit(oldp+2699,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
            tracep->chgBit(oldp+2700,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
            tracep->chgBit(oldp+2701,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
            tracep->chgBit(oldp+2702,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
            tracep->chgBit(oldp+2703,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
            tracep->chgBit(oldp+2704,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
            tracep->chgCData(oldp+2705,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgBit(oldp+2706,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2707,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2708,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2709,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2710,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2711,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2712,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2713,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2714,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2715,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2716,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2717,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2718,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2719,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2720,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2721,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2722,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2723,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2724,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2725,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2726,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2727,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2728,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2729,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2730,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2731,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2732,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
            tracep->chgBit(oldp+2733,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2734,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2735,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2736,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2737,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2738,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2739,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2740,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2741,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2742,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2743,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2744,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2745,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2746,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2747,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2748,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2749,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2750,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2751,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2752,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2753,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2754,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2755,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2756,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2757,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2758,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2759,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2760,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2761,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2762,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2763,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2764,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+2765,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2766,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2767,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2768,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2769,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 5U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3eU])) {
            tracep->chgIData(oldp+2770,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
            tracep->chgBit(oldp+2771,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2772,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2773,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2774,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2775,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2776,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2777,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2778,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2779,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2780,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2781,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2782,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2783,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2784,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2785,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2786,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2787,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2788,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2789,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2790,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2791,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2792,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2793,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2794,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2795,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2796,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2797,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2798,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2799,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2800,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2801,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgIData(oldp+2802,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
            tracep->chgIData(oldp+2803,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
            tracep->chgBit(oldp+2804,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe));
            tracep->chgBit(oldp+2805,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe));
            tracep->chgBit(oldp+2806,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe));
            tracep->chgBit(oldp+2807,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe));
            tracep->chgBit(oldp+2808,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe));
            tracep->chgBit(oldp+2809,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe));
            tracep->chgBit(oldp+2810,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe));
            tracep->chgBit(oldp+2811,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe));
            tracep->chgBit(oldp+2812,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe));
            tracep->chgBit(oldp+2813,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe));
            tracep->chgBit(oldp+2814,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe));
            tracep->chgBit(oldp+2815,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe));
            tracep->chgBit(oldp+2816,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe));
            tracep->chgBit(oldp+2817,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe));
            tracep->chgBit(oldp+2818,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe));
            tracep->chgBit(oldp+2819,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe));
            tracep->chgBit(oldp+2820,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe));
            tracep->chgBit(oldp+2821,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
            tracep->chgBit(oldp+2822,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe));
            tracep->chgBit(oldp+2823,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe));
            tracep->chgBit(oldp+2824,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe));
            tracep->chgBit(oldp+2825,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe));
            tracep->chgBit(oldp+2826,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe));
            tracep->chgBit(oldp+2827,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe));
            tracep->chgBit(oldp+2828,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3fU])) {
            tracep->chgCData(oldp+2829,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2830,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2831,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2832,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2833,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2834,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2835,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2836,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2837,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2838,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2839,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2840,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2841,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2842,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2843,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2844,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x40U])) {
            tracep->chgQData(oldp+2845,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_gpio)) 
                                         << 1U)),33);
            tracep->chgIData(oldp+2847,(vlTOPp->opentitan_soc_top__DOT__intr_gpio),32);
            tracep->chgIData(oldp+2848,((0xfffffffeU 
                                         & (vlTOPp->opentitan_soc_top__DOT__intr_gpio 
                                            << 1U))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x41U])) {
            tracep->chgBit(oldp+2849,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+2850,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id));
            tracep->chgBit(oldp+2851,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+2852,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id));
            tracep->chgBit(oldp+2853,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+2854,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
            tracep->chgIData(oldp+2855,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgIData(oldp+2856,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgBit(oldp+2857,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+2858,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgCData(oldp+2859,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgIData(oldp+2860,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+2861,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
            tracep->chgQData(oldp+2863,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+2865,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+2866,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+2867,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgIData(oldp+2868,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgBit(oldp+2869,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x42U])) {
            tracep->chgBit(oldp+2870,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[0U])));
            tracep->chgWData(oldp+2871,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o),128);
            tracep->chgSData(oldp+2875,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr),12);
            tracep->chgCData(oldp+2876,((0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))),5);
            tracep->chgCData(oldp+2877,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                               >> 5U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x43U])) {
            tracep->chgCData(oldp+2878,((0x3fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
            tracep->chgIData(oldp+2879,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+2880,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+2881,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+2882,((7U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2883,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x44U])) {
            tracep->chgBit(oldp+2884,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
            tracep->chgBit(oldp+2885,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id));
            tracep->chgBit(oldp+2886,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+2887,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
            tracep->chgBit(oldp+2888,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
            tracep->chgBit(oldp+2889,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz));
            tracep->chgBit(oldp+2890,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+2891,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x45U])) {
            tracep->chgBit(oldp+2892,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
            tracep->chgBit(oldp+2893,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec));
            tracep->chgBit(oldp+2894,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x46U])) {
            tracep->chgIData(oldp+2895,((0xfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q)),20);
            tracep->chgBit(oldp+2896,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
            tracep->chgIData(oldp+2897,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+2898,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_en_q),32);
            tracep->chgIData(oldp+2899,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q),32);
            tracep->chgBit(oldp+2900,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe));
            tracep->chgCData(oldp+2901,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2902,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2903,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2904,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2905,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+2906,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2907,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+2908,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2909,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+2910,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2911,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+2912,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2913,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+2914,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2915,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+2916,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2917,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2918,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe));
            tracep->chgBit(oldp+2919,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
            tracep->chgBit(oldp+2920,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe));
            tracep->chgBit(oldp+2921,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe));
            tracep->chgBit(oldp+2922,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe));
            tracep->chgBit(oldp+2923,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
            tracep->chgBit(oldp+2924,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe));
            tracep->chgBit(oldp+2925,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe));
            tracep->chgBit(oldp+2926,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe));
            tracep->chgBit(oldp+2927,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe));
            tracep->chgBit(oldp+2928,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe));
            tracep->chgBit(oldp+2929,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe));
            tracep->chgBit(oldp+2930,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe));
            tracep->chgBit(oldp+2931,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe));
            tracep->chgBit(oldp+2932,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe));
            tracep->chgBit(oldp+2933,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe));
            tracep->chgBit(oldp+2934,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
            tracep->chgBit(oldp+2935,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe));
            tracep->chgBit(oldp+2936,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe));
            tracep->chgBit(oldp+2937,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe));
            tracep->chgBit(oldp+2938,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe));
            tracep->chgBit(oldp+2939,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe));
            tracep->chgBit(oldp+2940,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe));
            tracep->chgBit(oldp+2941,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe));
            tracep->chgBit(oldp+2942,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe));
            tracep->chgBit(oldp+2943,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe));
            tracep->chgBit(oldp+2944,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe));
            tracep->chgBit(oldp+2945,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe));
            tracep->chgBit(oldp+2946,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
            tracep->chgBit(oldp+2947,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe));
            tracep->chgBit(oldp+2948,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe));
            tracep->chgBit(oldp+2949,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe));
            tracep->chgBit(oldp+2950,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x47U])) {
            tracep->chgCData(oldp+2951,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2952,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2953,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2954,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2955,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2956,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2957,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2958,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2959,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2960,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2961,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2962,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2963,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2964,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2965,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2966,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x48U] | vlTOPp->__Vm_traceActivity
                         [0x55U]))) {
            tracep->chgIData(oldp+2967,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+2968,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+2969,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgBit(oldp+2970,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+2971,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+2972,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+2973,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),10);
            tracep->chgSData(oldp+2974,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2975,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
            tracep->chgIData(oldp+2976,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+2977,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2978,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+2979,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2980,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgIData(oldp+2981,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+2982,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+2983,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgIData(oldp+2984,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+2985,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2986,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+2987,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2988,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgBit(oldp+2989,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+2990,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+2991,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+2992,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgSData(oldp+2993,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),16);
            tracep->chgSData(oldp+2994,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),16);
            tracep->chgSData(oldp+2995,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x49U])) {
            tracep->chgIData(oldp+2996,(((IData)(1U) 
                                         << (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
            tracep->chgIData(oldp+2997,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
            tracep->chgIData(oldp+2998,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
            tracep->chgCData(oldp+2999,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
            tracep->chgBit(oldp+3000,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4aU])) {
            tracep->chgBit(oldp+3001,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3002,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3003,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3004,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3005,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3006,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3007,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3008,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3009,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+3010,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+3011,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+3012,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3013,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3014,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load));
            tracep->chgBit(oldp+3015,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4bU])) {
            tracep->chgIData(oldp+3016,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+3017,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)));
            tracep->chgIData(oldp+3018,((0xfffffffeU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4cU])) {
            tracep->chgBit(oldp+3019,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump));
            tracep->chgBit(oldp+3020,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch));
            tracep->chgBit(oldp+3021,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch));
            tracep->chgBit(oldp+3022,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgIData(oldp+3023,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgQData(oldp+3024,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4dU])) {
            tracep->chgBit(oldp+3026,((1U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3027,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3028,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3029,((3U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3030,((0xffU & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3031,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3032,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3033,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3034,((1U & vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U])));
            tracep->chgBit(oldp+3035,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__instr_req));
            tracep->chgIData(oldp+3036,((0xfffffffcU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+3037,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+3038,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init));
            tracep->chgBit(oldp+3039,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgBit(oldp+3040,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgIData(oldp+3041,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4eU])) {
            tracep->chgBit(oldp+3042,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we));
            tracep->chgBit(oldp+3043,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
            tracep->chgBit(oldp+3044,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
            tracep->chgBit(oldp+3045,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
            tracep->chgBit(oldp+3046,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
            tracep->chgBit(oldp+3047,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
            tracep->chgBit(oldp+3048,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
            tracep->chgIData(oldp+3049,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim),32);
            tracep->chgCData(oldp+3050,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold[0]),3);
            tracep->chgIData(oldp+3051,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+3052,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
            tracep->chgBit(oldp+3053,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
            tracep->chgBit(oldp+3054,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
            tracep->chgBit(oldp+3055,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
            tracep->chgBit(oldp+3056,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
            tracep->chgBit(oldp+3057,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
            tracep->chgBit(oldp+3058,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
            tracep->chgBit(oldp+3059,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
            tracep->chgBit(oldp+3060,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
            tracep->chgBit(oldp+3061,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
            tracep->chgBit(oldp+3062,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
            tracep->chgBit(oldp+3063,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
            tracep->chgBit(oldp+3064,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
            tracep->chgBit(oldp+3065,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
            tracep->chgBit(oldp+3066,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
            tracep->chgBit(oldp+3067,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
            tracep->chgBit(oldp+3068,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
            tracep->chgBit(oldp+3069,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
            tracep->chgBit(oldp+3070,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
            tracep->chgBit(oldp+3071,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
            tracep->chgBit(oldp+3072,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
            tracep->chgBit(oldp+3073,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
            tracep->chgBit(oldp+3074,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
            tracep->chgBit(oldp+3075,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
            tracep->chgBit(oldp+3076,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
            tracep->chgBit(oldp+3077,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
            tracep->chgBit(oldp+3078,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
            tracep->chgBit(oldp+3079,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
            tracep->chgCData(oldp+3080,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                        [0U]),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4fU])) {
            tracep->chgIData(oldp+3081,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval),32);
            tracep->chgBit(oldp+3082,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+3083,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
            tracep->chgQData(oldp+3084,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
            tracep->chgBit(oldp+3086,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
            tracep->chgBit(oldp+3087,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
            tracep->chgSData(oldp+3088,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
            tracep->chgSData(oldp+3089,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x50U])) {
            tracep->chgIData(oldp+3090,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
            tracep->chgIData(oldp+3091,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgBit(oldp+3092,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgCData(oldp+3093,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x51U])) {
            tracep->chgIData(oldp+3094,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgIData(oldp+3095,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgIData(oldp+3096,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgCData(oldp+3097,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgIData(oldp+3098,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+3099,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x52U])) {
            tracep->chgWData(oldp+3100,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex),68);
            tracep->chgIData(oldp+3103,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex),32);
            tracep->chgBit(oldp+3104,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec));
            tracep->chgBit(oldp+3105,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
            tracep->chgBit(oldp+3106,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
            tracep->chgWData(oldp+3107,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d),68);
            tracep->chgQData(oldp+3110,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
            tracep->chgIData(oldp+3112,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
            tracep->chgCData(oldp+3113,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x53U])) {
            tracep->chgBit(oldp+3114,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3115,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3116,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3117,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3118,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3119,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3120,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3121,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3122,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U])));
            tracep->chgCData(oldp+3123,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
            tracep->chgCData(oldp+3124,(((4U != (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgCData(oldp+3125,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3126,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgCData(oldp+3127,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+3128,((((0U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+3129,((0U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+3130,((1U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+3131,((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+3132,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+3133,((0x1eU & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U])),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x54U])) {
            tracep->chgBit(oldp+3134,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req));
            tracep->chgSData(oldp+3135,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr),12);
            tracep->chgBit(oldp+3136,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
            tracep->chgIData(oldp+3137,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+3138,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+3139,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgBit(oldp+3140,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
            tracep->chgBit(oldp+3141,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgIData(oldp+3142,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+3143,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+3144,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+3145,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+3146,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+3147,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+3148,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x55U])) {
            tracep->chgIData(oldp+3149,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3150,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3151,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3152,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xaU))));
            tracep->chgIData(oldp+3153,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                          << 0x16U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                            >> 0xaU))),32);
            tracep->chgBit(oldp+3154,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                             >> 9U))));
            tracep->chgSData(oldp+3155,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 7U) | 
                                          (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           >> 0x19U)))),16);
            tracep->chgBit(oldp+3156,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 0x18U))));
            tracep->chgSData(oldp+3157,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 0x18U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 8U)))),16);
            tracep->chgBit(oldp+3158,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 7U))));
            tracep->chgSData(oldp+3159,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 9U) | 
                                          (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                           >> 0x17U)))),16);
            tracep->chgBit(oldp+3160,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 0x16U))));
            tracep->chgSData(oldp+3161,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 0x1aU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 6U)))),16);
            tracep->chgBit(oldp+3162,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 5U))));
            tracep->chgIData(oldp+3163,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                            >> 5U))),32);
            tracep->chgBit(oldp+3164,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                             >> 4U))));
            tracep->chgSData(oldp+3165,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0xcU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 0x14U)))),16);
            tracep->chgBit(oldp+3166,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 0x13U))));
            tracep->chgSData(oldp+3167,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0x1dU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 3U)))),16);
            tracep->chgBit(oldp+3168,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 2U))));
            tracep->chgSData(oldp+3169,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0xeU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 0x12U)))),16);
            tracep->chgBit(oldp+3170,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 0x11U))));
            tracep->chgSData(oldp+3171,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0x1fU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 1U)))),16);
            tracep->chgBit(oldp+3172,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U])));
            tracep->chgIData(oldp+3173,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]),32);
            tracep->chgIData(oldp+3174,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U]),32);
            tracep->chgIData(oldp+3175,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]),32);
            tracep->chgIData(oldp+3176,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U]),32);
            tracep->chgIData(oldp+3177,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U]),32);
            tracep->chgIData(oldp+3178,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d),32);
            tracep->chgIData(oldp+3179,(((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])),32);
            tracep->chgIData(oldp+3180,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U])),32);
            tracep->chgIData(oldp+3181,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3182,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3183,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xaU))));
            tracep->chgIData(oldp+3184,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3185,((0U != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)));
            tracep->chgIData(oldp+3186,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                         | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                             << 0x15U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                               >> 0xbU)))),32);
            tracep->chgIData(oldp+3187,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event),32);
            tracep->chgIData(oldp+3188,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+3189,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+3190,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+3191,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+3192,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+3193,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+3194,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+3195,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+3196,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+3197,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+3198,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+3199,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+3200,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+3201,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3202,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+3203,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+3204,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+3205,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+3206,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+3207,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+3208,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+3209,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+3210,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3211,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+3212,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+3213,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+3214,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+3215,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+3216,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+3217,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+3218,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+3219,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+3220,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+3221,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
            tracep->chgBit(oldp+3222,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
            tracep->chgBit(oldp+3223,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
            tracep->chgBit(oldp+3224,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
            tracep->chgBit(oldp+3225,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
            tracep->chgBit(oldp+3226,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
            tracep->chgBit(oldp+3227,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
            tracep->chgBit(oldp+3228,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
            tracep->chgBit(oldp+3229,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
            tracep->chgBit(oldp+3230,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
            tracep->chgBit(oldp+3231,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
            tracep->chgBit(oldp+3232,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
            tracep->chgBit(oldp+3233,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
            tracep->chgBit(oldp+3234,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
            tracep->chgBit(oldp+3235,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
            tracep->chgBit(oldp+3236,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
            tracep->chgBit(oldp+3237,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
            tracep->chgBit(oldp+3238,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
            tracep->chgBit(oldp+3239,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
            tracep->chgBit(oldp+3240,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
            tracep->chgBit(oldp+3241,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
            tracep->chgBit(oldp+3242,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
            tracep->chgBit(oldp+3243,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
            tracep->chgBit(oldp+3244,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
            tracep->chgBit(oldp+3245,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
            tracep->chgBit(oldp+3246,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
            tracep->chgBit(oldp+3247,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
            tracep->chgBit(oldp+3248,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
            tracep->chgBit(oldp+3249,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
            tracep->chgBit(oldp+3250,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
            tracep->chgBit(oldp+3251,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
            tracep->chgBit(oldp+3252,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
            tracep->chgBit(oldp+3253,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
            tracep->chgBit(oldp+3254,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
            tracep->chgBit(oldp+3255,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
            tracep->chgBit(oldp+3256,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
            tracep->chgBit(oldp+3257,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
            tracep->chgBit(oldp+3258,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
            tracep->chgBit(oldp+3259,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
            tracep->chgBit(oldp+3260,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
            tracep->chgBit(oldp+3261,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
            tracep->chgBit(oldp+3262,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
            tracep->chgBit(oldp+3263,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
            tracep->chgBit(oldp+3264,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
            tracep->chgBit(oldp+3265,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
            tracep->chgBit(oldp+3266,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
            tracep->chgBit(oldp+3267,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
            tracep->chgBit(oldp+3268,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
            tracep->chgBit(oldp+3269,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
            tracep->chgBit(oldp+3270,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
            tracep->chgBit(oldp+3271,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
            tracep->chgBit(oldp+3272,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
            tracep->chgBit(oldp+3273,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
            tracep->chgBit(oldp+3274,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
            tracep->chgBit(oldp+3275,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
            tracep->chgBit(oldp+3276,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
            tracep->chgBit(oldp+3277,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
            tracep->chgBit(oldp+3278,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
            tracep->chgBit(oldp+3279,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
            tracep->chgBit(oldp+3280,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
            tracep->chgBit(oldp+3281,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
            tracep->chgBit(oldp+3282,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
            tracep->chgBit(oldp+3283,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
            tracep->chgBit(oldp+3284,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x56U])) {
            tracep->chgBit(oldp+3285,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw));
            tracep->chgIData(oldp+3286,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+3287,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgIData(oldp+3288,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+3289,((3U != (3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgBit(oldp+3290,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgBit(oldp+3291,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)))));
            tracep->chgBit(oldp+3292,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err));
            tracep->chgBit(oldp+3293,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err));
            tracep->chgCData(oldp+3294,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+3295,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                          ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                   >> 1U))
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
            tracep->chgCData(oldp+3296,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgCData(oldp+3297,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                          ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                   >> 1U))
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
            tracep->chgBit(oldp+3298,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err));
            tracep->chgBit(oldp+3299,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgWData(oldp+3300,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
            tracep->chgCData(oldp+3303,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgCData(oldp+3304,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgIData(oldp+3305,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+3306,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgBit(oldp+3307,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+3308,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+3309,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+3310,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+3311,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
            tracep->chgBit(oldp+3312,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we));
            tracep->chgBit(oldp+3313,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req));
            tracep->chgIData(oldp+3314,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgBit(oldp+3315,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
            tracep->chgBit(oldp+3316,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgBit(oldp+3317,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we)))));
            tracep->chgBit(oldp+3318,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgIData(oldp+3319,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+3320,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+3321,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+3322,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+3323,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+3324,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x57U])) {
            tracep->chgCData(oldp+3325,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
            tracep->chgBit(oldp+3326,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err));
            tracep->chgBit(oldp+3327,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err));
            tracep->chgBit(oldp+3328,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en));
            tracep->chgBit(oldp+3329,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+3330,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done));
            tracep->chgBit(oldp+3331,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err))));
            tracep->chgBit(oldp+3332,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+3333,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+3334,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception));
            tracep->chgBit(oldp+3335,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing));
            tracep->chgBit(oldp+3336,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem));
            tracep->chgBit(oldp+3337,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+3338,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+3339,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+3340,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+3341,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+3342,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+3343,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgBit(oldp+3344,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill));
            tracep->chgBit(oldp+3345,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err))));
            tracep->chgBit(oldp+3346,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
            tracep->chgBit(oldp+3347,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending));
            tracep->chgBit(oldp+3348,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
            tracep->chgCData(oldp+3349,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgBit(oldp+3350,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
            tracep->chgBit(oldp+3351,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
            tracep->chgBit(oldp+3352,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
            tracep->chgBit(oldp+3353,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
            tracep->chgBit(oldp+3354,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
            tracep->chgBit(oldp+3355,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgBit(oldp+3356,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
            tracep->chgCData(oldp+3357,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgBit(oldp+3358,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgBit(oldp+3359,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x58U])) {
            tracep->chgCData(oldp+3360,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgBit(oldp+3361,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgBit(oldp+3362,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+3363,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+3364,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
            tracep->chgBit(oldp+3365,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x59U])) {
            tracep->chgBit(oldp+3366,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+3367,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgIData(oldp+3368,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+3369,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgBit(oldp+3370,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 1U))));
            tracep->chgBit(oldp+3371,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 1U))));
            tracep->chgIData(oldp+3372,((0x1fffffffU 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 3U))),29);
            tracep->chgIData(oldp+3373,((0x1fffffffU 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 3U))),29);
            tracep->chgBit(oldp+3374,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+3375,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgBit(oldp+3376,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 2U))));
            tracep->chgBit(oldp+3377,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5aU])) {
            tracep->chgBit(oldp+3378,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+3379,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+3380,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+3381,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgBit(oldp+3382,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+3383,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgIData(oldp+3384,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5bU])) {
            tracep->chgBit(oldp+3385,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready));
            tracep->chgBit(oldp+3386,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall));
            tracep->chgBit(oldp+3387,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+3388,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgIData(oldp+3389,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+3390,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             >> 1U))));
            tracep->chgIData(oldp+3391,((0x1fffffffU 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 3U))),29);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5cU])) {
            tracep->chgBit(oldp+3392,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear));
            tracep->chgBit(oldp+3393,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgCData(oldp+3394,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+3395,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgBit(oldp+3396,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgCData(oldp+3397,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgQData(oldp+3398,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+3400,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+3402,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+3403,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgQData(oldp+3405,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+3407,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+3409,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+3410,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5dU])) {
            tracep->chgIData(oldp+3412,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+3413,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgBit(oldp+3414,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+3415,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+3416,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgBit(oldp+3417,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+3418,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgIData(oldp+3419,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5eU])) {
            tracep->chgCData(oldp+3420,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id[0]),5);
            tracep->chgIData(oldp+3421,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete),32);
            tracep->chgBit(oldp+3422,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
            tracep->chgBit(oldp+3423,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
            tracep->chgBit(oldp+3424,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
            tracep->chgBit(oldp+3425,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
            tracep->chgBit(oldp+3426,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
        }
        tracep->chgBit(oldp+3427,(vlTOPp->clk_i));
        tracep->chgBit(oldp+3428,(vlTOPp->rst_ni));
        tracep->chgIData(oldp+3429,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+3430,(vlTOPp->gpio_o),20);
        tracep->chgBit(oldp+3431,((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                            & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                               | (0U 
                                                  != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))))));
        tracep->chgBit(oldp+3432,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_req));
        tracep->chgBit(oldp+3433,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk));
        tracep->chgBit(oldp+3434,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy) 
                                    | ((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                   | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        tracep->chgBit(oldp+3435,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                      | (0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))));
        tracep->chgBit(oldp+3436,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        tracep->chgIData(oldp+3437,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                    (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xfU))]),32);
        tracep->chgIData(oldp+3438,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                    (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U))]),32);
        tracep->chgBit(oldp+3439,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__en_latch));
        tracep->chgBit(oldp+3440,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
        tracep->chgSData(oldp+3441,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
        tracep->chgBit(oldp+3442,((1U & (((((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))))));
        tracep->chgBit(oldp+3443,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err));
        tracep->chgIData(oldp+3444,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                     << 1U)),32);
        tracep->chgBit(oldp+3445,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
        tracep->chgBit(oldp+3446,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        tracep->chgBit(oldp+3447,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy));
        tracep->chgBit(oldp+3448,(((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        tracep->chgBit(oldp+3449,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        tracep->chgBit(oldp+3450,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        tracep->chgBit(oldp+3451,(((((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                     & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                >> 0x33U))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->chgIData(oldp+3452,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                      ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                          : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
                                      : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)),32);
        tracep->chgBit(oldp+3453,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
        tracep->chgBit(oldp+3454,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match));
        tracep->chgBit(oldp+3455,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match));
        tracep->chgIData(oldp+3456,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        tracep->chgBit(oldp+3457,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_write_wb));
        tracep->chgBit(oldp+3458,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->chgBit(oldp+3459,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out));
        tracep->chgBit(oldp+3460,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if));
        tracep->chgBit(oldp+3461,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_wb));
        tracep->chgCData(oldp+3462,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        tracep->chgBit(oldp+3463,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))));
        tracep->chgBit(oldp+3464,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
        tracep->chgBit(oldp+3465,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q))));
        tracep->chgBit(oldp+3466,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->chgBit(oldp+3467,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz)))));
        tracep->chgBit(oldp+3468,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))))));
        tracep->chgBit(oldp+3469,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                             ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                             : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->chgIData(oldp+3470,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                      ? 0U : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                               ? ((0xffffff00U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                  | (0x7cU 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                                        << 2U)))
                                               : (0xffffff00U 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->chgBit(oldp+3471,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgCData(oldp+3472,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->chgBit(oldp+3473,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgIData(oldp+3474,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgBit(oldp+3475,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->chgIData(oldp+3476,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                      ? (0xfffffffeU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                      : 0U)),32);
        tracep->chgBit(oldp+3477,((1U & (~ (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                         >> 1U) 
                                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->chgIData(oldp+3478,((0xfffffffeU & 
                                     ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                      << 1U))),32);
        tracep->chgCData(oldp+3479,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        tracep->chgCData(oldp+3480,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->chgIData(oldp+3481,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? ((0xffff0000U 
                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U)))
                                      : ((0xffff0000U 
                                          & ((IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                      >> 2U)) 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U))))),32);
        tracep->chgBit(oldp+3482,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                             | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                   | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+3483,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                          : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgBit(oldp+3484,((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          >> 1U) | 
                                         ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->chgIData(oldp+3485,((0x7fffffffU & 
                                     (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                << 1U)) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+3486,((0x7fffffffU & 
                                     ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                            ? (0xfffffffeU 
                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                            : 0U) >> 1U)
                                       : (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          + ((2U & 
                                              ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                               << 1U)) 
                                             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->chgIData(oldp+3487,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->chgBit(oldp+3488,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
        tracep->chgBit(oldp+3489,(0U));
        tracep->chgBit(oldp+3490,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->chgBit(oldp+3491,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)))));
        tracep->chgBit(oldp+3492,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        tracep->chgIData(oldp+3493,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
        tracep->chgBit(oldp+3494,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgBit(oldp+3495,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                   & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec)))));
        tracep->chgBit(oldp+3496,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                   & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec)))));
        tracep->chgBit(oldp+3497,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+3498,(((3U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgBit(oldp+3499,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)))));
        tracep->chgBit(oldp+3500,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->chgBit(oldp+3501,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        tracep->chgIData(oldp+3502,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                      ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                          << 0x1eU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                            >> 2U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->chgBit(oldp+3503,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->chgQData(oldp+3504,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->chgQData(oldp+3506,((0x1ffffffffULL 
                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                         ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                         : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                             ? (~ ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                   << 1U))
                                             : ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                << 1U))))),33);
        tracep->chgBit(oldp+3508,((1U & ((0x80000000U 
                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                          ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->chgQData(oldp+3509,((0x7ffffffffULL 
                                     & (VL_MULS_QQQ(35,35,35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                        + VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        tracep->chgQData(oldp+3511,((0x3ffffffffULL 
                                     & ((0x7ffffffffULL 
                                         & VL_MULS_QQQ(35,35,35, 
                                                       (0x7ffffffffULL 
                                                        & VL_EXTENDS_QI(35,17, 
                                                                        (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                          << 0x10U) 
                                                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                       (0x7ffffffffULL 
                                                        & VL_EXTENDS_QI(35,17, 
                                                                        (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                          << 0x10U) 
                                                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                        + (0x7ffffffffULL 
                                           & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        tracep->chgBit(oldp+3513,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                    ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->chgBit(oldp+3514,((1U & (IData)((1ULL 
                                                 & ((VL_MULS_QQQ(35,35,35, 
                                                                 (0x7ffffffffULL 
                                                                  & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                 (0x7ffffffffULL 
                                                                  & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                     + 
                                                     VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                    >> 0x22U))))));
        tracep->chgIData(oldp+3515,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((0xffffff00U 
                                              & ((IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 2U)) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U)))
                                          : ((0xffff0000U 
                                              & ((IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 2U)) 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 8U))))
                                      : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((0xff000000U 
                                              & ((IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 2U)) 
                                                 << 0x18U)) 
                                             | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                          : (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 2U))))),32);
        tracep->chgIData(oldp+3516,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 9U))))) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & ((IData)(
                                                                (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                 >> 2U)) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                          >> 0x10U))))
                                              : ((0xff00U 
                                                  & ((IData)(
                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                              >> 2U)) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 0x10U))))
                                          : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x21U))))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0x12U))))
                                              : (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0x12U)))))
                                      : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x19U))))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0xaU))))
                                              : (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0xaU))))
                                          : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x11U))))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 2U))))
                                              : (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 2U))))))),32);
        tracep->chgIData(oldp+3517,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x21U))))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0x1aU))))
                                              : (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0x1aU))))
                                          : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x19U))))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0x12U))))
                                              : (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0x12U)))))
                                      : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 0x11U))))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 0xaU))))
                                              : (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 0xaU))))
                                          : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                            >> 9U))))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 2U))))
                                              : (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 2U))))))),32);
        tracep->chgBit(oldp+3518,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        tracep->chgIData(oldp+3519,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+3520,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgCData(oldp+3521,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->chgBit(oldp+3522,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
        tracep->chgIData(oldp+3523,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                      ? 0x20000001U
                                      : (1U | (0xffffff00U 
                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->chgIData(oldp+3524,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip),18);
        tracep->chgCData(oldp+3525,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        tracep->chgCData(oldp+3526,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d),3);
        tracep->chgBit(oldp+3527,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        tracep->chgCData(oldp+3528,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                      ? (5U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->chgBit(oldp+3529,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        tracep->chgBit(oldp+3530,(((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 8U)) > (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+3531,(((3U == (3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                 >> 0xaU))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        tracep->chgBit(oldp+3532,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->chgBit(oldp+3533,((1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 2U) & 
                                         (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 2U))))));
        tracep->chgCData(oldp+3534,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->chgCData(oldp+3535,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                      : 0xfU)),4);
        tracep->chgBit(oldp+3536,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->chgBit(oldp+3537,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending));
        tracep->chgIData(oldp+3538,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+3539,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q),32);
        tracep->chgIData(oldp+3540,((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                     & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+3541,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                      & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                     & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+3542,(((((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                       | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                           & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                      | ((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                                     | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+3543,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][0U]))));
        tracep->chgBit(oldp+3544,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                   & (0U != (3U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][1U] 
                                                      >> 5U)))))));
        tracep->chgBit(oldp+3545,((1U & (~ ((((0U == 
                                               (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   >> 0x12U))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][2U] 
                                                     >> 0x12U)))) 
                                             | (4U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    >> 0x12U)))) 
                                            & (((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                               & (((4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][2U] 
                                                        >> 0x12U))) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                          [1U][2U] 
                                                          >> 0x12U)))) 
                                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->chgBit(oldp+3546,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgBit(oldp+3547,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x15U)))));
        tracep->chgIData(oldp+3548,((((0x200000U & 
                                       vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U])
                                       ? ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                           << 0xaU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x16U))
                                       : vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
                                         ? (~ ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][0U] 
                                                  >> 1U)))
                                         : 0xffffffffU))),32);
        tracep->chgBit(oldp+3549,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+3550,((1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                          : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+3551,((1U & (vlTOPp->gpio_i 
                                         >> 1U))));
        tracep->chgBit(oldp+3552,((1U & ((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 1U)))));
        tracep->chgBit(oldp+3553,((1U & (vlTOPp->gpio_i 
                                         >> 2U))));
        tracep->chgBit(oldp+3554,((1U & ((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 2U)))));
        tracep->chgBit(oldp+3555,((1U & (vlTOPp->gpio_i 
                                         >> 3U))));
        tracep->chgBit(oldp+3556,((1U & ((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 3U)))));
        tracep->chgBit(oldp+3557,((1U & (vlTOPp->gpio_i 
                                         >> 4U))));
        tracep->chgBit(oldp+3558,((1U & ((0x10U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 4U)))));
        tracep->chgBit(oldp+3559,((1U & (vlTOPp->gpio_i 
                                         >> 5U))));
        tracep->chgBit(oldp+3560,((1U & ((0x20U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 5U)))));
        tracep->chgBit(oldp+3561,((1U & (vlTOPp->gpio_i 
                                         >> 6U))));
        tracep->chgBit(oldp+3562,((1U & ((0x40U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 6U)))));
        tracep->chgBit(oldp+3563,((1U & (vlTOPp->gpio_i 
                                         >> 7U))));
        tracep->chgBit(oldp+3564,((1U & ((0x80U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 7U)))));
        tracep->chgBit(oldp+3565,((1U & (vlTOPp->gpio_i 
                                         >> 8U))));
        tracep->chgBit(oldp+3566,((1U & ((0x100U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 8U)))));
        tracep->chgBit(oldp+3567,((1U & (vlTOPp->gpio_i 
                                         >> 9U))));
        tracep->chgBit(oldp+3568,((1U & ((0x200U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 9U)))));
        tracep->chgBit(oldp+3569,((1U & (vlTOPp->gpio_i 
                                         >> 0xaU))));
        tracep->chgBit(oldp+3570,((1U & ((0x400U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xaU)))));
        tracep->chgBit(oldp+3571,((1U & (vlTOPp->gpio_i 
                                         >> 0xbU))));
        tracep->chgBit(oldp+3572,((1U & ((0x800U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xbU)))));
        tracep->chgBit(oldp+3573,((1U & (vlTOPp->gpio_i 
                                         >> 0xcU))));
        tracep->chgBit(oldp+3574,((1U & ((0x1000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xcU)))));
        tracep->chgBit(oldp+3575,((1U & (vlTOPp->gpio_i 
                                         >> 0xdU))));
        tracep->chgBit(oldp+3576,((1U & ((0x2000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xdU)))));
        tracep->chgBit(oldp+3577,((1U & (vlTOPp->gpio_i 
                                         >> 0xeU))));
        tracep->chgBit(oldp+3578,((1U & ((0x4000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xeU)))));
        tracep->chgBit(oldp+3579,((1U & (vlTOPp->gpio_i 
                                         >> 0xfU))));
        tracep->chgBit(oldp+3580,((1U & ((0x8000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xfU)))));
        tracep->chgBit(oldp+3581,((1U & (vlTOPp->gpio_i 
                                         >> 0x10U))));
        tracep->chgBit(oldp+3582,((1U & ((0x10000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x10U)))));
        tracep->chgBit(oldp+3583,((1U & (vlTOPp->gpio_i 
                                         >> 0x11U))));
        tracep->chgBit(oldp+3584,((1U & ((0x20000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x11U)))));
        tracep->chgBit(oldp+3585,((1U & (vlTOPp->gpio_i 
                                         >> 0x12U))));
        tracep->chgBit(oldp+3586,((1U & ((0x40000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x12U)))));
        tracep->chgBit(oldp+3587,((1U & (vlTOPp->gpio_i 
                                         >> 0x13U))));
        tracep->chgBit(oldp+3588,((1U & ((0x80000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x13U)))));
        tracep->chgBit(oldp+3589,((1U & (vlTOPp->gpio_i 
                                         >> 0x14U))));
        tracep->chgBit(oldp+3590,((1U & ((0x100000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x14U)))));
        tracep->chgBit(oldp+3591,((1U & (vlTOPp->gpio_i 
                                         >> 0x15U))));
        tracep->chgBit(oldp+3592,((1U & ((0x200000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x15U)))));
        tracep->chgBit(oldp+3593,((1U & (vlTOPp->gpio_i 
                                         >> 0x16U))));
        tracep->chgBit(oldp+3594,((1U & ((0x400000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x16U)))));
        tracep->chgBit(oldp+3595,((1U & (vlTOPp->gpio_i 
                                         >> 0x17U))));
        tracep->chgBit(oldp+3596,((1U & ((0x800000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x17U)))));
        tracep->chgBit(oldp+3597,((1U & (vlTOPp->gpio_i 
                                         >> 0x18U))));
        tracep->chgBit(oldp+3598,((1U & ((0x1000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x18U)))));
        tracep->chgBit(oldp+3599,((1U & (vlTOPp->gpio_i 
                                         >> 0x19U))));
        tracep->chgBit(oldp+3600,((1U & ((0x2000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+3601,((1U & (vlTOPp->gpio_i 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+3602,((1U & ((0x4000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1aU)))));
        tracep->chgBit(oldp+3603,((1U & (vlTOPp->gpio_i 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+3604,((1U & ((0x8000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1bU)))));
        tracep->chgBit(oldp+3605,((1U & (vlTOPp->gpio_i 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+3606,((1U & ((0x10000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1cU)))));
        tracep->chgBit(oldp+3607,((1U & (vlTOPp->gpio_i 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+3608,((1U & ((0x20000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1dU)))));
        tracep->chgBit(oldp+3609,((1U & (vlTOPp->gpio_i 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+3610,((1U & ((0x40000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1eU)))));
        tracep->chgBit(oldp+3611,((1U & (vlTOPp->gpio_i 
                                         >> 0x1fU))));
        tracep->chgBit(oldp+3612,((1U & ((0x80000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1fU)))));
        tracep->chgIData(oldp+3613,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata),32);
        tracep->chgIData(oldp+3614,(((IData)(vlTOPp->rst_ni)
                                      ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                      : 0U)),32);
        tracep->chgBit(oldp+3615,((1U & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar)))));
        tracep->chgBit(oldp+3616,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
        tracep->chgBit(oldp+3617,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgBit(oldp+3618,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
        tracep->chgBit(oldp+3619,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+3620,((((IData)(vlTOPp->rst_ni)
                                       ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                       : 0U) & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+3621,((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgSData(oldp+3622,(((((4U != (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U) 
                                      << 0xbU) | (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                        >> 5U))))),13);
        tracep->chgCData(oldp+3623,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+3624,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+3625,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgSData(oldp+3626,(((0x19U >= (0x1fU 
                                                & ((IData)(0xdU) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fffU & 
                                         (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                          >> (0x1fU 
                                              & ((IData)(0xdU) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                      : 0U)),13);
        tracep->chgCData(oldp+3627,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+3628,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+3629,(((9U >= (0xfU & 
                                             ((IData)(5U) 
                                              * (1U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                      : 0U)),5);
        tracep->chgCData(oldp+3630,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+3631,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+3632,(((0x41U >= (0x7fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1ffffffffULL 
                                         & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                            | (((QData)((IData)(
                                                                vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (3U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (1U 
                                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U)))])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                      : 0ULL)),33);
        tracep->chgQData(oldp+3634,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x41U >= 
                                          (0x7fU & 
                                           ((IData)(0x21U) 
                                            * (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL)))),33);
        tracep->chgIData(oldp+3636,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata),32);
        tracep->chgBit(oldp+3637,((1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
        tracep->chgBit(oldp+3638,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgBit(oldp+3639,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+3640,((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
                                     & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+3641,((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [0U][2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgSData(oldp+3642,(((((4U != (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [0U][2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U) 
                                      << 0xbU) | (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [0U][2U] 
                                                        >> 5U))))),13);
        tracep->chgCData(oldp+3643,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+3644,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgSData(oldp+3645,(((0x33U >= (0x3fU 
                                                & ((IData)(0xdU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fffU & (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(0xdU) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                      : 0U)),13);
        tracep->chgCData(oldp+3646,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+3647,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+3648,(((0x13U >= (0x1fU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                      : 0U)),5);
        tracep->chgCData(oldp+3649,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+3650,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+3651,(((0x83U >= (0xffU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1ffffffffULL 
                                         & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                            | (((QData)((IData)(
                                                                vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (7U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U)))])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                      : 0ULL)),33);
        tracep->chgQData(oldp+3653,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x83U >= 
                                          (0xffU & 
                                           ((IData)(0x21U) 
                                            * (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL)))),33);
        tracep->chgIData(oldp+3655,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le),32);
        tracep->chgIData(oldp+3656,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->chgIData(oldp+3657,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
        tracep->chgBit(oldp+3658,(((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        tracep->chgBit(oldp+3659,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)((0U 
                                                 != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
        tracep->chgBit(oldp+3660,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
        tracep->chgBit(oldp+3661,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 9U)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->chgBit(oldp+3662,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x24U)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->chgBit(oldp+3663,(((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                            >> 0x24U)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
        tracep->chgQData(oldp+3664,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
        tracep->chgBit(oldp+3666,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][0U]))));
        tracep->chgBit(oldp+3667,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                   & (0U != (3U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][1U] 
                                                      >> 5U)))))));
        tracep->chgBit(oldp+3668,((1U & (~ ((((0U == 
                                               (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   >> 0x12U))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][2U] 
                                                     >> 0x12U)))) 
                                             | (4U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    >> 0x12U)))) 
                                            & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                               & (((4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [9U][2U] 
                                                        >> 0x12U))) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                          [9U][2U] 
                                                          >> 0x12U)))) 
                                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->chgBit(oldp+3669,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgIData(oldp+3670,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                    [0U]),32);
        tracep->chgQData(oldp+3671,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->chgBit(oldp+3673,((((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                    > vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                    [0U]) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->chgCData(oldp+3674,(((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                      ? (0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                      : 0U)),6);
        tracep->chgBit(oldp+3675,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3676,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3677,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3678,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3679,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3680,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3681,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3682,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3683,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3684,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3685,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3686,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3687,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3688,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3689,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3690,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3691,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3692,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3693,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3694,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3695,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3696,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3697,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3698,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3699,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3700,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3701,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3702,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3703,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3704,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3705,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel));
    }
}
