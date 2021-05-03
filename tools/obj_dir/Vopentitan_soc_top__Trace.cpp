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
    WData/*95:0*/ __Vtemp2009[3];
    WData/*95:0*/ __Vtemp2025[3];
    WData/*95:0*/ __Vtemp2041[3];
    WData/*95:0*/ __Vtemp2057[3];
    WData/*95:0*/ __Vtemp2073[3];
    WData/*95:0*/ __Vtemp2089[3];
    WData/*95:0*/ __Vtemp2105[3];
    WData/*95:0*/ __Vtemp2121[3];
    WData/*95:0*/ __Vtemp2137[3];
    WData/*95:0*/ __Vtemp2153[3];
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
            tracep->chgCData(oldp+123,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q),5);
            tracep->chgIData(oldp+124,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id),32);
            tracep->chgBit(oldp+125,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+126,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q),32);
            tracep->chgSData(oldp+127,(((0x3e0U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                   >> 0xaU)) 
                                        | (0x1fU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                            >> 7U)))),10);
            tracep->chgBit(oldp+128,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q));
            tracep->chgCData(oldp+129,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+130,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgBit(oldp+131,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgCData(oldp+132,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+133,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+134,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+135,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+136,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+137,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id),32);
            tracep->chgCData(oldp+138,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))),5);
            tracep->chgIData(oldp+139,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+140,(((0xfffff000U 
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
            tracep->chgIData(oldp+141,(((0xffffe000U 
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
            tracep->chgIData(oldp+142,((0xfffff000U 
                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+143,(((0xfff00000U 
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
            tracep->chgIData(oldp+144,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),32);
            tracep->chgCData(oldp+145,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x1bU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgIData(oldp+146,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q),32);
            tracep->chgBit(oldp+147,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q));
            tracep->chgBit(oldp+148,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgIData(oldp+149,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgCData(oldp+150,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgBit(oldp+151,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgCData(oldp+152,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),6);
            tracep->chgBit(oldp+153,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+154,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+155,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+156,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+157,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+158,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgCData(oldp+159,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgBit(oldp+160,((8U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+161,(((3U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (6U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+162,(((4U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (7U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgWData(oldp+163,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg),1024);
            tracep->chgWData(oldp+195,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q),992);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgCData(oldp+226,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding),4);
            tracep->chgBit(oldp+227,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
            tracep->chgBit(oldp+228,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
            tracep->chgBit(oldp+229,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
            tracep->chgBit(oldp+230,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
            tracep->chgBit(oldp+231,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
            tracep->chgBit(oldp+232,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
            tracep->chgBit(oldp+233,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
            tracep->chgBit(oldp+234,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
            tracep->chgBit(oldp+235,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
            tracep->chgBit(oldp+236,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
            tracep->chgBit(oldp+237,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
            tracep->chgBit(oldp+238,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
            tracep->chgBit(oldp+239,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
            tracep->chgBit(oldp+240,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
            tracep->chgBit(oldp+241,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
            tracep->chgBit(oldp+242,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
            tracep->chgBit(oldp+243,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
            tracep->chgBit(oldp+244,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
            tracep->chgBit(oldp+245,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
            tracep->chgBit(oldp+246,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe));
            tracep->chgBit(oldp+247,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
            tracep->chgBit(oldp+248,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
            tracep->chgBit(oldp+249,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
            tracep->chgBit(oldp+250,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
            tracep->chgBit(oldp+251,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
            tracep->chgBit(oldp+252,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
            tracep->chgBit(oldp+253,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
            tracep->chgBit(oldp+254,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+255,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgBit(oldp+256,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval));
            tracep->chgCData(oldp+257,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+258,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+259,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access));
            tracep->chgCData(oldp+260,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+261,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgCData(oldp+262,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                         ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                             ? 1U : 0U)
                                         : 2U)),2);
            tracep->chgBit(oldp+263,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+264,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+265,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+266,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+267,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+268,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+269,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+270,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+271,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+272,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+273,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+274,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
            tracep->chgBit(oldp+275,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
            tracep->chgBit(oldp+276,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+277,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+278,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+279,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgBit(oldp+280,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgBit(oldp+281,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+282,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+283,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+284,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+285,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+286,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+287,((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                >> 2U))),32);
            tracep->chgBit(oldp+288,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 1U)))));
            tracep->chgBit(oldp+289,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgCData(oldp+290,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+291,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgBit(oldp+292,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
            tracep->chgBit(oldp+293,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
            tracep->chgBit(oldp+294,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
            tracep->chgBit(oldp+295,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
            tracep->chgBit(oldp+296,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
            tracep->chgBit(oldp+297,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
            tracep->chgBit(oldp+298,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
            tracep->chgBit(oldp+299,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
            tracep->chgBit(oldp+300,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
            tracep->chgBit(oldp+301,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
            tracep->chgBit(oldp+302,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
            tracep->chgBit(oldp+303,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
            tracep->chgBit(oldp+304,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
            tracep->chgBit(oldp+305,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
            tracep->chgBit(oldp+306,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
            tracep->chgBit(oldp+307,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
            tracep->chgBit(oldp+308,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
            tracep->chgBit(oldp+309,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
            tracep->chgCData(oldp+310,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
            tracep->chgCData(oldp+311,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
            tracep->chgCData(oldp+312,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
            tracep->chgCData(oldp+313,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
            tracep->chgCData(oldp+314,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
            tracep->chgCData(oldp+315,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
            tracep->chgCData(oldp+316,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
            tracep->chgCData(oldp+317,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
            tracep->chgCData(oldp+318,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
            tracep->chgCData(oldp+319,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
            tracep->chgCData(oldp+320,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
            tracep->chgCData(oldp+321,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
            tracep->chgCData(oldp+322,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
            tracep->chgCData(oldp+323,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
            tracep->chgCData(oldp+324,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
            tracep->chgBit(oldp+325,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
            tracep->chgBit(oldp+326,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
            tracep->chgBit(oldp+327,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
            tracep->chgBit(oldp+328,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
            tracep->chgBit(oldp+329,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
            tracep->chgBit(oldp+330,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
            tracep->chgBit(oldp+331,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
            tracep->chgBit(oldp+332,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
            tracep->chgBit(oldp+333,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
            tracep->chgBit(oldp+334,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
            tracep->chgBit(oldp+335,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
            tracep->chgBit(oldp+336,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
            tracep->chgBit(oldp+337,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
            tracep->chgBit(oldp+338,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
            tracep->chgBit(oldp+339,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
            tracep->chgBit(oldp+340,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q));
            tracep->chgBit(oldp+341,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
            tracep->chgBit(oldp+342,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
            tracep->chgBit(oldp+343,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgIData(oldp+344,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+345,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+346,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+347,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgCData(oldp+348,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgCData(oldp+349,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__reqid),8);
            tracep->chgCData(oldp+350,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__reqsz),2);
            tracep->chgBit(oldp+351,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rspop));
            tracep->chgBit(oldp+352,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__RESET_REGn));
            tracep->chgCData(oldp+353,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__SEL_CONV_TIME_REG),4);
            tracep->chgBit(oldp+354,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__en_REG));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgCData(oldp+355,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+356,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+357,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_size),2);
            tracep->chgIData(oldp+358,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
            tracep->chgBit(oldp+359,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe));
            tracep->chgCData(oldp+360,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
            tracep->chgBit(oldp+361,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
            tracep->chgBit(oldp+362,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
            tracep->chgBit(oldp+363,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
            tracep->chgBit(oldp+364,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgWData(oldp+365,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q),68);
            tracep->chgBit(oldp+368,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgQData(oldp+369,((((QData)((IData)(
                                                         ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                             >> 2U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])))),64);
            tracep->chgIData(oldp+371,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]),32);
            tracep->chgCData(oldp+372,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgCData(oldp+373,((3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])),2);
            tracep->chgBit(oldp+374,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgCData(oldp+375,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+376,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
            tracep->chgIData(oldp+377,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip),32);
            tracep->chgBit(oldp+378,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
            tracep->chgBit(oldp+379,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q));
            tracep->chgBit(oldp+380,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q));
            tracep->chgBit(oldp+381,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q));
            tracep->chgCData(oldp+382,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+383,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+384,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 2U))));
            tracep->chgCData(oldp+385,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+386,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+387,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                            >> 5U))));
            tracep->chgBit(oldp+388,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+389,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+390,((3U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                               ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                  >> 2U)
                                               : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+391,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgBit(oldp+392,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 2U))));
            tracep->chgBit(oldp+393,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 0xfU))));
            tracep->chgBit(oldp+394,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 0xcU))));
            tracep->chgCData(oldp+395,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+396,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+397,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+398,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+399,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgCData(oldp+400,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
            tracep->chgIData(oldp+401,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgBit(oldp+402,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgCData(oldp+403,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+404,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+405,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+406,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__outstanding_load_wb));
            tracep->chgBit(oldp+407,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+408,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgIData(oldp+409,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgCData(oldp+410,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+411,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgBit(oldp+412,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgBit(oldp+413,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgCData(oldp+414,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+415,((0xfffffffcU 
                                        & ((IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 3U)) 
                                           << 2U))),32);
            tracep->chgIData(oldp+416,(((1U & (IData)(
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
            tracep->chgIData(oldp+417,((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 1U))),32);
            tracep->chgIData(oldp+418,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+419,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+420,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
            tracep->chgIData(oldp+421,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd),32);
            tracep->chgQData(oldp+422,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgQData(oldp+424,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+426,((0U == (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))));
            tracep->chgQData(oldp+427,((0x1ffffffffULL 
                                        & (~ ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                              << 1U)))),33);
            tracep->chgCData(oldp+429,((0x3fU & ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgCData(oldp+430,(((0x10U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                  >> 0x18U))))) 
                                                  << 4U)) 
                                        | (0xfU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                   >> 0x18U)))),5);
            tracep->chgCData(oldp+431,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                 >> 0x10U))),5);
            tracep->chgIData(oldp+432,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+433,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+434,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgBit(oldp+435,((1U & (((IData)(0x20U) 
                                             - (0x1fU 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            >> 5U))));
            tracep->chgCData(oldp+436,(((2U & ((IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x21U)) 
                                               << 1U)) 
                                        | (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
            tracep->chgCData(oldp+437,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+438,((1U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+439,((7U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+440,((7U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+441,((3U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+442,((0xffU & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+443,(((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+444,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+445,(((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+446,((1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgCData(oldp+447,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10),4);
            tracep->chgCData(oldp+448,((0xfU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgBit(oldp+449,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+450,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+451,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+452,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+453,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+454,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+455,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+456,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+457,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[0U])));
            tracep->chgBit(oldp+458,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests));
            tracep->chgBit(oldp+459,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+460,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+461,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+462,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+463,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+464,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+465,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+466,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+467,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+468,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+469,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+470,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+471,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+472,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+473,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+474,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+475,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+476,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+477,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+478,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+479,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+480,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+481,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+482,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+483,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+484,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+485,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [2U][0U])));
            tracep->chgBit(oldp+486,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+487,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+488,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+489,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+490,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+491,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+492,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+493,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+494,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [3U][0U])));
            tracep->chgBit(oldp+495,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+496,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+497,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+498,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+499,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [4U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+500,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [4U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+501,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [4U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [4U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+502,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [4U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+503,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [4U][0U])));
            tracep->chgBit(oldp+504,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+505,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+506,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+507,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+508,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [5U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+509,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [5U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+510,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [5U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+511,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [5U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+512,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [5U][0U])));
            tracep->chgBit(oldp+513,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+514,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+515,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+516,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+517,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [6U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+518,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [6U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+519,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+520,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+521,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [6U][0U])));
            tracep->chgBit(oldp+522,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+523,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+524,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+525,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+526,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [7U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+527,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [7U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+528,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [7U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+529,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [7U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+530,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [7U][0U])));
            tracep->chgBit(oldp+531,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+532,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+533,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+534,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+535,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [8U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+536,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [8U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+537,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [8U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [8U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+538,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [8U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+539,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [8U][0U])));
            tracep->chgBit(oldp+540,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+541,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+542,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+543,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+544,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [9U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+545,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [9U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+546,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [9U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+547,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [9U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+548,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [9U][0U])));
            tracep->chgBit(oldp+549,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+550,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+551,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+552,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+553,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0xaU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+554,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0xaU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+555,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0xaU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [0xaU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+556,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0xaU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+557,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0xaU][0U])));
            tracep->chgBit(oldp+558,((1U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgWData(oldp+559,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+562,((1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgBit(oldp+563,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+564,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+565,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+566,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+567,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0xaU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+568,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0xaU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+569,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0xaU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [0xaU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+570,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0xaU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0xaU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+571,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0xaU][0U])));
            tracep->chgBit(oldp+572,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+573,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+574,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+575,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+576,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+577,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+578,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+579,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+580,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+581,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            __Vtemp2009[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp2009[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp2009[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+582,(__Vtemp2009),85);
            tracep->chgBit(oldp+585,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+586,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+587,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+588,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+589,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+590,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+591,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+592,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+593,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+594,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+595,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            __Vtemp2025[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp2025[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp2025[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+596,(__Vtemp2025),85);
            tracep->chgBit(oldp+599,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+600,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+601,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+602,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+603,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+604,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+605,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+606,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+607,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+608,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [2U][0U])));
            tracep->chgBit(oldp+609,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            __Vtemp2041[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp2041[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp2041[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+610,(__Vtemp2041),85);
            tracep->chgBit(oldp+613,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [2U][0U])));
            tracep->chgBit(oldp+614,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+615,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+616,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+617,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+618,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+619,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+620,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+621,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [3U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+622,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [3U][0U])));
            tracep->chgBit(oldp+623,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            __Vtemp2057[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp2057[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp2057[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+624,(__Vtemp2057),85);
            tracep->chgBit(oldp+627,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [3U][0U])));
            tracep->chgBit(oldp+628,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+629,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+630,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+631,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+632,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [4U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+633,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [4U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+634,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [4U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [4U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+635,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [4U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [4U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+636,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [4U][0U])));
            tracep->chgBit(oldp+637,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x15U))));
            __Vtemp2073[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp2073[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp2073[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+638,(__Vtemp2073),85);
            tracep->chgBit(oldp+641,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [4U][0U])));
            tracep->chgBit(oldp+642,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+643,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+644,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+645,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+646,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [5U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+647,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [5U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+648,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [5U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+649,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [5U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [5U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+650,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [5U][0U])));
            tracep->chgBit(oldp+651,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x15U))));
            __Vtemp2089[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp2089[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp2089[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+652,(__Vtemp2089),85);
            tracep->chgBit(oldp+655,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [5U][0U])));
            tracep->chgBit(oldp+656,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+657,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+658,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+659,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+660,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [6U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+661,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [6U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+662,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+663,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [6U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+664,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [6U][0U])));
            tracep->chgBit(oldp+665,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x15U))));
            __Vtemp2105[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp2105[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp2105[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+666,(__Vtemp2105),85);
            tracep->chgBit(oldp+669,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [6U][0U])));
            tracep->chgBit(oldp+670,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+671,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+672,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+673,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+674,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [7U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+675,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [7U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+676,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [7U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+677,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [7U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [7U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+678,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [7U][0U])));
            tracep->chgBit(oldp+679,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x15U))));
            __Vtemp2121[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp2121[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp2121[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+680,(__Vtemp2121),85);
            tracep->chgBit(oldp+683,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [7U][0U])));
            tracep->chgBit(oldp+684,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+685,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+686,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+687,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+688,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [8U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+689,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [8U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+690,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [8U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [8U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+691,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [8U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [8U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+692,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [8U][0U])));
            tracep->chgBit(oldp+693,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x15U))));
            __Vtemp2137[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp2137[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp2137[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+694,(__Vtemp2137),85);
            tracep->chgBit(oldp+697,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [8U][0U])));
            tracep->chgBit(oldp+698,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+699,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+700,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+701,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+702,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [9U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+703,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [9U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+704,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                                   [9U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+705,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                         [9U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                           [9U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+706,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [9U][0U])));
            tracep->chgBit(oldp+707,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x15U))));
            __Vtemp2153[0U] = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                               [9U][0U]);
            __Vtemp2153[1U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][1U]));
            __Vtemp2153[2U] = ((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+708,(__Vtemp2153),85);
            tracep->chgBit(oldp+711,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o
                                      [9U][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x13U])) {
            tracep->chgBit(oldp+712,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+713,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+714,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+715,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+716,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+717,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+718,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+719,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+720,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+721,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+722,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+723,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+724,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+725,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+726,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+727,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+728,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+729,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x14U])) {
            tracep->chgBit(oldp+730,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+731,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+732,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+733,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+734,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+735,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+736,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+737,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+738,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+739,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+740,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+741,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+742,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+743,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+744,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+745,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+746,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+747,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x15U])) {
            tracep->chgBit(oldp+748,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+749,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+750,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+751,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+752,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+753,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+754,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+755,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+756,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+757,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+758,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+759,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+760,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+761,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+762,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+763,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+764,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+765,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x16U])) {
            tracep->chgBit(oldp+766,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+767,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+768,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+769,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+770,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+771,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+772,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+773,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+774,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+775,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+776,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+777,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+778,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+779,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+780,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+781,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+782,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+783,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x17U])) {
            tracep->chgBit(oldp+784,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+785,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+786,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+787,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+788,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+789,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+790,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+791,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+792,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+793,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+794,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+795,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+796,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+797,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+798,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+799,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+800,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+801,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x18U])) {
            tracep->chgBit(oldp+802,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgBit(oldp+803,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
            tracep->chgBit(oldp+804,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
            tracep->chgBit(oldp+805,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
            tracep->chgBit(oldp+806,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
            tracep->chgCData(oldp+807,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
            tracep->chgCData(oldp+808,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
            tracep->chgCData(oldp+809,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
            tracep->chgCData(oldp+810,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
            tracep->chgCData(oldp+811,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
            tracep->chgCData(oldp+812,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
            tracep->chgBit(oldp+813,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
            tracep->chgBit(oldp+814,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
            tracep->chgBit(oldp+815,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
            tracep->chgBit(oldp+816,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
            tracep->chgBit(oldp+817,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
            tracep->chgBit(oldp+818,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
            tracep->chgBit(oldp+819,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
            tracep->chgBit(oldp+820,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
            tracep->chgBit(oldp+821,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__outstanding));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x19U])) {
            tracep->chgSData(oldp+822,((0x1fffU & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage))),13);
            tracep->chgSData(oldp+823,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0xdU)))),13);
            tracep->chgSData(oldp+824,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x1aU)))),13);
            tracep->chgSData(oldp+825,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x27U)))),13);
            tracep->chgCData(oldp+826,((0x1fU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)),5);
            tracep->chgCData(oldp+827,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 5U))),5);
            tracep->chgCData(oldp+828,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+829,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xfU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1aU])) {
            tracep->chgIData(oldp+830,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
            tracep->chgIData(oldp+831,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
            tracep->chgIData(oldp+832,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
            tracep->chgIData(oldp+833,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
            tracep->chgIData(oldp+834,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
            tracep->chgBit(oldp+835,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
            tracep->chgBit(oldp+836,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
            tracep->chgBit(oldp+837,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
            tracep->chgBit(oldp+838,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
            tracep->chgBit(oldp+839,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
            tracep->chgBit(oldp+840,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
            tracep->chgBit(oldp+841,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
            tracep->chgBit(oldp+842,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
            tracep->chgBit(oldp+843,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
            tracep->chgBit(oldp+844,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
            tracep->chgCData(oldp+845,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
            tracep->chgCData(oldp+846,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
            tracep->chgCData(oldp+847,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
            tracep->chgCData(oldp+848,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
            tracep->chgCData(oldp+849,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
            tracep->chgCData(oldp+850,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
            tracep->chgCData(oldp+851,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
            tracep->chgCData(oldp+852,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
            tracep->chgCData(oldp+853,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
            tracep->chgBit(oldp+854,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
            tracep->chgBit(oldp+855,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
            tracep->chgBit(oldp+856,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
            tracep->chgBit(oldp+857,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
            tracep->chgBit(oldp+858,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
            tracep->chgBit(oldp+859,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
            tracep->chgBit(oldp+860,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
            tracep->chgCData(oldp+861,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1bU])) {
            tracep->chgBit(oldp+862,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
            tracep->chgIData(oldp+863,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
            tracep->chgIData(oldp+864,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
            tracep->chgWData(oldp+865,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1cU])) {
            tracep->chgIData(oldp+868,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+869,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+870,((0xffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgBit(oldp+871,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
            tracep->chgIData(oldp+872,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+873,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+874,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+875,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+876,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+877,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+878,((0xfffffff8U 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
            tracep->chgCData(oldp+879,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
            tracep->chgQData(oldp+880,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+882,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1dU])) {
            tracep->chgBit(oldp+884,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
            tracep->chgCData(oldp+885,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U))),2);
            tracep->chgCData(oldp+886,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1eU])) {
            tracep->chgBit(oldp+887,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int));
            tracep->chgIData(oldp+888,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+889,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
            tracep->chgQData(oldp+890,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+892,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+894,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+896,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+898,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+900,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+902,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+904,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+906,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+908,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+910,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+912,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+914,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+916,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+918,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+920,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+922,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+924,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+926,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+928,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+930,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+932,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+934,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+936,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+938,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+940,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+942,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+944,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+946,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+948,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+950,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+952,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1fU])) {
            tracep->chgCData(oldp+954,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause),3);
            tracep->chgBit(oldp+955,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save));
            tracep->chgCData(oldp+956,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x20U])) {
            tracep->chgBit(oldp+957,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgCData(oldp+958,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+959,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+960,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
            tracep->chgBit(oldp+961,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)))));
            tracep->chgBit(oldp+962,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
            tracep->chgBit(oldp+963,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
            tracep->chgBit(oldp+964,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
            tracep->chgBit(oldp+965,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
            tracep->chgIData(oldp+966,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x21U])) {
            tracep->chgBit(oldp+967,((0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)));
            tracep->chgIData(oldp+968,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs),18);
            tracep->chgCData(oldp+969,(((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                         ? 0xeU : (
                                                   (0x2000U 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                    ? 0xdU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                     ? 0xcU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                      ? 0xbU
                                                      : 
                                                     ((0x400U 
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
            tracep->chgBit(oldp+970,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs 
                                            >> 0x10U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x22U])) {
            tracep->chgCData(oldp+971,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
            tracep->chgCData(oldp+972,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
            tracep->chgBit(oldp+973,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
            tracep->chgBit(oldp+974,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
            tracep->chgBit(oldp+975,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x23U])) {
            tracep->chgCData(oldp+976,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+977,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op),2);
            tracep->chgBit(oldp+978,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid));
            tracep->chgBit(oldp+979,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+980,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+981,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+982,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+983,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+984,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+985,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+986,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+987,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+988,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
            tracep->chgBit(oldp+989,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+990,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+991,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+992,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+993,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgQData(oldp+994,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
            tracep->chgBit(oldp+996,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
            tracep->chgCData(oldp+997,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
            tracep->chgBit(oldp+998,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x24U])) {
            tracep->chgCData(oldp+999,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause),6);
            tracep->chgBit(oldp+1000,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause));
            tracep->chgBit(oldp+1001,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                             >> 5U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x25U])) {
            tracep->chgBit(oldp+1002,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+1003,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id));
            tracep->chgBit(oldp+1004,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+1005,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id));
            tracep->chgBit(oldp+1006,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+1007,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
            tracep->chgIData(oldp+1008,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgIData(oldp+1009,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgBit(oldp+1010,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+1011,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgCData(oldp+1012,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgIData(oldp+1013,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+1014,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
            tracep->chgQData(oldp+1016,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+1018,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+1019,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+1020,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgIData(oldp+1021,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgBit(oldp+1022,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x26U])) {
            tracep->chgBit(oldp+1023,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
            tracep->chgIData(oldp+1024,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+1025,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+1026,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgCData(oldp+1027,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgCData(oldp+1028,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+1029,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgBit(oldp+1030,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1031,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+1032,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+1033,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgCData(oldp+1034,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+1035,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgBit(oldp+1036,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1037,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+1038,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+1039,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+1040,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1041,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x27U])) {
            tracep->chgCData(oldp+1042,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q),8);
            tracep->chgBit(oldp+1043,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q));
            tracep->chgBit(oldp+1044,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rvalid));
            tracep->chgQData(oldp+1045,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+1047,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                                  >> 1U))))),33);
            tracep->chgQData(oldp+1049,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                  >> 2U))))),33);
            tracep->chgQData(oldp+1051,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                               >> 3U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x28U])) {
            tracep->chgCData(oldp+1053,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+1054,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1055,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgIData(oldp+1056,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DOUT_REG),24);
            tracep->chgBit(oldp+1057,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DONE_REG));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x29U])) {
            tracep->chgBit(oldp+1058,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1059,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1060,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1061,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1062,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1063,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1064,((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1065,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1066,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgBit(oldp+1067,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1068,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1069,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1070,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1071,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1072,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1073,((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1074,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1075,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar))));
            tracep->chgBit(oldp+1076,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1077,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+1078,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1079,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1080,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1081,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+1082,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+1083,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1084,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+1085,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1086,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2aU])) {
            tracep->chgBit(oldp+1087,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgCData(oldp+1088,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+1089,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1090,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 8U))),2);
            tracep->chgCData(oldp+1091,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+1092,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+1093,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                 >> 1U))),4);
            tracep->chgBit(oldp+1094,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+1095,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+1096,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2aU] | vlTOPp->__Vm_traceActivity
                         [0x2bU]))) {
            tracep->chgBit(oldp+1097,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1098,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1099,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1100,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1101,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1102,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1103,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1104,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1105,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U]))));
            tracep->chgBit(oldp+1106,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1107,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1108,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1109,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1110,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1111,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1112,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1113,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1114,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U]))));
            tracep->chgBit(oldp+1115,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1116,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1117,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1118,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1119,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1120,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1121,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1122,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1123,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U]))));
            tracep->chgBit(oldp+1124,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1125,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1126,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1127,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1128,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1129,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1130,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1131,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1132,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U]))));
            tracep->chgBit(oldp+1133,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1134,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1135,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1136,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1137,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1138,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1139,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1140,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1141,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U]))));
            tracep->chgBit(oldp+1142,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1143,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1144,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1145,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1146,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1147,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1148,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1149,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1150,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U]))));
            tracep->chgBit(oldp+1151,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1152,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1153,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1154,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1155,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1156,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1157,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1158,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1159,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U]))));
            tracep->chgBit(oldp+1160,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1161,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1162,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1163,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1164,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1165,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1166,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1167,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1168,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U]))));
            tracep->chgBit(oldp+1169,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1170,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1171,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1172,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1173,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1174,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1175,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1176,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1177,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U]))));
            tracep->chgBit(oldp+1178,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1179,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1180,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1181,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1182,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1183,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1184,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1185,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1186,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U]))));
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0x2aU] | vlTOPp->__Vm_traceActivity
                          [0x2bU]) | vlTOPp->__Vm_traceActivity
                         [0x31U]))) {
            tracep->chgBit(oldp+1187,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1188,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1189,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1190,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1191,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1192,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1193,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1194,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1195,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2bU])) {
            tracep->chgBit(oldp+1196,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1197,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1198,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1199,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1200,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1201,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1202,((IData)((vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1203,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1204,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+1205,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1206,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1207,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1208,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1209,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1210,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1211,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1212,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1213,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1214,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1215,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1216,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1217,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1218,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1219,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1220,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1221,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1222,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1223,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1224,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1225,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1226,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1227,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1228,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1229,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1230,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1231,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1232,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1233,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1234,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1235,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1236,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1237,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1238,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1239,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1240,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1241,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1242,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1243,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1244,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1245,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1246,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1247,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1248,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1249,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1250,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1251,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1252,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1253,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1254,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1255,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1256,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1257,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1258,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1259,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1260,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1261,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1262,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1263,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1264,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1265,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1266,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1267,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1268,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1269,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1270,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1271,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1272,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1273,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1274,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1275,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1276,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1277,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1278,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1279,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1280,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1281,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1282,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1283,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1284,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1285,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1286,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1287,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1288,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1289,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1290,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1291,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1292,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1293,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1294,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1295,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1296,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1297,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1298,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1299,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1300,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1301,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1302,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1303,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1304,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1305,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1306,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1307,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1308,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1309,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1310,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1311,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1312,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1313,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1314,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1315,((((QData)((IData)(
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
            tracep->chgBit(oldp+1317,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1318,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1319,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1320,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1321,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1322,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1323,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1324,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1325,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1326,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1327,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1328,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1329,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1330,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1331,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1332,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1333,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1334,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1335,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1336,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1337,((((QData)((IData)(
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
            tracep->chgBit(oldp+1339,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1340,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1341,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1342,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1343,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1344,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1345,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1346,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1347,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1348,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1349,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1350,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1351,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1352,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1353,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1354,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1355,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1356,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1357,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1358,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1359,((((QData)((IData)(
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
            tracep->chgBit(oldp+1361,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1362,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1363,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1364,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1365,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1366,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1367,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1368,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1369,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1370,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1371,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1372,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1373,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1374,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1375,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1376,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1377,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1378,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1379,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1380,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1381,((((QData)((IData)(
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
            tracep->chgBit(oldp+1383,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1384,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1385,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1386,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1387,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1388,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1389,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1390,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1391,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1392,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1393,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1394,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1395,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1396,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1397,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1398,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1399,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1400,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1401,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1402,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1403,((((QData)((IData)(
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
            tracep->chgBit(oldp+1405,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1406,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1407,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1408,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1409,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1410,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1411,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1412,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1413,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1414,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1415,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1416,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1417,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1418,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1419,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1420,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1421,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1422,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1423,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1424,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1425,((((QData)((IData)(
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
            tracep->chgBit(oldp+1427,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1428,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1429,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1430,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1431,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1432,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1433,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1434,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1435,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1436,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1437,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1438,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1439,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1440,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1441,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1442,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1443,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1444,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1445,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1446,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1447,((((QData)((IData)(
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
            tracep->chgBit(oldp+1449,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1450,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1451,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1452,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1453,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1454,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1455,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1456,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1457,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1458,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1459,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1460,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1461,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1462,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1463,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1464,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1465,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1466,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1467,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1468,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1469,((((QData)((IData)(
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
            tracep->chgBit(oldp+1471,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1472,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1473,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1474,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1475,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1476,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1477,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1478,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1479,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1480,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1481,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1482,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1483,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1484,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1485,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1486,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1487,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1488,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1489,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1490,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1491,((((QData)((IData)(
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
            tracep->chgBit(oldp+1493,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1494,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1495,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1496,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1497,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1498,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1499,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1500,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1501,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+1502,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1503,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1504,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1505,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1506,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1507,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1508,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1509,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1510,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1511,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1512,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1513,((((QData)((IData)(
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
            tracep->chgBit(oldp+1515,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+1516,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+1517,((IData)((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+1518,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgBit(oldp+1519,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid));
            tracep->chgIData(oldp+1520,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask),32);
            tracep->chgIData(oldp+1521,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgQData(oldp+1522,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                         << 1U)),33);
            tracep->chgQData(oldp+1524,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+1526,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1527,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2bU] | vlTOPp->__Vm_traceActivity
                         [0x31U]))) {
            tracep->chgBit(oldp+1528,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1529,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1530,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1531,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1532,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1533,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1534,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1535,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1536,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0U]))));
            tracep->chgBit(oldp+1537,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1538,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1539,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1540,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1541,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1542,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1543,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1544,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1545,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [1U]))));
            tracep->chgBit(oldp+1546,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1547,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1548,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1549,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1550,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1551,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1552,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1553,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1554,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [2U]))));
            tracep->chgBit(oldp+1555,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1556,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1557,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1558,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1559,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1560,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1561,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1562,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1563,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [3U]))));
            tracep->chgBit(oldp+1564,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1565,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1566,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1567,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1568,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1569,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1570,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1571,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1572,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [4U]))));
            tracep->chgBit(oldp+1573,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1574,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1575,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1576,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1577,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1578,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1579,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1580,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1581,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [5U]))));
            tracep->chgBit(oldp+1582,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1583,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1584,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1585,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1586,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1587,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1588,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1589,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1590,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [6U]))));
            tracep->chgBit(oldp+1591,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1592,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1593,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1594,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1595,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1596,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1597,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1598,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1599,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [7U]))));
            tracep->chgBit(oldp+1600,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1601,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1602,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1603,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1604,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1605,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1606,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1607,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1608,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [8U]))));
            tracep->chgBit(oldp+1609,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1610,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1611,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1612,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1613,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1614,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1615,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1616,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1617,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [9U]))));
            tracep->chgBit(oldp+1618,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1619,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1620,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1621,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1622,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                          [0xaU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1623,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1624,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                 [0xaU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1625,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1626,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i
                                                    [0xaU]))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2cU])) {
            tracep->chgBit(oldp+1627,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[0U])));
            tracep->chgWData(oldp+1628,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o),128);
            tracep->chgSData(oldp+1632,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr),12);
            tracep->chgCData(oldp+1633,((0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))),5);
            tracep->chgCData(oldp+1634,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                               >> 5U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2dU])) {
            tracep->chgCData(oldp+1635,((0x3fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
            tracep->chgIData(oldp+1636,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+1637,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+1638,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+1639,((7U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1640,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2eU])) {
            tracep->chgBit(oldp+1641,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
            tracep->chgBit(oldp+1642,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id));
            tracep->chgBit(oldp+1643,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+1644,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
            tracep->chgBit(oldp+1645,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
            tracep->chgBit(oldp+1646,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz));
            tracep->chgBit(oldp+1647,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+1648,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2fU])) {
            tracep->chgBit(oldp+1649,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
            tracep->chgBit(oldp+1650,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec));
            tracep->chgBit(oldp+1651,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x30U])) {
            tracep->chgBit(oldp+1652,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1653,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1654,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1655,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1656,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1657,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1658,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1659,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1660,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+1661,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1662,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1663,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1664,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1665,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1666,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1667,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1668,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1669,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+1670,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1671,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1672,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1673,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1674,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1675,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1676,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1677,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1678,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+1679,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1680,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1681,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1682,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1683,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1684,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1685,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1686,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1687,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][0U])));
            tracep->chgBit(oldp+1688,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1689,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1690,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1691,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1692,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1693,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1694,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1695,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1696,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1697,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1698,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+1699,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1700,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1701,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1702,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1703,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1704,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1705,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1706,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1707,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+1708,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1709,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1710,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1711,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1712,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1713,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1714,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1715,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1716,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+1717,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1718,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1719,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1720,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1721,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1722,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1723,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1724,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1725,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+1726,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1727,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1728,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1729,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1730,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1731,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1732,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1733,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1734,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+1735,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1736,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1737,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1738,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1739,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1740,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1741,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1742,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1743,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [8U][0U])));
            tracep->chgBit(oldp+1744,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1745,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1746,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1747,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1748,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1749,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1750,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1751,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1752,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+1753,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1754,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1755,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1756,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1757,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1758,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1759,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1760,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1761,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+1762,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1763,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1764,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1765,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1766,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1767,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1768,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1769,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1770,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+1771,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1772,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1773,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1774,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1775,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1776,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1777,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1778,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1779,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+1780,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1781,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1782,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1783,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1784,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1785,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1786,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1787,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1788,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+1789,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1790,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1791,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1792,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1793,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1794,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1795,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1796,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1797,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+1798,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1799,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1800,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1801,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1802,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1803,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1804,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1805,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1806,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+1807,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1808,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1809,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1810,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1811,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1812,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1813,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1814,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1815,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+1816,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1817,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1818,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1819,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1820,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1821,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1822,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1823,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1824,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [8U][0U])));
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
            tracep->chgBit(oldp+1834,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1835,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1836,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1837,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1838,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1839,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1840,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1841,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1842,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1843,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1844,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1845,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1846,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1847,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1848,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1849,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1850,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1851,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1852,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1853,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1854,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1855,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1856,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1857,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1858,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1859,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1860,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1861,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1862,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1863,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1864,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1865,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1866,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1867,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1868,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1869,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1870,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1871,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1872,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1873,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1874,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1875,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1876,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1877,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1878,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1879,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1880,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1881,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1882,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1883,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1884,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1885,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1886,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1887,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1888,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1889,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1890,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1891,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1892,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1893,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1894,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1895,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1896,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1897,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1898,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1899,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1900,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1901,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1902,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1903,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1904,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1905,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1906,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1907,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1908,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1909,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1910,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1911,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1912,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1913,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1914,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1915,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1916,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1917,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1918,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1919,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1920,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1921,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1922,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1923,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
                                       [9U][0U])));
            tracep->chgCData(oldp+1924,((0x3cU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   << 0x1bU) 
                                                  | (0x7fffffcU 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][1U] 
                                                        >> 5U))))),6);
            tracep->chgIData(oldp+1925,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+1926,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgSData(oldp+1927,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][0U] 
                                                      >> 1U)))),10);
            tracep->chgSData(oldp+1928,((0xfc00U | 
                                         (0x3ffU & 
                                          ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][1U] 
                                            << 0x15U) 
                                           | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][0U] 
                                              >> 0xbU))))),16);
            tracep->chgSData(oldp+1929,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 1U)))),16);
            tracep->chgSData(oldp+1930,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           << 0xfU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [1U][0U] 
                                             >> 0x11U)))),16);
            tracep->chgBit(oldp+1931,((((0U == (7U 
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
            tracep->chgBit(oldp+1932,((0U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1933,((1U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1934,((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+1935,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [1U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgSData(oldp+1936,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][0U] 
                                                      >> 1U)))),16);
            tracep->chgCData(oldp+1937,(((4U != (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgCData(oldp+1938,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1939,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgCData(oldp+1940,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+1941,((((0U == (7U 
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
            tracep->chgBit(oldp+1942,((0U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1943,((1U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1944,((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+1945,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [0U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+1946,((0x1eU & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][1U])),5);
            tracep->chgSData(oldp+1947,((0x1fcU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][1U] 
                                                         >> 5U))))),9);
            tracep->chgIData(oldp+1948,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+1949,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+1950,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1951,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1952,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1953,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1954,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1955,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1956,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1957,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1958,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1959,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1960,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1961,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1962,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1963,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1964,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1965,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1966,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1967,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1968,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1969,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1970,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1971,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1972,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1973,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1974,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1975,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1976,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1977,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1978,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1979,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1980,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                             [9U][0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1981,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+1982,((7U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][0U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+1983,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][1U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][0U] 
                                                     >> 1U)))),6);
            tracep->chgBit(oldp+1984,((((0U == (7U 
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
            tracep->chgBit(oldp+1985,((0U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1986,((1U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1987,((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+1988,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [9U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+1989,((0xfcU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   << 0x1bU) 
                                                  | (0x7fffffcU 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][1U] 
                                                        >> 5U))))),8);
            tracep->chgIData(oldp+1990,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+1991,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+1992,((((0U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [6U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+1993,((0U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1994,((1U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1995,((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+1996,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][1U] 
                                                        >> 5U)))))),4);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x30U] | vlTOPp->__Vm_traceActivity
                         [0x32U]))) {
            tracep->chgBit(oldp+1997,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                       & (0U != (3U 
                                                 & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [9U][1U] 
                                                       >> 5U)))))));
            tracep->chgBit(oldp+1998,((1U & (~ ((((0U 
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
            tracep->chgBit(oldp+1999,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+2000,((1U & (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [6U][2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                            [6U][2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                              [6U][2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))));
            tracep->chgBit(oldp+2001,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [6U][2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x30U] | vlTOPp->__Vm_traceActivity
                         [0x5dU]))) {
            tracep->chgIData(oldp+2002,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2003,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2004,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2005,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2006,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+2007,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                          ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgBit(oldp+2008,((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [0U][2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgSData(oldp+2009,(((((4U != (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0U][2U] 
                                                      >> 0x12U)))
                                            ? 0U : 1U) 
                                          << 0xbU) 
                                         | (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                             << 0xaU) 
                                            | (0x3ffU 
                                               & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))))),13);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x30U] | vlTOPp->__Vm_traceActivity
                         [0x5eU]))) {
            tracep->chgBit(oldp+2010,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2011,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2012,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2013,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2014,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2015,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2016,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2017,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 8U))));
            tracep->chgBit(oldp+2018,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2019,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2020,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2021,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2022,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2023,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2024,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2025,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2026,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2027,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+2028,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2029,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+2030,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2031,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2032,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2033,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1eU))));
            tracep->chgCData(oldp+2034,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2035,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2036,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2037,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2038,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2039,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2040,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2041,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2042,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x30U] | vlTOPp->__Vm_traceActivity
                         [0x5fU]))) {
            tracep->chgBit(oldp+2043,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2044,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2045,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2046,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2047,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2048,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2049,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+2050,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                                       & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
            tracep->chgCData(oldp+2051,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2052,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2053,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2054,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2055,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2056,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2057,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2058,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2059,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2060,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2061,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2062,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2063,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2064,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2065,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2066,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2067,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2068,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2069,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2070,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2071,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2072,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2073,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2074,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                                          ? (7U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2075,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2076,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2077,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2078,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2079,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2080,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2081,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2082,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                                              ? (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][0U] 
                                                 >> 8U)
                                              : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)))));
            tracep->chgBit(oldp+2083,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2084,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2085,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2086,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2087,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2088,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2089,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2090,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2091,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2092,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2093,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2094,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2095,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2096,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2097,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2098,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+2099,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2100,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+2101,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2102,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2103,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2104,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+2105,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U] 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+2106,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                                       & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][1U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x31U])) {
            tracep->chgBit(oldp+2107,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2108,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2109,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2110,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2111,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2112,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2113,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2114,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2115,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
            tracep->chgBit(oldp+2116,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))));
            tracep->chgBit(oldp+2117,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+2118,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2119,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2120,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err));
            tracep->chgBit(oldp+2121,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err));
            tracep->chgBit(oldp+2122,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb));
            tracep->chgBit(oldp+2123,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en));
            tracep->chgBit(oldp+2124,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done));
            tracep->chgBit(oldp+2125,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
            tracep->chgBit(oldp+2126,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err))));
            tracep->chgBit(oldp+2127,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+2128,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))));
            tracep->chgBit(oldp+2129,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+2130,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception));
            tracep->chgBit(oldp+2131,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing));
            tracep->chgBit(oldp+2132,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem));
            tracep->chgBit(oldp+2133,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+2134,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+2135,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+2136,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+2137,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)))));
            tracep->chgBit(oldp+2138,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+2139,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)))));
            tracep->chgBit(oldp+2140,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgBit(oldp+2141,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access));
            tracep->chgBit(oldp+2142,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill));
            tracep->chgBit(oldp+2143,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall));
            tracep->chgBit(oldp+2144,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err))));
            tracep->chgBit(oldp+2145,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending));
            tracep->chgBit(oldp+2146,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
            tracep->chgCData(oldp+2147,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgBit(oldp+2148,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done));
            tracep->chgBit(oldp+2149,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgBit(oldp+2150,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
            tracep->chgBit(oldp+2151,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2152,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2153,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2154,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2155,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2156,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2157,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2158,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2159,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
            tracep->chgBit(oldp+2160,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_req));
            tracep->chgBit(oldp+2161,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_rsp));
            tracep->chgBit(oldp+2162,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2163,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2164,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2165,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2166,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2167,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2168,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2169,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2170,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p))));
            tracep->chgBit(oldp+2171,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready));
            tracep->chgBit(oldp+2172,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i))));
            tracep->chgBit(oldp+2173,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2174,((((QData)((IData)(
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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x32U])) {
            tracep->chgBit(oldp+2176,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+2177,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+2178,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2179,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2180,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+2181,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2182,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2183,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x33U] | vlTOPp->__Vm_traceActivity
                         [0x36U]))) {
            tracep->chgBit(oldp+2184,(((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+2185,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
            tracep->chgBit(oldp+2186,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 9U)) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2187,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x24U)) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2188,(((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                >> 0x24U)) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x34U])) {
            tracep->chgIData(oldp+2189,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+2190,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgBit(oldp+2191,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+2192,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+2193,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgBit(oldp+2194,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgBit(oldp+2195,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+2196,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgCData(oldp+2197,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgBit(oldp+2198,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x35U])) {
            tracep->chgBit(oldp+2199,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+2200,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+2201,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2202,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2203,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2204,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2205,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2206,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2207,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                         >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgSData(oldp+2208,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit),15);
            tracep->chgBit(oldp+2209,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+2210,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+2211,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+2212,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2213,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2214,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgIData(oldp+2215,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+2216,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we),32);
            tracep->chgCData(oldp+2217,((0xfU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we)),4);
            tracep->chgIData(oldp+2218,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x35U] | vlTOPp->__Vm_traceActivity
                         [0x5dU]))) {
            tracep->chgBit(oldp+2219,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+2220,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)))))));
            tracep->chgBit(oldp+2221,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2222,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2223,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2224,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2225,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+2226,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x36U])) {
            tracep->chgBit(oldp+2227,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+2228,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
            tracep->chgBit(oldp+2229,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+2230,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+2231,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x37U])) {
            tracep->chgBit(oldp+2232,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+2233,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+2234,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+2235,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgIData(oldp+2236,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x38U])) {
            tracep->chgBit(oldp+2237,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+2238,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgIData(oldp+2239,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+2240,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgBit(oldp+2241,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 1U))));
            tracep->chgBit(oldp+2242,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 1U))));
            tracep->chgIData(oldp+2243,((0x1fffffffU 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 3U))),29);
            tracep->chgIData(oldp+2244,((0x1fffffffU 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 3U))),29);
            tracep->chgBit(oldp+2245,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+2246,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgBit(oldp+2247,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 2U))));
            tracep->chgBit(oldp+2248,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x39U])) {
            tracep->chgBit(oldp+2249,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
            tracep->chgBit(oldp+2250,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2251,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2252,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2253,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2254,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2255,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2256,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2257,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2258,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2259,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2260,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2261,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2262,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2263,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2264,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2265,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2266,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2267,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2268,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2269,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2270,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2271,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2272,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2273,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2274,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2275,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2276,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2277,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2278,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2279,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2280,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2281,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2282,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2283,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2284,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2285,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2286,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe));
            tracep->chgBit(oldp+2287,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe));
            tracep->chgBit(oldp+2288,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe));
            tracep->chgBit(oldp+2289,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe));
            tracep->chgBit(oldp+2290,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe));
            tracep->chgBit(oldp+2291,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe));
            tracep->chgBit(oldp+2292,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe));
            tracep->chgBit(oldp+2293,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe));
            tracep->chgBit(oldp+2294,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe));
            tracep->chgBit(oldp+2295,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe));
            tracep->chgBit(oldp+2296,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe));
            tracep->chgBit(oldp+2297,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe));
            tracep->chgBit(oldp+2298,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe));
            tracep->chgBit(oldp+2299,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe));
            tracep->chgBit(oldp+2300,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe));
            tracep->chgBit(oldp+2301,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe));
            tracep->chgBit(oldp+2302,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe));
            tracep->chgBit(oldp+2303,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe));
            tracep->chgBit(oldp+2304,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe));
            tracep->chgBit(oldp+2305,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe));
            tracep->chgBit(oldp+2306,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe));
            tracep->chgBit(oldp+2307,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe));
            tracep->chgBit(oldp+2308,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
            tracep->chgBit(oldp+2309,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe));
            tracep->chgBit(oldp+2310,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe));
            tracep->chgBit(oldp+2311,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
            tracep->chgBit(oldp+2312,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe));
            tracep->chgBit(oldp+2313,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe));
            tracep->chgBit(oldp+2314,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe));
            tracep->chgBit(oldp+2315,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe));
            tracep->chgBit(oldp+2316,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3aU])) {
            tracep->chgCData(oldp+2317,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2318,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2319,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2320,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2321,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2322,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2323,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2324,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2325,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2326,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2327,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2328,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2329,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2330,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2331,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2332,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2333,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2334,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2335,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2336,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3bU])) {
            tracep->chgCData(oldp+2337,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2338,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2339,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2340,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2341,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2342,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2343,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2344,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2345,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2346,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2347,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2348,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2349,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2350,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2351,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2352,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2353,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2354,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2355,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2356,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2357,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2358,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2359,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2360,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2361,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2362,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2363,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2364,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2365,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2366,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2367,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2368,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2369,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2370,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe));
            tracep->chgBit(oldp+2371,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe));
            tracep->chgBit(oldp+2372,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe));
            tracep->chgBit(oldp+2373,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe));
            tracep->chgBit(oldp+2374,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe));
            tracep->chgBit(oldp+2375,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe));
            tracep->chgBit(oldp+2376,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe));
            tracep->chgBit(oldp+2377,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe));
            tracep->chgBit(oldp+2378,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe));
            tracep->chgBit(oldp+2379,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe));
            tracep->chgBit(oldp+2380,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe));
            tracep->chgBit(oldp+2381,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe));
            tracep->chgBit(oldp+2382,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe));
            tracep->chgBit(oldp+2383,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe));
            tracep->chgBit(oldp+2384,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe));
            tracep->chgBit(oldp+2385,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe));
            tracep->chgBit(oldp+2386,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe));
            tracep->chgBit(oldp+2387,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe));
            tracep->chgBit(oldp+2388,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe));
            tracep->chgBit(oldp+2389,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe));
            tracep->chgBit(oldp+2390,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
            tracep->chgBit(oldp+2391,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe));
            tracep->chgBit(oldp+2392,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe));
            tracep->chgBit(oldp+2393,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe));
            tracep->chgBit(oldp+2394,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe));
            tracep->chgBit(oldp+2395,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe));
            tracep->chgBit(oldp+2396,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe));
            tracep->chgBit(oldp+2397,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe));
            tracep->chgBit(oldp+2398,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe));
            tracep->chgBit(oldp+2399,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe));
            tracep->chgBit(oldp+2400,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe));
            tracep->chgBit(oldp+2401,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe));
            tracep->chgBit(oldp+2402,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe));
            tracep->chgBit(oldp+2403,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe));
            tracep->chgBit(oldp+2404,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe));
            tracep->chgBit(oldp+2405,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3cU])) {
            tracep->chgCData(oldp+2406,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2407,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2408,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2409,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2410,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2411,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2412,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2413,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2414,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2415,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2416,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2417,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2418,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2419,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2420,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2421,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2422,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2423,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2424,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2425,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2426,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2427,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3dU])) {
            tracep->chgCData(oldp+2428,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__irq_id_o[0]),5);
            tracep->chgBit(oldp+2429,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2430,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2431,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2432,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2433,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2434,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2435,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2436,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2437,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2438,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2439,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2440,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2441,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2442,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2443,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2444,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2445,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2446,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2447,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2448,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2449,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2450,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2451,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2452,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2453,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2454,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2455,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2456,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
            tracep->chgBit(oldp+2457,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2458,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2459,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2460,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2461,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2462,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2463,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2464,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2465,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2466,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2467,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2468,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2469,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2470,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2471,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2472,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2473,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2474,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2475,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2476,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2477,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2478,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2479,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2480,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2481,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2482,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2483,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2484,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2485,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2486,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2487,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2488,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+2489,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2490,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2491,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2492,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 4U))));
            tracep->chgCData(oldp+2493,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgCData(oldp+2494,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim_id[0]),5);
            tracep->chgCData(oldp+2495,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__cc_id[0]),5);
            tracep->chgBit(oldp+2496,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
            tracep->chgBit(oldp+2497,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
            tracep->chgBit(oldp+2498,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
            tracep->chgBit(oldp+2499,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
            tracep->chgBit(oldp+2500,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
            tracep->chgBit(oldp+2501,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
            tracep->chgBit(oldp+2502,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
            tracep->chgBit(oldp+2503,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
            tracep->chgBit(oldp+2504,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
            tracep->chgBit(oldp+2505,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
            tracep->chgBit(oldp+2506,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
            tracep->chgBit(oldp+2507,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
            tracep->chgBit(oldp+2508,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
            tracep->chgBit(oldp+2509,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
            tracep->chgBit(oldp+2510,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
            tracep->chgBit(oldp+2511,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
            tracep->chgBit(oldp+2512,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
            tracep->chgBit(oldp+2513,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
            tracep->chgBit(oldp+2514,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
            tracep->chgBit(oldp+2515,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
            tracep->chgBit(oldp+2516,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
            tracep->chgBit(oldp+2517,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
            tracep->chgBit(oldp+2518,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
            tracep->chgBit(oldp+2519,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
            tracep->chgBit(oldp+2520,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
            tracep->chgBit(oldp+2521,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
            tracep->chgBit(oldp+2522,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
            tracep->chgBit(oldp+2523,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
            tracep->chgCData(oldp+2524,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
            tracep->chgCData(oldp+2525,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgBit(oldp+2526,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2527,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2528,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2529,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2530,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2531,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2532,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2533,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2534,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2535,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2536,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2537,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2538,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2539,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2540,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2541,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2542,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2543,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2544,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2545,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2546,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2547,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2548,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2549,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2550,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2551,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2552,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
            tracep->chgBit(oldp+2553,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2554,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2555,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2556,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2557,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2558,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2559,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2560,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2561,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2562,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2563,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2564,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2565,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2566,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2567,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2568,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2569,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2570,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2571,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2572,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2573,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2574,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2575,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2576,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2577,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2578,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2579,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2580,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2581,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2582,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2583,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2584,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+2585,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2586,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2587,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2588,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2589,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 5U))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x3dU] | vlTOPp->__Vm_traceActivity
                         [0x53U]))) {
            tracep->chgBit(oldp+2590,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+2591,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2592,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2593,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2594,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2595,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2596,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2597,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2598,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2599,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2600,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2601,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2602,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2603,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2604,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2605,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2606,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2607,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2608,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2609,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2610,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2611,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U])));
            tracep->chgBit(oldp+2612,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2613,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2614,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2615,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2616,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2617,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2618,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2619,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2620,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2621,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2622,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+2623,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+2624,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+2625,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+2626,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U])),3);
            tracep->chgCData(oldp+2627,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 3U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x1dU)))),3);
            tracep->chgCData(oldp+2628,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x1aU)))),3);
            tracep->chgCData(oldp+2629,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 9U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x17U)))),3);
            tracep->chgCData(oldp+2630,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x14U)))),3);
            tracep->chgCData(oldp+2631,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0xfU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x11U)))),3);
            tracep->chgCData(oldp+2632,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0xeU)))),3);
            tracep->chgCData(oldp+2633,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x15U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0xbU)))),3);
            tracep->chgCData(oldp+2634,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 8U)))),3);
            tracep->chgCData(oldp+2635,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x1bU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 5U)))),3);
            tracep->chgCData(oldp+2636,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 2U)))),3);
            tracep->chgCData(oldp+2637,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 1U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+2638,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+2639,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 7U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+2640,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+2641,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0xdU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+2642,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+2643,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x13U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+2644,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+2645,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x19U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+2646,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+2647,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+2648,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+2649,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 5U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+2650,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+2651,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0xbU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+2652,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+2653,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0x11U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+2654,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0xcU)))),3);
            tracep->chgBit(oldp+2655,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2656,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2657,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2658,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2659,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2660,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2661,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2662,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2663,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2664,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2665,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2666,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2667,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2668,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2669,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2670,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2671,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2672,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2673,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2674,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2675,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U])));
            tracep->chgBit(oldp+2676,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2677,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2678,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2679,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2680,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2681,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2682,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2683,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2684,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2685,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2686,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+2687,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+2688,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                     >> 3U)))),6);
            tracep->chgBit(oldp+2689,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2690,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2691,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+2692,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2693,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3eU])) {
            tracep->chgIData(oldp+2694,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
            tracep->chgBit(oldp+2695,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+2696,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2697,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2698,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2699,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2700,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2701,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2702,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2703,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+2704,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2705,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+2706,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+2707,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2708,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+2709,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+2710,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2711,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgIData(oldp+2712,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
            tracep->chgBit(oldp+2713,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe));
            tracep->chgBit(oldp+2714,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe));
            tracep->chgBit(oldp+2715,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3fU])) {
            tracep->chgBit(oldp+2716,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__instr_valid));
            tracep->chgSData(oldp+2717,((0x1fffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
            tracep->chgSData(oldp+2718,((0x1fffU & 
                                         (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                          >> 0xdU))),13);
            tracep->chgCData(oldp+2719,((0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
            tracep->chgCData(oldp+2720,((0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                  >> 5U))),5);
            tracep->chgQData(oldp+2721,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+2723,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                               >> 1U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x40U])) {
            tracep->chgCData(oldp+2725,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+2726,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2727,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+2728,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+2729,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2730,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+2731,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+2732,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2733,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgIData(oldp+2734,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x41U])) {
            tracep->chgBit(oldp+2735,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2736,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2737,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2738,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2739,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2740,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2741,((IData)((vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2742,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2743,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar))));
            tracep->chgCData(oldp+2744,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2745,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2746,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2747,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgIData(oldp+2748,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+2749,((IData)((vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+2750,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgIData(oldp+2751,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgQData(oldp+2752,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                         << 1U)),33);
            tracep->chgQData(oldp+2754,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x42U])) {
            tracep->chgQData(oldp+2756,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_gpio)) 
                                         << 1U)),33);
            tracep->chgIData(oldp+2758,(vlTOPp->opentitan_soc_top__DOT__intr_gpio),32);
            tracep->chgBit(oldp+2759,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+2760,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+2761,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+2762,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+2763,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+2764,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+2765,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+2766,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+2767,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+2768,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+2769,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgIData(oldp+2770,((0xfffffffeU 
                                         & (vlTOPp->opentitan_soc_top__DOT__intr_gpio 
                                            << 1U))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x43U])) {
            tracep->chgCData(oldp+2771,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+2772,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xaU))));
            tracep->chgCData(oldp+2773,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 8U))),2);
            tracep->chgCData(oldp+2774,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+2775,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+2776,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                 >> 1U))),4);
            tracep->chgBit(oldp+2777,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+2778,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+2779,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x44U])) {
            tracep->chgBit(oldp+2780,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+2781,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask),32);
            tracep->chgBit(oldp+2782,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2783,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x45U])) {
            tracep->chgIData(oldp+2784,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q),32);
            tracep->chgBit(oldp+2785,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe));
            tracep->chgBit(oldp+2786,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2787,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2788,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+2789,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2790,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2791,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe));
            tracep->chgBit(oldp+2792,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x46U])) {
            tracep->chgIData(oldp+2793,((0xfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q)),20);
            tracep->chgIData(oldp+2794,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+2795,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_en_q),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x47U])) {
            tracep->chgBit(oldp+2796,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2797,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2798,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2799,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2800,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2801,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2802,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2803,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2804,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+2805,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+2806,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+2807,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2808,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgCData(oldp+2809,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2810,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+2811,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+2812,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x48U])) {
            tracep->chgIData(oldp+2813,(((IData)(1U) 
                                         << (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
            tracep->chgIData(oldp+2814,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
            tracep->chgIData(oldp+2815,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
            tracep->chgCData(oldp+2816,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
            tracep->chgBit(oldp+2817,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x49U] | vlTOPp->__Vm_traceActivity
                         [0x54U]))) {
            tracep->chgIData(oldp+2818,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+2819,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+2820,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgBit(oldp+2821,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+2822,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+2823,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+2824,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),10);
            tracep->chgSData(oldp+2825,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2826,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
            tracep->chgIData(oldp+2827,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+2828,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2829,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+2830,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2831,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgIData(oldp+2832,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+2833,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+2834,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgIData(oldp+2835,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+2836,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2837,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+2838,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2839,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgBit(oldp+2840,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+2841,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+2842,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+2843,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgSData(oldp+2844,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),16);
            tracep->chgSData(oldp+2845,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),16);
            tracep->chgSData(oldp+2846,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4aU])) {
            tracep->chgIData(oldp+2847,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+2848,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)));
            tracep->chgIData(oldp+2849,((0xfffffffeU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4bU])) {
            tracep->chgBit(oldp+2850,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgIData(oldp+2851,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgQData(oldp+2852,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4cU])) {
            tracep->chgBit(oldp+2854,((1U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2855,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2856,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2857,((3U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2858,((0xffU & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2859,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2860,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2861,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2862,((1U & vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U])));
            tracep->chgBit(oldp+2863,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__instr_req));
            tracep->chgIData(oldp+2864,((0xfffffffcU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+2865,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+2866,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init));
            tracep->chgBit(oldp+2867,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgBit(oldp+2868,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgIData(oldp+2869,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4dU])) {
            tracep->chgCData(oldp+2870,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
            tracep->chgIData(oldp+2871,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgIData(oldp+2872,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgIData(oldp+2873,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgCData(oldp+2874,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgIData(oldp+2875,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+2876,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
            tracep->chgBit(oldp+2877,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4eU])) {
            tracep->chgBit(oldp+2878,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump));
            tracep->chgBit(oldp+2879,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch));
            tracep->chgBit(oldp+2880,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch));
            tracep->chgBit(oldp+2881,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec));
            tracep->chgBit(oldp+2882,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
            tracep->chgBit(oldp+2883,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4fU])) {
            tracep->chgWData(oldp+2884,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex),68);
            tracep->chgIData(oldp+2887,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex),32);
            tracep->chgWData(oldp+2888,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d),68);
            tracep->chgBit(oldp+2891,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+2892,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
            tracep->chgQData(oldp+2893,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
            tracep->chgQData(oldp+2895,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
            tracep->chgBit(oldp+2897,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
            tracep->chgBit(oldp+2898,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
            tracep->chgIData(oldp+2899,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
            tracep->chgIData(oldp+2900,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgIData(oldp+2901,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
            tracep->chgCData(oldp+2902,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
            tracep->chgBit(oldp+2903,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgCData(oldp+2904,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
            tracep->chgSData(oldp+2905,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
            tracep->chgSData(oldp+2906,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x50U])) {
            tracep->chgBit(oldp+2907,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2908,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2909,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2910,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2911,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2912,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2913,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2914,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2915,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U])));
            tracep->chgCData(oldp+2916,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
            tracep->chgCData(oldp+2917,(((4U != (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgCData(oldp+2918,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2919,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgCData(oldp+2920,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+2921,((((0U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2922,((0U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2923,((1U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2924,((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgCData(oldp+2925,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                        >> 5U)))))),4);
            tracep->chgCData(oldp+2926,((0x1eU & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U])),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x51U])) {
            tracep->chgBit(oldp+2927,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req));
            tracep->chgSData(oldp+2928,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr),12);
            tracep->chgBit(oldp+2929,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
            tracep->chgIData(oldp+2930,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2931,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+2932,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgBit(oldp+2933,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
            tracep->chgBit(oldp+2934,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgIData(oldp+2935,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+2936,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2937,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+2938,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2939,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2940,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+2941,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x52U])) {
            tracep->chgBit(oldp+2942,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw));
            tracep->chgIData(oldp+2943,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+2944,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgIData(oldp+2945,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+2946,((3U != (3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgBit(oldp+2947,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgBit(oldp+2948,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)))));
            tracep->chgBit(oldp+2949,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err));
            tracep->chgBit(oldp+2950,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err));
            tracep->chgCData(oldp+2951,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+2952,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                          ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                   >> 1U))
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
            tracep->chgCData(oldp+2953,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgCData(oldp+2954,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                          ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                   >> 1U))
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
            tracep->chgBit(oldp+2955,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err));
            tracep->chgBit(oldp+2956,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgWData(oldp+2957,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
            tracep->chgCData(oldp+2960,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgCData(oldp+2961,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgIData(oldp+2962,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+2963,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgBit(oldp+2964,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+2965,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+2966,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+2967,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+2968,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x54U])) {
            tracep->chgIData(oldp+2969,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+2970,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+2971,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+2972,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xaU))));
            tracep->chgIData(oldp+2973,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                          << 0x16U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                            >> 0xaU))),32);
            tracep->chgBit(oldp+2974,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                             >> 9U))));
            tracep->chgSData(oldp+2975,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 7U) | 
                                          (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           >> 0x19U)))),16);
            tracep->chgBit(oldp+2976,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 0x18U))));
            tracep->chgSData(oldp+2977,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           << 0x18U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 8U)))),16);
            tracep->chgBit(oldp+2978,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                             >> 7U))));
            tracep->chgSData(oldp+2979,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 9U) | 
                                          (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                           >> 0x17U)))),16);
            tracep->chgBit(oldp+2980,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 0x16U))));
            tracep->chgSData(oldp+2981,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           << 0x1aU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 6U)))),16);
            tracep->chgBit(oldp+2982,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                             >> 5U))));
            tracep->chgIData(oldp+2983,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                            >> 5U))),32);
            tracep->chgBit(oldp+2984,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                             >> 4U))));
            tracep->chgSData(oldp+2985,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0xcU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 0x14U)))),16);
            tracep->chgBit(oldp+2986,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 0x13U))));
            tracep->chgSData(oldp+2987,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           << 0x1dU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 3U)))),16);
            tracep->chgBit(oldp+2988,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                             >> 2U))));
            tracep->chgSData(oldp+2989,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0xeU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 0x12U)))),16);
            tracep->chgBit(oldp+2990,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 0x11U))));
            tracep->chgSData(oldp+2991,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           << 0x1fU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                             >> 1U)))),16);
            tracep->chgBit(oldp+2992,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U])));
            tracep->chgIData(oldp+2993,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]),32);
            tracep->chgIData(oldp+2994,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U]),32);
            tracep->chgIData(oldp+2995,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]),32);
            tracep->chgIData(oldp+2996,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U]),32);
            tracep->chgIData(oldp+2997,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U]),32);
            tracep->chgIData(oldp+2998,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d),32);
            tracep->chgIData(oldp+2999,(((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])),32);
            tracep->chgIData(oldp+3000,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U])),32);
            tracep->chgIData(oldp+3001,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+3002,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3003,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                             >> 0xaU))));
            tracep->chgIData(oldp+3004,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+3005,((0U != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)));
            tracep->chgIData(oldp+3006,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                         | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                             << 0x15U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                               >> 0xbU)))),32);
            tracep->chgIData(oldp+3007,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event),32);
            tracep->chgIData(oldp+3008,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+3009,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+3010,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+3011,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+3012,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+3013,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+3014,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+3015,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+3016,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+3017,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+3018,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+3019,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+3020,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+3021,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3022,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+3023,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+3024,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+3025,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+3026,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+3027,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+3028,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+3029,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+3030,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3031,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+3032,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+3033,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+3034,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+3035,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+3036,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+3037,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+3038,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+3039,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+3040,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                             >> 0x1fU))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x55U])) {
            tracep->chgCData(oldp+3041,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0]),3);
            tracep->chgCData(oldp+3042,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[1]),3);
            tracep->chgCData(oldp+3043,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[2]),3);
            tracep->chgCData(oldp+3044,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[3]),3);
            tracep->chgCData(oldp+3045,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[4]),3);
            tracep->chgCData(oldp+3046,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[5]),3);
            tracep->chgCData(oldp+3047,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[6]),3);
            tracep->chgCData(oldp+3048,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[7]),3);
            tracep->chgCData(oldp+3049,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[8]),3);
            tracep->chgCData(oldp+3050,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[9]),3);
            tracep->chgCData(oldp+3051,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[10]),3);
            tracep->chgCData(oldp+3052,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[11]),3);
            tracep->chgCData(oldp+3053,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[12]),3);
            tracep->chgCData(oldp+3054,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[13]),3);
            tracep->chgCData(oldp+3055,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[14]),3);
            tracep->chgCData(oldp+3056,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[15]),3);
            tracep->chgCData(oldp+3057,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[16]),3);
            tracep->chgCData(oldp+3058,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[17]),3);
            tracep->chgCData(oldp+3059,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[18]),3);
            tracep->chgCData(oldp+3060,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[19]),3);
            tracep->chgCData(oldp+3061,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[20]),3);
            tracep->chgCData(oldp+3062,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[21]),3);
            tracep->chgCData(oldp+3063,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[22]),3);
            tracep->chgCData(oldp+3064,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[23]),3);
            tracep->chgCData(oldp+3065,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[24]),3);
            tracep->chgCData(oldp+3066,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[25]),3);
            tracep->chgCData(oldp+3067,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[26]),3);
            tracep->chgCData(oldp+3068,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[27]),3);
            tracep->chgCData(oldp+3069,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[28]),3);
            tracep->chgCData(oldp+3070,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[29]),3);
            tracep->chgCData(oldp+3071,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[30]),3);
            tracep->chgCData(oldp+3072,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[31]),3);
            tracep->chgCData(oldp+3073,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0]),3);
            tracep->chgCData(oldp+3074,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1]),3);
            tracep->chgCData(oldp+3075,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2]),3);
            tracep->chgCData(oldp+3076,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3]),3);
            tracep->chgCData(oldp+3077,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4]),3);
            tracep->chgCData(oldp+3078,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5]),3);
            tracep->chgCData(oldp+3079,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6]),3);
            tracep->chgCData(oldp+3080,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7]),3);
            tracep->chgCData(oldp+3081,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8]),3);
            tracep->chgCData(oldp+3082,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9]),3);
            tracep->chgCData(oldp+3083,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[10]),3);
            tracep->chgCData(oldp+3084,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[11]),3);
            tracep->chgCData(oldp+3085,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[12]),3);
            tracep->chgCData(oldp+3086,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[13]),3);
            tracep->chgCData(oldp+3087,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[14]),3);
            tracep->chgCData(oldp+3088,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[15]),3);
            tracep->chgCData(oldp+3089,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[16]),3);
            tracep->chgCData(oldp+3090,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[17]),3);
            tracep->chgCData(oldp+3091,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[18]),3);
            tracep->chgCData(oldp+3092,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[19]),3);
            tracep->chgCData(oldp+3093,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[20]),3);
            tracep->chgCData(oldp+3094,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[21]),3);
            tracep->chgCData(oldp+3095,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[22]),3);
            tracep->chgCData(oldp+3096,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[23]),3);
            tracep->chgCData(oldp+3097,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[24]),3);
            tracep->chgCData(oldp+3098,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[25]),3);
            tracep->chgCData(oldp+3099,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[26]),3);
            tracep->chgCData(oldp+3100,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[27]),3);
            tracep->chgCData(oldp+3101,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[28]),3);
            tracep->chgCData(oldp+3102,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[29]),3);
            tracep->chgCData(oldp+3103,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[30]),3);
            tracep->chgCData(oldp+3104,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[31]),3);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x55U] | vlTOPp->__Vm_traceActivity
                         [0x58U]))) {
            tracep->chgCData(oldp+3105,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U])),3);
            tracep->chgCData(oldp+3106,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+3107,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+3108,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+3109,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+3110,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x11U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+3111,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+3112,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xbU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+3113,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+3114,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 5U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+3115,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+3116,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+3117,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+3118,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x19U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+3119,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+3120,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x13U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+3121,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+3122,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xdU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+3123,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+3124,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 7U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+3125,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+3126,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 1U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+3127,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 2U)))),3);
            tracep->chgCData(oldp+3128,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1bU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 5U)))),3);
            tracep->chgCData(oldp+3129,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 8U)))),3);
            tracep->chgCData(oldp+3130,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x15U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xbU)))),3);
            tracep->chgCData(oldp+3131,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xeU)))),3);
            tracep->chgCData(oldp+3132,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xfU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x11U)))),3);
            tracep->chgCData(oldp+3133,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x14U)))),3);
            tracep->chgCData(oldp+3134,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 9U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x17U)))),3);
            tracep->chgCData(oldp+3135,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1aU)))),3);
            tracep->chgCData(oldp+3136,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 3U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1dU)))),3);
            tracep->chgCData(oldp+3137,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U])),3);
            tracep->chgCData(oldp+3138,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+3139,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+3140,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+3141,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+3142,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x11U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+3143,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+3144,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+3145,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+3146,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 5U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+3147,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+3148,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+3149,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+3150,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x19U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+3151,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+3152,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x13U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+3153,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+3154,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xdU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+3155,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+3156,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 7U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+3157,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+3158,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 1U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+3159,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 2U))),3);
            tracep->chgCData(oldp+3160,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 5U))),3);
            tracep->chgCData(oldp+3161,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 8U))),3);
            tracep->chgCData(oldp+3162,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xbU))),3);
            tracep->chgCData(oldp+3163,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xeU))),3);
            tracep->chgCData(oldp+3164,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x11U))),3);
            tracep->chgCData(oldp+3165,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x14U))),3);
            tracep->chgCData(oldp+3166,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x17U))),3);
            tracep->chgCData(oldp+3167,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x1aU))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x56U])) {
            tracep->chgBit(oldp+3168,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel));
            tracep->chgBit(oldp+3169,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel));
            tracep->chgBit(oldp+3170,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x57U])) {
            tracep->chgCData(oldp+3171,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])),6);
            tracep->chgCData(oldp+3172,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+3173,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+3174,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+3175,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+3176,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                   << 2U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+3177,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+3178,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+3179,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+3180,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+3181,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                   << 4U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+3182,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+3183,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+3184,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+3185,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+3186,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                   << 6U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+3187,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U])),6);
            tracep->chgCData(oldp+3188,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+3189,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+3190,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+3191,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+3192,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                   << 2U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+3193,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+3194,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+3195,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+3196,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+3197,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                   << 4U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+3198,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+3199,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+3200,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+3201,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+3202,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   << 6U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+3203,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U])),6);
            tracep->chgCData(oldp+3204,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+3205,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+3206,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+3207,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 8U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+3208,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                   << 2U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+3209,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+3210,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+3211,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+3212,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+3213,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                   << 4U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+3214,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 2U)))),6);
            tracep->chgCData(oldp+3215,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 8U)))),6);
            tracep->chgCData(oldp+3216,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0xeU)))),6);
            tracep->chgCData(oldp+3217,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x14U)))),6);
            tracep->chgCData(oldp+3218,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                   << 6U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x1aU)))),6);
            tracep->chgCData(oldp+3219,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U])),6);
            tracep->chgCData(oldp+3220,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 6U)))),6);
            tracep->chgCData(oldp+3221,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0x14U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0xcU)))),6);
            tracep->chgCData(oldp+3222,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 0xeU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x12U)))),6);
            tracep->chgCData(oldp+3223,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 8U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x18U)))),6);
            tracep->chgCData(oldp+3224,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                   << 2U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                     >> 0x1eU)))),6);
            tracep->chgCData(oldp+3225,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 4U)))),6);
            tracep->chgCData(oldp+3226,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x16U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0xaU)))),6);
            tracep->chgCData(oldp+3227,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x10U)))),6);
            tracep->chgCData(oldp+3228,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+3229,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                   << 4U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x1cU)))),6);
            tracep->chgCData(oldp+3230,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 2U))),6);
            tracep->chgCData(oldp+3231,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 8U))),6);
            tracep->chgCData(oldp+3232,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 0xeU))),6);
            tracep->chgCData(oldp+3233,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                  >> 0x14U))),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x59U])) {
            tracep->chgBit(oldp+3234,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+3235,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgBit(oldp+3236,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgIData(oldp+3237,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+3238,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+3239,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+3240,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5aU])) {
            tracep->chgBit(oldp+3241,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready));
            tracep->chgBit(oldp+3242,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+3243,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+3244,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+3245,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
            tracep->chgBit(oldp+3246,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
            tracep->chgIData(oldp+3247,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+3248,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             >> 1U))));
            tracep->chgIData(oldp+3249,((0x1fffffffU 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 3U))),29);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5bU])) {
            tracep->chgBit(oldp+3250,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
            tracep->chgBit(oldp+3251,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
            tracep->chgBit(oldp+3252,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
            tracep->chgBit(oldp+3253,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
            tracep->chgBit(oldp+3254,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
            tracep->chgCData(oldp+3255,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3256,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3257,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3258,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3259,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3260,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3261,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3262,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3263,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3264,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3265,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3266,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+3267,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+3268,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+3269,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
            tracep->chgBit(oldp+3270,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe));
            tracep->chgBit(oldp+3271,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe));
            tracep->chgBit(oldp+3272,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe));
            tracep->chgBit(oldp+3273,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
            tracep->chgBit(oldp+3274,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe));
            tracep->chgBit(oldp+3275,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe));
            tracep->chgBit(oldp+3276,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe));
            tracep->chgBit(oldp+3277,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe));
            tracep->chgBit(oldp+3278,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe));
            tracep->chgBit(oldp+3279,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe));
            tracep->chgBit(oldp+3280,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe));
            tracep->chgBit(oldp+3281,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
            tracep->chgBit(oldp+3282,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe));
            tracep->chgBit(oldp+3283,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe));
            tracep->chgBit(oldp+3284,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe));
            tracep->chgBit(oldp+3285,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe));
            tracep->chgBit(oldp+3286,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe));
            tracep->chgBit(oldp+3287,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe));
            tracep->chgBit(oldp+3288,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe));
            tracep->chgBit(oldp+3289,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
            tracep->chgBit(oldp+3290,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe));
            tracep->chgBit(oldp+3291,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe));
            tracep->chgBit(oldp+3292,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe));
            tracep->chgBit(oldp+3293,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe));
            tracep->chgBit(oldp+3294,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe));
            tracep->chgBit(oldp+3295,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__CLK_SEL));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5cU])) {
            tracep->chgCData(oldp+3296,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3297,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3298,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3299,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3300,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3301,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3302,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3303,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3304,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3305,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3306,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3307,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+3308,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+3309,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgSData(oldp+3310,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr),12);
            tracep->chgBit(oldp+3311,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+3312,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack));
            tracep->chgBit(oldp+3313,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5dU])) {
            tracep->chgBit(oldp+3314,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re));
            tracep->chgBit(oldp+3315,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we));
            tracep->chgBit(oldp+3316,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
            tracep->chgBit(oldp+3317,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
            tracep->chgBit(oldp+3318,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
            tracep->chgBit(oldp+3319,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
            tracep->chgBit(oldp+3320,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
            tracep->chgBit(oldp+3321,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
            tracep->chgBit(oldp+3322,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+3323,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we));
            tracep->chgBit(oldp+3324,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req));
            tracep->chgIData(oldp+3325,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgBit(oldp+3326,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
            tracep->chgBit(oldp+3327,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgBit(oldp+3328,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we)))));
            tracep->chgBit(oldp+3329,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgIData(oldp+3330,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+3331,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+3332,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+3333,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+3334,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+3335,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5eU])) {
            tracep->chgIData(oldp+3336,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim),32);
            tracep->chgCData(oldp+3337,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id[0]),5);
            tracep->chgIData(oldp+3338,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete),32);
            tracep->chgCData(oldp+3339,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold[0]),3);
            tracep->chgIData(oldp+3340,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+3341,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
            tracep->chgBit(oldp+3342,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
            tracep->chgBit(oldp+3343,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
            tracep->chgBit(oldp+3344,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
            tracep->chgBit(oldp+3345,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
            tracep->chgBit(oldp+3346,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
            tracep->chgBit(oldp+3347,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
            tracep->chgBit(oldp+3348,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
            tracep->chgBit(oldp+3349,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
            tracep->chgBit(oldp+3350,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
            tracep->chgBit(oldp+3351,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
            tracep->chgBit(oldp+3352,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
            tracep->chgBit(oldp+3353,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
            tracep->chgBit(oldp+3354,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
            tracep->chgBit(oldp+3355,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
            tracep->chgBit(oldp+3356,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
            tracep->chgBit(oldp+3357,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
            tracep->chgBit(oldp+3358,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
            tracep->chgBit(oldp+3359,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
            tracep->chgBit(oldp+3360,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
            tracep->chgBit(oldp+3361,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
            tracep->chgBit(oldp+3362,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
            tracep->chgBit(oldp+3363,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
            tracep->chgBit(oldp+3364,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
            tracep->chgBit(oldp+3365,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
            tracep->chgBit(oldp+3366,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
            tracep->chgBit(oldp+3367,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
            tracep->chgBit(oldp+3368,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
            tracep->chgBit(oldp+3369,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
            tracep->chgBit(oldp+3370,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
            tracep->chgBit(oldp+3371,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
            tracep->chgBit(oldp+3372,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
            tracep->chgBit(oldp+3373,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
            tracep->chgCData(oldp+3374,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                        [0U]),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5fU])) {
            tracep->chgBit(oldp+3375,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
            tracep->chgBit(oldp+3376,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
            tracep->chgBit(oldp+3377,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
            tracep->chgBit(oldp+3378,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
            tracep->chgBit(oldp+3379,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
            tracep->chgBit(oldp+3380,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
            tracep->chgBit(oldp+3381,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
            tracep->chgBit(oldp+3382,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
            tracep->chgBit(oldp+3383,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
            tracep->chgBit(oldp+3384,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
            tracep->chgBit(oldp+3385,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
            tracep->chgBit(oldp+3386,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
            tracep->chgBit(oldp+3387,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
            tracep->chgBit(oldp+3388,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
            tracep->chgBit(oldp+3389,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
            tracep->chgBit(oldp+3390,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
            tracep->chgBit(oldp+3391,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
            tracep->chgBit(oldp+3392,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
            tracep->chgBit(oldp+3393,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
            tracep->chgBit(oldp+3394,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
            tracep->chgBit(oldp+3395,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
            tracep->chgBit(oldp+3396,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
            tracep->chgBit(oldp+3397,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
            tracep->chgBit(oldp+3398,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
            tracep->chgBit(oldp+3399,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
            tracep->chgBit(oldp+3400,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
            tracep->chgBit(oldp+3401,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
            tracep->chgBit(oldp+3402,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
            tracep->chgBit(oldp+3403,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
            tracep->chgBit(oldp+3404,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
            tracep->chgBit(oldp+3405,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
            tracep->chgBit(oldp+3406,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
            tracep->chgBit(oldp+3407,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
            tracep->chgBit(oldp+3408,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
            tracep->chgBit(oldp+3409,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
            tracep->chgBit(oldp+3410,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
            tracep->chgBit(oldp+3411,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
            tracep->chgBit(oldp+3412,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
            tracep->chgBit(oldp+3413,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
            tracep->chgBit(oldp+3414,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
            tracep->chgBit(oldp+3415,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
            tracep->chgBit(oldp+3416,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
            tracep->chgBit(oldp+3417,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
            tracep->chgBit(oldp+3418,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
            tracep->chgBit(oldp+3419,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
            tracep->chgBit(oldp+3420,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
            tracep->chgBit(oldp+3421,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
            tracep->chgBit(oldp+3422,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
            tracep->chgBit(oldp+3423,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
            tracep->chgBit(oldp+3424,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
            tracep->chgBit(oldp+3425,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
            tracep->chgBit(oldp+3426,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
            tracep->chgBit(oldp+3427,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
            tracep->chgBit(oldp+3428,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
            tracep->chgBit(oldp+3429,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
            tracep->chgBit(oldp+3430,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
            tracep->chgBit(oldp+3431,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
            tracep->chgBit(oldp+3432,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
            tracep->chgBit(oldp+3433,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
            tracep->chgBit(oldp+3434,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
            tracep->chgBit(oldp+3435,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
            tracep->chgBit(oldp+3436,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
            tracep->chgBit(oldp+3437,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
            tracep->chgBit(oldp+3438,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x60U])) {
            tracep->chgCData(oldp+3439,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
            tracep->chgBit(oldp+3440,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear));
            tracep->chgBit(oldp+3441,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+3442,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgCData(oldp+3443,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+3444,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgBit(oldp+3445,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgCData(oldp+3446,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgCData(oldp+3447,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgBit(oldp+3448,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
            tracep->chgBit(oldp+3449,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
            tracep->chgBit(oldp+3450,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
            tracep->chgBit(oldp+3451,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
            tracep->chgBit(oldp+3452,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
            tracep->chgQData(oldp+3453,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+3455,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+3457,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+3458,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgQData(oldp+3460,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+3462,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+3464,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+3465,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        }
        tracep->chgBit(oldp+3467,(vlTOPp->clk_i));
        tracep->chgBit(oldp+3468,(vlTOPp->rst_ni));
        tracep->chgIData(oldp+3469,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+3470,(vlTOPp->gpio_o),20);
        tracep->chgBit(oldp+3471,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
                                    & (4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))) 
                                   & (~ ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                           & (0U != 
                                              (3U & 
                                               ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                         | (~ ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U)))) 
                                               & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                  & (((4U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                           [6U][2U] 
                                                           >> 0x12U))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [6U][2U] 
                                                             >> 0x12U)))) 
                                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))))));
        tracep->chgBit(oldp+3472,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                   & (~ ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                           & (0U != 
                                              (3U & 
                                               ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                         | (~ ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U)))) 
                                               & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                  & (((4U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                           [6U][2U] 
                                                           >> 0x12U))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [6U][2U] 
                                                             >> 0x12U)))) 
                                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))))));
        tracep->chgBit(oldp+3473,((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                            & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                               | (0U 
                                                  != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))))));
        tracep->chgBit(oldp+3474,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_req));
        tracep->chgBit(oldp+3475,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk));
        tracep->chgBit(oldp+3476,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy) 
                                    | ((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                   | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        tracep->chgBit(oldp+3477,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q));
        tracep->chgBit(oldp+3478,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                      | (0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))));
        tracep->chgBit(oldp+3479,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        tracep->chgIData(oldp+3480,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                    (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xfU))]),32);
        tracep->chgIData(oldp+3481,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                    (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U))]),32);
        tracep->chgBit(oldp+3482,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__en_latch));
        tracep->chgBit(oldp+3483,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
        tracep->chgSData(oldp+3484,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
        tracep->chgBit(oldp+3485,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id));
        tracep->chgBit(oldp+3486,((1U & (((((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))))));
        tracep->chgBit(oldp+3487,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err));
        tracep->chgIData(oldp+3488,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                     << 1U)),32);
        tracep->chgIData(oldp+3489,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id),32);
        tracep->chgBit(oldp+3490,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
        tracep->chgBit(oldp+3491,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        tracep->chgBit(oldp+3492,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy));
        tracep->chgBit(oldp+3493,(((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        tracep->chgBit(oldp+3494,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        tracep->chgBit(oldp+3495,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        tracep->chgBit(oldp+3496,(((((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                     & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                >> 0x33U))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->chgIData(oldp+3497,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                      ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                          : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
                                      : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)),32);
        tracep->chgBit(oldp+3498,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
        tracep->chgBit(oldp+3499,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match));
        tracep->chgBit(oldp+3500,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match));
        tracep->chgBit(oldp+3501,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+3502,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgIData(oldp+3503,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        tracep->chgBit(oldp+3504,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_write_wb));
        tracep->chgBit(oldp+3505,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->chgBit(oldp+3506,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out));
        tracep->chgBit(oldp+3507,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if));
        tracep->chgBit(oldp+3508,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_wb));
        tracep->chgIData(oldp+3509,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval),32);
        tracep->chgBit(oldp+3510,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
        tracep->chgBit(oldp+3511,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q))));
        tracep->chgBit(oldp+3512,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->chgBit(oldp+3513,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz)))));
        tracep->chgBit(oldp+3514,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+3515,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgBit(oldp+3516,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load));
        tracep->chgBit(oldp+3517,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store));
        tracep->chgBit(oldp+3518,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))))));
        tracep->chgBit(oldp+3519,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                             ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                             : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->chgIData(oldp+3520,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                      ? 0U : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                               ? ((0xffffff00U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                  | (0x7cU 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                                        << 2U)))
                                               : (0xffffff00U 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->chgBit(oldp+3521,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgCData(oldp+3522,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->chgBit(oldp+3523,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgIData(oldp+3524,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgBit(oldp+3525,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->chgIData(oldp+3526,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                      ? (0xfffffffeU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                      : 0U)),32);
        tracep->chgBit(oldp+3527,((1U & (~ (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                         >> 1U) 
                                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->chgIData(oldp+3528,((0xfffffffeU & 
                                     ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                      << 1U))),32);
        tracep->chgCData(oldp+3529,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        tracep->chgCData(oldp+3530,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->chgIData(oldp+3531,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
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
        tracep->chgBit(oldp+3532,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                             | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                   | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+3533,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                          : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgBit(oldp+3534,((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          >> 1U) | 
                                         ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->chgIData(oldp+3535,((0x7fffffffU & 
                                     (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                << 1U)) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+3536,((0x7fffffffU & 
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
        tracep->chgIData(oldp+3537,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->chgBit(oldp+3538,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
        tracep->chgBit(oldp+3539,(0U));
        tracep->chgBit(oldp+3540,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->chgBit(oldp+3541,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        tracep->chgIData(oldp+3542,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
        tracep->chgBit(oldp+3543,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgBit(oldp+3544,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                   & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec)))));
        tracep->chgBit(oldp+3545,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                   & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec)))));
        tracep->chgBit(oldp+3546,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+3547,(((3U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgBit(oldp+3548,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)))));
        tracep->chgBit(oldp+3549,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush))));
        tracep->chgBit(oldp+3550,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->chgBit(oldp+3551,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        tracep->chgIData(oldp+3552,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                      ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                          << 0x1eU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                            >> 2U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->chgQData(oldp+3553,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        tracep->chgBit(oldp+3555,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->chgQData(oldp+3556,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->chgQData(oldp+3558,((0x1ffffffffULL 
                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                         ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                         : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                             ? (~ ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                   << 1U))
                                             : ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                << 1U))))),33);
        tracep->chgBit(oldp+3560,((1U & ((0x80000000U 
                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                          ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->chgQData(oldp+3561,((0x7ffffffffULL 
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
        tracep->chgQData(oldp+3563,((0x3ffffffffULL 
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
        tracep->chgBit(oldp+3565,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                    ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->chgBit(oldp+3566,((1U & (IData)((1ULL 
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
        tracep->chgIData(oldp+3567,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgIData(oldp+3568,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgIData(oldp+3569,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgBit(oldp+3570,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        tracep->chgIData(oldp+3571,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+3572,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgCData(oldp+3573,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->chgBit(oldp+3574,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
        tracep->chgIData(oldp+3575,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                      ? 0x20000001U
                                      : (1U | (0xffffff00U 
                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->chgIData(oldp+3576,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip),18);
        tracep->chgCData(oldp+3577,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        tracep->chgCData(oldp+3578,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d),3);
        tracep->chgCData(oldp+3579,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                      ? (5U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->chgBit(oldp+3580,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        tracep->chgBit(oldp+3581,(((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 8U)) > (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+3582,(((3U == (3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                 >> 0xaU))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        tracep->chgBit(oldp+3583,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->chgBit(oldp+3584,((1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 2U) & 
                                         (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 2U))))));
        tracep->chgCData(oldp+3585,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->chgCData(oldp+3586,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                      : 0xfU)),4);
        tracep->chgBit(oldp+3587,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->chgIData(oldp+3588,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding),17);
        tracep->chgBit(oldp+3589,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending));
        tracep->chgIData(oldp+3590,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+3591,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q),32);
        tracep->chgIData(oldp+3592,((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                     & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+3593,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                      & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                     & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+3594,(((((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                       | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                           & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                      | ((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                                     | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+3595,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][0U]))));
        tracep->chgBit(oldp+3596,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                   & (0U != (3U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][1U] 
                                                      >> 5U)))))));
        tracep->chgBit(oldp+3597,((1U & (~ ((((0U == 
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
        tracep->chgBit(oldp+3598,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
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
        tracep->chgBit(oldp+3599,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x15U)))));
        tracep->chgIData(oldp+3600,((((0x200000U & 
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
        tracep->chgBit(oldp+3601,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+3602,((1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                          : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+3603,((1U & (vlTOPp->gpio_i 
                                         >> 1U))));
        tracep->chgBit(oldp+3604,((1U & ((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 1U)))));
        tracep->chgBit(oldp+3605,((1U & (vlTOPp->gpio_i 
                                         >> 2U))));
        tracep->chgBit(oldp+3606,((1U & ((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 2U)))));
        tracep->chgBit(oldp+3607,((1U & (vlTOPp->gpio_i 
                                         >> 3U))));
        tracep->chgBit(oldp+3608,((1U & ((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 3U)))));
        tracep->chgBit(oldp+3609,((1U & (vlTOPp->gpio_i 
                                         >> 4U))));
        tracep->chgBit(oldp+3610,((1U & ((0x10U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 4U)))));
        tracep->chgBit(oldp+3611,((1U & (vlTOPp->gpio_i 
                                         >> 5U))));
        tracep->chgBit(oldp+3612,((1U & ((0x20U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 5U)))));
        tracep->chgBit(oldp+3613,((1U & (vlTOPp->gpio_i 
                                         >> 6U))));
        tracep->chgBit(oldp+3614,((1U & ((0x40U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 6U)))));
        tracep->chgBit(oldp+3615,((1U & (vlTOPp->gpio_i 
                                         >> 7U))));
        tracep->chgBit(oldp+3616,((1U & ((0x80U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 7U)))));
        tracep->chgBit(oldp+3617,((1U & (vlTOPp->gpio_i 
                                         >> 8U))));
        tracep->chgBit(oldp+3618,((1U & ((0x100U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 8U)))));
        tracep->chgBit(oldp+3619,((1U & (vlTOPp->gpio_i 
                                         >> 9U))));
        tracep->chgBit(oldp+3620,((1U & ((0x200U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 9U)))));
        tracep->chgBit(oldp+3621,((1U & (vlTOPp->gpio_i 
                                         >> 0xaU))));
        tracep->chgBit(oldp+3622,((1U & ((0x400U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xaU)))));
        tracep->chgBit(oldp+3623,((1U & (vlTOPp->gpio_i 
                                         >> 0xbU))));
        tracep->chgBit(oldp+3624,((1U & ((0x800U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xbU)))));
        tracep->chgBit(oldp+3625,((1U & (vlTOPp->gpio_i 
                                         >> 0xcU))));
        tracep->chgBit(oldp+3626,((1U & ((0x1000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xcU)))));
        tracep->chgBit(oldp+3627,((1U & (vlTOPp->gpio_i 
                                         >> 0xdU))));
        tracep->chgBit(oldp+3628,((1U & ((0x2000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xdU)))));
        tracep->chgBit(oldp+3629,((1U & (vlTOPp->gpio_i 
                                         >> 0xeU))));
        tracep->chgBit(oldp+3630,((1U & ((0x4000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xeU)))));
        tracep->chgBit(oldp+3631,((1U & (vlTOPp->gpio_i 
                                         >> 0xfU))));
        tracep->chgBit(oldp+3632,((1U & ((0x8000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xfU)))));
        tracep->chgBit(oldp+3633,((1U & (vlTOPp->gpio_i 
                                         >> 0x10U))));
        tracep->chgBit(oldp+3634,((1U & ((0x10000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x10U)))));
        tracep->chgBit(oldp+3635,((1U & (vlTOPp->gpio_i 
                                         >> 0x11U))));
        tracep->chgBit(oldp+3636,((1U & ((0x20000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x11U)))));
        tracep->chgBit(oldp+3637,((1U & (vlTOPp->gpio_i 
                                         >> 0x12U))));
        tracep->chgBit(oldp+3638,((1U & ((0x40000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x12U)))));
        tracep->chgBit(oldp+3639,((1U & (vlTOPp->gpio_i 
                                         >> 0x13U))));
        tracep->chgBit(oldp+3640,((1U & ((0x80000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x13U)))));
        tracep->chgBit(oldp+3641,((1U & (vlTOPp->gpio_i 
                                         >> 0x14U))));
        tracep->chgBit(oldp+3642,((1U & ((0x100000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x14U)))));
        tracep->chgBit(oldp+3643,((1U & (vlTOPp->gpio_i 
                                         >> 0x15U))));
        tracep->chgBit(oldp+3644,((1U & ((0x200000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x15U)))));
        tracep->chgBit(oldp+3645,((1U & (vlTOPp->gpio_i 
                                         >> 0x16U))));
        tracep->chgBit(oldp+3646,((1U & ((0x400000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x16U)))));
        tracep->chgBit(oldp+3647,((1U & (vlTOPp->gpio_i 
                                         >> 0x17U))));
        tracep->chgBit(oldp+3648,((1U & ((0x800000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x17U)))));
        tracep->chgBit(oldp+3649,((1U & (vlTOPp->gpio_i 
                                         >> 0x18U))));
        tracep->chgBit(oldp+3650,((1U & ((0x1000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x18U)))));
        tracep->chgBit(oldp+3651,((1U & (vlTOPp->gpio_i 
                                         >> 0x19U))));
        tracep->chgBit(oldp+3652,((1U & ((0x2000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+3653,((1U & (vlTOPp->gpio_i 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+3654,((1U & ((0x4000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1aU)))));
        tracep->chgBit(oldp+3655,((1U & (vlTOPp->gpio_i 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+3656,((1U & ((0x8000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1bU)))));
        tracep->chgBit(oldp+3657,((1U & (vlTOPp->gpio_i 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+3658,((1U & ((0x10000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1cU)))));
        tracep->chgBit(oldp+3659,((1U & (vlTOPp->gpio_i 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+3660,((1U & ((0x20000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1dU)))));
        tracep->chgBit(oldp+3661,((1U & (vlTOPp->gpio_i 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+3662,((1U & ((0x40000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1eU)))));
        tracep->chgBit(oldp+3663,((1U & (vlTOPp->gpio_i 
                                         >> 0x1fU))));
        tracep->chgBit(oldp+3664,((1U & ((0x80000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1fU)))));
        tracep->chgIData(oldp+3665,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata),32);
        tracep->chgIData(oldp+3666,(((IData)(vlTOPp->rst_ni)
                                      ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                      : 0U)),32);
        tracep->chgBit(oldp+3667,((1U & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar)))));
        tracep->chgBit(oldp+3668,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
        tracep->chgBit(oldp+3669,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgBit(oldp+3670,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
        tracep->chgBit(oldp+3671,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+3672,((((IData)(vlTOPp->rst_ni)
                                       ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                       : 0U) & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+3673,((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgSData(oldp+3674,(((((4U != (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U) 
                                      << 0xbU) | (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                        >> 5U))))),13);
        tracep->chgCData(oldp+3675,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3676,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+3677,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgSData(oldp+3678,(((0x19U >= (0x1fU 
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
        tracep->chgCData(oldp+3679,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3680,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+3681,(((9U >= (0xfU & 
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
        tracep->chgCData(oldp+3682,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3683,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+3684,(((0x41U >= (0x7fU 
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
        tracep->chgQData(oldp+3686,((0x1ffffffffULL 
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
        tracep->chgIData(oldp+3688,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata),32);
        tracep->chgBit(oldp+3689,((1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0U][2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
        tracep->chgBit(oldp+3690,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgBit(oldp+3691,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+3692,((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
                                     & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgCData(oldp+3693,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3694,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgSData(oldp+3695,(((0x33U >= (0x3fU 
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
        tracep->chgCData(oldp+3696,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3697,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+3698,(((0x13U >= (0x1fU 
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
        tracep->chgCData(oldp+3699,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+3700,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+3701,(((0x83U >= (0xffU 
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
        tracep->chgQData(oldp+3703,((0x1ffffffffULL 
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
        tracep->chgIData(oldp+3705,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le),32);
        tracep->chgIData(oldp+3706,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->chgIData(oldp+3707,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
        tracep->chgQData(oldp+3708,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
        tracep->chgBit(oldp+3710,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][0U]))));
        tracep->chgIData(oldp+3711,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                    [0U]),32);
        tracep->chgQData(oldp+3712,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->chgBit(oldp+3714,((((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                    > vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                    [0U]) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->chgCData(oldp+3715,(((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                      ? (0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                      : 0U)),6);
        tracep->chgBit(oldp+3716,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3717,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3718,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3719,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3720,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3721,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3722,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3723,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3724,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3725,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3726,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3727,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3728,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3729,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3730,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3731,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3732,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3733,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3734,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3735,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3736,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3737,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3738,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3739,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3740,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3741,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3742,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3743,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel));
        tracep->chgBit(oldp+3744,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                  >> 0x33U)) 
                                         & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [6U][0U]))));
        tracep->chgIData(oldp+3745,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rdata),32);
        tracep->chgBit(oldp+3746,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__error));
        tracep->chgBit(oldp+3747,((1U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                           & (0U != 
                                              (3U & 
                                               ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                         | (~ ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U)))) 
                                               & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                  & (((4U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                           [6U][2U] 
                                                           >> 0x12U))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                             [6U][2U] 
                                                             >> 0x12U)))) 
                                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))))))));
        tracep->chgBit(oldp+3748,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                   & (0U != (3U & (
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][1U] 
                                                      >> 5U)))))));
        tracep->chgBit(oldp+3749,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
                                   & (4U == (7U & (
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U))))));
    }
}
