module data_mem_tlul
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
  // logic [3:0]  data_we;
  logic [31:0]  data_we;
  
  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      rvalid <= 1'b0;
    end else if (we) begin
      rvalid <= 1'b0;
    end else begin 
      rvalid <= req;
    end
  end

<<<<<<< HEAD
   assign data_we[1:0] = (wmask[23:16] != 8'd0) ? 2'b11: 2'b00;
   assign data_we[3:2] = (wmask[31:24] != 8'd0) ? 2'b11: 2'b00; 
   
   DFFRAM dccm (
       .CLK    (clk_i  ),
      .EN     (req    ),   // chip enable
       .WE     (data_we),   // write mask
       .DI     (wdata  ),   // data input
       .DO     (rdata  ),   // data output
       .A      (addr   )    // address
   );

 // assign data_we[15:0] = (wmask[23:16] != 8'd0) ? 2'b11: 2'b00;
 // assign data_we[31:16] = (wmask[31:24] != 8'd0) ? 2'b11: 2'b00; 
 // gf12lp_1rw_lg12_w32_bit dccm (
 //   .A(addr),
  //  .D(wdata),
  //  .CEN(req),
  //  .CLK(clk_i),
  //  .Q(rdata),
  //  .WEN(data_we),
  //  .GWEN(&data_we),
  //  .EMA(3'b010),
  //  .EMAW(2'b01),
  //  .EMAS(1'b0),
  //  .RET1N(1'b1),
  //  .STOV(1'b0)
  //);
  
  tlul_sram_adapter #(
=======
  // assign data_we[1:0] = (wmask[23:16] != 8'd0) ? 2'b11: 2'b00;
  // assign data_we[3:2] = (wmask[31:24] != 8'd0) ? 2'b11: 2'b00; 
  // 
  // DFFRAM dccm (
  //     .CLK    (clk_i  ),
  //     .EN     (req    ),   // chip enable
  //     .WE     (data_we),   // write mask
  //     .DI     (wdata  ),   // data input
  //     .DO     (rdata  ),   // data output
  //     .A      (addr   )    // address
  // );

  assign data_we[15:0] = (wmask[23:16] != 8'd0) ? 2'b11: 2'b00;
  assign data_we[31:16] = (wmask[31:24] != 8'd0) ? 2'b11: 2'b00; 
  gf12lp_1rw_lg12_w32_bit dccm (
    .A(addr),
    .D(wdata),
    .CEN(req),
    .CLK(clk_i),
    .Q(rdata),
    .WEN(data_we),
    .GWEN(&data_we),
    .EMA(3'b010),
    .EMAW(2'b01),
    .EMAS(1'b0),
    .RET1N(1'b1),
    .STOV(1'b0)
  );
  
  tlul_adapter_sram #(
>>>>>>> f44951098677fd96155a11afa0b320881c84dd82
    .SramAw       (12),
    .SramDw       (32), 
    .Outstanding  (4),  
    .ByteAccess   (1),
    .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
    .ErrOnRead    (0) 
  
  ) data_mem (
      .clk_i    (clk_i       ),
      .rst_ni   (rst_ni      ),
<<<<<<< HEAD
      .tl_i     (tl_d_i),
      .tl_o     (tl_d_o), 
=======
      .tl_i     (xbar_to_dccm),
      .tl_o     (dccm_to_xbar), 
>>>>>>> f44951098677fd96155a11afa0b320881c84dd82
      .req_o    (req         ),
      .gnt_i    (1'b1        ),
      .we_o     (we          ),
      .addr_o   (addr        ),
      .wdata_o  (wdata       ),
      .wmask_o  (wmask       ),
      .rdata_i  (rdata       ),
      .rvalid_i (rvalid      ),
      .rerror_i (2'b0        )
  );

endmodule
