/* verilator lint_off LATCH */
module prim_clock_gating (
  input  logic  clk_i,
  input  logic  en_i,
  input  logic  test_en_i,
  output logic  clk_o
);

  logic en_latch;

  always_comb begin
    if (!clk_i) begin
      en_latch = en_i | test_en_i;
    end
  end
  assign clk_o = en_latch & clk_i;

endmodule
/* verilator lint_on LATCH */

