`timescale 1ns/100ps

import "DPI-C" function int  rfile();

module spi_tb #(
    parameter logic [31:0] JTAG_ID = 32'h 0000_0001,
	parameter logic DirectDmiTap = 1'b1,
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

opentitan_soc_top #(
	.JTAG_ID      (JTAG_ID),
	.DirectDmiTap (DirectDmiTap),
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
);

logic [15:0] totalLines = rfile();

logic [71:0]            buffer;
logic [31:0]            inst;
int                     inst_i[];


logic [31:0]            inst_count;
logic [31:0]            bit_count;

int   n      = 0;
int   inst_c = 0;
int   bit_c  = 0;


always begin
    #(CLOCK/2)
    clk_i = ~clk_i;
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

logic ss_buffer;
always @(negedge clk_i) begin
    if(!rst_ni) begin
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

initial begin

    int fp;

    n          = 0;
    inst       = 0;

    inst_i     = new [totalLines+1];

    clk_i      = 0;
    rst_ni     = 0;
    en_i       = 0;

    spi_ss     = 1;
    sel        = 0;
    
    bit_c      = 0;
    inst_c     = 0;
    bit_count  = 0;
    inst_count = 0;

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
    spi_mosi = 0;
	
    #((totalLines+1)*36*CLOCK);

    #100;
    en_i = 1;

    #2000;

	$finish;
end

endmodule