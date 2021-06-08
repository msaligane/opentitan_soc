// `define DFFRAM
`define SKY130

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
  logic        rvalid_buf; 
  logic [31:0] we_inv;
  `ifdef DFFRAM
    logic [3:0]  data_we;
  `endif
  `ifndef DFFRAM
    logic [31:0]  data_we;
  `endif
  
  logic [31:0] data_buffer;

  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      rvalid <= 1'b0;
      rvalid_buf <= 1'b0;
    end else if (we) begin
      rvalid <= 1'b0;
      rvalid_buf <= 1'b0;
    end else begin 
      rvalid_buf <= req;
      rvalid <= rvalid_buf;
    end
  end

  `ifdef DFFRAM
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
  `elsif GF12
    assign data_we[15:0] = (wmask[23:16] != 8'd0) ? {16{1'b1}}: {16{1'b0}};
    assign data_we[31:16] = (wmask[31:24] != 8'd0) ? {16{1'b1}}: {16{1'b0}};
    assign we_inv = ~data_we;
    
    gf12lp_1rw_lg12_w32_bit dccm_gf12 (
      .A(addr),
      .D(wdata),
      .CEN(~req),
      .CLK(clk_i),
      .Q(rdata),
      .WEN(we ? we_inv : '1),
      .GWEN(we ? &we_inv : '1),
      .EMA(3'b010),
      .EMAW(2'b01),
      .EMAS(1'b0),
      .RET1N(1'b1),
      .STOV(1'b0)
    );
  `else
    assign data_we[1:0] = (wmask[23:16] != 8'd0) ? 2'b11: 2'b00;
    assign data_we[3:2] = (wmask[31:24] != 8'd0) ? 2'b11: 2'b00; 

    logic [3:0] sel;
    d_2to4_decoder two2four_dec (
      .in(addr[11:10]),
      .out(sel)
    );

    logic [3:0][31:0] rdata_out;
    logic [3:0][31:0] rdata_dummy;
    genvar i;
    generate
      for(i=0; i<4; i++) begin : dccm
        sky130_sram_4kbyte_1rw1r_32x1024_8 sky130_sram_4kb(
          // Port 0: RW
          .clk0(clk_i),
          .csb0(~(rst_ni && sel[i])),
          .web0(~we),
          .wmask0(data_we),
          .addr0(addr[9:0]),
          .din0(wdata),
          .dout0(rdata_dummy[i]),
          
          // Port 1: R
          .clk1(clk_i),
          .csb1(~(rst_ni && sel[i] && ~we)),
          .addr1(addr[9:0]),
          .dout1(rdata_out[i])
        );
      end
    endgenerate
    
    always_comb begin
      case(addr[11:10])
        2'b00: rdata = rdata_out[0];
        2'b01: rdata = rdata_out[1];
        2'b10: rdata = rdata_out[2];
        2'b11: rdata = rdata_out[3];
      endcase
    end    
  `endif
  
  tlul_sram_adapter #(
    .SramAw       (12),
    .SramDw       (32), 
    .Outstanding  (4),  
    .ByteAccess   (1),
    .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
    .ErrOnRead    (0) 
  
  ) data_mem (
      .clk_i    (clk_i       ),
      .rst_ni   (rst_ni      ),
      .tl_i     (tl_d_i),
      .tl_o     (tl_d_o), 
      .req_o    (req         ),
      .gnt_i    (1'b1        ),
      .we_o     (we          ),
      .addr_o   (addr        ),
      .wdata_o  (wdata       ),
      .wmask_o  (wmask       ),
      .rdata_i  (data_buffer ),
      .rvalid_i (rvalid      ),
      .rerror_i (2'b0        )
  );

always_ff @(posedge clk_i or negedge rst_ni) begin
  if(!rst_ni) begin
    data_buffer <= 'b0;
  end
  else begin  
    data_buffer <= rdata;
  end
end

endmodule

`ifdef SKY130
  module d_2to4_decoder (
    input logic  [1:0] in,
    output logic [3:0] out
  );
    always_comb begin
      case(in)
        2'b00: begin
          out = 4'b0001;
        end
        2'b01: begin
          out = 4'b0010;
        end
        2'b10: begin
          out = 4'b0100;
        end
        2'b11: begin
          out = 4'b1000;
        end
      endcase
    end
  endmodule
`endif