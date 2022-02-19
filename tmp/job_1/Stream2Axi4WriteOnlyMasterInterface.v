// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AIE.Axi4Module.Axi4Full.Stream2Axi4WriteOnlyMasterInterface
// Git hash  : 6d1480269f65659931465c8b65ad201e15ffd506



module AIE.Axi4Module.Axi4Full.Stream2Axi4WriteOnlyMasterInterface (
  input               s_axis_valid,
  output              s_axis_ready,
  input      [31:0]   s_axis_payload,
  output              m_axi_awvalid,
  input               m_axi_awready,
  output     [31:0]   m_axi_awaddr,
  output     [3:0]    m_axi_awregion,
  output     [7:0]    m_axi_awlen,
  output     [2:0]    m_axi_awsize,
  output     [1:0]    m_axi_awburst,
  output     [3:0]    m_axi_awcache,
  output     [3:0]    m_axi_awqos,
  output     [2:0]    m_axi_awprot,
  output              m_axi_wvalid,
  input               m_axi_wready,
  output     [31:0]   m_axi_wdata,
  output     [3:0]    m_axi_wstrb,
  output              m_axi_wlast,
  input               m_axi_bvalid,
  output              m_axi_bready,
  input      [1:0]    m_axi_bresp,
  input               resetn,
  input               clk
);
  wire                axi4Interconnection_s_axis_ready;
  wire                axi4Interconnection_m_axi_awvalid;
  wire       [31:0]   axi4Interconnection_m_axi_awaddr;
  wire       [3:0]    axi4Interconnection_m_axi_awregion;
  wire       [7:0]    axi4Interconnection_m_axi_awlen;
  wire       [2:0]    axi4Interconnection_m_axi_awsize;
  wire       [1:0]    axi4Interconnection_m_axi_awburst;
  wire       [3:0]    axi4Interconnection_m_axi_awcache;
  wire       [3:0]    axi4Interconnection_m_axi_awqos;
  wire       [2:0]    axi4Interconnection_m_axi_awprot;
  wire                axi4Interconnection_m_axi_wvalid;
  wire       [31:0]   axi4Interconnection_m_axi_wdata;
  wire       [3:0]    axi4Interconnection_m_axi_wstrb;
  wire                axi4Interconnection_m_axi_wlast;
  wire                axi4Interconnection_m_axi_bready;
  wire                fifoInstance_io_push_ready;
  wire                fifoInstance_io_pop_valid;
  wire       [31:0]   fifoInstance_io_pop_payload;
  wire       [5:0]    fifoInstance_io_occupancy;
  wire       [5:0]    fifoInstance_io_availability;

  Axi4WriteOnlyMasterInterface axi4Interconnection (
    .s_axis_valid      (fifoInstance_io_pop_valid           ), //i
    .s_axis_ready      (axi4Interconnection_s_axis_ready    ), //o
    .s_axis_payload    (fifoInstance_io_pop_payload         ), //i
    .m_axi_awvalid     (axi4Interconnection_m_axi_awvalid   ), //o
    .m_axi_awready     (m_axi_awready                       ), //i
    .m_axi_awaddr      (axi4Interconnection_m_axi_awaddr    ), //o
    .m_axi_awregion    (axi4Interconnection_m_axi_awregion  ), //o
    .m_axi_awlen       (axi4Interconnection_m_axi_awlen     ), //o
    .m_axi_awsize      (axi4Interconnection_m_axi_awsize    ), //o
    .m_axi_awburst     (axi4Interconnection_m_axi_awburst   ), //o
    .m_axi_awcache     (axi4Interconnection_m_axi_awcache   ), //o
    .m_axi_awqos       (axi4Interconnection_m_axi_awqos     ), //o
    .m_axi_awprot      (axi4Interconnection_m_axi_awprot    ), //o
    .m_axi_wvalid      (axi4Interconnection_m_axi_wvalid    ), //o
    .m_axi_wready      (m_axi_wready                        ), //i
    .m_axi_wdata       (axi4Interconnection_m_axi_wdata     ), //o
    .m_axi_wstrb       (axi4Interconnection_m_axi_wstrb     ), //o
    .m_axi_wlast       (axi4Interconnection_m_axi_wlast     ), //o
    .m_axi_bvalid      (m_axi_bvalid                        ), //i
    .m_axi_bready      (axi4Interconnection_m_axi_bready    ), //o
    .m_axi_bresp       (m_axi_bresp                         ), //i
    .resetn            (resetn                              ), //i
    .clk               (clk                                 )  //i
  );
  StreamFifo fifoInstance (
    .io_push_valid      (s_axis_valid                      ), //i
    .io_push_ready      (fifoInstance_io_push_ready        ), //o
    .io_push_payload    (s_axis_payload                    ), //i
    .io_pop_valid       (fifoInstance_io_pop_valid         ), //o
    .io_pop_ready       (axi4Interconnection_s_axis_ready  ), //i
    .io_pop_payload     (fifoInstance_io_pop_payload       ), //o
    .io_flush           (1'b0                              ), //i
    .io_occupancy       (fifoInstance_io_occupancy         ), //o
    .io_availability    (fifoInstance_io_availability      ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  assign s_axis_ready = fifoInstance_io_push_ready;
  assign m_axi_awvalid = axi4Interconnection_m_axi_awvalid;
  assign m_axi_awaddr = axi4Interconnection_m_axi_awaddr;
  assign m_axi_awregion = axi4Interconnection_m_axi_awregion;
  assign m_axi_awlen = axi4Interconnection_m_axi_awlen;
  assign m_axi_awsize = axi4Interconnection_m_axi_awsize;
  assign m_axi_awburst = axi4Interconnection_m_axi_awburst;
  assign m_axi_awcache = axi4Interconnection_m_axi_awcache;
  assign m_axi_awqos = axi4Interconnection_m_axi_awqos;
  assign m_axi_awprot = axi4Interconnection_m_axi_awprot;
  assign m_axi_wvalid = axi4Interconnection_m_axi_wvalid;
  assign m_axi_wdata = axi4Interconnection_m_axi_wdata;
  assign m_axi_wstrb = axi4Interconnection_m_axi_wstrb;
  assign m_axi_wlast = axi4Interconnection_m_axi_wlast;
  assign m_axi_bready = axi4Interconnection_m_axi_bready;

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
  input               s_axis_valid,
  output reg          s_axis_ready,
  input      [31:0]   s_axis_payload,
  output              m_axi_awvalid,
  input               m_axi_awready,
  output reg [31:0]   m_axi_awaddr,
  output     [3:0]    m_axi_awregion,
  output     [7:0]    m_axi_awlen,
  output     [2:0]    m_axi_awsize,
  output     [1:0]    m_axi_awburst,
  output     [3:0]    m_axi_awcache,
  output     [3:0]    m_axi_awqos,
  output     [2:0]    m_axi_awprot,
  output reg          m_axi_wvalid,
  input               m_axi_wready,
  output reg [31:0]   m_axi_wdata,
  output     [3:0]    m_axi_wstrb,
  output              m_axi_wlast,
  input               m_axi_bvalid,
  output              m_axi_bready,
  input      [1:0]    m_axi_bresp,
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
  reg        [31:0]   _zz_m_axi_wdata;
  wire       [4:0]    _zz_m_axi_wdata_1;
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
  reg        [31:0]   axi4Interface_fifoDataBuffer_0;
  reg        [31:0]   axi4Interface_fifoDataBuffer_1;
  reg        [31:0]   axi4Interface_fifoDataBuffer_2;
  reg        [31:0]   axi4Interface_fifoDataBuffer_3;
  reg        [31:0]   axi4Interface_fifoDataBuffer_4;
  reg        [31:0]   axi4Interface_fifoDataBuffer_5;
  reg        [31:0]   axi4Interface_fifoDataBuffer_6;
  reg        [31:0]   axi4Interface_fifoDataBuffer_7;
  reg        [31:0]   axi4Interface_fifoDataBuffer_8;
  reg        [31:0]   axi4Interface_fifoDataBuffer_9;
  reg        [31:0]   axi4Interface_fifoDataBuffer_10;
  reg        [31:0]   axi4Interface_fifoDataBuffer_11;
  reg        [31:0]   axi4Interface_fifoDataBuffer_12;
  reg        [31:0]   axi4Interface_fifoDataBuffer_13;
  reg        [31:0]   axi4Interface_fifoDataBuffer_14;
  reg        [31:0]   axi4Interface_fifoDataBuffer_15;
  reg        [31:0]   axi4Interface_fifoDataBuffer_16;
  reg        [31:0]   axi4Interface_fifoDataBuffer_17;
  reg        [31:0]   axi4Interface_fifoDataBuffer_18;
  reg        [31:0]   axi4Interface_fifoDataBuffer_19;
  reg        [31:0]   axi4Interface_fifoDataBuffer_20;
  reg        [31:0]   axi4Interface_fifoDataBuffer_21;
  reg        [31:0]   axi4Interface_fifoDataBuffer_22;
  reg        [31:0]   axi4Interface_fifoDataBuffer_23;
  reg        [31:0]   axi4Interface_fifoDataBuffer_24;
  reg        [31:0]   axi4Interface_fifoDataBuffer_25;
  reg        [31:0]   axi4Interface_fifoDataBuffer_26;
  reg        [31:0]   axi4Interface_fifoDataBuffer_27;
  reg        [31:0]   axi4Interface_fifoDataBuffer_28;
  reg        [31:0]   axi4Interface_fifoDataBuffer_29;
  reg        [31:0]   axi4Interface_fifoDataBuffer_30;
  reg        [31:0]   axi4Interface_fifoDataBuffer_31;
  wire                axi4Interface_stream_fire;
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
  assign _zz_m_axi_wdata_1 = writeCounter[4:0];
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
    case(_zz_m_axi_wdata_1)
      5'b00000 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_0;
      end
      5'b00001 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_1;
      end
      5'b00010 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_2;
      end
      5'b00011 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_3;
      end
      5'b00100 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_4;
      end
      5'b00101 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_5;
      end
      5'b00110 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_6;
      end
      5'b00111 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_7;
      end
      5'b01000 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_8;
      end
      5'b01001 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_9;
      end
      5'b01010 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_10;
      end
      5'b01011 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_11;
      end
      5'b01100 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_12;
      end
      5'b01101 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_13;
      end
      5'b01110 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_14;
      end
      5'b01111 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_15;
      end
      5'b10000 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_16;
      end
      5'b10001 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_17;
      end
      5'b10010 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_18;
      end
      5'b10011 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_19;
      end
      5'b10100 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_20;
      end
      5'b10101 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_21;
      end
      5'b10110 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_22;
      end
      5'b10111 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_23;
      end
      5'b11000 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_24;
      end
      5'b11001 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_25;
      end
      5'b11010 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_26;
      end
      5'b11011 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_27;
      end
      5'b11100 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_28;
      end
      5'b11101 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_29;
      end
      5'b11110 : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_30;
      end
      default : begin
        _zz_m_axi_wdata = axi4Interface_fifoDataBuffer_31;
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
    if(axi4Interface_stream_fire) begin
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

  assign axi4Interface_stream_fire = (s_axis_valid && s_axis_ready);
  assign _zz_5 = ({31'd0,1'b1} <<< _zz__zz_5);
  always @(*) begin
    s_axis_ready = 1'b0;
    if(when_Axi4WriteOnlyMaster_l55) begin
      s_axis_ready = 1'b1;
    end
  end

  assign when_Axi4WriteOnlyMaster_l55 = (! _zz_when_Axi4WriteOnlyMaster_l55);
  assign axi4Interface_t_w_fire = (m_axi_wvalid && m_axi_wready);
  assign Axi4Incr_validSize = m_axi_awsize[1 : 0];
  assign Axi4Incr_highCat = debugAddress[31 : 12];
  assign Axi4Incr_sizeValue = {(2'b10 == Axi4Incr_validSize),{(2'b01 == Axi4Incr_validSize),(2'b00 == Axi4Incr_validSize)}};
  assign Axi4Incr_alignMask = {10'd0, _zz_Axi4Incr_alignMask};
  assign Axi4Incr_base = (_zz_Axi4Incr_base & (~ Axi4Incr_alignMask));
  assign Axi4Incr_baseIncr = (Axi4Incr_base + _zz_Axi4Incr_baseIncr);
  always @(*) begin
    casez(m_axi_awlen)
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
    case(m_axi_awburst)
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

  assign axi4Interface_t_aw_fire = (m_axi_awvalid && m_axi_awready);
  assign when_Axi4WriteOnlyMaster_l92 = (_zz_when_Axi4WriteOnlyMaster_l92 || axi4Interface_isTransferAfterReset);
  assign m_axi_awvalid = axi4Interface_controlAwValid;
  always @(*) begin
    if(_zz_when_Axi4WriteOnlyMaster_l92) begin
      m_axi_awaddr = debugAddress;
    end else begin
      m_axi_awaddr = axi4Interface_initialAddress;
    end
  end

  assign m_axi_awregion = 4'b0000;
  assign m_axi_awburst = 2'b01;
  assign m_axi_awlen = 8'h1f;
  assign m_axi_awsize = 3'b010;
  assign m_axi_awcache = 4'b0000;
  assign m_axi_awqos = 4'b0000;
  assign m_axi_awprot = 3'b000;
  always @(*) begin
    m_axi_wdata = 32'h0;
    if(m_axi_wvalid) begin
      m_axi_wdata = _zz_m_axi_wdata;
    end
  end

  assign axi4Interface_t_w_fire_1 = (m_axi_wvalid && m_axi_wready);
  always @(*) begin
    m_axi_wvalid = 1'b0;
    if(when_Axi4WriteOnlyMaster_l142) begin
      m_axi_wvalid = 1'b1;
    end
  end

  assign when_Axi4WriteOnlyMaster_l142 = (((6'h0 < handshakeCounter) && (writeCounter < handshakeCounter)) && (! _zz_when_Axi4WriteOnlyMaster_l92));
  assign m_axi_wstrb = 4'b1111;
  assign m_axi_wlast = (writeCounter == 6'h1f);
  assign m_axi_bready = 1'b1;
  always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
      writeCounter <= 6'h0;
      handshakeCounter <= 6'h0;
      axi4Interface_fifoDataBuffer_0 <= 32'h0;
      axi4Interface_fifoDataBuffer_1 <= 32'h0;
      axi4Interface_fifoDataBuffer_2 <= 32'h0;
      axi4Interface_fifoDataBuffer_3 <= 32'h0;
      axi4Interface_fifoDataBuffer_4 <= 32'h0;
      axi4Interface_fifoDataBuffer_5 <= 32'h0;
      axi4Interface_fifoDataBuffer_6 <= 32'h0;
      axi4Interface_fifoDataBuffer_7 <= 32'h0;
      axi4Interface_fifoDataBuffer_8 <= 32'h0;
      axi4Interface_fifoDataBuffer_9 <= 32'h0;
      axi4Interface_fifoDataBuffer_10 <= 32'h0;
      axi4Interface_fifoDataBuffer_11 <= 32'h0;
      axi4Interface_fifoDataBuffer_12 <= 32'h0;
      axi4Interface_fifoDataBuffer_13 <= 32'h0;
      axi4Interface_fifoDataBuffer_14 <= 32'h0;
      axi4Interface_fifoDataBuffer_15 <= 32'h0;
      axi4Interface_fifoDataBuffer_16 <= 32'h0;
      axi4Interface_fifoDataBuffer_17 <= 32'h0;
      axi4Interface_fifoDataBuffer_18 <= 32'h0;
      axi4Interface_fifoDataBuffer_19 <= 32'h0;
      axi4Interface_fifoDataBuffer_20 <= 32'h0;
      axi4Interface_fifoDataBuffer_21 <= 32'h0;
      axi4Interface_fifoDataBuffer_22 <= 32'h0;
      axi4Interface_fifoDataBuffer_23 <= 32'h0;
      axi4Interface_fifoDataBuffer_24 <= 32'h0;
      axi4Interface_fifoDataBuffer_25 <= 32'h0;
      axi4Interface_fifoDataBuffer_26 <= 32'h0;
      axi4Interface_fifoDataBuffer_27 <= 32'h0;
      axi4Interface_fifoDataBuffer_28 <= 32'h0;
      axi4Interface_fifoDataBuffer_29 <= 32'h0;
      axi4Interface_fifoDataBuffer_30 <= 32'h0;
      axi4Interface_fifoDataBuffer_31 <= 32'h0;
      debugAddress <= 32'h0;
      axi4Interface_controlAwValid <= 1'b0;
      axi4Interface_isTransferAfterReset <= 1'b1;
      axi4Interface_initialAddress <= 32'h0;
    end else begin
      writeCounter <= _zz_writeCounter_1;
      handshakeCounter <= _zz_handshakeCounter_1;
      if(axi4Interface_stream_fire) begin
        if(_zz_5[0]) begin
          axi4Interface_fifoDataBuffer_0 <= s_axis_payload;
        end
        if(_zz_5[1]) begin
          axi4Interface_fifoDataBuffer_1 <= s_axis_payload;
        end
        if(_zz_5[2]) begin
          axi4Interface_fifoDataBuffer_2 <= s_axis_payload;
        end
        if(_zz_5[3]) begin
          axi4Interface_fifoDataBuffer_3 <= s_axis_payload;
        end
        if(_zz_5[4]) begin
          axi4Interface_fifoDataBuffer_4 <= s_axis_payload;
        end
        if(_zz_5[5]) begin
          axi4Interface_fifoDataBuffer_5 <= s_axis_payload;
        end
        if(_zz_5[6]) begin
          axi4Interface_fifoDataBuffer_6 <= s_axis_payload;
        end
        if(_zz_5[7]) begin
          axi4Interface_fifoDataBuffer_7 <= s_axis_payload;
        end
        if(_zz_5[8]) begin
          axi4Interface_fifoDataBuffer_8 <= s_axis_payload;
        end
        if(_zz_5[9]) begin
          axi4Interface_fifoDataBuffer_9 <= s_axis_payload;
        end
        if(_zz_5[10]) begin
          axi4Interface_fifoDataBuffer_10 <= s_axis_payload;
        end
        if(_zz_5[11]) begin
          axi4Interface_fifoDataBuffer_11 <= s_axis_payload;
        end
        if(_zz_5[12]) begin
          axi4Interface_fifoDataBuffer_12 <= s_axis_payload;
        end
        if(_zz_5[13]) begin
          axi4Interface_fifoDataBuffer_13 <= s_axis_payload;
        end
        if(_zz_5[14]) begin
          axi4Interface_fifoDataBuffer_14 <= s_axis_payload;
        end
        if(_zz_5[15]) begin
          axi4Interface_fifoDataBuffer_15 <= s_axis_payload;
        end
        if(_zz_5[16]) begin
          axi4Interface_fifoDataBuffer_16 <= s_axis_payload;
        end
        if(_zz_5[17]) begin
          axi4Interface_fifoDataBuffer_17 <= s_axis_payload;
        end
        if(_zz_5[18]) begin
          axi4Interface_fifoDataBuffer_18 <= s_axis_payload;
        end
        if(_zz_5[19]) begin
          axi4Interface_fifoDataBuffer_19 <= s_axis_payload;
        end
        if(_zz_5[20]) begin
          axi4Interface_fifoDataBuffer_20 <= s_axis_payload;
        end
        if(_zz_5[21]) begin
          axi4Interface_fifoDataBuffer_21 <= s_axis_payload;
        end
        if(_zz_5[22]) begin
          axi4Interface_fifoDataBuffer_22 <= s_axis_payload;
        end
        if(_zz_5[23]) begin
          axi4Interface_fifoDataBuffer_23 <= s_axis_payload;
        end
        if(_zz_5[24]) begin
          axi4Interface_fifoDataBuffer_24 <= s_axis_payload;
        end
        if(_zz_5[25]) begin
          axi4Interface_fifoDataBuffer_25 <= s_axis_payload;
        end
        if(_zz_5[26]) begin
          axi4Interface_fifoDataBuffer_26 <= s_axis_payload;
        end
        if(_zz_5[27]) begin
          axi4Interface_fifoDataBuffer_27 <= s_axis_payload;
        end
        if(_zz_5[28]) begin
          axi4Interface_fifoDataBuffer_28 <= s_axis_payload;
        end
        if(_zz_5[29]) begin
          axi4Interface_fifoDataBuffer_29 <= s_axis_payload;
        end
        if(_zz_5[30]) begin
          axi4Interface_fifoDataBuffer_30 <= s_axis_payload;
        end
        if(_zz_5[31]) begin
          axi4Interface_fifoDataBuffer_31 <= s_axis_payload;
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
