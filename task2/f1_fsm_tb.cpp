#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include "vbuddy.cpp" 
#define MAX_SIM_CYC 1000000

int main(int argc,char **argv, char **env){
    int i;
    int clk;
    int count;

    Verilated::commandArgs(argc, argv);
    //init top verilog instance 
    Vf1_fsm* top = new Vf1_fsm;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp= new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("f1_fsm.vcd");


    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("L3T2");

    // initialize simulation inputs
    top->clk = 1;
    top->en = vbdFlag();
    top->rst = 1;

    vbdSetMode(1);

    //run simulation for many clock cycles
    for (i=0; i<MAX_SIM_CYC; i++) {
            //dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }

        vbdHex(2, (int(top->out) >> 4) & 0XF);
        vbdHex(1, int(top->out) & 0XF);

        vbdBar(top->out & 0xFF);

        vbdCycle(i+1);

        top->en = vbdFlag();
        top->rst = false;   
        //(step1) top->vbdVal = vbdValue();
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
        exit(0);
    }

    vbdClose(); //++++
    tfp->close();
    exit(0);
}