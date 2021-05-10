
/* verilator lint_off LATCH */
module xbar_periph (
  input clk_i,
  input rst_ni,

  // Host interfaces
  input  tlul_pkg::tl_h2d_t tl_if_i, 
  output tlul_pkg::tl_d2h_t tl_if_o, 
  input  tlul_pkg::tl_h2d_t tl_lsu_i,
  output tlul_pkg::tl_d2h_t tl_lsu_o,

  // Device interfaces
  output tlul_pkg::tl_h2d_t tl_iccm_o,
  input  tlul_pkg::tl_d2h_t tl_iccm_i,
  output tlul_pkg::tl_h2d_t tl_dccm_o,
  input  tlul_pkg::tl_d2h_t tl_dccm_i,
  output tlul_pkg::tl_h2d_t tl_gpio_o,
  input  tlul_pkg::tl_d2h_t tl_gpio_i,
  output tlul_pkg::tl_h2d_t tl_ldo1_o,
  input  tlul_pkg::tl_d2h_t tl_ldo1_i,
  output tlul_pkg::tl_h2d_t tl_ldo2_o,
  input  tlul_pkg::tl_d2h_t tl_ldo2_i,
  output tlul_pkg::tl_h2d_t tl_dcdc_o,
  input  tlul_pkg::tl_d2h_t tl_dcdc_i,
  output tlul_pkg::tl_h2d_t tl_pll1_o,
  input  tlul_pkg::tl_d2h_t tl_pll1_i,
  output tlul_pkg::tl_h2d_t tl_tsen1_o,
  input  tlul_pkg::tl_d2h_t tl_tsen1_i,
  output tlul_pkg::tl_h2d_t tl_tsen2_o,
  input  tlul_pkg::tl_d2h_t tl_tsen2_i,
  output tlul_pkg::tl_h2d_t tl_dap_o,
  input  tlul_pkg::tl_d2h_t tl_dap_i,
  output tlul_pkg::tl_h2d_t tl_plic_o,
  input  tlul_pkg::tl_d2h_t tl_plic_i,
  output tlul_pkg::tl_h2d_t tl_uart_o,
  input  tlul_pkg::tl_d2h_t tl_uart_i
);

  import tlul_pkg::*;
  import xbar_pkg::*;
  
  always_comb begin
    if ((tl_if_i.a_address & ~(ADDR_MASK_ICCM)) == ADDR_SPACE_ICCM) begin
   assign   tl_iccm_o = tl_if_i;
   assign   tl_if_o   = tl_iccm_i;
    end
  end

  tl_h2d_t tl_s1n_10_us_h2d ;
  tl_d2h_t tl_s1n_10_us_d2h ;

  tl_h2d_t tl_s1n_10_ds_h2d [11];
  tl_d2h_t tl_s1n_10_ds_d2h [11];

  // Create steering signal
  logic [3:0] dev_sel_s1n_10;


  assign tl_dccm_o = tl_s1n_10_ds_h2d[0];
  assign tl_s1n_10_ds_d2h[0] = tl_dccm_i;

  assign tl_gpio_o = tl_s1n_10_ds_h2d[1];
  assign tl_s1n_10_ds_d2h[1] = tl_gpio_i;

  assign tl_ldo1_o = tl_s1n_10_ds_h2d[2];
  assign tl_s1n_10_ds_d2h[2] = tl_ldo1_i;

  assign tl_ldo2_o = tl_s1n_10_ds_h2d[3];
  assign tl_s1n_10_ds_d2h[3] = tl_ldo2_i;

  assign tl_dcdc_o = tl_s1n_10_ds_h2d[4];
  assign tl_s1n_10_ds_d2h[4] = tl_dcdc_i;

  assign tl_pll1_o = tl_s1n_10_ds_h2d[5];
  assign tl_s1n_10_ds_d2h[5] = tl_pll1_i;

  assign tl_tsen1_o = tl_s1n_10_ds_h2d[6];
  assign tl_s1n_10_ds_d2h[6] = tl_tsen1_i;

  assign tl_tsen2_o = tl_s1n_10_ds_h2d[7];
  assign tl_s1n_10_ds_d2h[7] = tl_tsen2_i;

  assign tl_dap_o = tl_s1n_10_ds_h2d[8];
  assign tl_s1n_10_ds_d2h[8] = tl_dap_i;

  assign tl_plic_o = tl_s1n_10_ds_h2d[9];
  assign tl_s1n_10_ds_d2h[9] = tl_plic_i;

  assign tl_uart_o = tl_s1n_10_ds_h2d[10];
  assign tl_s1n_10_ds_d2h[10] = tl_uart_i;

  assign tl_s1n_10_us_h2d = tl_lsu_i;
  assign tl_lsu_o         = tl_s1n_10_us_d2h;

  always_comb begin
    // default steering to generate error response if address is not within the range
    dev_sel_s1n_10 = 4'd10;

    if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DCCM)) == ADDR_SPACE_DCCM) begin
      dev_sel_s1n_10 = 4'd0;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_GPIO)) == ADDR_SPACE_GPIO) begin
      dev_sel_s1n_10 = 4'd1;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_LDO1)) == ADDR_SPACE_LDO1) begin
      dev_sel_s1n_10 = 4'd2;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_LDO2)) == ADDR_SPACE_LDO2) begin
      dev_sel_s1n_10 = 4'd3;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DCDC)) == ADDR_SPACE_DCDC) begin
      dev_sel_s1n_10 = 4'd4;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_PLL1)) == ADDR_SPACE_PLL1) begin
      dev_sel_s1n_10 = 4'd5;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_TSEN1)) == ADDR_SPACE_TSEN1) begin
      dev_sel_s1n_10 = 4'd6;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_TSEN2)) == ADDR_SPACE_TSEN2) begin
      dev_sel_s1n_10 = 4'd7;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DAP)) == ADDR_SPACE_DAP) begin
      dev_sel_s1n_10 = 4'd8;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_PLIC)) == ADDR_SPACE_PLIC) begin
      dev_sel_s1n_10 = 4'd9;

   end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_UART)) == ADDR_SPACE_UART) begin
      dev_sel_s1n_10 = 4'd10;
    end
  end

  // Instantiation phase
  tlul_socket_1n #(
    .HReqDepth (4'h0),
    .HRspDepth (4'h0),
    .DReqDepth (52'h0),
    .DRspDepth (52'h0),
    .N         (11)
  ) u_s1n_10 (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (tl_s1n_10_us_h2d),
    .tl_h_o       (tl_s1n_10_us_d2h),
    .tl_d_o       (tl_s1n_10_ds_h2d),
    .tl_d_i       (tl_s1n_10_ds_d2h),
    .dev_select_i (dev_sel_s1n_10)
  );

endmodule
/* verilator lint_on LATCH */

