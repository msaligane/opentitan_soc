`define DFFRAM

module instr_mem_top
(
  input clk_i,
  input rst_ni,

  input  logic        req,
  input  logic [11:0] addr,
  input  logic [31:0] wdata,
  output logic [31:0] rdata,
  output logic        rvalid,
  input  logic [3:0]  wmask,
  input  logic        we
);

  always_ff @(negedge clk_i) begin
  if (!rst_ni) begin
    rvalid <= 1'b0;
  end else if (we) begin
    rvalid <= 1'b0;
  end else begin 
    rvalid <= req;
  end
  end

  `ifdef DFFRAM
    DFFRAM inst_memory (
      .CLK    (clk_i),  // system clk_i
      .EN     (req),    // chip enable
      .WE     (wmask),   // write mask
      .DI     (wdata),  // data input
      .DO     (rdata),  // data output
      .A      (addr)    // address
    );
  `endif

  `ifndef DFFRAM
    sram #(
      .NUM_WMASKS  (4), 
      .DATA_WIDTH  (32),
      .ADDR_WIDTH  (12),
      .DELAY       (0),
      .IZERO       (0),
      .IFILE       ("../tests/asm/output/program")
    ) iccm (
      
      .clk0     (clk_i),
      .csb0     (~req),
      .web0     (~we),
      .wmask0   (wmask),
      .addr0    (addr),
      .din0     (wdata),
      .dout0    (rdata),

      .clk1     (1'b0),
      .csb1     (1'b0),
      .addr1    (12'b0),
      .dout1    ()
    );
  `endif

endmodule
