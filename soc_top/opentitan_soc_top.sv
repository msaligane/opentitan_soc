module opentitan_soc_top(
  input logic clk_i,
  input logic rst_ni,

  input  logic [31:0] gpio_i,
  output logic [31:0] gpio_o,

  output              uart_tx,
  input               uart_rx,
  input uart_rx_i
);

  logic system_rst_ni;
  logic RESET;
  assign RESET = ~rst_ni;

  wire [31:0] gpio_in;
  wire [31:0] gpio_out;

  assign gpio_in = gpio_i;
  assign gpio_o = gpio_out; 
        
  tlul_pkg::tl_h2d_t ifu_to_xbar; 
  tlul_pkg::tl_d2h_t xbar_to_ifu;

  tlul_pkg::tl_h2d_t xbar_to_iccm;
  tlul_pkg::tl_d2h_t iccm_to_xbar;

  tlul_pkg::tl_h2d_t lsu_to_xbar;
  tlul_pkg::tl_d2h_t xbar_to_lsu;

  tlul_pkg::tl_h2d_t xbar_to_dccm;
  tlul_pkg::tl_d2h_t dccm_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_gpio;
  tlul_pkg::tl_d2h_t gpio_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_ldo1;
  tlul_pkg::tl_d2h_t ldo1_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_ldo2;
  tlul_pkg::tl_d2h_t ldo2_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_dcdc;
  tlul_pkg::tl_d2h_t dcdc_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_pll1;
  tlul_pkg::tl_d2h_t pll1_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_tsen1;
  tlul_pkg::tl_d2h_t tsen1_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_tsen2;
  tlul_pkg::tl_d2h_t tsen2_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_dap;
  tlul_pkg::tl_d2h_t dap_to_xbar;

  tlul_pkg::tl_h2d_t plic_req;
  tlul_pkg::tl_d2h_t plic_resp;

  tlul_pkg::tl_h2d_t xbar_to_uart;
  tlul_pkg::tl_d2h_t uart_to_xbar;


  // interrupt vector
  logic [31:0] intr_vector;  // size depend on number of interrupts 
                             // increses on adding peripherals 
// Interrupt source list 
  logic [31:0] intr_gpio;
  logic        intr_uart0_tx_watermark;
  logic        intr_uart0_rx_watermark;
  logic        intr_uart0_tx_empty;
  logic        intr_uart0_rx_overflow;
  logic        intr_uart0_rx_frame_err;
  logic        intr_uart0_rx_break_err;
  logic        intr_uart0_rx_timeout;
  logic        intr_uart0_rx_parity_err;
  logic        intr_req;

  assign intr_vector = {  
      intr_gpio,
      intr_uart0_rx_parity_err,
      intr_uart0_rx_timeout,
      intr_uart0_rx_break_err,
      intr_uart0_rx_frame_err,
      intr_uart0_rx_overflow,
      intr_uart0_tx_empty,
      intr_uart0_rx_watermark,
      intr_uart0_tx_watermark,
      1'b0
  };
  logic [31:0] gpio_intr;

  logic       rx_dv_i;
  logic [7:0] rx_byte_i;
  
  logic instr_valid;
  logic [11:0] tlul_addr;
  logic req_i;
  logic [31:0] tlul_data;

  logic iccm_cntrl_reset;
  logic [13:0] iccm_cntrl_addr;
  logic [31:0] iccm_cntrl_data;
  logic iccm_cntrl_we;
  
  opentitan_tlul_wrapper
  //  #(
  //     .PMPEnable        (1'b0),
  //     .PMPGranularity   (0), 
  //     .PMPNumRegions    (0), 
  //     .MHPMCounterNum   (0), 
  //     .MHPMCounterWidth (40), 
  //     .RV32E            (1'b0), 
  //     .RV32M            (ibex_pkg::RV32MFast), 
  //     .RV32B            (ibex_pkg::RV32BNone), 
  //     .RegFile          (ibex_pkg::RegFileFF), 
  //     .BranchTargetALU  (1'b0), 
  //     .WritebackStage   (1'b1), 
  //     .ICache           (1'b0), 
  //     .ICacheECC        (1'b0), 
  //     .BranchPredictor  (1'b0), 
  //     .DbgTriggerEn     (1'b1), 
  //     .DbgHwBreakNum    (2), 
  //     .Securebrq        (1'b0),
  //     .DmHaltAddr       (), 
  //     .DmExceptionAddr  () 
  // )
   u_top (
      .clk_i  (clk_i),
      .rst_ni (rst_ni),
      .ram_cfg_i (1'b1),
      .scan_rst_ni (),
      .crash_dump_o (),

      // instruction memory interface 
      .tl_i_i (xbar_to_ifu),
      .tl_i_o (ifu_to_xbar),

      // data memory interface 
      .tl_d_i (xbar_to_lsu),
      .tl_d_o (lsu_to_xbar),

      .test_en_i   (1'b1),     // enable all clock gates for testing

      .hart_id_i   (32'b0), 
      .boot_addr_i (32'h20000000),

      // Interrupt inputs
      .irq_software_i (1'b0),
      .irq_timer_i    (intr_timer),
      .irq_external_i (intr_req),
      .irq_fast_i     (15'b0),
      .irq_nm_i       (1'b0),       // non-maskeable interrupt

      // CPU Control Signals
      .fetch_enable_i (1'b1),
      .alert_minor_o  (),
      .alert_major_o  (),
      .core_sleep_o   ()
  );

  //peripheral xbar
  xbar_periph periph_switch (
    .clk_i     (clk_i),
    .rst_ni    (rst_ni),

    /* Host interfaces */
    .tl_if_i   (ifu_to_xbar), 
    .tl_if_o   (xbar_to_ifu), 
    .tl_lsu_i  (lsu_to_xbar),
    .tl_lsu_o  (xbar_to_lsu),

    /* Device interfaces */
  .tl_iccm_o (xbar_to_iccm),
  .tl_iccm_i (iccm_to_xbar),
  .tl_dccm_o (xbar_to_dccm),
  .tl_dccm_i (dccm_to_xbar),

    // GPIOs
    .tl_gpio_o  (xbar_to_gpio),
    .tl_gpio_i  (gpio_to_xbar),

    // LDO 1
    .tl_ldo1_o  (),
    .tl_ldo1_i  (),

    // LDO 2
    .tl_ldo2_o  (),
    .tl_ldo2_i  (),

    // DCDC
    .tl_dcdc_o  (),
    .tl_dcdc_i  (),

    // PLL 1
    .tl_pll1_o  (),
    .tl_pll1_i  (),

    // Temp. Sensor 1
    .tl_tsen1_o  (xbar_to_tsen1),
    .tl_tsen1_i  (tsen1_to_xbar),

    // Temp. Sensor 2
    .tl_tsen2_o  (),
    .tl_tsen2_i  (),
  
    // DAP
    .tl_dap_o         (),
    .tl_dap_i         (),

    // PLIC
    .tl_plic_o  (plic_req),
    .tl_plic_i  (plic_resp),

   //UART
   .tl_uart_o         (xbar_to_uart),
   .tl_uart_i         (uart_to_xbar)
  );

  //GPIO module
  // gpio gpio_32 (
  //   .clk_i         (clk_i),
  //   .rst_ni        (rst_ni),

  //   // Below Regster interface can be changed
  //   .tl_i          (xbar_to_gpio),
  //   .tl_o          (gpio_to_xbar),
  //   .cio_gpio_i    (gpio_in),
  //   .cio_gpio_o    (gpio_out),
  //   .cio_gpio_en_o (),
  //   .intr_gpio_o   (intr_gpio )  
  // );

iccm_controller u_dut(
	.clk_i       (clk_i),
	.rst_ni      (RESET),
	.rx_dv_i     (rx_dv_i),
	.rx_byte_i   (rx_byte_i),
	.we_o        (iccm_cntrl_we),
	.addr_o      (iccm_cntrl_addr),
	.wdata_o     (iccm_cntrl_data),
	.reset_o     (iccm_cntrl_reset)
);

 uart_receiver programmer (
 .i_Clock       (clk_i),
 .rst_ni        (RESET),
 .i_Rx_Serial   (uart_rx_i),
 .CLKS_PER_BIT  (16'd182),
 .o_Rx_DV       (rx_dv_i),
 .o_Rx_Byte     (rx_byte_i)
 );

  instr_mem_tlul iccm (
    .clk_i    (clk_i),
    .rst_ni   (rst_ni),

    // tl-ul insterface
    .tl_d_i   (xbar_to_iccm),
    .tl_d_o   (iccm_to_xbar)
      );

  data_mem_tlul dccm(
    .clk_i    (clk_i),
    .rst_ni   (rst_ni),
  
    // tl-ul insterface
    .tl_d_i   (xbar_to_dccm),
    .tl_d_o   (dccm_to_xbar)
  );

rstmgr reset_manager(
  .clk_i(clk_i),
  .rst_ni(rst_ni),
  .iccm_rst_i(iccm_cntrl_reset),
  .ndmreset (dbg_rst),
  .sys_rst_ni(system_rst_ni)
);

  rv_plic intr_controller (
    .clk_i      (clk_i),
    .rst_ni     (rst_ni),

    // Bus Interface (device)
    .tl_i       (plic_req),
    .tl_o       (plic_resp),

    // Interrupt Sources
    .intr_src_i (intr_vector),

    // Interrupt notification to targets
    .irq_o      (intr_req),
    .irq_id_o   (),

    .msip_o     ()
  );
//tlul_adapter_tempsensor u_tempsense( 
 //  .clk_i				   (clk_i),
 //  .rst_ni       		           (rst_ni),
  
//   .tl_i					   (xbar_to_tsen1),
//   .tl_o                    (tsen1_to_xbar),
  
//   .re_o   				   (re_o),
//   .we_o					   (we_o),
//   .addr_o				   (addr_o),
//   .wdata_o     			   (wdata_o),
//   .be_o    				   (be_o),
//   .rdata_i				   (rdata_i),
//   .error_i      		   (error_i),
//   .CLK_REF				   (CLK_REF),
//   .CLK_LC				   (CLK_LC)
// );

uart u_uart0(
  .clk_i                   (clk_i             ),
  .rst_ni                  (rst_ni     ),
  // Bus Interface
  .tl_i                    (xbar_to_uart      ),
  .tl_o                    (uart_to_xbar      ),

  // Generic IO
  .cio_rx_i                (uart_rx           ),
  .cio_tx_o                (uart_tx           ),
  .cio_tx_en_o             (                  ),

  // Interrupts
  .intr_tx_watermark_o     (intr_uart0_tx_watermark ),
  .intr_rx_watermark_o     (intr_uart0_rx_watermark ),
  .intr_tx_empty_o         (intr_uart0_tx_empty     ),
  .intr_rx_overflow_o      (intr_uart0_rx_overflow  ),
  .intr_rx_frame_err_o     (intr_uart0_rx_frame_err ),
  .intr_rx_break_err_o     (intr_uart0_rx_break_err ),
  .intr_rx_timeout_o       (intr_uart0_rx_timeout   ),
  .intr_rx_parity_err_o    (intr_uart0_rx_parity_err) 
);


endmodule
