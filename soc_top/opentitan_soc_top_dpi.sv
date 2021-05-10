`timescale 1ns/100ps

import "DPI-C" function int rfile();

module opentitan_soc_top_tb #(
	parameter logic [31:0] JTAG_ID = 32'h 0000_0001,
	parameter logic DirectDmiTap = 1'b1
)();

logic clk_i;
logic rst_ni;

logic uart_tx;
logic uart_rx;

logic [19:0] gpio_i;
logic [19:0] gpio_o;

real CLOCK = 10;

opentitan_soc_top #(
	.JTAG_ID      (JTAG_ID),
	.DirectDmiTap (DirectDmiTap)
) 
ot_soc_top 
(
    .clk_i   (clk_i),
    .rst_ni  (rst_ni),

    .uart_rx (uart_rx),
	.uart_tx (uart_tx),

    // JTAG interface 
    // .jtag_tck_i(jtag_tck_i),
    // .jtag_tms_i(jtag_tms_i),
    // .jtag_trst_ni(jtag_trst_ni),
    // .jtag_tdi_i(jtag_tdi_i),
    // .jtag_tdo_o(jtag_tdo_o),

	// GPIO interface
    .gpio_i(gpio_i),
    .gpio_o(gpio_o)
);

task init_inputs();
	gpio_i       = 8;
	rst_ni       = 1;
endtask

logic [63:0] clk_count;

int totalLines = rfile();
// int byte_i[4*totalLines-1:0];

int byte_i[];

longint frequency = 'd100000000;
longint baudrate = 'd9600;
int clk_bit = (frequency / baudrate) + 1;

int inst_c  = 0;
int bit_c   = 0;

int n           = 0;
int inst        = 0;
int half_byte1  = 0;
int half_byte2  = 0;
int byte1       = 0;
int half_byte3  = 0;
int half_byte4  = 0;
int byte2       = 0;
int half_byte5  = 0;
int half_byte6  = 0;
int byte3       = 0;
int half_byte7  = 0;
int half_byte8  = 0;
int byte4       = 0;

always begin
	#(CLOCK/2)
	clk_i = ~clk_i;
end

always @(posedge clk_i) begin
    if(!rst_ni) begin
        clk_count <= 0;
    end
    else begin    
        clk_count <= clk_count + 'b1;
    end
    if(clk_count >= 'd10000) begin
        $display("Max Cycles Reached!");
        $finish;
    end
end

always @(posedge clk_i) begin
    if(clk_count >= clk_bit && clk_count%clk_bit == 0) begin
        if(bit_c == 0) begin
            uart_rx = 0;
        end
        else if(bit_c <= 'd8) begin
            uart_rx = (byte_i[inst_c] >> bit_c - 1) & 'h01;
            bit_c = bit_c+1;
        end
        else if(bit_c > 'd8) begin
            uart_rx = 1;
            inst_c = inst_c+1;
        end
    end
end

initial begin

    int fp;

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

    byte_i = new [totalLines*4];
    clk_i  = 0;

    @(negedge clk_i)
    init_inputs();

    fp = $fopen("/afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/gf12_opentitan/opentitan_soc/tests/hex/li.hex", "r");
    while(!$feof(fp)) begin
        //$fscanf(fp, "%h", inst);
        $fgets(inst, fp);

        $display("Reading: %h\n", inst);

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

        byte_i[n]     = byte1;
        byte_i[n + 1] = byte2;
        byte_i[n + 2] = byte3;
        byte_i[n + 3] = byte4;
        n = n+4;              
    end

	repeat(5)
	@(negedge clk_i)
	rst_ni = 0;
	
	
	@(negedge clk_i)
	rst_ni  = 1;
    uart_rx = 1;
	
    
    @(negedge clk_i)
	#100000
	$finish;

end


endmodule