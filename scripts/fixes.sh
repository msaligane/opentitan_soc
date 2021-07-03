#! /bin/bash

# Fix default net issues
find skywater-pdk-libs-sky130_fd_sc_hd/models -name '*.v' -type f -exec sed -i 's/`default_nettype/\/\//' {} \;
echo "20% completed"

find skywater-pdk-libs-sky130_fd_sc_hd/cells -name '*.v' -type f -exec sed -i 's/`default_nettype/\/\//' {} \;
echo "40% completed"

# Fix Routing issues
find skywater-pdk-libs-sky130_fd_sc_hd/cells -name '*.v' -type f -exec sed -i 's#\.\./\.\.#skywater-pdk-libs-sky130_fd_sc_hd#' {} \;
echo "50% completed"

find skywater-pdk-libs-sky130_fd_sc_hd/cells -name '*.v' -type f -exec sed -i 's#\.\./#skywater-pdk-libs-sky130_fd_sc_hd/cells/#' {} \;
echo "60% completed"

find skywater-pdk-libs-sky130_fd_sc_hd/cells/conb -name '*.v' -type f -exec sed -i 's#`include\s\"sky130_fd_sc_hd#`include \"skywater-pdk-libs-sky130_fd_sc_hd/cells/conb/sky130_fd_sc_hd#g' {} \;
echo "80% completed"

find skywater-pdk-libs-sky130_fd_sc_hd/cells -name '*.v' -type f -exec sh -c 'name=$(echo "$1" | grep -oP "(?<=__)[^._]+"); sed -i "s#include\s\"sky130_fd_sc_hd#include \"skywater-pdk-libs-sky130_fd_sc_hd/cells/$name/sky130_fd_sc_hd#g" "{}"' _ {} \;
echo "100% completed"
