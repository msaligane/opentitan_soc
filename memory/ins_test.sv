module instr_mem_top
(
  input clock,
  input reset,

  input  logic        req,
  input  logic [11:0] addr,
  input  logic [31:0] wdata,
  output logic [31:0] rdata,
  output logic        rvalid,
  input  logic [3:0]  we
);

  always_ff @(posedge clock) begin
  if (!reset) begin
    rvalid <= 1'b0;
  end else if (we) begin
    rvalid <= 1'b0;
  end else begin 
    rvalid <= req;
  end
  end

DFFRAM iccm (

    .CLK    (clock),
    .EN     (req), // chip enable
    .WE     (we), //write mask
    .DI     (wdata), //data input
    .DO     (rdata), // data output
    .A      (addr) // address
);

endmodule
