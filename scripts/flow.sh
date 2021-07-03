#!/bin/bash

#export GOOGLE="/afs/eecs.umich.edu/vlsida/projects/restricted/google"
#export AFS_HOME="$GOOGLE/khtaur"
#export PLATFORM="$GOOGLE/platforms"
#export SYNTH_ROOT="$AFS_HOME/fasoc_opentitan_synth"
#export SYNTH_PROJECT="$SYNTH_ROOT/private/tests/fasoc_to_gf12_2021/fasoc_soc/opentitan_soc"
#export SYNTH_SCRIPT="$SYNTH_ROOT/private/tests/fasoc_to_gf12_2021/scripts/dc"
#export SYNTH_NLIST="$SYNTH_ROOT/private/tests/fasoc_to_gf12_2021/results/dc"
#export OPENROAD_ROOT="$AFS_HOME/OpenROAD-flow-scripts"
#export OPENROAD_APR="$OPENROAD_ROOT/flow"
#export OPENROAD_BASE="$OPENROAD_ROOT/flow/results/gf12/opentitan_soc/base"

### Look for $SYNTH_REPORT and $OPENROAD_APR for results

########################################
### Required env variables
########################################
source ~/.bashrc
source $GOOGLE/mehdi/Eder-fix/OpenROAD-flow-scripts/setup_env.sh

########################################
### Pull latest code from github
########################################
# echo "Update code from Github!"

cd $SYNTH_PROJECT
​
# git fetch
# git checkout topic/post-syn
# git pull

########################################
### Re-synthesize
########################################
echo "Re-Synthesize with updated Verilog"

### Update constraints before synthesis
clock=$1
if [ -f $SYNTH_SCRIPT/constraints.tcl ]; then
    sed -i "4s/.*/create_clock -name core_clock -period [expr $clock] [get_ports clk_i]/" "$SYNTH_SCRIPT/constraints.tcl"
    echo "constraints.tcl updated!"
else
    echo "Constraints File not found!"
fi

echo "CD to SYNTH base directory"
cd $AFS_HOME/fasoc_opentitan_synth/private/tests/fasoc_to_gf12_2021

lsof +D opentitan_soc_top_dclib | awk '{print $2}' | tail -n +2 | xargs -r kill -9
lsof +D opentitan_soc_top_mwlib | awk '{print $2}' | tail -n +2 | xargs -r kill -9
lsof +D reports/dc | awk '{print $2}' | tail -n +2 | xargs -r kill -9
lsof +D results/dc | awk '{print $2}' | tail -n +2 | xargs -r kill -9
lsof +D logs/dc | awk '{print $2}' | tail -n +2 | xargs -r kill -9

### Remove everything before synthesizing
rm -rf blocks
make prep
​
make bleach_synth
make synth

########################################
### Start APR
########################################
echo "Start APR Flow!"
# ###OpenROAD-flow-scripts/flow
cd $OPENROAD_APR
​
cp -R $PLATFORM/opentitan_soc_macros ./
cp -R $PLATFORM/designs/gf12/opentitan_soc ./designs/gf12/
​
cp $SYNTH_NLIST/opentitan_soc_top.mapped.v $OPENROAD_BASE/1_synth.v
cp $SYNTH_NLIST/opentitan_soc_top.mapped.sdc $OPENROAD_BASE/1_synth.sdc
​
make
​
echo "Running Primetime with pt.tcl"

if [ ! -e primetime_report_"$clock"ps ]; then
    mkdir primetime_report_"$clock"ps
fi

if [ -f pt.tcl ]; then
    sed -i "1s/.*/set clk $clock/" pt.tcl
    echo "pt.tcl updated!"
else
    echo "PT tcl File not found!"
fi

primetime -file pt.tcl