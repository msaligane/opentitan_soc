module opentitan_soc_top_tb #(
	parameter logic [31:0] JTAG_ID = 32'h 0000_0001,
	parameter logic DirectDmiTap = 1'b1
)();

logic clk_i;
logic rst_ni;

logic uart_tx;
logic uart_rx;

logic gpio_i;
logic gpio_o;

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
	uart_rx      = 0;
endtask

always begin
	#(CLOCK/2)
	clk_i = ~clk_i;
end

initial begin
	clk_i  = 0;
	rst_ni = 0;

	repeat(4)
	@(negedge clk_i)
	rst_ni = 0;
	init_inputs();
	
	@(negedge clk_i)
	rst_ni = 1;

	@(negedge clk_i)
	#2000
	$finish;

end


endmodule
