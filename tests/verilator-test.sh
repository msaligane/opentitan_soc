#!/bin/bash

rm -rf obj_dir

verilator -Wall --cc adder.v --exe --trace --build sim_main_adder.cpp

./obj_dir/Vadder
