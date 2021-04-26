// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// SECDED Decoder generated by
// util/design/secded_gen.py -m 7 -k 57 -s 1592631616 -c hsiao

module prim_secded_64_57_dec (
  input        [63:0] in,
  output logic [56:0] d_o,
  output logic [6:0] syndrome_o,
  output logic [1:0] err_o
);

  logic single_error;

  // Syndrome calculation
  assign syndrome_o[0] = ^(in & 64'h0303FFF800007FFF);
  assign syndrome_o[1] = ^(in & 64'h057C1FF801FF801F);
  assign syndrome_o[2] = ^(in & 64'h09BDE1F87E0781E1);
  assign syndrome_o[3] = ^(in & 64'h11DEEE3B8E388E22);
  assign syndrome_o[4] = ^(in & 64'h21EF76CDB2C93244);
  assign syndrome_o[5] = ^(in & 64'h41F7BB56D5525488);
  assign syndrome_o[6] = ^(in & 64'h81FBDDA769A46910);

  // Corrected output calculation
  assign d_o[0] = (syndrome_o == 7'h7) ^ in[0];
  assign d_o[1] = (syndrome_o == 7'hb) ^ in[1];
  assign d_o[2] = (syndrome_o == 7'h13) ^ in[2];
  assign d_o[3] = (syndrome_o == 7'h23) ^ in[3];
  assign d_o[4] = (syndrome_o == 7'h43) ^ in[4];
  assign d_o[5] = (syndrome_o == 7'hd) ^ in[5];
  assign d_o[6] = (syndrome_o == 7'h15) ^ in[6];
  assign d_o[7] = (syndrome_o == 7'h25) ^ in[7];
  assign d_o[8] = (syndrome_o == 7'h45) ^ in[8];
  assign d_o[9] = (syndrome_o == 7'h19) ^ in[9];
  assign d_o[10] = (syndrome_o == 7'h29) ^ in[10];
  assign d_o[11] = (syndrome_o == 7'h49) ^ in[11];
  assign d_o[12] = (syndrome_o == 7'h31) ^ in[12];
  assign d_o[13] = (syndrome_o == 7'h51) ^ in[13];
  assign d_o[14] = (syndrome_o == 7'h61) ^ in[14];
  assign d_o[15] = (syndrome_o == 7'he) ^ in[15];
  assign d_o[16] = (syndrome_o == 7'h16) ^ in[16];
  assign d_o[17] = (syndrome_o == 7'h26) ^ in[17];
  assign d_o[18] = (syndrome_o == 7'h46) ^ in[18];
  assign d_o[19] = (syndrome_o == 7'h1a) ^ in[19];
  assign d_o[20] = (syndrome_o == 7'h2a) ^ in[20];
  assign d_o[21] = (syndrome_o == 7'h4a) ^ in[21];
  assign d_o[22] = (syndrome_o == 7'h32) ^ in[22];
  assign d_o[23] = (syndrome_o == 7'h52) ^ in[23];
  assign d_o[24] = (syndrome_o == 7'h62) ^ in[24];
  assign d_o[25] = (syndrome_o == 7'h1c) ^ in[25];
  assign d_o[26] = (syndrome_o == 7'h2c) ^ in[26];
  assign d_o[27] = (syndrome_o == 7'h4c) ^ in[27];
  assign d_o[28] = (syndrome_o == 7'h34) ^ in[28];
  assign d_o[29] = (syndrome_o == 7'h54) ^ in[29];
  assign d_o[30] = (syndrome_o == 7'h64) ^ in[30];
  assign d_o[31] = (syndrome_o == 7'h38) ^ in[31];
  assign d_o[32] = (syndrome_o == 7'h58) ^ in[32];
  assign d_o[33] = (syndrome_o == 7'h68) ^ in[33];
  assign d_o[34] = (syndrome_o == 7'h70) ^ in[34];
  assign d_o[35] = (syndrome_o == 7'h1f) ^ in[35];
  assign d_o[36] = (syndrome_o == 7'h2f) ^ in[36];
  assign d_o[37] = (syndrome_o == 7'h4f) ^ in[37];
  assign d_o[38] = (syndrome_o == 7'h37) ^ in[38];
  assign d_o[39] = (syndrome_o == 7'h57) ^ in[39];
  assign d_o[40] = (syndrome_o == 7'h67) ^ in[40];
  assign d_o[41] = (syndrome_o == 7'h3b) ^ in[41];
  assign d_o[42] = (syndrome_o == 7'h5b) ^ in[42];
  assign d_o[43] = (syndrome_o == 7'h6b) ^ in[43];
  assign d_o[44] = (syndrome_o == 7'h73) ^ in[44];
  assign d_o[45] = (syndrome_o == 7'h3d) ^ in[45];
  assign d_o[46] = (syndrome_o == 7'h5d) ^ in[46];
  assign d_o[47] = (syndrome_o == 7'h6d) ^ in[47];
  assign d_o[48] = (syndrome_o == 7'h75) ^ in[48];
  assign d_o[49] = (syndrome_o == 7'h79) ^ in[49];
  assign d_o[50] = (syndrome_o == 7'h3e) ^ in[50];
  assign d_o[51] = (syndrome_o == 7'h5e) ^ in[51];
  assign d_o[52] = (syndrome_o == 7'h6e) ^ in[52];
  assign d_o[53] = (syndrome_o == 7'h76) ^ in[53];
  assign d_o[54] = (syndrome_o == 7'h7a) ^ in[54];
  assign d_o[55] = (syndrome_o == 7'h7c) ^ in[55];
  assign d_o[56] = (syndrome_o == 7'h7f) ^ in[56];

  // err_o calc. bit0: single error, bit1: double error
  assign single_error = ^syndrome_o;
  assign err_o[0] = single_error;
  assign err_o[1] = ~single_error & (|syndrome_o);

endmodule : prim_secded_64_57_dec
