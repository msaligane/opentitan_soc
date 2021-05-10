module instr_mem_tlul
(
  input clk_i,
  input rst_ni,

  // tl-ul insterface
  input  tlul_pkg::tl_h2d_t tl_d_i,
  output tlul_pkg::tl_d2h_t tl_d_o
);

  logic        we;
  logic        req;
  logic [11:0] addr;
  logic [31:0] wdata;
  logic [31:0] wmask;
  logic [31:0] rdata;
  logic        rvalid; 
  logic        instr_valid;
  // logic [3:0]  data_we;
  logic [31:0]  data_we;

  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      instr_valid <= 1'b0;
    end else if (we) begin
      instr_valid <= 1'b0;
    end else begin 
      instr_valid <= req;
    end
  end

  DFFRAM inst_memory (
    .CLK    (clk_i),  // system clk_i
    .EN     (req),    // chip enable
    .WE     (data_we),   // write mask
    .DI     (wdata),  // data input
    .DO     (rdata),  // data output
    .A      (addr)    // address
  );
  
  // gf12lp_1rw_lg12_w32_bit inst_memory (
  //   .A(addr),
  //   .D(wdata),
  //   .CEN(req),
  //   .CLK(clk_i),
  //   .Q(rdata),
  //   .WEN(data_we),
  //   .GWEN(&data_we),
  //   .EMA(3'b010),
  //   .EMAW(2'b01),
  //   .EMAS(1'b0),
  //   .RET1N(1'b1),
  //   .STOV(1'b0)
  // );

  tlul_sram_adapter #(
    .SramAw       (12),
    .SramDw       (32), 
    .Outstanding  (2),  
    .ByteAccess   (1),
    .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
    .ErrOnRead    (0)   // 1: Reads not allowed, automatically error  

  ) inst_mem (
    .clk_i     (clk_i),
    .rst_ni    (rst_ni),
    .tl_i      (tl_d_i),
    .tl_o      (tl_d_o), 
    .req_o     (req),
    .gnt_i     (1'b1),
    .we_o      (),
    .addr_o    (addr),
    .wdata_o   (),
    .wmask_o   (),
    .rdata_i   ((rst_ni) ? rdata: '0),
    .rvalid_i  (instr_valid),
    .rerror_i  (2'b0)
  );

endmodule
