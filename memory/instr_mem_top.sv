`define SKY130

module instr_mem_top
(
  input clk_i,
  input rst_ni,

  input  logic        req,
  input  logic        we,
  input  logic [11:0] addr,
  input  logic [31:0] wdata,
  output logic [31:0] rdata,
  output logic        rvalid
  `ifdef DFFRAM
    ,input  logic [3:0]  wmask
  `elsif GF12
    ,input  logic [31:0]  wmask
  `else
    ,input  logic         wen
    ,input  logic [3:0]   wmask
  `endif  
);

  // always_ff @(posedge clk_i) begin
  //   if (!rst_ni) begin
  //     rvalid <= 1'b0;
  //     rvalid_buf <= 1'b0;
  //   end 
  //   else if (we) begin
  //     rvalid <= 1'b0;
  //     rvalid_buf <= 1'b0;
  //   end 
  //   else begin 
  //     rvalid_buf <= req;
  //     rvalid <= rvalid_buf;
  //   end
  // end
  
  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      rvalid <= 1'b0;
    end 
    else if (we) begin
      rvalid <= 1'b0;
    end 
    else begin 
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
  `elsif GF12
      logic gwmask;
      assign gwmask = &wmask;

      gf12lp_1rw_lg12_w32_bit inst_memory (
        .A(addr),
        .D(wdata),
        .CEN(1'b0),
        .CLK(clk_i),
        .Q(rdata),
        .WEN(~rst_ni ? wmask : 'hffff),
        .GWEN(~rst_ni ? gwmask : 1'b1),
        .EMA(3'b010),
        .EMAW(2'b01),
        .EMAS(1'b0),
        .RET1N(1'b1),
        .STOV(1'b0)
      );

  `else
      logic [3:0] sel;
      i_2to4_decoder two2four_dec (
        .in(addr[11:10]),
        .out(sel)
      );

      logic [3:0][31:0] rdata_out;
      logic [3:0][31:0] rdata_dummy;
      genvar i;
      generate
        for(i=0; i<4; i++) begin : iccm
          sky130_sram_4kbyte_1rw1r_32x1024_8 sky130_sram_4kb(
            // Port 0: RW
            .clk0(clk_i),
            .csb0(rst_ni || ~sel[i]),
            .web0(wen),
            .wmask0(wmask),
            .addr0(addr[9:0]),
            .din0(wdata),
            .dout0(rdata_dummy[i]),
            
            // Port 1: R
            .clk1(clk_i),
            .csb1(~rst_ni && sel[i]),
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

endmodule

`ifdef SKY130
  module i_2to4_decoder (
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
