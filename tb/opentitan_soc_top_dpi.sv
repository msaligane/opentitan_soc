`timescale 1ns/100ps
//`define DBG_INST
`define DEBUG

import "DPI-C" function int  rfile();
import "DPI-C" function void init_out();
import "DPI-C" function void print_D2H_header(string TYPE);
import "DPI-C" function int  print_D2H(int d_valid, int clkcount, int d_data);
import "DPI-C" function void print_close();

module opentitan_soc_top_tb #(
    parameter DATA_WIDTH = 'd32
)();

real CLOCK = 10;

logic clk_i;
logic rst_ni;
logic en_i;

logic sel;

logic spi_ss;
logic spi_mosi;

logic uart_rx_inst;
logic uart_txen;
logic uart_tx;
logic uart_rx;

logic tempsense_clkref;
logic tempsense_clkout;

logic [7:0] gpio_o;

`ifdef DEBUG
    logic                   system_rst_ni;
    
    tlul_pkg::tl_d2h_t      iccm_to_xbar;
    tlul_pkg::tl_d2h_t      dccm_to_xbar;
    tlul_pkg::tl_h2d_t      xbar_to_iccm;
    tlul_pkg::tl_h2d_t      xbar_to_dccm;

    logic  [15:0]           r_Clock_Count;
    logic  [2:0]            r_Bit_Index;
    logic  [2:0]            r_SM_Main;
    logic  [7:0]            r_Rx_Byte;
    logic                   r_Rx_DV;
    logic                   r_Rx_Data_R;
    logic                   r_Rx_Data;

    logic  [DATA_WIDTH-1:0] rx_spi_inst_i;
    logic                   rx_spi_valid_i;
    logic  [DATA_WIDTH-1:0] command;
    logic  [DATA_WIDTH-1:0] data_out;
    logic  [4:0]            rcv_bit_count;
    logic  [4:0]            prev_rcv_bit_count;
`endif

opentitan_soc_top #(
    .DATA_WIDTH   (DATA_WIDTH)
) 
ot_soc_top 
(
    .clk_i            (clk_i),
    .rst_ni           (rst_ni),
    .en_i             (en_i),
    
    .tempsense_clkref (tempsense_clkref),
    .tempsense_clkout (tempsense_clkout),

    .sel              (sel),
    .spi_ss           (spi_ss),
    .spi_mosi         (spi_mosi),

    .uart_rx_inst     (uart_rx_inst),
    .uart_rx          (uart_rx),
    .uart_tx          (uart_tx),
    .uart_txen        (uart_txen),

    .gpio_o           (gpio_o)

    `ifdef DEBUG
        ,.system_rst_ni     (system_rst_ni)
        
        ,.iccm_to_xbar      (iccm_to_xbar)
        ,.dccm_to_xbar      (dccm_to_xbar)
        ,.xbar_to_iccm      (xbar_to_iccm)
        ,.xbar_to_dccm      (xbar_to_dccm)
        
        ,.r_Clock_Count     (r_Clock_Count)
        ,.r_Bit_Index       (r_Bit_Index)
        ,.r_SM_Main         (r_SM_Main)
        ,.r_Rx_Byte         (r_Rx_Byte)
        ,.r_Rx_DV           (r_Rx_DV)
        ,.r_Rx_Data_R       (r_Rx_Data_R)
        ,.r_Rx_Data         (r_Rx_Data)
        
        ,.rx_spi_inst_i     (rx_spi_inst_i)
        ,.rx_spi_valid_i    (rx_spi_valid_i)
        ,.command           (command)
        ,.data_out          (data_out)
        ,.rcv_bit_count     (rcv_bit_count)
        ,.prev_rcv_bit_count(prev_rcv_bit_count)
    `endif
);

logic [63:0] clk_count;
logic [31:0] byte_count;
logic [3:0]  bit_count;

logic        stop_print;

logic [15:0] totalLines  = rfile();
int          byte_i[];

longint      frequency   = 'd100000000;
longint      baudrate    = 'd9600;
int          clk_bit     = (frequency / baudrate) + 1;

int          inst_c      = 0;
int          bit_c       = 0;

logic[71:0]  buffer;
logic[31:0]  inst;
int          n           = 0;
int          half_byte1  = 0;
int          half_byte2  = 0;
int          byte1       = 0;
int          half_byte3  = 0;
int          half_byte4  = 0;
int          byte2       = 0;
int          half_byte5  = 0;
int          half_byte6  = 0;
int          byte3       = 0;
int          half_byte7  = 0;
int          half_byte8  = 0;
int          byte4       = 0;

always begin
	#(CLOCK/2)
	clk_i            = ~clk_i;
    tempsense_clkref = ~tempsense_clkref;
end

always @(posedge clk_i) begin
    if(!rst_ni) begin
        clk_count <= 0;
    end
    else begin    
        clk_count <= clk_count + 'b1;
    end
end

`ifdef DEBUG
    always @(posedge clk_i) begin
        if(system_rst_ni) begin
            if(stop_print == 0) begin         
                print_D2H_header("ICCM");
                print_D2H(iccm_to_xbar.d_valid,
                        clk_count,
                        iccm_to_xbar.d_data);
                print_D2H_header("DCCM");
                print_D2H(dccm_to_xbar.d_valid,
                        clk_count,
                        dccm_to_xbar.d_data);
                if(dccm_to_xbar.d_data == 'h5a) begin
                    stop_print = 'b1;
                end
            end
        end
    end
`endif

always @(posedge clk_i) begin
    if(clk_count >= clk_bit && (clk_count%clk_bit) == 0) begin
        `ifdef DBG_BYTE
            $display("Start @ %d", clk_count);
        `endif
        if(bit_c == 0) begin
            byte_count   = byte_count+1;
            bit_count    = 0;
            uart_rx_inst = 0;
            bit_c        = bit_c+1;
        end
        else if(bit_c <= 'd8) begin
            uart_rx_inst = (byte_i[inst_c] >> bit_c - 1) & 'h01;
            bit_c     = bit_c+1;
            bit_count = bit_count+1;
            `ifdef DBG_BYTE
                $display("Bit @ %d: %d", bit_c, (byte_i[inst_c] >> bit_c - 1) & 'h01);
            `endif
        end
        else if(bit_c > 'd8) begin
            uart_rx_inst = 1;
            bit_c     = 0;
            inst_c    = inst_c+1;
            bit_count = 0;
        end
    end
end

initial begin

    int fp;
    init_out();

    // Instruction reader initialization
    n          = 0;
    inst       = 0;

	half_byte1 = 0;
    half_byte2 = 0;
    byte1      = 0;

    half_byte3 = 0;
    half_byte4 = 0;
    byte2      = 0;

    half_byte5 = 0;
    half_byte6 = 0;
    byte3      = 0;
 
    half_byte7 = 0;
    half_byte8 = 0;
    byte4      = 0;

    byte_i     = new [totalLines*8];

    // System input resets
    clk_i            = 0;
    rst_ni           = 0;
    en_i             = 0;
    tempsense_clkref = 0;
    
    // Interface initialization
    sel           = 1;
    uart_rx_inst  = 1;
    
    // Counter initialization
    byte_count = 0;
    bit_count  = 0;

    stop_print = 0;

    @(negedge clk_i)
    rst_ni      = 1;

    fp = $fopen("/afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/opentitan_soc/tests/hex/load_test.hex", "r");
    while(!$feof(fp)) begin
        $fgets(buffer, fp);
        $sscanf(buffer, "%x", inst);
        `ifdef DBG_INST
            $display("Reading: %h\n", inst);
        `endif

        half_byte1 = (inst & 'h0f);             // 3
        half_byte2 = (inst & 'hf0) >> 4;        // 1
        byte1      = (half_byte2 << 4) | half_byte1; // 0x13
    
        half_byte3 = (inst & 'hf00) >> 8;       // 1
        half_byte4 = (inst & 'hf000) >> 12;     // 0
        byte2      = (half_byte4 << 4) | half_byte3; // 0x01
    
        half_byte5 = (inst & 'hf0000) >> 16;    // 0
        half_byte6 = (inst & 'hf00000) >> 20;   // 2
        byte3      = (half_byte6 << 4) | half_byte5; // 0x20
    
        half_byte7 = (inst & 'hf000000) >> 24;  // 0
        half_byte8 = (inst & 'hf0000000) >> 28; // 0
        byte4      = (half_byte8 << 4) | half_byte7; // 0x00  

        `ifdef DBG_INST
            $display("n: %d, B1: %d, B2: %d, B3: %d, B4: %d", n, byte1, byte2, byte3, byte4);
        `endif

        byte_i[n]     = byte1;
        byte_i[n + 1] = byte2;
        byte_i[n + 2] = byte3;
        byte_i[n + 3] = byte4;
        n = n+4;              
    end


	@(negedge clk_i)

    `ifdef DBG_INST
        $display("totalLines: %d", totalLines);
    `endif
	
    #(CLOCK*clk_bit*(totalLines+1)*32)
    
    #1000;
    en_i     = 1;
    
    #5000;
	$finish;
    print_close();
end


endmodule
