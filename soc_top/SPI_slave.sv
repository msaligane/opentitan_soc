module SPI_slave #(
	parameter DATA_WIDTH = 'd32
)
(
	//inputs from Pads
	input reset,
	input SS, 
	input SCLK,
	input MOSI,
	
    output reg [DATA_WIDTH-1:0] REG_DIN,
    output reg valid
);

reg [DATA_WIDTH-1:0] REG_MISC; 
reg [DATA_WIDTH-1:0] command; 
reg [DATA_WIDTH-1:0] data_out;
reg [4:0] rcv_bit_count, prev_rcv_bit_count;


wire byte_end   = (rcv_bit_count == 5'b11111) && (prev_rcv_bit_count == 5'b11110);

wire SSEL_active = ~SS;     //SSEL is active low
wire SSEL_endmessage = SS;  //message stops at rising edge

wire MOSI_data = MOSI;

// Shift in data 
always @(posedge SCLK or negedge reset) begin 
	if (~reset) begin 
		command            <= 32'h00000000;
		rcv_bit_count      <= 5'b11111;
		prev_rcv_bit_count <= 5'b11111;

		valid              <= 1'b0;
	end 
	else begin 
		prev_rcv_bit_count <= rcv_bit_count; 
		if (SSEL_active) begin 
			rcv_bit_count <= rcv_bit_count + 1'b1; 
			command       <= {command [DATA_WIDTH-2:0], MOSI_data};

			if (byte_end) begin
				valid     <= 1'b1;
			end
			else begin
				valid     <= 1'b0;
			end
		end
		else begin
			command            <= 32'h00000000;
			rcv_bit_count      <= 5'b11111;
			prev_rcv_bit_count <= 5'b11111;

			valid     <= 1'b0;
    	end	
	end
end	

always @(posedge SSEL_endmessage or negedge reset) begin 
	if (~reset) begin
	   REG_DIN <= 32'h00000000;
	end 
	else begin 
		//SPI send out data upon posedge SSEL_endmessage
		if (valid) begin 
			REG_DIN <= command;
		end
		else begin
			REG_DIN <= REG_DIN;
		end
	end
end	
endmodule

