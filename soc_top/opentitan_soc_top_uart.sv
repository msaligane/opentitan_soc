`timescale 1ns / 1ps

module tbprog #(
	parameter logic [31:0] JTAG_ID = 32'h 0000_0001,
	parameter logic DirectDmiTap = 1'b1,  
    parameter FILENAME="/afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/opentitan_soc/tests/hex/test.hex"
)();

logic mprj_ready;
logic r_Rx_Serial; // used by task UART_WRITE_BYTE

parameter c_BIT_PERIOD = 8681; // used by task UART_WRITE_BYTE
parameter c_CLOCK_PERIOD_NS = 100;
logic clk_i = 0;

integer instr_count = 0;
logic [31:0] INSTR[(256*64)-1 : 0];
logic ready;
logic test;

opentitan_soc_top #(
	.JTAG_ID      (JTAG_ID),
	.DirectDmiTap (DirectDmiTap)
) 
ot_soc_top 
(
    .clk_i     (clk_i),
    .rst_ni    (rst_ni),

    .uart_rx_i (r_Rx_Serial),
    .uart_rx   ('b0),
	.uart_tx   ('b0),

    // JTAG interface 
    // .jtag_tck_i(jtag_tck_i),
    // .jtag_tms_i(jtag_tms_i),
    // .jtag_trst_ni(jtag_trst_ni),
    // .jtag_tdi_i(jtag_tdi_i),
    // .jtag_tdo_o(jtag_tdo_o),

	// GPIO interface
    .gpio_i  ('b0),
    .gpio_o  ('b0)
);

always @ ( posedge clk_i ) begin
  if (mprj_ready) begin
    ready <= 1'b1;
  end else begin
    ready <= 1'b0;
  end
end

initial begin
    $readmemh(FILENAME,INSTR);
end

task UART_WRITE_BYTE;
    input [7:0] i_Data;
    integer     ii;
    begin
        // Send Start Bit
        r_Rx_Serial <= 1'b0;
        #(c_BIT_PERIOD);
        #1000;

        // Send Data Byte
        for (ii=0; ii<8; ii=ii+1) begin
            r_Rx_Serial <= i_Data[ii];
            #(c_BIT_PERIOD);
        end

        // Send Stop Bit
        r_Rx_Serial <= 1'b1;
        #(c_BIT_PERIOD);
     end
endtask // UART_WRITE_BYTE

initial begin
        test = 1'b0;
  #1000 test = 1'b1;
end

always
    #(c_CLOCK_PERIOD_NS/2) clk_i <= !clk_i;

initial begin
    clk_i        = 1'b0;
    r_Rx_Serial <= 1'b1;
    #2000;
    while (!ready && test) begin
      @(posedge clk_i)
      r_Rx_Serial <= 1'b1;
    end
    while (instr_count<255 && INSTR[instr_count]!=32'h00000FFF) begin
        @(posedge clk_i);
        UART_WRITE_BYTE(INSTR[instr_count][31:24]);
        @(posedge clk_i);
        UART_WRITE_BYTE(INSTR[instr_count][23:16]);
        @(posedge clk_i);
        UART_WRITE_BYTE(INSTR[instr_count][15:8]);
        @(posedge clk_i);
        UART_WRITE_BYTE(INSTR[instr_count][7:0]);
        @(posedge clk_i);
        instr_count = instr_count + 1'b1;
    end
    @(posedge clk_i);
    UART_WRITE_BYTE(8'h00);
    @(posedge clk_i);
    UART_WRITE_BYTE(8'h00);
    @(posedge clk_i);
    UART_WRITE_BYTE(8'h0F);
    @(posedge clk_i);
    UART_WRITE_BYTE(8'hFF);
    @(posedge clk_i);
    $finish;
end

endmodule