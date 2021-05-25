module spi_tb();

import "DPI-C" function int  rfile();

parameter DATA_WIDTH = 32;

real CLOCK = 10;

logic reset;
logic SS;
logic SCLK;
logic MOSI;
logic [DATA_WIDTH-1:0] REG_DIN;

SPI_slave #(
    .DATA_WIDTH(DATA_WIDTH)
) spi (
	//inputs from Pads
	.reset(reset),
	.SS(SS), 
	.SCLK(SCLK),
	.MOSI(MOSI),
	
    // output reg [DATA_WIDTH-1:0] REG_DIN
    .REG_DIN(REG_DIN)
);

logic [15:0] totalLines  = rfile();

logic [71:0]            buffer;
logic [31:0]            inst;
// logic [total-1:0]  inst_i[31:0];
int inst_i[];


logic [31:0]            inst_count;
logic [31:0]            bit_count;

int          n           = 0;
int          inst_c      = 0;
int          bit_c       = 0;


always begin
    #(CLOCK/2)
    SCLK = ~SCLK;
end

always @(negedge SCLK) begin
    if(~SS) begin
        if(bit_c > 'd31) begin
            MOSI         = 0;
            bit_c        = 0;
            inst_c       = inst_c+1;
            bit_count    = 0;
            inst_count   = inst_count+1;
        end
        else begin
            MOSI         = inst_i[inst_c]['d31 - bit_c];
            bit_c        = bit_c+1;
            bit_count    = bit_count+1;
        end
    end
end

logic ss_buffer;
always @(negedge SCLK) begin
    if(!reset) begin
        SS <= 1;
    end
    else begin        
        if(bit_count == 'd32) begin
            ss_buffer <= 1;
            SS        <= ss_buffer;
        end
        else begin
            ss_buffer <= 0;
            SS        <= ss_buffer;
        end
    end
end

initial begin

    int fp;

    n          = 0;
    inst       = 0;

    inst_i     = new [totalLines+1];

    SCLK       = 0;
    SS         = 1;
    reset      = 0;

    bit_c      = 0;
    inst_c     = 0;
    bit_count  = 0;
    inst_count = 0;

    @(negedge SCLK)
    reset      = 1;

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

    for(int i=0; i<32; i++) begin
        $display("Bit[%d] Contents: %h", i, inst_i[1][i]);
    end

	@(negedge SCLK)
    SS   = 0;
    MOSI = 0;
	
    #((totalLines+1)*36*CLOCK);

	$finish;
end

endmodule