package top_pkg;
  localparam TL_AW=32;
  localparam TL_DW=32;
  localparam TL_AIW=8;
  localparam TL_DIW=1;
  localparam TL_DUW=4;
  localparam TL_DBW=(TL_DW>>3);
  localparam TL_SZW=$clog2($clog2(TL_DBW)+1);
endpackage
