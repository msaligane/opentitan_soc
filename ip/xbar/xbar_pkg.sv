package xbar_pkg;

  localparam logic [31:0] ADDR_SPACE_ICCM  = 32'h 20000000;
  localparam logic [31:0] ADDR_SPACE_DCCM  = 32'h 10000000;
  localparam logic [31:0] ADDR_SPACE_GPIO  = 32'h 40080000;
  localparam logic [31:0] ADDR_SPACE_LDO1  = 32'h 40090000;
  localparam logic [31:0] ADDR_SPACE_LDO2  = 32'h 400a0000;
  localparam logic [31:0] ADDR_SPACE_DCDC  = 32'h 400b0000;
  localparam logic [31:0] ADDR_SPACE_PLL1  = 32'h 400c0000;
  localparam logic [31:0] ADDR_SPACE_TSEN1 = 32'h 400d0000;
  localparam logic [31:0] ADDR_SPACE_TSEN2 = 32'h 400e0000;
  localparam logic [31:0] ADDR_SPACE_DAP   = 32'h 400f0000;
  localparam logic [31:0] ADDR_SPACE_PLIC  = 32'h 40050000;
  localparam logic [31:0] ADDR_SPACE_UART  = 32'h 40080000;

 
  localparam logic [31:0] ADDR_MASK_ICCM  = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_DCCM  = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_GPIO  = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_LDO1  = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_LDO2  = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_DCDC  = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_PLL1  = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_TSEN1 = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_TSEN2 = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_DAP   = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_PLIC = 32'h 0000ffff;
  localparam logic [31:0] ADDR_MASK_UART = 32'h 0000ffff;

  localparam int N_HOST   = 2;
  localparam int N_DEVICE = 12;

  typedef enum int {
    tl_iccm  = 0,
    tl_dccm  = 1,
    tl_gpio  = 2,
    tl_ldo1  = 3,
    tl_ldo2  = 4,
    tl_dcdc  = 5,
    tl_pll1  = 6,
    tl_tsen1 = 7,
    tl_tsen2 = 8,
    tl_dap   = 9,
    tl_plic  = 10,
    tl_uart  = 11
  } tl_device_e;

  typedef enum int {
    TlBrqif = 0,
    TlBrqlsu = 1
  } tl_host_e;

endpackage
