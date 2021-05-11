#include <stdlib.h>
#include <iostream>
#include <utility>
#include <string>
#include "Vopentitan_soc_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
// #include "soc_top__Dpi.h"


unsigned int main_time = 0;
// or
//vluint64_t main_time = 0;

double sc_time_stamp () {
    return main_time;
}

int main (int argc, char **argv) {

    std::cout << "\nVerilatorTB: Start of sim\n" << std::endl; 

    Verilated::commandArgs(argc, argv);

    Vopentitan_soc_top* top = new Vopentitan_soc_top;

    // init trace dump
    //VerilatedVcdC* tfp = NULL;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    // if initialized above
    //tfp = new VerilatedVcdC;


    top->trace (tfp, 99);
    Verilated::mkdir("logs");
    tfp->open("logs/sim.vcd");

    top -> clk_i = 0;
    

   top -> gpio_i = 8;
    while (!Verilated::gotFinish()) 
    { 
        top->clk_i = top->clk_i ? 0 : 1; 
              // Toggle clock
        if(main_time == 4)
        {
            top -> rst_ni = 0;
        }
        else
        {
            top -> rst_ni = 1;
        }
        top->eval(); 

        // redundant
        //top -> eval();

        // if (tfp) tfp -> dump(main_time);
        // or dump always
        tfp -> dump(main_time);

        main_time ++;
    }

    top -> final();

    // if (tfp) tfp -> close();
    // or close anyways
    tfp -> close();

    delete top;

    std::cout << "\nVerilatorTB: End of sim" << std::endl;
    //exit(EXIT_SUCCESS);
    exit(0);
}
