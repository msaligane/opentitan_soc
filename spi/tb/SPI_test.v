///////////////////////////////////////////////////////////////////////////////////////////
//  Last Modified		: 10/3/19
//  Date Created   		: 10/3/19 
//  Revision 			: 1
//  Last Modified By	        : 
//  First Author		: Sumanth Kamineni.
//  Description 		: This code was based on http://fpga4fun.com/SPI2.html
///////////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ns


module SPI_test;
	parameter DATA_WIDTH = 32;
	reg SS;
	reg SCLK;
	reg MOSI;
	reg reset; //Global reset
	reg [DATA_WIDTH-1:0] REG_DOUT;
	wire MISO;
        wire [DATA_WIDTH-1:0] REG_DIN;
	wire [DATA_WIDTH-1:0] REG_ADDR;
		
	SPI_slave #(
		.DATA_WIDTH(DATA_WIDTH)
	)
	dt_inst(
		.SS(SS),
		.SCLK(SCLK),
		.MOSI(MOSI),
		.reset(reset), //Global reset
		.REG_DOUT(REG_DOUT),
		.MISO(MISO),
	  	.REG_DIN   (REG_DIN),
	  	.REG_ADDR   (REG_ADDR)
	);

	//Control states
	localparam RCV_CMD    = 8'b00000000;
	//SPI slave receiving data (data in)
	localparam RCV_DIN    = 8'b00000001;
	localparam RCV_ADDR   = 8'b00000010;
	localparam RCV_MISC   = 8'b00000011;
	//SPI slave writting data (data out)
	localparam WRT_MISC   = 8'b00000100;
	localparam WRT_DOUT   = 8'b00000101;
	//For .csv generation
	reg running;
	//Generate sclock
	initial 
	begin
		SCLK = 0;
		//forever #5 SCLK = !SCLK;
	end  
	//Generate System Clock (clk)
	//Inputs from Chip
	initial 
	begin
		
		running = 0;	//1 if you want to generate .csv
		SS = 1;
		MOSI = 0;
		SCLK = 0;
		//reset = 1;
		reset = 1;
		REG_DOUT = 32'hABCDABCD;
		
	end

	initial
	begin
		#10
		reset = 0;
		#10
		reset = 1;
		SS = 0;
		SEND_BYTE(WRT_MISC);
                SEND_BYTE(0);
                #5
                #5
                SS = 1;
		#5
                #5
		SS = 0;
		SEND_BYTE(RCV_MISC);
                SEND_BYTE(32'h32010123);
                #5
                #5
                SS = 1;
		#5
                #5
		SS = 0;
		SEND_BYTE(RCV_DIN);
                SEND_BYTE(32'hABCDABCD);
                #5
                #5
                SS = 1;
		#5
                #5
		SS = 0;
		SEND_BYTE(RCV_ADDR);
		SEND_BYTE(32'h12341217);
		#5
		#5
		SS = 1;
		#5
		#5
		SS =0;
		SEND_BYTE(WRT_MISC);
                SEND_BYTE(0);
                #5
                #5
                SS = 1;
		#5
                #5
		SS =0;
		SEND_BYTE(WRT_DOUT);
                SEND_BYTE(0);
                #5
                #5
                SS = 1;
		#5
                #5
		SS = 0;
		SEND_BYTE(RCV_DIN);
                SEND_BYTE(32'hEFAEFABC);
                #5
                #5
                SS = 1;
		#5
                #5
		SS = 0;
		SEND_BYTE(RCV_ADDR);
		SEND_BYTE(32'hBEEFBEEF);
		#5
		#5
		SS = 1;
		#5
		#5
		running = 0;
		#100
		$finish;
	end

	task SEND_BYTE;
		input [DATA_WIDTH-1:0] sbyte;
		integer i;
		for (i = DATA_WIDTH-1; i >= 0; i = i - 1) begin
			MOSI = sbyte[i];
		  	#5 SCLK = !SCLK;
			#5 SCLK = !SCLK;
			//if(i>7) MOSI = 0;
		end
	endtask
/*	
	initial begin: CSV_Dump
		integer stim, cnt;  //-- ID of CSV file
		stim = $fopen("BLE_RX_stimuli.csv");
		if (!stim) begin
			$display("Couldn't open CSV file");
			$stop;
		end
		cnt = 0;
		$fdisplay(stim, "#, P0, P1, P2, P3, P4, P5");
		while (running) @(clock or running) begin
			$fdisplay(stim, "%0d,%1b,%1b,%1b,%1b,%1b", cnt, clock, reset, SS, SCLK, MOSI);
			cnt = cnt + 1;
		end
		$fclose(stim);
	end // CSV_Dump
*/
endmodule
