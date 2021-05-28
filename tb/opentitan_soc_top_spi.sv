`timescale 1ns/100ps
`define DEBUG

import "DPI-C" function int  rfile();
import "DPI-C" function void init_out();
import "DPI-C" function void print_D2H_header(string TYPE);
import "DPI-C" function int  print_D2H(int d_valid, int clkcount, int d_data);
import "DPI-C" function void print_close();

module spi_tb #(
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
logic [31:0] inst_count;
logic [31:0] bit_count;

logic        stop_print;

logic [15:0] totalLines = rfile();
int          inst_i[];

int   inst_c = 0;
int   bit_c  = 0;

logic [71:0] buffer;
logic [31:0] inst;
int   n      = 0;





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

always @(negedge clk_i) begin
    if(~spi_ss) begin
        if(bit_c > 'd31) begin
            spi_mosi     = 0;
            bit_c        = 0;
            bit_count    = 0;
            inst_c       = inst_c+1;
            inst_count   = inst_count+1;
        end
        else begin
            spi_mosi     = inst_i[inst_c]['d31 - bit_c];
            bit_c        = bit_c+1;
            bit_count    = bit_count+1;
        end
    end
end

// Reset Synchronizers
logic [2:0] rst_buf;
logic       rst_sync;
always_ff @ (posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)
        rst_buf <= 3'b000;
    else
        rst_buf <= {rst_ni, rst_buf[2:1]};
    end

assign rst_sync = rst_buf[0];

logic ss_buffer;
always @(negedge clk_i) begin
    if(!rst_sync) begin
        ss_buffer <= 0;
        spi_ss    <= 1;
    end
    else begin        
        if(bit_count == 'd32) begin
            ss_buffer <= 1;
            spi_ss    <= ss_buffer;
        end
        else begin
            ss_buffer <= 0;
            spi_ss    <= ss_buffer;
        end
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

initial begin

    int fp;
    init_out();

    // Instruction reader initialization
    n          = 0;
    inst       = 0;

    inst_i     = new [totalLines+1];

    // System input resets
    clk_i            = 0;
    rst_ni           = 0;
    en_i             = 0;
    tempsense_clkref = 0;

    // Interface initialization
    spi_ss     = 1;
    spi_mosi   = 0;

    sel        = 0;
    
    // Counter initialization
    bit_c      = 0;
    inst_c     = 0;
    bit_count  = 0;
    inst_count = 0;

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

        `ifdef DBG_INST
            $display("n: %d, INST: %d", n, inst);
        `endif

        inst_i[n] = inst;
        n         = n+1;              
    end

    // for(int i=0; i<totalLines+1; i++) begin
    //     $display("[%d] Contents: %h", i, inst_i[i]);
    // end

    // for(int i=0; i<32; i++) begin
    //     $display("Bit[%d] Contents: %h", i, inst_i[1][i]);
    // end

	@(negedge clk_i)
    spi_ss   = 0;
	
    #((totalLines+1)*36*CLOCK);

    #1000;
    en_i     = 1;

    #5000;

	$finish;
    print_close();
end

endmodule