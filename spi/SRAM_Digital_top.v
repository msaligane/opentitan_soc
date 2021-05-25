// `include "output_comparator.v"
// `include "SPI_slave.v"
// `include "mem_apb_intf.v"


module SRAM_Digital_top #(
  parameter ADDRWIDTH = 16,
  parameter DATAWIDTH = 32
) (
  input                       TEST_MODE_pad,
  input                       CLK_IN_pad   ,
  input                       RESET_pad    , // to reset the output comparator
  // Input Signals to memory from PADs in testingmode
  input                       DATA_REQ_pad , // unused
  input                       WE_pad       , //unused
  // Input Signals to SPI from PADs
  input                       SPI_MOSI_pad ,
  input                       SPI_RST_pad  ,
  input                       SPI_SCLK_pad ,
  input                       SPI_SS_pad   ,

  // IO declaration for apb
  // apb interface inputs
  input  wire                 pclk         , // pclk
  input  wire                 presetn      , // reset
  input  wire                 psel         ,
  input  wire [ADDRWIDTH-1:0] paddr        ,
  input  wire                 penable      ,
  input  wire                 pwrite       ,
  input  wire [DATAWIDTH-1:0] pwdata       ,

  // apb interface outputs
  output wire [DATAWIDTH-1:0] prdata       ,
  output wire                 pready       ,
  output wire                 pslverr      ,

  // Output Signals through PAD
  output                      DOUT32_PO    ,
  output                      SPI_MISO_PO
);

  //Input from SRAM
  wire [DATAWIDTH-1:0] SRAM_DOUT;

  // Output Signals to SRAM Array
  reg                 CLK_SRAM_IN     ;
  reg [ADDRWIDTH-3:0] ADDR_SRAM_IN    ;
  reg                 DATA_REQ_SRAM_IN;
  reg [DATAWIDTH-1:0] DIN_SRAM_IN     ;
  reg                 WE_SRAM_IN      ;
  //reg [          3:0] DATA_BE_SRAM_IN ;

// SRAM control Signals configured through SPI
  wire [31:0] DIN_SPI    ;
  wire [31:0] ADDR_SPI   ;
 // wire [15:0] DATA_BE_SPI;
  //wire [15:0] CLK_SEL;

// SRAM read and write signals between APB interface and the Mux
  wire [ADDRWIDTH-3:0] SRAM_ADDR_apb    ;
  wire [DATAWIDTH-1:0] SRAM_DIN_apb     ; //mc = memory controller
  wire                 SRAM_DATA_REQ_apb;
  wire                 SRAM_WE_apb      ;

  always @(*) begin
    if (~TEST_MODE_pad)
      CLK_SRAM_IN <= pclk;
    else
      CLK_SRAM_IN <= CLK_IN_pad;
  end

  always @(*) begin
    if (~TEST_MODE_pad) begin
      ADDR_SRAM_IN     <= SRAM_ADDR_apb ;
      DIN_SRAM_IN      <= SRAM_DIN_apb;
      DATA_REQ_SRAM_IN <= SRAM_DATA_REQ_apb;
      WE_SRAM_IN       <= SRAM_WE_apb;
      //DATA_BE_SRAM_IN  <= SRAM_BE_apb;
    end
    else begin
      ADDR_SRAM_IN     <= ADDR_SPI[ADDRWIDTH-3:0];
      DIN_SRAM_IN      <= DIN_SPI;
      DATA_REQ_SRAM_IN <= DATA_REQ_pad;
      WE_SRAM_IN       <= WE_pad;
      //DATA_BE_SRAM_IN  <= 4'b1111;
    end

  end

  mem_apb_intf #(
    .ADDRWIDTH(ADDRWIDTH-2)
    )
  mem_apb_intf (
    .pclk             (pclk             ),
    .presetn          (presetn          ),
    .psel             (psel             ),
    .paddr            (paddr[ADDRWIDTH-1:2] ),
    .penable          (penable          ),
    .pwrite           (pwrite           ),
    .pwdata           (pwdata           ),
    .SRAM_DOUT        (SRAM_DOUT        ),
    .SRAM_ADDR_apb    (SRAM_ADDR_apb    ),
    .SRAM_DIN_apb     (SRAM_DIN_apb     ),
    .SRAM_DATA_REQ_apb(SRAM_DATA_REQ_apb),
    .SRAM_WE_apb      (SRAM_WE_apb      ),
    .prdata           (prdata           ),
    .pready           (pready           ),
    .pslverr          (pslverr          )
  );

  SPI_slave spi_slave_inst (
    .reset      (SPI_RST_pad     ),
    .SS         (SPI_SS_pad      ),
    .SCLK       (SPI_SCLK_pad    ),
    .MOSI       (SPI_MOSI_pad    ),
    .MISO       (SPI_MISO_PO     ),
    .REG_DIN    (DIN_SPI         ),
    .REG_ADDR   (ADDR_SPI        ),
    .REG_DOUT   (SRAM_DOUT       )
  );

  output_comparator output_comp_inst (
    .CLK           (CLK_SRAM_IN     ),
    .rst           (RESET_pad       ),
    .WE            (WE_SRAM_IN      ),
    .DATA_REQ      (DATA_REQ_SRAM_IN),
    .Data_mem_in   (DIN_SRAM_IN     ),
    .Data_mem_out  (SRAM_DOUT       ),
    .Compare_signal(DOUT32_PO       )
  );


  mem_64KB u_mem (
    .CLK (CLK_SRAM_IN     ), // clk
    .CEN (DATA_REQ_SRAM_IN), // chip enable
    .WE  (WE_SRAM_IN      ), // write enable
    // .DBE (DATA_BE_SRAM_IN ), // write mask (bytes)
    .ADDR(ADDR_SRAM_IN    ), // A
    .DIN (DIN_SRAM_IN     ), // D
    .DOUT(SRAM_DOUT       )  // Q
  );


endmodule
