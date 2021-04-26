module DFFRAM (

    input               CLK,
    input               EN, // chip enable
    input  logic  [3:0] WE, //write mask
    input  logic [31:0] DI, //data input
    output logic [31:0] DO, // data output
    input  logic [11:0] A // address
);

localparam  DEPTH = 2**($bits(A));
reg [31:0] mem [0:DEPTH-1];         // 16 KBytes

initial begin
    $readmemh("/home/merl-lab/fyp/azadi/tests/hex/instruction.hex", mem);
end
  
always @(posedge CLK) begin
    if (EN == 1'b1) begin
        DO <= mem[A];
        if (WE[0]) mem[A][ 7: 0] <= DI[ 7: 0];
        if (WE[1]) mem[A][15: 8] <= DO[15: 8];
        if (WE[2]) mem[A][23:16] <= DI[23:16];
        if (WE[3]) mem[A][31:24] <= DI[31:24];
    end
end
endmodule 