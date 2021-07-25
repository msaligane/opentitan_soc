
module opentitan_soc_top #(
  parameter DATA_WIDTH = 'd32
)
(
  input  logic        clk_i,
  input  logic        rst_ni,
  input  logic        en_i,

  input  logic        sel,
  input  logic        spi_ss,
  input  logic        spi_mosi,

  input  logic        uart_rx_inst,
  input  logic        uart_rx,
  output logic        uart_tx,
  output logic        uart_txen,

  input  logic        tempsense_clkref,
  output logic        tempsense_clkout,

  output logic [7:0]  gpio_o
);

tlul_pkg::tl_d2h_t       dccm_to_xbar;
tlul_pkg::tl_h2d_t       xbar_to_dccm;
tlul_pkg::tl_d2h_t       iccm_to_xbar;
tlul_pkg::tl_h2d_t       xbar_to_iccm;
logic                    iccm_cntrl_reset;
logic [11:0]             iccm_cntrl_addr;
logic [31:0]             iccm_cntrl_data;
logic                    enable_rst_ni;

opentitan_soc_core #(
  .DATA_WIDTH(DATA_WIDTH) 
) ot_core (
  .clk_i              (clk_i),
  .rst_ni             (rst_ni),
  .en_i               (en_i),
  .enable_rst_ni      (enable_rst_ni),

  .sel                (sel),
  .spi_ss             (spi_ss),
  .spi_mosi           (spi_mosi),

  .uart_rx_inst       (uart_rx_inst),
  .uart_rx            (uart_rx),
  .uart_tx            (uart_tx),
  .uart_txen          (uart_txen),

  .tempsense_clkref   (tempsense_clkref),
  .tempsense_clkout   (tempsense_clkout),

  .gpio_o             (gpio_o),

  //  DCCM I/O
  .dccm_to_xbar       (dccm_to_xbar),
  .xbar_to_dccm       (xbar_to_dccm),

  //  ICCM I/O
  .iccm_to_xbar       (iccm_to_xbar),
  .xbar_to_iccm       (xbar_to_iccm),
  .iccm_cntrl_reset   (iccm_cntrl_reset),
  .iccm_cntrl_addr    (iccm_cntrl_addr),
  .iccm_cntrl_data    (iccm_cntrl_data)

);

data_mem_tlul dccm(
  .clk_i    (clk_i),
  .rst_ni   (enable_rst_ni),
  
  // tl-ul interface
  .tl_d_i   (xbar_to_dccm),
  .tl_d_o   (dccm_to_xbar)
);


inst_mem_tlul iccm(
  .clk_i              (clk_i),   
  .rst_ni             (enable_rst_ni),   
  
  .iccm_cntrl_data    (iccm_cntrl_data),
  .iccm_cntrl_addr    (iccm_cntrl_addr),
  .iccm_cntrl_reset   (iccm_cntrl_reset),

  // tl-ul interface
  .xbar_to_iccm       (xbar_to_iccm),   
  .iccm_to_xbar       (iccm_to_xbar) 
);


endmodule
