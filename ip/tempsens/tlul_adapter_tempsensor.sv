/* verilator lint_off CASEINCOMPLETE */
`define SIMULATION

module tlul_adapter_tempsensor import tlul_pkg::*; #(
  parameter  bit EnableDataIntgGen = 1'b0,
  parameter  int RegAw = 12,
  parameter  int RegDw = 32, // Shall be matched with TL_DW
  localparam int RegBw = RegDw/8,
  parameter int DataIntgWidth = 7,
  parameter int DataMaxWidth = 57
) (
  input clk_i,
  input rst_ni,

  // TL-UL interface
  input  tl_h2d_t tl_i,
  output tl_d2h_t tl_o,

  // Register interface
  output logic             re_o,
  output logic             we_o,
  output logic [RegAw-1:0] addr_o,
  output logic [RegDw-1:0] wdata_o, // not using
  output logic [RegBw-1:0] be_o,
  input        [RegDw-1:0] rdata_i, // not using 
  input                    error_i,
  
  input                    CLK_REF,
  output logic             CLK_OUT

);

  localparam int IW  = $bits(tl_i.a_source);
  localparam int SZW = $bits(tl_i.a_size);

  logic outstanding;    // Indicates current request is pending
  logic a_ack, d_ack;

  logic [RegDw-1:0] rdata;
  logic             error, err_internal;

  logic addr_align_err;     // Size and alignment
  //logic malformed_meta_err; // User signal format error or unsupported
  logic tl_err;             // Common TL-UL error checker

  logic [IW-1:0]  reqid;
  logic [SZW-1:0] reqsz;
  tl_d_m_op       rspop;

  logic rd_req, wr_req;
  
  logic         RESET_REGn        ; // 0x04
  logic [3:0]   SEL_CONV_TIME_REG ; // 0x08
  logic         en_REG            ; // 0x0C
  logic [23:0]  DOUT_REG1         ; // 0x10
  logic         DONE_REG1         ; // 0x14
  logic [23:0]  DOUT_REG2         ; // 0x18
  logic         DONE_REG2         ; // 0x1C
  logic [23:0]  DOUT_REG3         ; // 0x20
  logic         DONE_REG3         ; // 0x24
  logic [23:0]  DOUT_REG4         ; // 0x28
  logic         DONE_REG4         ; // 0x2C
  logic [ 1:0]  CLK_SEL_REG       ;

  logic [23:0]  DOUT1             ;
  logic         DONE1             ;
  logic [23:0]  DOUT2             ;
  logic         DONE2             ;
  logic [23:0]  DOUT3             ;
  logic         DONE3             ;
  logic [23:0]  DOUT4             ;
  logic         DONE4             ;

  logic         CLK_LC1           ;
  logic         CLK_LC2           ;
  logic         CLK_LC3           ;
  logic         CLK_LC4           ;
          
  assign a_ack   = tl_i.a_valid & tl_o.a_ready;
  assign d_ack   = tl_o.d_valid & tl_i.d_ready;

  // Request signal
  assign wr_req  = a_ack & ((tl_i.a_opcode == PutFullData) | (tl_i.a_opcode == PutPartialData));
  assign rd_req  = a_ack & (tl_i.a_opcode == Get);

  assign we_o    = wr_req & ~err_internal;
  assign re_o    = rd_req & ~err_internal;
  assign wdata_o = tl_i.a_data;
  assign be_o    = tl_i.a_mask;

  if (RegAw <= 2) begin : gen_only_one_reg
    assign addr_o  = '0;
  end else begin : gen_more_regs
    assign addr_o  = {tl_i.a_address[RegAw-1:2], 2'b00}; // generate always word-align
  end
 
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      RESET_REGn        <= 1'b1;
      SEL_CONV_TIME_REG <= 4'b0;
      en_REG            <= 1'b0;
      CLK_SEL_REG       <= 1'b0;
    end else begin
      DOUT_REG1    <= DOUT1;
      DONE_REG1    <= DONE1;
      DOUT_REG2    <= DOUT2;
      DONE_REG2    <= DONE2;
      DOUT_REG3    <= DOUT3;
      DONE_REG3    <= DONE3;
      DOUT_REG4    <= DOUT4;
      DONE_REG4    <= DONE4;
      if (wr_req)
        case (addr_o)
          8'h04 : RESET_REGn        <= tl_i.a_data;
          8'h08 : SEL_CONV_TIME_REG <= tl_i.a_data;
          8'h0C : en_REG            <= tl_i.a_data;
          8'h10 : CLK_SEL_REG       <= tl_i.a_data;
        endcase
      end 
  end

  tempsenseInst_error_inv6_head9 u_tempsenseInst1 (
    .CLK_REF       (CLK_REF),
    .RESET_COUNTERn(RESET_REGn),
    .SEL_CONV_TIME (SEL_CONV_TIME_REG),
    .en            (en_REG),
    .DOUT          (DOUT1),
    .DONE          (DONE1),
    .out           (),
    .outb          (),
    .lc_out        (CLK_LC1)
  );
  
  tempsenseInst_error_inv8_head3 u_tempsenseInst2 (
    .CLK_REF       (CLK_REF),
    .RESET_COUNTERn(RESET_REGn),
    .SEL_CONV_TIME (SEL_CONV_TIME_REG),
    .en            (en_REG),
    .DOUT          (DOUT2),
    .DONE          (DONE2),
    .out           (),
    .outb          (),
    .lc_out        (CLK_LC2)
  );
  
  tempsenseInst_error_inv8_head5 u_tempsenseInst3 (
    .CLK_REF       (CLK_REF),
    .RESET_COUNTERn(RESET_REGn),
    .SEL_CONV_TIME (SEL_CONV_TIME_REG),
    .en            (en_REG),
    .DOUT          (DOUT3),
    .DONE          (DONE3),
    .out           (),
    .outb          (),
    .lc_out        (CLK_LC3)
  );
  
  tempsenseInst_error_inv8_head7 u_tempsenseInst4 (
    .CLK_REF       (CLK_REF),
    .RESET_COUNTERn(RESET_REGn),
    .SEL_CONV_TIME (SEL_CONV_TIME_REG),
    .en            (en_REG),
    .DOUT          (DOUT4),
    .DONE          (DONE4),
    .out           (),
    .outb          (),
    .lc_out        (CLK_LC4)
  );

  always_comb begin
    case (CLK_SEL_REG) 
      2'b00: CLK_OUT = CLK_LC1;
      2'b01: CLK_OUT = CLK_LC2;
      2'b10: CLK_OUT = CLK_LC3;
      2'b11: CLK_OUT = CLK_LC4;
    endcase
  end
  
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)    outstanding <= 1'b0;
    else if (a_ack) outstanding <= 1'b1;
    else if (d_ack) outstanding <= 1'b0;
  end

// Line 122 to 124 commented - if uncommented then it gives error by setting rdata to FFFFFFFF
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      rdata  <= '0;
      error <= 1'b0;
    end else begin
      error <= 1'b0; // <= error_i | err_internal;
      if (a_ack)
        case(addr_o)
          8'h04: rdata <= RESET_REGn;
          8'h08: rdata <= SEL_CONV_TIME_REG;
          8'h0C: rdata <= en_REG;
          8'h10: rdata <= DOUT_REG1;
          8'h14: rdata <= DONE_REG1;
          8'h18: rdata <= DOUT_REG2;
          8'h1C: rdata <= DONE_REG2;
          8'h20: rdata <= DOUT_REG3;
          8'h24: rdata <= DONE_REG3;
          8'h28: rdata <= DOUT_REG4;
          8'h2C: rdata <= DONE_REG4;
        endcase
    end
  end
  
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      reqid <= '0;
      reqsz <= '0;
      rspop <= AccessAck;
    end else if (a_ack) begin
      reqid <= tl_i.a_source;
      reqsz <= tl_i.a_size;
      // Return AccessAckData regardless of error
      rspop <= (rd_req) ? AccessAckData : AccessAck ;
    end
  end

  logic [DataIntgWidth-1:0] data_intg;
  if (EnableDataIntgGen) begin : gen_data_intg
    logic [DataMaxWidth-1:0] unused_data;

    prim_secded_64_57_enc u_data_gen (
      .in(DataMaxWidth'(rdata)),
      .out({data_intg, unused_data})
    );
  end else begin : gen_tieoff_data_intg
    assign data_intg = '0;
  end

  assign tl_o = '{
    a_ready:  ~outstanding,
    d_valid:  outstanding,
    d_opcode: rspop,
    d_param:  '0,
    d_size:   reqsz,
    d_source: reqid,
    d_sink:   '0,
    d_data:   rdata,
   // d_user:   '{default: '0, data_intg: data_intg},
    d_error:  error
  };

  ////////////////////
  // Error Handling //
  ////////////////////
  assign err_internal = 1'b0;

 //addr_align_err | malformed_meta_err | tl_err ;

  // Don't allow unsupported values.
  //added assign malformed_meta_err = tl_a_user_chk(tl_i.a_user);

  // addr_align_err
  //    Raised if addr isn't aligned with the size
  //    Read size error is checked in tlul_assert.sv
  //    Here is it added due to the limitation of register interface.
  always_comb begin
    if (wr_req) begin
      // Only word-align is accepted based on comportability spec
      addr_align_err = |tl_i.a_address[1:0];
    end else begin
      // No request
      addr_align_err = 1'b0;
    end
  end

  // tl_err : separate checker
  tlul_err u_err (
    .clk_i,
    .rst_ni,
    .tl_i,
    .err_o (tl_err)
  );

//  `ASSERT_INIT(MatchedWidthAssert, RegDw == top_pkg::TL_DW)
endmodule

`ifdef SIMULATION
module tempsenseInst_error_inv6_head9 (
  CLK_REF,
  RESET_COUNTERn,
  SEL_CONV_TIME,
  en,
  DOUT,
  DONE,
  out,
  outb,
  lc_out);
   input CLK_REF;
   input RESET_COUNTERn;
   input [3:0] SEL_CONV_TIME;
   input en;
   output [23:0] DOUT;
   output DONE;
   output out;
   output outb;
   output lc_out;
endmodule

module tempsenseInst_error_inv8_head3 (
  CLK_REF,
  RESET_COUNTERn,
  SEL_CONV_TIME,
  en,
  DOUT,
  DONE,
  out,
  outb,
  lc_out);
   input CLK_REF;
   input RESET_COUNTERn;
   input [3:0] SEL_CONV_TIME;
   input en;
   output [23:0] DOUT;
   output DONE;
   output out;
   output outb;
   output lc_out;
endmodule

module tempsenseInst_error_inv8_head5 (
  CLK_REF,
  RESET_COUNTERn,
  SEL_CONV_TIME,
  en,
  DOUT,
  DONE,
  out,
  outb,
  lc_out);
   input CLK_REF;
   input RESET_COUNTERn;
   input [3:0] SEL_CONV_TIME;
   input en;
   output [23:0] DOUT;
   output DONE;
   output out;
   output outb;
   output lc_out;
endmodule

module tempsenseInst_error_inv8_head7 (
  CLK_REF,
  RESET_COUNTERn,
  SEL_CONV_TIME,
  en,
  DOUT,
  DONE,
  out,
  outb,
  lc_out);
   input CLK_REF;
   input RESET_COUNTERn;
   input [3:0] SEL_CONV_TIME;
   input en;
   output [23:0] DOUT;
   output DONE;
   output out;
   output outb;
   output lc_out;
endmodule
`endif
/* verilator lint_on CASEINCOMPLETE */
