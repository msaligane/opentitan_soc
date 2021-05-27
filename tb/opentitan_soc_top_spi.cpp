#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <math.h>

#include <stdio.h>
#include "svdpi.h"

using namespace std;

static FILE* ppfile = NULL;

extern "C" int rfile(){
    cout << "Reading File!" << endl;
    
    ifstream file;
    
    file.open("/afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/opentitan_soc/tests/hex/load_test.hex", std::ifstream::in);
    int totalLines = count(istreambuf_iterator<char>(file), istreambuf_iterator<char>(), '\n');
    
    file.clear();
    file.seekg(0, file.beg);
    if (!file){
        cerr << "Unable to open file";
    }

    return totalLines;
}

extern "C" void init_out(){
  if (ppfile == NULL){
    ppfile = fopen("./test.out", "w");
  }
}

extern "C" void print_H2D_header(char* TYPE){
    if(ppfile != NULL){
        fprintf(ppfile, "|         H2D (%s)          |\n", TYPE);
        fprintf(ppfile, "|  Cycle  | A_ADDR | A_DATA |\n");
        fprintf(ppfile, "-----------------------------\n");
    }
}

extern "C" void print_H2D(int a_valid, int clkcount, int a_address, int a_data){
    int zero = 0;
    if(ppfile != NULL){
        if(a_valid != 0){
            fprintf(ppfile, "| %9d | %5d | %5x |\n", clkcount, a_address, a_data);
        }
        else{
            fprintf(ppfile, "| %9d | %5d | %5x |\n", zero, zero, zero);
        }
    }
}

extern "C" void print_D2H_header(char* TYPE){
    if(ppfile != NULL){
        fprintf(ppfile, "\n========================\n");
        fprintf(ppfile, "|       D2H (%s)     |\n", TYPE);
        fprintf(ppfile, "------------------------\n");
        fprintf(ppfile, "|   Cycle   |  A_DATA  |\n");
    }
}

extern "C" void print_D2H(int d_valid, int clkcount, int d_data){
    int zero = 0;
    if(ppfile != NULL){        
        if(d_valid != 0){
            fprintf(ppfile, "| %9d | %8x |\n", clkcount, d_data);
            fprintf(ppfile, "------------------------\n");
        }
        else{
            fprintf(ppfile, "| %9d | %8x |\n", zero, zero);
            fprintf(ppfile, "------------------------\n");
        }
    }
}

extern "C" void print_close(){
    fclose(ppfile);
    ppfile = NULL;
}