// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Fifo2Axi4WriteOnlyMasterInterface
// Git hash  : d20cd190a2dadeaddfed7ca5c0e660977f8aa0ce



module Fifo2Axi4WriteOnlyMasterInterface (
  input               fifoInterface_valid,
  output              fifoInterface_ready,
  input      [31:0]   fifoInterface_payload,
  output              aw_valid,
  input               aw_ready,
  output     [31:0]   aw_payload_addr,
  output     [3:0]    aw_payload_region,
  output     [7:0]    aw_payload_len,
  output     [2:0]    aw_payload_size,
  output     [1:0]    aw_payload_burst,
  output     [3:0]    aw_payload_cache,
  output     [3:0]    aw_payload_qos,
  output     [2:0]    aw_payload_prot,
  output              w_valid,
  input               w_ready,
  output     [31:0]   w_payload_data,
  output     [3:0]    w_payload_strb,
  output              w_payload_last,
  input               b_valid,
  output              b_ready,
  input      [1:0]    b_payload_resp,
  input               resetn,
  input               clk
);
  wire                axi4Interconnection_fifoReady;
  wire                axi4Interconnection_awValid;
  wire       [31:0]   axi4Interconnection_awaddr;
  wire       [3:0]    axi4Interconnection_awregion;
  wire       [7:0]    axi4Interconnection_awlen;
  wire       [2:0]    axi4Interconnection_awsize;
  wire       [1:0]    axi4Interconnection_awburst;
  wire       [3:0]    axi4Interconnection_awcache;
  wire       [3:0]    axi4Interconnection_awqos;
  wire       [2:0]    axi4Interconnection_awprot;
  wire                axi4Interconnection_wValid;
  wire       [31:0]   axi4Interconnection_wdata;
  wire       [3:0]    axi4Interconnection_wstrb;
  wire                axi4Interconnection_wlast;
  wire                axi4Interconnection_bReady;
  wire                fifoInstance_io_push_ready;
  wire                fifoInstance_io_pop_valid;
  wire       [31:0]   fifoInstance_io_pop_payload;
  wire       [5:0]    fifoInstance_io_occupancy;
  wire       [5:0]    fifoInstance_io_availability;

  Axi4WriteOnlyMasterInterface axi4Interconnection (
    .fifoValid      (fifoInstance_io_pop_valid      ), //i
    .fifoReady      (axi4Interconnection_fifoReady  ), //o
    .fifoPayload    (fifoInstance_io_pop_payload    ), //i
    .awValid        (axi4Interconnection_awValid    ), //o
    .awReady        (aw_ready                       ), //i
    .awaddr         (axi4Interconnection_awaddr     ), //o
    .awregion       (axi4Interconnection_awregion   ), //o
    .awlen          (axi4Interconnection_awlen      ), //o
    .awsize         (axi4Interconnection_awsize     ), //o
    .awburst        (axi4Interconnection_awburst    ), //o
    .awcache        (axi4Interconnection_awcache    ), //o
    .awqos          (axi4Interconnection_awqos      ), //o
    .awprot         (axi4Interconnection_awprot     ), //o
    .wValid         (axi4Interconnection_wValid     ), //o
    .wReady         (w_ready                        ), //i
    .wdata          (axi4Interconnection_wdata      ), //o
    .wstrb          (axi4Interconnection_wstrb      ), //o
    .wlast          (axi4Interconnection_wlast      ), //o
    .bValid         (b_valid                        ), //i
    .bReady         (axi4Interconnection_bReady     ), //o
    .bresp          (b_payload_resp                 ), //i
    .resetn         (resetn                         ), //i
    .clk            (clk                            )  //i
  );
  StreamFifo fifoInstance (
    .io_push_valid      (fifoInterface_valid            ), //i
    .io_push_ready      (fifoInstance_io_push_ready     ), //o
    .io_push_payload    (fifoInterface_payload          ), //i
    .io_pop_valid       (fifoInstance_io_pop_valid      ), //o
    .io_pop_ready       (axi4Interconnection_fifoReady  ), //i
    .io_pop_payload     (fifoInstance_io_pop_payload    ), //o
    .io_flush           (1'b0                           ), //i
    .io_occupancy       (fifoInstance_io_occupancy      ), //o
    .io_availability    (fifoInstance_io_availability   ), //o
    .clk                (clk                            ), //i
    .resetn             (resetn                         )  //i
  );
  assign fifoInterface_ready = fifoInstance_io_push_ready;
  assign aw_valid = axi4Interconnection_awValid;
  assign aw_payload_addr = axi4Interconnection_awaddr;
  assign aw_payload_region = axi4Interconnection_awregion;
  assign aw_payload_len = axi4Interconnection_awlen;
  assign aw_payload_size = axi4Interconnection_awsize;
  assign aw_payload_burst = axi4Interconnection_awburst;
  assign aw_payload_cache = axi4Interconnection_awcache;
  assign aw_payload_qos = axi4Interconnection_awqos;
  assign aw_payload_prot = axi4Interconnection_awprot;
  assign w_valid = axi4Interconnection_wValid;
  assign w_payload_data = axi4Interconnection_wdata;
  assign w_payload_strb = axi4Interconnection_wstrb;
  assign w_payload_last = axi4Interconnection_wlast;
  assign b_ready = axi4Interconnection_bReady;

endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               resetn
);
  reg        [31:0]   _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [4:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [4:0]    logic_pushPtr_valueNext;
  reg        [4:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [4:0]    logic_popPtr_valueNext;
  reg        [4:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire                when_Stream_l933;
  wire       [4:0]    logic_ptrDif;
  reg [31:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_pop_payload = 1'b1;
  always @(posedge clk) begin
    if(_zz_io_pop_payload) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= io_push_payload;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l933) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module Axi4WriteOnlyMasterInterface (
  input               fifoValid,
  output reg          fifoReady,
  input      [31:0]   fifoPayload,
  output              awValid,
  input               awReady,
  output reg [31:0]   awaddr,
  output     [3:0]    awregion,
  output     [7:0]    awlen,
  output     [2:0]    awsize,
  output     [1:0]    awburst,
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
  input      [1:0]    bresp,
  input               resetn,
  input               clk
);
  wire       [5:0]    _zz__zz_writeCounter_1;
  wire       [0:0]    _zz__zz_writeCounter_1_1;
  wire       [5:0]    _zz__zz_handshakeCounter_1;
  wire       [0:0]    _zz__zz_handshakeCounter_1_1;
  wire       [4:0]    _zz__zz_5;
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
  reg        [31:0]   _zz_wdata;
  wire       [4:0]    _zz_wdata_1;
  reg                 _zz_writeCounter;
  reg                 _zz_1;
  reg        [5:0]    _zz_writeCounter_1;
  reg        [5:0]    writeCounter /* verilator public */ ;
  wire                _zz_when_Axi4WriteOnlyMaster_l92;
  wire                _zz_2;
  reg                 _zz_handshakeCounter;
  reg                 _zz_3;
  reg        [5:0]    _zz_handshakeCounter_1;
  reg        [5:0]    handshakeCounter /* verilator public */ ;
  wire                _zz_when_Axi4WriteOnlyMaster_l55;
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
  reg        [31:0]   fifoDataBuffer_16;
  reg        [31:0]   fifoDataBuffer_17;
  reg        [31:0]   fifoDataBuffer_18;
  reg        [31:0]   fifoDataBuffer_19;
  reg        [31:0]   fifoDataBuffer_20;
  reg        [31:0]   fifoDataBuffer_21;
  reg        [31:0]   fifoDataBuffer_22;
  reg        [31:0]   fifoDataBuffer_23;
  reg        [31:0]   fifoDataBuffer_24;
  reg        [31:0]   fifoDataBuffer_25;
  reg        [31:0]   fifoDataBuffer_26;
  reg        [31:0]   fifoDataBuffer_27;
  reg        [31:0]   fifoDataBuffer_28;
  reg        [31:0]   fifoDataBuffer_29;
  reg        [31:0]   fifoDataBuffer_30;
  reg        [31:0]   fifoDataBuffer_31;
  wire                axi4Interface_fifo_fire;
  wire       [31:0]   _zz_5;
  wire                when_Axi4WriteOnlyMaster_l55;
  reg        [31:0]   debugAddress /* verilator public */ ;
  wire                axi4Interface_t_w_fire;
  wire       [1:0]    Axi4Incr_validSize;
  reg        [31:0]   Axi4Incr_result;
  wire       [19:0]   Axi4Incr_highCat;
  wire       [2:0]    Axi4Incr_sizeValue;
  wire       [11:0]   Axi4Incr_alignMask;
  wire       [11:0]   Axi4Incr_base;
  wire       [11:0]   Axi4Incr_baseIncr;
  reg        [1:0]    _zz_Axi4Incr_wrapCase;
  wire       [2:0]    Axi4Incr_wrapCase;
  reg                 axi4Interface_controlAwValid;
  reg                 axi4Interface_isTransferAfterReset;
  wire                axi4Interface_t_aw_fire;
  wire                when_Axi4WriteOnlyMaster_l92;
  reg        [31:0]   axi4Interface_initialAddress;
  wire                axi4Interface_t_w_fire_1;
  wire                when_Axi4WriteOnlyMaster_l142;

  assign _zz__zz_writeCounter_1_1 = _zz_writeCounter;
  assign _zz__zz_writeCounter_1 = {5'd0, _zz__zz_writeCounter_1_1};
  assign _zz__zz_handshakeCounter_1_1 = _zz_handshakeCounter;
  assign _zz__zz_handshakeCounter_1 = {5'd0, _zz__zz_handshakeCounter_1_1};
  assign _zz__zz_5 = handshakeCounter[4:0];
  assign _zz_Axi4Incr_alignMask = {(2'b01 < Axi4Incr_validSize),(2'b00 < Axi4Incr_validSize)};
  assign _zz_Axi4Incr_base_1 = debugAddress[11 : 0];
  assign _zz_Axi4Incr_base = _zz_Axi4Incr_base_1;
  assign _zz_Axi4Incr_baseIncr = {9'd0, Axi4Incr_sizeValue};
  assign _zz_Axi4Incr_wrapCase_1 = {1'd0, Axi4Incr_validSize};
  assign _zz_Axi4Incr_wrapCase_2 = {1'd0, _zz_Axi4Incr_wrapCase};
  assign _zz_wdata_1 = writeCounter[4:0];
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
    case(_zz_wdata_1)
      5'b00000 : begin
        _zz_wdata = fifoDataBuffer_0;
      end
      5'b00001 : begin
        _zz_wdata = fifoDataBuffer_1;
      end
      5'b00010 : begin
        _zz_wdata = fifoDataBuffer_2;
      end
      5'b00011 : begin
        _zz_wdata = fifoDataBuffer_3;
      end
      5'b00100 : begin
        _zz_wdata = fifoDataBuffer_4;
      end
      5'b00101 : begin
        _zz_wdata = fifoDataBuffer_5;
      end
      5'b00110 : begin
        _zz_wdata = fifoDataBuffer_6;
      end
      5'b00111 : begin
        _zz_wdata = fifoDataBuffer_7;
      end
      5'b01000 : begin
        _zz_wdata = fifoDataBuffer_8;
      end
      5'b01001 : begin
        _zz_wdata = fifoDataBuffer_9;
      end
      5'b01010 : begin
        _zz_wdata = fifoDataBuffer_10;
      end
      5'b01011 : begin
        _zz_wdata = fifoDataBuffer_11;
      end
      5'b01100 : begin
        _zz_wdata = fifoDataBuffer_12;
      end
      5'b01101 : begin
        _zz_wdata = fifoDataBuffer_13;
      end
      5'b01110 : begin
        _zz_wdata = fifoDataBuffer_14;
      end
      5'b01111 : begin
        _zz_wdata = fifoDataBuffer_15;
      end
      5'b10000 : begin
        _zz_wdata = fifoDataBuffer_16;
      end
      5'b10001 : begin
        _zz_wdata = fifoDataBuffer_17;
      end
      5'b10010 : begin
        _zz_wdata = fifoDataBuffer_18;
      end
      5'b10011 : begin
        _zz_wdata = fifoDataBuffer_19;
      end
      5'b10100 : begin
        _zz_wdata = fifoDataBuffer_20;
      end
      5'b10101 : begin
        _zz_wdata = fifoDataBuffer_21;
      end
      5'b10110 : begin
        _zz_wdata = fifoDataBuffer_22;
      end
      5'b10111 : begin
        _zz_wdata = fifoDataBuffer_23;
      end
      5'b11000 : begin
        _zz_wdata = fifoDataBuffer_24;
      end
      5'b11001 : begin
        _zz_wdata = fifoDataBuffer_25;
      end
      5'b11010 : begin
        _zz_wdata = fifoDataBuffer_26;
      end
      5'b11011 : begin
        _zz_wdata = fifoDataBuffer_27;
      end
      5'b11100 : begin
        _zz_wdata = fifoDataBuffer_28;
      end
      5'b11101 : begin
        _zz_wdata = fifoDataBuffer_29;
      end
      5'b11110 : begin
        _zz_wdata = fifoDataBuffer_30;
      end
      default : begin
        _zz_wdata = fifoDataBuffer_31;
      end
    endcase
  end

  always @(*) begin
    _zz_writeCounter = 1'b0;
    if(axi4Interface_t_w_fire_1) begin
      _zz_writeCounter = 1'b1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(_zz_when_Axi4WriteOnlyMaster_l92) begin
      _zz_1 = 1'b1;
    end
  end

  assign _zz_when_Axi4WriteOnlyMaster_l92 = (writeCounter == 6'h20);
  assign _zz_2 = (_zz_when_Axi4WriteOnlyMaster_l92 && _zz_writeCounter);
  always @(*) begin
    if(_zz_2) begin
      _zz_writeCounter_1 = 6'h0;
    end else begin
      _zz_writeCounter_1 = (writeCounter + _zz__zz_writeCounter_1);
    end
    if(_zz_1) begin
      _zz_writeCounter_1 = 6'h0;
    end
  end

  always @(*) begin
    _zz_handshakeCounter = 1'b0;
    if(axi4Interface_fifo_fire) begin
      _zz_handshakeCounter = 1'b1;
    end
  end

  always @(*) begin
    _zz_3 = 1'b0;
    if(_zz_when_Axi4WriteOnlyMaster_l92) begin
      _zz_3 = 1'b1;
    end
  end

  assign _zz_when_Axi4WriteOnlyMaster_l55 = (handshakeCounter == 6'h20);
  assign _zz_4 = (_zz_when_Axi4WriteOnlyMaster_l55 && _zz_handshakeCounter);
  always @(*) begin
    if(_zz_4) begin
      _zz_handshakeCounter_1 = 6'h0;
    end else begin
      _zz_handshakeCounter_1 = (handshakeCounter + _zz__zz_handshakeCounter_1);
    end
    if(_zz_3) begin
      _zz_handshakeCounter_1 = 6'h0;
    end
  end

  assign axi4Interface_fifo_fire = (fifoValid && fifoReady);
  assign _zz_5 = ({31'd0,1'b1} <<< _zz__zz_5);
  always @(*) begin
    fifoReady = 1'b0;
    if(when_Axi4WriteOnlyMaster_l55) begin
      fifoReady = 1'b1;
    end
  end

  assign when_Axi4WriteOnlyMaster_l55 = (! _zz_when_Axi4WriteOnlyMaster_l55);
  assign axi4Interface_t_w_fire = (wValid && wReady);
  assign Axi4Incr_validSize = awsize[1 : 0];
  assign Axi4Incr_highCat = debugAddress[31 : 12];
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
        Axi4Incr_result = debugAddress;
      end
      2'b10 : begin
        Axi4Incr_result = {Axi4Incr_highCat,_zz_Axi4Incr_result};
      end
      default : begin
        Axi4Incr_result = {Axi4Incr_highCat,Axi4Incr_baseIncr};
      end
    endcase
  end

  assign axi4Interface_t_aw_fire = (awValid && awReady);
  assign when_Axi4WriteOnlyMaster_l92 = (_zz_when_Axi4WriteOnlyMaster_l92 || axi4Interface_isTransferAfterReset);
  assign awValid = axi4Interface_controlAwValid;
  always @(*) begin
    if(_zz_when_Axi4WriteOnlyMaster_l92) begin
      awaddr = debugAddress;
    end else begin
      awaddr = axi4Interface_initialAddress;
    end
  end

  assign awregion = 4'b0000;
  assign awburst = 2'b01;
  assign awlen = 8'h1f;
  assign awsize = 3'b010;
  assign awcache = 4'b0000;
  assign awqos = 4'b0000;
  assign awprot = 3'b000;
  always @(*) begin
    wdata = 32'h0;
    if(wValid) begin
      wdata = _zz_wdata;
    end
  end

  assign axi4Interface_t_w_fire_1 = (wValid && wReady);
  always @(*) begin
    wValid = 1'b0;
    if(when_Axi4WriteOnlyMaster_l142) begin
      wValid = 1'b1;
    end
  end

  assign when_Axi4WriteOnlyMaster_l142 = (((6'h0 < handshakeCounter) && (writeCounter < handshakeCounter)) && (! _zz_when_Axi4WriteOnlyMaster_l92));
  assign wstrb = 4'b1111;
  assign wlast = (writeCounter == 6'h1f);
  assign bReady = 1'b1;
  always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
      writeCounter <= 6'h0;
      handshakeCounter <= 6'h0;
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
      fifoDataBuffer_16 <= 32'h0;
      fifoDataBuffer_17 <= 32'h0;
      fifoDataBuffer_18 <= 32'h0;
      fifoDataBuffer_19 <= 32'h0;
      fifoDataBuffer_20 <= 32'h0;
      fifoDataBuffer_21 <= 32'h0;
      fifoDataBuffer_22 <= 32'h0;
      fifoDataBuffer_23 <= 32'h0;
      fifoDataBuffer_24 <= 32'h0;
      fifoDataBuffer_25 <= 32'h0;
      fifoDataBuffer_26 <= 32'h0;
      fifoDataBuffer_27 <= 32'h0;
      fifoDataBuffer_28 <= 32'h0;
      fifoDataBuffer_29 <= 32'h0;
      fifoDataBuffer_30 <= 32'h0;
      fifoDataBuffer_31 <= 32'h0;
      debugAddress <= 32'h0;
      axi4Interface_controlAwValid <= 1'b0;
      axi4Interface_isTransferAfterReset <= 1'b1;
      axi4Interface_initialAddress <= 32'h0;
    end else begin
      writeCounter <= _zz_writeCounter_1;
      handshakeCounter <= _zz_handshakeCounter_1;
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
        if(_zz_5[16]) begin
          fifoDataBuffer_16 <= fifoPayload;
        end
        if(_zz_5[17]) begin
          fifoDataBuffer_17 <= fifoPayload;
        end
        if(_zz_5[18]) begin
          fifoDataBuffer_18 <= fifoPayload;
        end
        if(_zz_5[19]) begin
          fifoDataBuffer_19 <= fifoPayload;
        end
        if(_zz_5[20]) begin
          fifoDataBuffer_20 <= fifoPayload;
        end
        if(_zz_5[21]) begin
          fifoDataBuffer_21 <= fifoPayload;
        end
        if(_zz_5[22]) begin
          fifoDataBuffer_22 <= fifoPayload;
        end
        if(_zz_5[23]) begin
          fifoDataBuffer_23 <= fifoPayload;
        end
        if(_zz_5[24]) begin
          fifoDataBuffer_24 <= fifoPayload;
        end
        if(_zz_5[25]) begin
          fifoDataBuffer_25 <= fifoPayload;
        end
        if(_zz_5[26]) begin
          fifoDataBuffer_26 <= fifoPayload;
        end
        if(_zz_5[27]) begin
          fifoDataBuffer_27 <= fifoPayload;
        end
        if(_zz_5[28]) begin
          fifoDataBuffer_28 <= fifoPayload;
        end
        if(_zz_5[29]) begin
          fifoDataBuffer_29 <= fifoPayload;
        end
        if(_zz_5[30]) begin
          fifoDataBuffer_30 <= fifoPayload;
        end
        if(_zz_5[31]) begin
          fifoDataBuffer_31 <= fifoPayload;
        end
      end
      if(axi4Interface_t_w_fire) begin
        debugAddress <= Axi4Incr_result;
      end
      if(resetn) begin
        axi4Interface_isTransferAfterReset <= 1'b0;
      end
      if(resetn) begin
        if(axi4Interface_t_aw_fire) begin
          axi4Interface_controlAwValid <= 1'b0;
        end
        if(when_Axi4WriteOnlyMaster_l92) begin
          axi4Interface_controlAwValid <= 1'b1;
        end
      end
      if(_zz_when_Axi4WriteOnlyMaster_l92) begin
        axi4Interface_initialAddress <= debugAddress;
      end
    end
  end


endmodule
