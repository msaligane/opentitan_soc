///////////////////////////////////////////////////////////////////////////////////////////
//  Last Modified		: 10/12/20
//  Date Created   		: 02/10/19  
//  Revision 			: 1
//  Last Modified By	: 
//  First Author		: Sumanth Kamineni
//  Description 		: This code was based on http://fpga4fun.com/SPI2.html
///////////////////////////////////////////////////////////////////////////////////////////
 
module SPI_slave #(
	parameter DATA_WIDTH = 32
)
(
	//inputs from Pads
	input reset,
	input SS, 
	input SCLK,
	input MOSI,

	//outputs to Pads
	output MISO,
	
//SPI slave receiving data (data in)
  output reg [DATA_WIDTH-1:0] REG_DIN  , 
  output reg [DATA_WIDTH-1:0] REG_ADDR  , 
  
  
//SPI slave MISO inputs from other blocks
  input [DATA_WIDTH-1:0] REG_DOUT
);

reg [DATA_WIDTH-1:0] REG_MISC; 
reg [DATA_WIDTH-1:0] command; 
reg [DATA_WIDTH-1:0] data_out;
reg [4:0] rcv_bit_count, prev_rcv_bit_count;

wire first_edge = (rcv_bit_count == 5'b00000) && (prev_rcv_bit_count == 5'b11111);
wire byte_end   = (rcv_bit_count == 5'b11111) && (prev_rcv_bit_count != 5'b11111);

wire SSEL_active = ~SS;  //SSEL is active low
wire SSEL_endmessage = SS;  //message stops at rising edge

wire MOSI_data = MOSI;	//and for MOSI

//state machine variables
reg [2:0] state;
reg [2:0] nextstate;


//Control states
localparam RCV_CMD		= 8'b00000000;
//SPI slave receiving data (data in)
localparam RCV_DIN    = 8'b00000001;
localparam RCV_ADDR   = 8'b00000010;
localparam RCV_MISC   = 8'b00000011;
//SPI slave writting data (data out)
localparam WRT_MISC   = 8'b00000100;
localparam WRT_DOUT   = 8'b00000101;

always @ (*) begin
	nextstate = state;//default value
	if (~reset) begin
		nextstate = RCV_CMD;
	end 
	else begin
		case (state)
			RCV_CMD: begin
				if (SSEL_active) begin 
					if (byte_end) begin 
						if (command[7:0] == RCV_DIN)  
							nextstate = RCV_DIN;
						else if (command[7:0] == RCV_ADDR)  
							nextstate = RCV_ADDR; 
						else if (command[7:0] == RCV_MISC)  
							nextstate = RCV_MISC;
						else if (command[7:0] == WRT_MISC)  
							nextstate = WRT_MISC; 
						else if (command[7:0] == WRT_DOUT)  
							nextstate = WRT_DOUT; 
						else  
							nextstate = RCV_CMD; 
					end 
				end 
			end
			RCV_DIN: begin
				if (byte_end) begin 
					nextstate = RCV_CMD;
				end 
			end 
			RCV_ADDR: begin
				if (byte_end) begin 
					nextstate = RCV_CMD;
				end 
				
			end 			
			RCV_MISC: begin
				if (byte_end) begin 
					nextstate = RCV_CMD;
				end 
				
			end 
			WRT_MISC: begin
				if (byte_end) begin 
					nextstate = RCV_CMD;
				end 
				
			end 
			WRT_DOUT: begin
				if (byte_end) begin 
					nextstate = RCV_CMD;
				end 
				
			end
    default: begin
		if (SSEL_endmessage) begin 
			nextstate = RCV_CMD; 
		end 
    end

		endcase 
	end 
end

//state transition logic
always @ (posedge SCLK or negedge reset) begin
	if (~reset) begin
		state <= RCV_CMD;
	end
	else begin
		state <= nextstate;
	end
end

// Shift in data 
always @(posedge SCLK or negedge reset) begin 
	if (~reset) begin 
		command <= 32'h00000000;
		rcv_bit_count <= 5'b11111;
		prev_rcv_bit_count <= 5'b11111;
	end 
	else begin 
		prev_rcv_bit_count <= rcv_bit_count; 
		if (SSEL_active) begin 
			rcv_bit_count <= rcv_bit_count + 1'b1; 
			command <= {command [DATA_WIDTH-2:0], MOSI_data};
		end
		else begin
			rcv_bit_count <= 5'b11111;
			prev_rcv_bit_count <= 5'b11111;
			command <= 32'h00000000;
    		end	
	end
end	

assign MISO = data_out[DATA_WIDTH-1];
//Get done signal when read and write end (byte_end = 1)
always @(posedge SCLK or negedge reset) begin 
	if (~reset) begin 
   		data_out 	<= 0;
	end 
	else if (nextstate == WRT_MISC) begin
		if (state == WRT_MISC) begin
			data_out <= {data_out [DATA_WIDTH-2:0], 1'b0};
		end
		else begin	
			data_out <= REG_MISC;
		end
	end
	else if (nextstate == WRT_DOUT) begin
		if (state == WRT_DOUT) begin
			data_out <= {data_out [DATA_WIDTH-2:0], 1'b0};
		end
		else begin	
			data_out <= REG_DOUT;
		end
	end
end	
always @(posedge SSEL_endmessage or negedge reset) begin 
	if (~reset) begin
	   REG_DIN	   <= 32'h80800733;
	   REG_ADDR	   <= 32'h00000000;
	   REG_MISC        <= 32'h00000BBF;
	end 
	else begin 
		//SPI slave receiving 
		if (state == RCV_MISC && byte_end) begin 
			REG_MISC <= command;
		end
		if (state == RCV_DIN && byte_end) begin 
			REG_DIN <= command;
		end
		if (state == RCV_ADDR && byte_end) begin 
			REG_ADDR <= command;
		end
	end
end	
endmodule

