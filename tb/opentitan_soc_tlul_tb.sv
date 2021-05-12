import tlul_pkg::*;

module opentitan_soc_tlul_tb();

logic clk_i;
logic rst_ni;

tl_h2d_t tl_d_i;
tl_d2h_t tl_d_o;

// typedef enum logic [2:0] {
//     PutFullData     = 3'h0,
//     PutPartialData  = 3'h1,
//     Get             = 3'h4
// } tl_a_m_op;

// typedef struct packed {
//     logic                        a_valid;
//     tl_a_m_op                    a_opcode;
//     logic           [2:0]        a_param;
//     logic           [TL_SZW-1:0] a_size;
//     logic           [TL_AIW-1:0] a_source;
//     logic           [TL_AW-1:0]  a_address;
//     logic           [TL_DBW-1:0] a_mask;
//     logic           [TL_DW-1:0]  a_data;
//     logic                        d_ready;
// } tl_h2d_t;

// typedef struct packed {
//     logic                   d_valid;
//     tl_d_m_op               d_opcode;
//     logic             [2:0] d_param;
//     logic      [TL_SZW-1:0] d_size;
//     logic      [TL_AIW-1:0] d_source;
//     logic      [TL_DIW-1:0] d_sink;
//     logic      [TL_DW-1:0]  d_data;
//     logic                   d_error;
//     logic                   a_ready;
// } tl_d2h_t;

real CLOCK = 10.0;

data_mem_tlul tlul_wrapper (
        .clk_i(clk_i),
        .rst_ni(rst_ni),

        .tl_d_i(tl_d_i),
        .tl_d_o(tl_d_o)
);

always begin
    #(CLOCK/2)
    clk_i = ~clk_i;
end

task init_inputs();
    tl_d_i.a_valid = 0;
    tl_d_i.a_opcode = 0;
    tl_d_i.a_param = 0;
    tl_d_i.a_size = 0;
    tl_d_i.a_source = 0;
    tl_d_i.a_address = 0;
    tl_d_i.a_mask = 0;
    tl_d_i.a_data = 0;
    tl_d_i.d_ready = 0; 
endtask

initial begin
    clk_i = 0;
    rst_ni = 1;

    repeat(5);
    @(negedge clk_i);
    rst_ni = 0;
    init_inputs();

    @(negedge clk_i);
    @(negedge clk_i);
    rst_ni = 1;
    tl_d_i.a_valid  = 1;
    tl_d_i.a_opcode = PutFullData;
    tl_d_i.a_param = 0;
    tl_d_i.a_size = 2;
    tl_d_i.a_source = 0;
    tl_d_i.a_address = 'h10000000;
    tl_d_i.a_mask = 'hf;
    tl_d_i.a_data = 'h5a;
    tl_d_i.d_ready = 1; 
    
    @(negedge clk_i);
    // init_inputs();
    
    // @(negedge clk_i);
    // @(negedge clk_i);
    tl_d_i.a_valid  = 1;
    tl_d_i.a_opcode = Get;
    tl_d_i.a_param = 0;
    tl_d_i.a_size = 2;
    tl_d_i.a_source = 0;
    tl_d_i.a_address = 'h10000000;
    tl_d_i.a_mask = 'h0;
    tl_d_i.a_data = 0;
    tl_d_i.d_ready = 1; 

    repeat(5)
    @(negedge clk_i);
    $finish;

end

endmodule