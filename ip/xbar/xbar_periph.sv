
/* verilator lint_off LATCH */
module xbar_periph (
  input clk_i,
  input rst_ni,

  // Host interfaces
  input  tlul_pkg::tl_h2d_t tl_if_i, 
  output tlul_pkg::tl_d2h_t tl_if_o, 
  input  tlul_pkg::tl_h2d_t tl_lsu_i,
  output tlul_pkg::tl_d2h_t tl_lsu_o,

  input  tlul_pkg::tl_h2d_t tl_dm_sba_i,
  output tlul_pkg::tl_d2h_t tl_dm_sba_o,
  
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

  // DEBUG ROM
  output tlul_pkg::tl_h2d_t tl_debug_rom_o,
  input  tlul_pkg::tl_d2h_t tl_debug_rom_i
);

  import tlul_pkg::*;
  import xbar_pkg::*;
  
  always_comb begin
    if ((tl_if_i.a_address & ~(ADDR_MASK_ICCM)) == ADDR_SPACE_ICCM) begin
   assign   s1n_sm1_1[0] = tl_if_i;
   assign   tl_if_o      = sm1_s1n_1[0];
    end
  end

  tl_h2d_t tl_s1n_10_us_h2d ;
  tl_d2h_t tl_s1n_10_us_d2h ;

  tl_h2d_t tl_s1n_11_us_h2d ;
  tl_d2h_t tl_s1n_11_us_d2h ;

  tl_h2d_t tl_s1n_10_ds_h2d [13];
  tl_d2h_t tl_s1n_10_ds_d2h [13];

  tl_h2d_t tl_s1n_11_ds_h2d [13];
  tl_d2h_t tl_s1n_11_ds_d2h [13];

  // Create steering signal
  logic [3:0] dev_sel_s1n_10;
  logic [3:0] dev_sel_s1n_11;

  tlul_pkg::tl_h2d_t s1n_sm1_1[2];
  tlul_pkg::tl_d2h_t sm1_s1n_1[2];

  tlul_pkg::tl_h2d_t s1n_sm1_2[2];
  tlul_pkg::tl_d2h_t sm1_s1n_2[2];

  tlul_pkg::tl_h2d_t s1n_sm1_3[2];
  tlul_pkg::tl_d2h_t sm1_s1n_3[2];

  tlul_pkg::tl_h2d_t s1n_sm1_4[2];
  tlul_pkg::tl_d2h_t sm1_s1n_4[2];

  tlul_pkg::tl_h2d_t s1n_sm1_5[2];
  tlul_pkg::tl_d2h_t sm1_s1n_5[2];

  tlul_pkg::tl_h2d_t s1n_sm1_6[2];
  tlul_pkg::tl_d2h_t sm1_s1n_6[2];

  tlul_pkg::tl_h2d_t s1n_sm1_7[2];
  tlul_pkg::tl_d2h_t sm1_s1n_7[2];

  tlul_pkg::tl_h2d_t s1n_sm1_8[2];
  tlul_pkg::tl_d2h_t sm1_s1n_8[2];

  tlul_pkg::tl_h2d_t s1n_sm1_9[2];
  tlul_pkg::tl_d2h_t sm1_s1n_9[2];

  tlul_pkg::tl_h2d_t s1n_sm1_10[2];
  tlul_pkg::tl_d2h_t sm1_s1n_10[2];

  tlul_pkg::tl_h2d_t s1n_sm1_11[2];
  tlul_pkg::tl_d2h_t sm1_s1n_11[2];

  tlul_pkg::tl_h2d_t s1n_sm1_12[2];
  tlul_pkg::tl_d2h_t sm1_s1n_12[2];

  // ICCM
  assign s1n_sm1_1[1] = tl_s1n_11_ds_h2d[0];
  assign tl_s1n_11_ds_d2h[0] = sm1_s1n_1[1];

  // DCCM
  assign s1n_sm1_2[0] = tl_s1n_10_ds_h2d[1];
  assign s1n_sm1_2[1] = tl_s1n_11_ds_h2d[1];
  assign tl_s1n_10_ds_d2h[1] = sm1_s1n_2[0];
  assign tl_s1n_11_ds_d2h[1] = sm1_s1n_2[1];

  // GPIO
  assign s1n_sm1_3[0] = tl_s1n_10_ds_h2d[2];
  assign s1n_sm1_3[1] = tl_s1n_11_ds_h2d[2];
  assign tl_s1n_10_ds_d2h[2] = sm1_s1n_3[0];
  assign tl_s1n_11_ds_d2h[2] = sm1_s1n_3[1];

  // LDO1
  assign s1n_sm1_4[0] = tl_s1n_10_ds_h2d[3];
  assign s1n_sm1_4[1] = tl_s1n_11_ds_h2d[3];
  assign tl_s1n_10_ds_d2h[3] = sm1_s1n_4[0];
  assign tl_s1n_11_ds_d2h[3] = sm1_s1n_4[1];

  // LDO2
  assign s1n_sm1_5[0] = tl_s1n_10_ds_h2d[4];
  assign s1n_sm1_5[1] = tl_s1n_11_ds_h2d[4];
  assign tl_s1n_10_ds_d2h[4] = sm1_s1n_5[0];
  assign tl_s1n_11_ds_d2h[4] = sm1_s1n_5[1];

  // DCDC
  assign s1n_sm1_6[0] = tl_s1n_10_ds_h2d[5];
  assign s1n_sm1_6[1] = tl_s1n_11_ds_h2d[5];
  assign tl_s1n_10_ds_d2h[5] = sm1_s1n_6[0];
  assign tl_s1n_10_ds_d2h[5] = sm1_s1n_6[1];

  // PLL1
  assign s1n_sm1_7[0] = tl_s1n_10_ds_h2d[6];
  assign s1n_sm1_7[1] = tl_s1n_11_ds_h2d[6];
  assign tl_s1n_10_ds_d2h[6] = sm1_s1n_7[0];
  assign tl_s1n_11_ds_d2h[6] = sm1_s1n_7[1];

  // TSEN1
  assign s1n_sm1_8[0] = tl_s1n_10_ds_h2d[7];
  assign s1n_sm1_8[1] = tl_s1n_11_ds_h2d[7];
  assign tl_s1n_10_ds_d2h[8] = sm1_s1n_8[0];
  assign tl_s1n_11_ds_d2h[8] = sm1_s1n_8[1];

  // TSEN2
  assign s1n_sm1_9[0] = tl_s1n_10_ds_h2d[9];
  assign s1n_sm1_9[1] = tl_s1n_11_ds_h2d[9];
  assign tl_s1n_10_ds_d2h[9] = sm1_s1n_9[0];
  assign tl_s1n_11_ds_d2h[9] = sm1_s1n_9[1];

  // DAP
  assign s1n_sm1_10[0] = tl_s1n_10_ds_h2d[10];
  assign s1n_sm1_10[1] = tl_s1n_11_ds_h2d[10];
  assign tl_s1n_10_ds_d2h[10] = sm1_s1n_10[0];
  assign tl_s1n_11_ds_d2h[10] = sm1_s1n_10[1];

  // PLIC
  assign s1n_sm1_11[0] = tl_s1n_10_ds_h2d[9];
  assign s1n_sm1_11[1] = tl_s1n_11_ds_h2d[9];
  assign tl_s1n_10_ds_d2h[9] = sm1_s1n_11[0];
  assign tl_s1n_11_ds_d2h[9] = sm1_s1n_11[1];

  // DEBUG ROM
  assign s1n_sm1_12[0] = tl_s1n_10_ds_h2d[10];
  assign s1n_sm1_12[1] = tl_s1n_11_ds_h2d[10];
  assign tl_s1n_10_ds_d2h[10] = sm1_s1n_12[0];
  assign tl_s1n_11_ds_d2h[10] = sm1_s1n_12[1];

  assign tl_s1n_10_us_h2d = tl_lsu_i;
  assign tl_lsu_o         = tl_s1n_10_us_d2h;

  assign tl_s1n_11_us_h2d = tl_dm_sba_i;
  assign tl_dm_sba_o      = tl_s1n_11_us_d2h;

  always_comb begin
    // default steering to generate error response if address is not within the range
    dev_sel_s1n_10 = 4'd12;

    if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DCCM)) == ADDR_SPACE_DCCM) begin
      dev_sel_s1n_10 = 4'd1;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_GPIO)) == ADDR_SPACE_GPIO) begin
      dev_sel_s1n_10 = 4'd2;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_LDO1)) == ADDR_SPACE_LDO1) begin
      dev_sel_s1n_10 = 4'd3;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_LDO2)) == ADDR_SPACE_LDO2) begin
      dev_sel_s1n_10 = 4'd4;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DCDC)) == ADDR_SPACE_DCDC) begin
      dev_sel_s1n_10 = 4'd5;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_PLL1)) == ADDR_SPACE_PLL1) begin
      dev_sel_s1n_10 = 4'd6;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_TSEN1)) == ADDR_SPACE_TSEN1) begin
      dev_sel_s1n_10 = 4'd7;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_TSEN2)) == ADDR_SPACE_TSEN2) begin
      dev_sel_s1n_10 = 4'd8;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DAP)) == ADDR_SPACE_DAP) begin
      dev_sel_s1n_10 = 4'd9;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_PLIC)) == ADDR_SPACE_PLIC) begin
      dev_sel_s1n_10 = 4'd10;
    
    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DEBUG_ROM)) == ADDR_SPACE_DEBUG_ROM) begin
      dev_sel_s1n_10 = 4'd11;
    end    
  end

  always_comb begin
    // default steering to generate error response if address is not within the range
    dev_sel_s1n_11 = 4'd12;

    if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_ICCM)) == ADDR_SPACE_ICCM) begin
      dev_sel_s1n_11 = 4'd0;
    
    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DCCM)) == ADDR_SPACE_DCCM) begin
      dev_sel_s1n_11 = 4'd1;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_GPIO)) == ADDR_SPACE_GPIO) begin
      dev_sel_s1n_11 = 4'd2;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_LDO1)) == ADDR_SPACE_LDO1) begin
      dev_sel_s1n_11 = 4'd3;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_LDO2)) == ADDR_SPACE_LDO2) begin
      dev_sel_s1n_11 = 4'd4;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DCDC)) == ADDR_SPACE_DCDC) begin
      dev_sel_s1n_11 = 4'd5;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_PLL1)) == ADDR_SPACE_PLL1) begin
      dev_sel_s1n_11 = 4'd6;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_TSEN1)) == ADDR_SPACE_TSEN1) begin
      dev_sel_s1n_11 = 4'd7;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_TSEN2)) == ADDR_SPACE_TSEN2) begin
      dev_sel_s1n_11 = 4'd8;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DAP)) == ADDR_SPACE_DAP) begin
      dev_sel_s1n_11 = 4'd9;

    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_PLIC)) == ADDR_SPACE_PLIC) begin
      dev_sel_s1n_11 = 4'd10;
    
    end else if ((tl_s1n_10_us_h2d.a_address & ~(ADDR_MASK_DEBUG_ROM)) == ADDR_SPACE_DEBUG_ROM) begin
      dev_sel_s1n_11 = 4'd11;
    end    
  end

  // Instantiation phase
  tlul_socket_1n #(
    .HReqDepth (4'h0),
    .HRspDepth (4'h0),
    .DReqDepth (52'h0),
    .DRspDepth (52'h0),
    .N         (13)
  ) u_s1n_10 (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (tl_s1n_10_us_h2d),
    .tl_h_o       (tl_s1n_10_us_d2h),
    .tl_d_o       (tl_s1n_10_ds_h2d),
    .tl_d_i       (tl_s1n_10_ds_d2h),
    .dev_select_i (dev_sel_s1n_10)
  );

  tlul_socket_1n #(
    .HReqDepth (4'h0),
    .HRspDepth (4'h0),
    .DReqDepth (52'h0),
    .DRspDepth (52'h0),
    .N         (13)
  ) u_s1n_11 (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (tl_s1n_11_us_h2d),
    .tl_h_o       (tl_s1n_11_us_d2h),
    .tl_d_o       (tl_s1n_11_ds_h2d),
    .tl_d_i       (tl_s1n_11_ds_d2h),
    .dev_select_i (dev_sel_s1n_11)
  );


// Devices
  tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) ICCM (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_1),
    .tl_h_o       (sm1_s1n_1),
    .tl_d_o       (tl_iccm_o),
    .tl_d_i       (tl_iccm_i)
  );

  tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) DCCM (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_2),
    .tl_h_o       (sm1_s1n_2),
    .tl_d_o       (tl_dccm_o),
    .tl_d_i       (tl_dccm_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) GPIO (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_3),
    .tl_h_o       (sm1_s1n_3),
    .tl_d_o       (tl_gpio_o),
    .tl_d_i       (tl_gpio_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) LDO1 (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_4),
    .tl_h_o       (sm1_s1n_4),
    .tl_d_o       (tl_ldo1_o),
    .tl_d_i       (tl_ldo1_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) LDO2 (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_5),
    .tl_h_o       (sm1_s1n_5),
    .tl_d_o       (tl_ldo2_o),
    .tl_d_i       (tl_ldo2_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) DCDC (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_6),
    .tl_h_o       (sm1_s1n_6),
    .tl_d_o       (tl_dcdc_o),
    .tl_d_i       (tl_dcdc_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) PLL1 (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_7),
    .tl_h_o       (sm1_s1n_7),
    .tl_d_o       (tl_pll1_o),
    .tl_d_i       (tl_pll1_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) TSEN1 (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_8),
    .tl_h_o       (sm1_s1n_8),
    .tl_d_o       (tl_tsen1_o),
    .tl_d_i       (tl_tsen2_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) TSEN2 (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_9),
    .tl_h_o       (sm1_s1n_9),
    .tl_d_o       (tl_tsen2_o),
    .tl_d_i       (tl_tsen2_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) DAP (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_10),
    .tl_h_o       (sm1_s1n_10),
    .tl_d_o       (tl_dap_o),
    .tl_d_i       (tl_dap_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) PLIC (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_11),
    .tl_h_o       (sm1_s1n_11),
    .tl_d_o       (tl_plic_o),
    .tl_d_i       (tl_plic_i)
  );

    tlul_socket_m1 #(
    .HReqDepth (8'h0),
    .HRspDepth (8'h0),
    .DReqDepth (4'h0),
    .DRspDepth (4'h0),
    .M         (2)
  ) DEBUG_ROM (
    .clk_i        (clk_i),
    .rst_ni       (rst_ni),
    .tl_h_i       (s1n_sm1_12),
    .tl_h_o       (sm1_s1n_12),
    .tl_d_o       (tl_debug_rom_o),
    .tl_d_i       (tl_debug_rom_i)
  );

endmodule
/* verilator lint_on LATCH */

