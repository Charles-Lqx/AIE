// Generator : SpinalHDL v1.6.2    git head : 6f25d9a541c42028018402843d80c1b0948f0d13
// Component : TestOpWidth
// Git hash  : f989bf24ab0bcb5ae6852e7d2328213ee0ff8b46

`timescale 1ns/1ps 

module TestOpWidth (
  input      [19:0]   a,
  input      [7:0]    b,
  output     [19:0]   c1,
  output     [15:0]   c2,
  output     [23:0]   c3,
  output     [15:0]   c4,
  output     [15:0]   c5,
  output              bo
);

  wire       [19:0]   _zz_c1;
  wire       [19:0]   _zz_c4;
  wire       [19:0]   _zz_c5;
  wire       [19:0]   _zz_bo;
  wire       [7:0]    _zz_bo_1;

  assign _zz_c1 = {12'd0, b};
  assign _zz_c4 = (a / b);
  assign _zz_c5 = (a % b);
  assign _zz_bo_1 = 8'h0;
  assign _zz_bo = {12'd0, _zz_bo_1};
  assign c1 = (a + _zz_c1);
  assign c2 = 16'h0;
  assign c3 = (a * 4'b1000);
  assign c4 = _zz_c4[15:0];
  assign c5 = _zz_c5[15:0];
  assign bo = (a == _zz_bo);

endmodule
