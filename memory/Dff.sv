/*
   modeling SRAM
   write delay is 1
   read  delay is 1
*/
module d1spram
#(
   parameter  SRAM = 0,
   parameter  WIDTH = 32,
   parameter  SIZE  = 4096
)
(
   input                          clk,
   input                          wen,
   input                          ren,
   input  [$clog2(SIZE) - 1 : 0]  waddr,
   input  [$clog2(SIZE) - 1 : 0]  raddr,
   input  [WIDTH - 1 : 0]         wdata,
   input  [3:0]                   mask,
   output logic [WIDTH - 1 : 0]   rdata
);
   logic [SIZE - 1 : 0][WIDTH - 1 : 0] entry, entry_w;
   logic real_ren, real_wen;
   logic [WIDTH - 1 : 0]rdata_w;


   assign real_wen = wen;
   assign real_ren = (real_wen == 0) ? ren : 0;
   assign rdata_w  = (real_ren == 1) ? entry[raddr] : 0;
   always_comb begin
      entry_w = entry;
      if (real_wen == 1) begin
         if (mask[0] == 1)  entry_w [waddr][7:0] = wdata[7:0];
         if (mask[1] == 1)  entry_w [waddr][15:8] = wdata[15:8];
         if (mask[2] == 1)  entry_w [waddr][23:16] = wdata[23:16];
         if (mask[3] == 1)  entry_w [waddr][31:24] = wdata[31:24];
      end
   end
 
       always_ff @ (posedge clk) begin
          entry <= entry_w;
          rdata <= rdata_w;
       end

endmodule
