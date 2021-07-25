
module inst_mem_tlul (
    input                       clk_i ,   
    input                       rst_ni,   
    input   [31:0]              iccm_cntrl_data,
    input   [11:0]              iccm_cntrl_addr,
    input                       iccm_cntrl_reset,
    input   tlul_pkg::tl_h2d_t  xbar_to_iccm,   
    output  tlul_pkg::tl_d2h_t  iccm_to_xbar   
);

  logic [31:0] inst_buffer;
  logic [11:0] tlul_addr;
  logic [31:0] tlul_data;
  logic        req_i;
  logic        instr_valid;

  instr_mem_top iccm (
    .clk_i      (clk_i),
    .rst_ni     (rst_ni),
    .req        (req_i),
    .addr       (rst_ni? tlul_addr : iccm_cntrl_addr),
    .wdata      (iccm_cntrl_data),
    .rdata      (tlul_data),
    .rvalid     (instr_valid),
    `ifdef DFFRAM
      .wmask      (4'b0),
    `elsif GF12
      .wmask      (32'b0),
    `else
      .wen        (iccm_cntrl_reset),
      .wmask      (4'b1111),
    `endif
    .we         (1'b0)
  );

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
    .tl_i      (xbar_to_iccm),
    .tl_o      (iccm_to_xbar), 
    .req_o     (req_i),
    .gnt_i     (1'b1),
    .we_o      (),
    .addr_o    (tlul_addr),
    .wdata_o   (),
    .wmask_o   (),
    .rdata_i   (rst_ni ? inst_buffer: '0),
    .rvalid_i  (instr_valid),
    .rerror_i  (2'b0)
  );

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if(!rst_ni) begin
      inst_buffer <= 'b0;
    end
    else begin  
      inst_buffer <= tlul_data;
    end
  end

endmodule
