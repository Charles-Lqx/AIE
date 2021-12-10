// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : TestAxi4WriteMaster
// Git hash  : 0979837f915a50e3cecc964d3b3d2423bf347c03



module TestAxi4WriteMaster (
  input               fifoValid,
  output reg          fifoReady,
  input      [31:0]   fifoPayload,
  output              awValid,
  input               awReady,
  output reg [31:0]   awaddr,
  output     [0:0]    awid,
  output     [3:0]    awregion,
  output     [7:0]    awlen,
  output     [2:0]    awsize,
  output     [1:0]    awburst,
  output     [0:0]    awlock,
  output     [3:0]    awcache,
  output     [3:0]    awqos,
  output     [2:0]    awprot,
  output reg          wValid,
  input               wReady,
  output reg [31:0]   wdata,
  output     [3:0]    wstrb,
  output              wlast,
  input               bValid,
  output              bReady,
  input      [0:0]    bid,
  input      [1:0]    bresp,
  output              arValid,
  input               arReady,
  output     [31:0]   araddr,
  output     [0:0]    arid,
  output     [3:0]    arregion,
  output     [7:0]    arlen,
  output     [2:0]    arsize,
  output     [1:0]    arburst,
  output     [0:0]    arlock,
  output     [3:0]    arcache,
  output     [3:0]    arqos,
  output     [2:0]    arprot,
  input               rValid,
  output              rReady,
  input      [31:0]   rdata,
  input      [0:0]    rid,
  input      [1:0]    rresp,
  input               rlast,
  input               clk,
  input               reset
);
  wire       [4:0]    _zz__zz_wdata_1;
  wire       [0:0]    _zz__zz_wdata_1_1;
  wire       [4:0]    _zz__zz_when_Axi4WriteMaster_l53_1;
  wire       [0:0]    _zz__zz_when_Axi4WriteMaster_l53_1_1;
  wire       [3:0]    _zz__zz_5;
  wire       [1:0]    _zz_Axi4Incr_alignMask;
  wire       [11:0]   _zz_Axi4Incr_base;
  wire       [11:0]   _zz_Axi4Incr_base_1;
  wire       [11:0]   _zz_Axi4Incr_baseIncr;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_1;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_2;
  reg        [11:0]   _zz_Axi4Incr_result;
  wire       [10:0]   _zz_Axi4Incr_result_1;
  wire       [0:0]    _zz_Axi4Incr_result_2;
  wire       [9:0]    _zz_Axi4Incr_result_3;
  wire       [1:0]    _zz_Axi4Incr_result_4;
  wire       [8:0]    _zz_Axi4Incr_result_5;
  wire       [2:0]    _zz_Axi4Incr_result_6;
  wire       [7:0]    _zz_Axi4Incr_result_7;
  wire       [3:0]    _zz_Axi4Incr_result_8;
  wire       [6:0]    _zz_Axi4Incr_result_9;
  wire       [4:0]    _zz_Axi4Incr_result_10;
  wire       [5:0]    _zz_Axi4Incr_result_11;
  wire       [5:0]    _zz_Axi4Incr_result_12;
  reg        [31:0]   _zz_wdata_3;
  wire       [3:0]    _zz_wdata_4;
  reg                 _zz_wdata;
  reg                 _zz_1;
  reg        [4:0]    _zz_wdata_1;
  reg        [4:0]    _zz_wdata_2;
  wire                _zz_when_Axi4WriteMaster_l61;
  wire                _zz_2;
  reg                 _zz_when_Axi4WriteMaster_l53;
  reg                 _zz_3;
  reg        [4:0]    _zz_when_Axi4WriteMaster_l53_1;
  reg        [4:0]    _zz_when_Axi4WriteMaster_l53_2;
  wire                _zz_when_Axi4WriteMaster_l53_3;
  wire                _zz_4;
  reg        [31:0]   fifoDataBuffer_0;
  reg        [31:0]   fifoDataBuffer_1;
  reg        [31:0]   fifoDataBuffer_2;
  reg        [31:0]   fifoDataBuffer_3;
  reg        [31:0]   fifoDataBuffer_4;
  reg        [31:0]   fifoDataBuffer_5;
  reg        [31:0]   fifoDataBuffer_6;
  reg        [31:0]   fifoDataBuffer_7;
  reg        [31:0]   fifoDataBuffer_8;
  reg        [31:0]   fifoDataBuffer_9;
  reg        [31:0]   fifoDataBuffer_10;
  reg        [31:0]   fifoDataBuffer_11;
  reg        [31:0]   fifoDataBuffer_12;
  reg        [31:0]   fifoDataBuffer_13;
  reg        [31:0]   fifoDataBuffer_14;
  reg        [31:0]   fifoDataBuffer_15;
  wire                axi4Interface_fifo_fire;
  wire       [15:0]   _zz_5;
  wire                when_Axi4WriteMaster_l53;
  wire                when_Axi4WriteMaster_l61;
  reg        [31:0]   axi4Interface_address;
  wire                axi4Interface_t_aw_fire;
  wire       [1:0]    Axi4Incr_validSize;
  reg        [31:0]   Axi4Incr_result;
  wire       [19:0]   Axi4Incr_highCat;
  wire       [2:0]    Axi4Incr_sizeValue;
  wire       [11:0]   Axi4Incr_alignMask;
  wire       [11:0]   Axi4Incr_base;
  wire       [11:0]   Axi4Incr_baseIncr;
  reg        [1:0]    _zz_Axi4Incr_wrapCase;
  wire       [2:0]    Axi4Incr_wrapCase;
  reg        [31:0]   axi4Interface_initialAddress;
  wire                when_Axi4WriteMaster_l87;
  wire                axi4Interface_t_w_fire;
  wire                when_Axi4WriteMaster_l124;

  assign _zz__zz_wdata_1_1 = _zz_wdata;
  assign _zz__zz_wdata_1 = {4'd0, _zz__zz_wdata_1_1};
  assign _zz__zz_when_Axi4WriteMaster_l53_1_1 = _zz_when_Axi4WriteMaster_l53;
  assign _zz__zz_when_Axi4WriteMaster_l53_1 = {4'd0, _zz__zz_when_Axi4WriteMaster_l53_1_1};
  assign _zz__zz_5 = _zz_when_Axi4WriteMaster_l53_2[3:0];
  assign _zz_Axi4Incr_alignMask = {(2'b01 < Axi4Incr_validSize),(2'b00 < Axi4Incr_validSize)};
  assign _zz_Axi4Incr_base_1 = axi4Interface_address[11 : 0];
  assign _zz_Axi4Incr_base = _zz_Axi4Incr_base_1;
  assign _zz_Axi4Incr_baseIncr = {9'd0, Axi4Incr_sizeValue};
  assign _zz_Axi4Incr_wrapCase_1 = {1'd0, Axi4Incr_validSize};
  assign _zz_Axi4Incr_wrapCase_2 = {1'd0, _zz_Axi4Incr_wrapCase};
  assign _zz_wdata_4 = _zz_wdata_2[3:0];
  assign _zz_Axi4Incr_result_1 = Axi4Incr_base[11 : 1];
  assign _zz_Axi4Incr_result_2 = Axi4Incr_baseIncr[0 : 0];
  assign _zz_Axi4Incr_result_3 = Axi4Incr_base[11 : 2];
  assign _zz_Axi4Incr_result_4 = Axi4Incr_baseIncr[1 : 0];
  assign _zz_Axi4Incr_result_5 = Axi4Incr_base[11 : 3];
  assign _zz_Axi4Incr_result_6 = Axi4Incr_baseIncr[2 : 0];
  assign _zz_Axi4Incr_result_7 = Axi4Incr_base[11 : 4];
  assign _zz_Axi4Incr_result_8 = Axi4Incr_baseIncr[3 : 0];
  assign _zz_Axi4Incr_result_9 = Axi4Incr_base[11 : 5];
  assign _zz_Axi4Incr_result_10 = Axi4Incr_baseIncr[4 : 0];
  assign _zz_Axi4Incr_result_11 = Axi4Incr_base[11 : 6];
  assign _zz_Axi4Incr_result_12 = Axi4Incr_baseIncr[5 : 0];
  always @(*) begin
    case(Axi4Incr_wrapCase)
      3'b000 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_1,_zz_Axi4Incr_result_2};
      end
      3'b001 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_3,_zz_Axi4Incr_result_4};
      end
      3'b010 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_5,_zz_Axi4Incr_result_6};
      end
      3'b011 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_7,_zz_Axi4Incr_result_8};
      end
      3'b100 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_9,_zz_Axi4Incr_result_10};
      end
      default : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_11,_zz_Axi4Incr_result_12};
      end
    endcase
  end

  always @(*) begin
    case(_zz_wdata_4)
      4'b0000 : begin
        _zz_wdata_3 = fifoDataBuffer_0;
      end
      4'b0001 : begin
        _zz_wdata_3 = fifoDataBuffer_1;
      end
      4'b0010 : begin
        _zz_wdata_3 = fifoDataBuffer_2;
      end
      4'b0011 : begin
        _zz_wdata_3 = fifoDataBuffer_3;
      end
      4'b0100 : begin
        _zz_wdata_3 = fifoDataBuffer_4;
      end
      4'b0101 : begin
        _zz_wdata_3 = fifoDataBuffer_5;
      end
      4'b0110 : begin
        _zz_wdata_3 = fifoDataBuffer_6;
      end
      4'b0111 : begin
        _zz_wdata_3 = fifoDataBuffer_7;
      end
      4'b1000 : begin
        _zz_wdata_3 = fifoDataBuffer_8;
      end
      4'b1001 : begin
        _zz_wdata_3 = fifoDataBuffer_9;
      end
      4'b1010 : begin
        _zz_wdata_3 = fifoDataBuffer_10;
      end
      4'b1011 : begin
        _zz_wdata_3 = fifoDataBuffer_11;
      end
      4'b1100 : begin
        _zz_wdata_3 = fifoDataBuffer_12;
      end
      4'b1101 : begin
        _zz_wdata_3 = fifoDataBuffer_13;
      end
      4'b1110 : begin
        _zz_wdata_3 = fifoDataBuffer_14;
      end
      default : begin
        _zz_wdata_3 = fifoDataBuffer_15;
      end
    endcase
  end

  always @(*) begin
    _zz_wdata = 1'b0;
    if(axi4Interface_t_w_fire) begin
      _zz_wdata = 1'b1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(_zz_when_Axi4WriteMaster_l61) begin
      _zz_1 = 1'b1;
    end
  end

  assign _zz_when_Axi4WriteMaster_l61 = (_zz_wdata_2 == 5'h10);
  assign _zz_2 = (_zz_when_Axi4WriteMaster_l61 && _zz_wdata);
  always @(*) begin
    if(_zz_2) begin
      _zz_wdata_1 = 5'h0;
    end else begin
      _zz_wdata_1 = (_zz_wdata_2 + _zz__zz_wdata_1);
    end
    if(_zz_1) begin
      _zz_wdata_1 = 5'h0;
    end
  end

  always @(*) begin
    _zz_when_Axi4WriteMaster_l53 = 1'b0;
    if(axi4Interface_fifo_fire) begin
      _zz_when_Axi4WriteMaster_l53 = 1'b1;
    end
  end

  always @(*) begin
    _zz_3 = 1'b0;
    if(when_Axi4WriteMaster_l61) begin
      _zz_3 = 1'b1;
    end
  end

  assign _zz_when_Axi4WriteMaster_l53_3 = (_zz_when_Axi4WriteMaster_l53_2 == 5'h10);
  assign _zz_4 = (_zz_when_Axi4WriteMaster_l53_3 && _zz_when_Axi4WriteMaster_l53);
  always @(*) begin
    if(_zz_4) begin
      _zz_when_Axi4WriteMaster_l53_1 = 5'h0;
    end else begin
      _zz_when_Axi4WriteMaster_l53_1 = (_zz_when_Axi4WriteMaster_l53_2 + _zz__zz_when_Axi4WriteMaster_l53_1);
    end
    if(_zz_3) begin
      _zz_when_Axi4WriteMaster_l53_1 = 5'h0;
    end
  end

  assign axi4Interface_fifo_fire = (fifoValid && fifoReady);
  assign _zz_5 = ({15'd0,1'b1} <<< _zz__zz_5);
  always @(*) begin
    fifoReady = 1'b0;
    if(when_Axi4WriteMaster_l53) begin
      fifoReady = 1'b1;
    end
  end

  assign when_Axi4WriteMaster_l53 = (! _zz_when_Axi4WriteMaster_l53_3);
  assign when_Axi4WriteMaster_l61 = (_zz_when_Axi4WriteMaster_l61 && (bresp == 2'b00));
  assign axi4Interface_t_aw_fire = (awValid && awReady);
  assign Axi4Incr_validSize = awsize[1 : 0];
  assign Axi4Incr_highCat = axi4Interface_address[31 : 12];
  assign Axi4Incr_sizeValue = {(2'b10 == Axi4Incr_validSize),{(2'b01 == Axi4Incr_validSize),(2'b00 == Axi4Incr_validSize)}};
  assign Axi4Incr_alignMask = {10'd0, _zz_Axi4Incr_alignMask};
  assign Axi4Incr_base = (_zz_Axi4Incr_base & (~ Axi4Incr_alignMask));
  assign Axi4Incr_baseIncr = (Axi4Incr_base + _zz_Axi4Incr_baseIncr);
  always @(*) begin
    casez(awlen)
      8'b????1??? : begin
        _zz_Axi4Incr_wrapCase = 2'b11;
      end
      8'b????01?? : begin
        _zz_Axi4Incr_wrapCase = 2'b10;
      end
      8'b????001? : begin
        _zz_Axi4Incr_wrapCase = 2'b01;
      end
      default : begin
        _zz_Axi4Incr_wrapCase = 2'b00;
      end
    endcase
  end

  assign Axi4Incr_wrapCase = (_zz_Axi4Incr_wrapCase_1 + _zz_Axi4Incr_wrapCase_2);
  always @(*) begin
    case(awburst)
      2'b00 : begin
        Axi4Incr_result = axi4Interface_address;
      end
      2'b10 : begin
        Axi4Incr_result = {Axi4Incr_highCat,_zz_Axi4Incr_result};
      end
      default : begin
        Axi4Incr_result = {Axi4Incr_highCat,Axi4Incr_baseIncr};
      end
    endcase
  end

  assign awValid = wValid;
  assign when_Axi4WriteMaster_l87 = (_zz_wdata_2 == 5'h0);
  always @(*) begin
    if(_zz_when_Axi4WriteMaster_l61) begin
      awaddr = axi4Interface_address;
    end else begin
      awaddr = axi4Interface_initialAddress;
    end
  end

  assign awid = 1'b0;
  assign awregion = 4'b0000;
  assign awburst = 2'b01;
  assign awlen = 8'h0f;
  assign awsize = 3'b100;
  assign awlock = 1'b0;
  assign awcache = 4'b0000;
  assign awqos = 4'b0000;
  assign awprot = 3'b000;
  always @(*) begin
    wdata = 32'h0;
    if(wValid) begin
      wdata = _zz_wdata_3;
    end
  end

  assign axi4Interface_t_w_fire = (wValid && wReady);
  always @(*) begin
    wValid = 1'b0;
    if(when_Axi4WriteMaster_l124) begin
      wValid = 1'b1;
    end
  end

  assign when_Axi4WriteMaster_l124 = ((5'h0 < _zz_when_Axi4WriteMaster_l53_2) && (! _zz_when_Axi4WriteMaster_l61));
  assign wstrb = 4'b1111;
  assign wlast = (_zz_wdata_2 == 5'h0f);
  assign bReady = 1'b0;
  assign araddr = 32'h0;
  assign arid = 1'b0;
  assign arregion = 4'b0000;
  assign arburst = 2'b01;
  assign arlen = 8'h0f;
  assign arsize = 3'b100;
  assign arlock = 1'b0;
  assign arcache = 4'b0000;
  assign arqos = 4'b0000;
  assign arprot = 3'b000;
  assign arValid = 1'b0;
  assign rReady = 1'b0;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_wdata_2 <= 5'h0;
      _zz_when_Axi4WriteMaster_l53_2 <= 5'h0;
      fifoDataBuffer_0 <= 32'h0;
      fifoDataBuffer_1 <= 32'h0;
      fifoDataBuffer_2 <= 32'h0;
      fifoDataBuffer_3 <= 32'h0;
      fifoDataBuffer_4 <= 32'h0;
      fifoDataBuffer_5 <= 32'h0;
      fifoDataBuffer_6 <= 32'h0;
      fifoDataBuffer_7 <= 32'h0;
      fifoDataBuffer_8 <= 32'h0;
      fifoDataBuffer_9 <= 32'h0;
      fifoDataBuffer_10 <= 32'h0;
      fifoDataBuffer_11 <= 32'h0;
      fifoDataBuffer_12 <= 32'h0;
      fifoDataBuffer_13 <= 32'h0;
      fifoDataBuffer_14 <= 32'h0;
      fifoDataBuffer_15 <= 32'h0;
      axi4Interface_address <= 32'h0;
      axi4Interface_initialAddress <= 32'h0;
    end else begin
      _zz_wdata_2 <= _zz_wdata_1;
      _zz_when_Axi4WriteMaster_l53_2 <= _zz_when_Axi4WriteMaster_l53_1;
      if(axi4Interface_fifo_fire) begin
        if(_zz_5[0]) begin
          fifoDataBuffer_0 <= fifoPayload;
        end
        if(_zz_5[1]) begin
          fifoDataBuffer_1 <= fifoPayload;
        end
        if(_zz_5[2]) begin
          fifoDataBuffer_2 <= fifoPayload;
        end
        if(_zz_5[3]) begin
          fifoDataBuffer_3 <= fifoPayload;
        end
        if(_zz_5[4]) begin
          fifoDataBuffer_4 <= fifoPayload;
        end
        if(_zz_5[5]) begin
          fifoDataBuffer_5 <= fifoPayload;
        end
        if(_zz_5[6]) begin
          fifoDataBuffer_6 <= fifoPayload;
        end
        if(_zz_5[7]) begin
          fifoDataBuffer_7 <= fifoPayload;
        end
        if(_zz_5[8]) begin
          fifoDataBuffer_8 <= fifoPayload;
        end
        if(_zz_5[9]) begin
          fifoDataBuffer_9 <= fifoPayload;
        end
        if(_zz_5[10]) begin
          fifoDataBuffer_10 <= fifoPayload;
        end
        if(_zz_5[11]) begin
          fifoDataBuffer_11 <= fifoPayload;
        end
        if(_zz_5[12]) begin
          fifoDataBuffer_12 <= fifoPayload;
        end
        if(_zz_5[13]) begin
          fifoDataBuffer_13 <= fifoPayload;
        end
        if(_zz_5[14]) begin
          fifoDataBuffer_14 <= fifoPayload;
        end
        if(_zz_5[15]) begin
          fifoDataBuffer_15 <= fifoPayload;
        end
      end
      if(axi4Interface_t_aw_fire) begin
        axi4Interface_address <= Axi4Incr_result;
      end
      if(when_Axi4WriteMaster_l87) begin
        axi4Interface_initialAddress <= axi4Interface_address;
      end
    end
  end


endmodule
