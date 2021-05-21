`define DEBUG

module opentitan_soc_top #(
  parameter logic [31:0] JTAG_ID = 32'h 0000_0001,
  parameter logic DirectDmiTap = 1'b1
)(
  input logic clk_i,
  input logic rst_ni,

  // jtag interface 
  // input               jtag_tck_i,
  // input               jtag_tms_i,
  // input               jtag_trst_ni,
  // input               jtag_tdi_i,
  // output              jtag_tdo_o,

  input               uart_rx_inst,
  input               uart_rx,
  output              uart_tx,
  output              uart_txen,

  input  logic        tempsense_clkref,
  output logic        tempsense_clkout,

  //input  logic [19:0] gpio_i,
  output logic [19:0] gpio_o

  `ifdef DEBUG
    ,output tlul_pkg::tl_d2h_t iccm_to_xbar
    ,output tlul_pkg::tl_d2h_t dccm_to_xbar

    ,output logic              system_rst_ni

    ,output logic  [15:0]      r_Clock_Count
    ,output logic  [2:0]       r_Bit_Index
    ,output logic  [2:0]       r_SM_Main
    ,output logic  [7:0]       r_Rx_Byte
    ,output logic              r_Rx_DV
  `endif
);

  `ifndef DEBUG
    logic system_rst_ni;
  `endif

  //wire [19:0] gpio_in;
  wire [19:0] gpio_out;
  wire [11:0] gpio_out_ext;

  //assign gpio_in = gpio_i;
  assign gpio_o = gpio_out; 
        
  tlul_pkg::tl_h2d_t ifu_to_xbar; 
  tlul_pkg::tl_d2h_t xbar_to_ifu;

  tlul_pkg::tl_h2d_t xbar_to_iccm;
  tlul_pkg::tl_h2d_t xbar_to_dccm;

  `ifndef DEBUG
    tlul_pkg::tl_d2h_t iccm_to_xbar;
    tlul_pkg::tl_d2h_t dccm_to_xbar;
  `endif

  tlul_pkg::tl_h2d_t lsu_to_xbar;
  tlul_pkg::tl_d2h_t xbar_to_lsu;

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
  
  tlul_pkg::tl_h2d_t xbar_to_uart;
  tlul_pkg::tl_d2h_t uart_to_xbar;

  tlul_pkg::tl_h2d_t plic_req;
  tlul_pkg::tl_d2h_t plic_resp;

  // Added for JTAG interface
  tlul_pkg::tl_h2d_t xbar_to_dbgrom;
  tlul_pkg::tl_d2h_t dbgrom_to_xbar;

  tlul_pkg::tl_h2d_t dm_to_xbar;
  tlul_pkg::tl_d2h_t xbar_to_dm;  

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

  logic instr_valid;
  logic [11:0] tlul_addr;
  logic [31:0] tlul_data;

  logic       rx_dv_i;
  logic [7:0] rx_byte_i;

  logic iccm_cntrl_reset;
  logic [1:0] iccm_cntrl_addr_ext;
  logic [11:0] iccm_cntrl_addr;
  logic [31:0] iccm_cntrl_data;
  logic iccm_cntrl_we;

  // jtag interfaces (COPIED FROM AZADI) 

  // jtag_pkg::jtag_req_t jtag_req;
  // jtag_pkg::jtag_rsp_t jtag_rsp;
  // logic unused_jtag_tdo_oe_o;

  // assign jtag_req.tck         = jtag_tck_i;
  // assign jtag_req.tms         = jtag_tms_i;
  // assign jtag_req.trst_n      = jtag_trst_ni;
  // assign jtag_req.tdi         = jtag_tdi_i;
  // assign jtag_tdo_o           = jtag_rsp.tdo;
  // assign unused_jtag_tdo_oe_o = jtag_rsp.tdo_oe;

  // logic dbg_req;
  // logic dbg_rst;

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
    .rst_ni (system_rst_ni),
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
    .rst_ni    (system_rst_ni),

    /* Host interfaces */
    .tl_if_i   (ifu_to_xbar), 
    .tl_if_o   (xbar_to_ifu), 
    .tl_lsu_i  (lsu_to_xbar),
    .tl_lsu_o  (xbar_to_lsu),

    // .tl_dm_sba_i (dm_to_xbar),
    // .tl_dm_sba_o (xbar_to_dm),

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
    .tl_dap_o    (),
    .tl_dap_i    (),

    // PLIC
    .tl_plic_o  (plic_req),
    .tl_plic_i  (plic_resp),

    // For JTAG Debug ROM
    // .tl_debug_rom_o (xbar_to_dbgrom),
    // .tl_debug_rom_i (dbgrom_to_xbar),

    .tl_uart_o      (xbar_to_uart),
    .tl_uart_i      (uart_to_xbar)

  );

  //GPIO module
   gpio gpio_32 (
    .clk_i         (clk_i),
    .rst_ni        (rst_ni),

    // Below Regster interface can be changed
    .tl_i          (xbar_to_gpio),
    .tl_o          (gpio_to_xbar),
   // .cio_gpio_i    ({12'b0, gpio_in}),
    .cio_gpio_o    ({gpio_out_ext, gpio_out}),
    .cio_gpio_en_o (),
    .intr_gpio_o   (intr_gpio )  
  );

  // instr_mem_tlul iccm (
  //   .clk_i    (clk_i),
  //   .rst_ni   (rst_ni),

  //   // tl-ul insterface
  //   .tl_d_i   (xbar_to_iccm),
  //   .tl_d_o   (iccm_to_xbar)
  // );

  instr_mem_top iccm (
    .clk_i      (clk_i),
    .rst_ni     (system_rst_ni),

    .req        (req_i),
    .addr       (system_rst_ni? tlul_addr : iccm_cntrl_addr),
    .wdata      (iccm_cntrl_data),
    .rdata      (tlul_data),
    .rvalid     (instr_valid),
    `ifdef DFFRAM
    .wmask      (4'b0),
    `endif
    `ifndef DFFRAM
    .wmask      (32'b0),
    `endif
    .we         (1'b0)
  );

  logic [31:0] inst_buffer;
  always_ff @(posedge clk_i or negedge system_rst_ni) begin
    if(!system_rst_ni) begin
      inst_buffer <= 'b0;
    end
    else begin  
      inst_buffer <= tlul_data;
    end
  end

  tlul_sram_adapter #(
    .SramAw       (12),
    .SramDw       (32), 
    .Outstanding  (2),  
    .ByteAccess   (1),
    .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
    .ErrOnRead    (0)   // 1: Reads not allowed, automatically error  
  ) inst_mem (
    .clk_i     (clk_i),
    .rst_ni    (system_rst_ni),
    .tl_i      (xbar_to_iccm),
    .tl_o      (iccm_to_xbar), 
    .req_o     (req_i),
    .gnt_i     (1'b1),
    .we_o      (),
    .addr_o    (tlul_addr),
    .wdata_o   (),
    .wmask_o   (),
    .rdata_i   ((system_rst_ni) ? inst_buffer: '0),
    .rvalid_i  (instr_valid),
    .rerror_i  (2'b0)
  );

  data_mem_tlul dccm(
    .clk_i    (clk_i),
    .rst_ni   (system_rst_ni),
  
    // tl-ul insterface
    .tl_d_i   (xbar_to_dccm),
    .tl_d_o   (dccm_to_xbar)
  );
  
  iccm_controller u_dut(
    .clk_i       (clk_i),
    .rst_ni      (rst_ni),
    .rx_dv_i     (rx_dv_i),
    .rx_byte_i   (rx_byte_i),
    .we_o        (iccm_cntrl_we),
    .addr_o      ({iccm_cntrl_addr_ext, iccm_cntrl_addr}),
    .wdata_o     (iccm_cntrl_data),
    .reset_o     (iccm_cntrl_reset)
  );

  uart_receiver programmer (
    .i_Clock       (clk_i),
    .rst_ni        (rst_ni),
    .i_Rx_Serial   (uart_rx_inst),
    .CLKS_PER_BIT  (16'd10417),
    .o_Rx_DV       (rx_dv_i),
    .o_Rx_Byte     (rx_byte_i)

    `ifdef DEBUG
      ,.r_Clock_Count(r_Clock_Count)
      ,.r_Bit_Index(r_Bit_Index)
      ,.r_SM_Main(r_SM_Main)
      ,.r_Rx_Byte(r_Rx_Byte)
      ,.r_Rx_DV(r_Rx_DV)
    `endif
  );

  rstmgr reset_manager(
    .clk_i      (clk_i),
    .rst_ni     (rst_ni),
    .iccm_rst_i (iccm_cntrl_reset),
    .sys_rst_ni (system_rst_ni)
  );

  rv_plic intr_controller (
    .clk_i      (clk_i),
    .rst_ni     (system_rst_ni),

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

  uart u_uart0(
    .clk_i                   (clk_i             ),
    .rst_ni                  (system_rst_ni     ),
    // Bus Interface
    .tl_i                    (xbar_to_uart      ),
    .tl_o                    (uart_to_xbar      ),

    // Generic IO
    .cio_rx_i                (uart_rx           ),
    .cio_tx_o                (uart_tx           ),
    .cio_tx_en_o             (uart_txen         ),

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



  tlul_adapter_tempsensor u_tempsense( 
    .clk_i                  (clk_i),
    .rst_ni                 (system_rst_ni),
    
    .tl_i                   (xbar_to_tsen1),
    .tl_o                   (tsen1_to_xbar),
    
    .re_o                   (),
    .we_o                   (),
    .addr_o                 (),
    .wdata_o                (),
    .be_o                   (),
    .rdata_i                (),
    .error_i                (),
    .CLK_REF                (tempsense_clkref),
    .CLK_OUT                (tempsense_clkout)
  );

  // rv_dm #(
  //   .NrHarts(1),
  //   .IdcodeValue(JTAG_ID),
  //   .DirectDmiTap (DirectDmiTap)
  // ) debug_module (
  //     .clk_i(clk_i),         // clock
  //     .rst_ni(rst_ni),       // asynchronous reset active low, connect PoR
  //                                             // here, not the system reset
  //     .testmode_i(),
  //     .ndmreset_o(dbg_rst),  // non-debug module reset
  //     .dmactive_o(),         // debug module is active
  //     .debug_req_o(dbg_req), // async debug request
  //     .unavailable_i(1'b0),  // communicate whether the hart is unavailable
  //                                               // (e.g.: power down)

  //     // bus device with debug memory, for an execution based technique
  //     .tl_d_i(dbgrom_to_xbar),
  //     .tl_d_o(xbar_to_dbgrom),

  //     // bus host, for system bus accesses
  //     .tl_h_o(dm_to_xbar),
  //     .tl_h_i(xbar_to_dm),

  //     .jtag_req_i(jtag_req),
  //     .jtag_rsp_o(jtag_rsp)
  // );


  // jtagdpi u_jtagdpi (
  //   .clk_i       (clk_i),
  //   .rst_ni      (rst_ni),
  //   .jtag_tck    (cio_jtag_tck),
  //   .jtag_tms    (cio_jtag_tms),
  //   .jtag_tdi    (cio_jtag_tdi),
  //   .jtag_tdo    (cio_jtag_tdo),
  //   .jtag_trst_n (cio_jtag_trst_n),
  //   .jtag_srst_n (cio_jtag_srst_n)
  // );


endmodule
