module opentitan_soc_top_tb_jtag();

    parameter logic [31:0] JTAG_ID = 32'h 0000_0001,
    parameter logic DirectDmiTap = 1'b1

    logic clk_i;
    logic rst_ni;

    // jtag interface 
    logic jtag_tck_i;
    logic jtag_tms_i;
    logic jtag_trst_ni;
    logic jtag_tdi_i;
    logic jtag_tdo_o;

    logic [19:0] gpio_i;
    logic [19:0] gpio_o;

    opentitan_soc_top #(
        JTAG_ID = 32'h 0000_0001,
        DirectDmiTap = 1'b1
    )
    uut
    (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        
        .jtag_tck_i(jtag_tck_i),
        .jtag_tms_i(jtag_tms_i),
        .jtag_trst_ni(jtag_trst_ni),
        .jtag_tdi_i(jtag_tdi_i),
        .jtag_tdo_o(jtag_tdo_o),
        
        .gpio_i(gpio_i),
        .gpio_o(gpio_o)
    );



endmodule