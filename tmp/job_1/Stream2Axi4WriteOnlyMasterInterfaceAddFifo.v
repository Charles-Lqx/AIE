// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Stream2Axi4WriteOnlyMasterInterfaceAddFifo
// Git hash  : 2e3f1650202888b97d3e3b88a561db7aa89cacc0



module Stream2Axi4WriteOnlyMasterInterfaceAddFifo (
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
  input               aresetn,
  input               start,
  input      [7:0]    burstLen,
  input      [31:0]   offset,
  output              transInterrupt,
  input               aclk
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
  wire                axi4Interconnection_transInterrupt;
  wire                fifoInstance_io_push_ready;
  wire                fifoInstance_io_pop_valid;
  wire       [31:0]   fifoInstance_io_pop_payload;
  wire       [8:0]    fifoInstance_io_occupancy;
  wire       [8:0]    fifoInstance_io_availability;

  Stream2Axi4WriteOnlyMasterInterface axi4Interconnection (
    .start             (start                               ), //i
    .burstLen          (burstLen                            ), //i
    .offset            (offset                              ), //i
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
    .transInterrupt    (axi4Interconnection_transInterrupt  ), //o
    .aresetn           (aresetn                             ), //i
    .aclk              (aclk                                )  //i
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
    .aclk               (aclk                              ), //i
    .aresetn            (aresetn                           )  //i
  );
  assign s_axis_ready = fifoInstance_io_push_ready;
  assign transInterrupt = axi4Interconnection_transInterrupt;
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

//StreamFifo replaced by StreamFifo

module Stream2Axi4WriteOnlyMasterInterface (
  input               start,
  input      [7:0]    burstLen,
  input      [31:0]   offset,
  input               s_axis_valid,
  output reg          s_axis_ready,
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
  output reg          m_axi_wvalid,
  input               m_axi_wready,
  output reg [31:0]   m_axi_wdata,
  output     [3:0]    m_axi_wstrb,
  output              m_axi_wlast,
  input               m_axi_bvalid,
  output              m_axi_bready,
  input      [1:0]    m_axi_bresp,
  output              transInterrupt,
  input               aresetn,
  input               aclk
);
  reg                 streamFifo_2_io_push_valid;
  reg        [31:0]   streamFifo_2_io_push_payload;
  reg                 streamFifo_2_io_pop_ready;
  wire                streamFifo_2_io_push_ready;
  wire                streamFifo_2_io_pop_valid;
  wire       [31:0]   streamFifo_2_io_pop_payload;
  wire       [8:0]    streamFifo_2_io_occupancy;
  wire       [8:0]    streamFifo_2_io_availability;
  wire       [8:0]    _zz__zz_m_axi_wlast_1;
  wire       [0:0]    _zz__zz_m_axi_wlast_1_1;
  wire       [8:0]    _zz__zz_when_Axi4WriteOnlyMaster_l89_1;
  wire       [0:0]    _zz__zz_when_Axi4WriteOnlyMaster_l89_1_1;
  wire       [8:0]    _zz_when_Axi4WriteOnlyMaster_l89_3;
  wire       [8:0]    _zz_when_Axi4WriteOnlyMaster_l152;
  wire       [8:0]    _zz_m_axi_wlast_3;
  wire       [7:0]    _zz_m_axi_wlast_4;
  wire       [31:0]   axi4Interface_transferDataType;
  reg                 _zz_m_axi_wlast;
  reg                 _zz_1;
  reg        [8:0]    _zz_m_axi_wlast_1;
  reg        [8:0]    _zz_m_axi_wlast_2;
  wire                _zz_2;
  wire                _zz_3;
  reg                 m_axi_wlast_regNext;
  wire                axi4Interface_resetStartSendSignal;
  wire                _zz_4;
  (* async_reg = "true" *) reg                 startSendSignal;
  reg                 _zz_when_Axi4WriteOnlyMaster_l89;
  reg                 _zz_5;
  reg        [8:0]    _zz_when_Axi4WriteOnlyMaster_l89_1;
  reg        [8:0]    _zz_when_Axi4WriteOnlyMaster_l89_2;
  wire                _zz_6;
  wire                _zz_7;
  wire                when_Axi4WriteOnlyMaster_l89;
  wire                streamFifo_2_io_push_fire;
  wire                axi4Interface_full_b_fire;
  reg                 axi4Interface_isTransferAfterReset;
  wire                axi4Interface_full_b_fire_1;
  wire                when_Axi4WriteOnlyMaster_l115;
  reg                 axi4Interface_lastBurstComplete;
  reg                 axi4Interface_controlAwValidSignal;
  wire                when_Axi4WriteOnlyMaster_l118;
  wire                axi4Interface_full_aw_fire;
  wire                when_Axi4WriteOnlyMaster_l152;
  wire                axi4Interface_full_w_fire;
  wire                axi4Interface_full_b_fire_2;
  reg                 axi4Interface_controlBReady;
  wire                axi4Interface_full_b_fire_3;
  wire                axi4Interface_full_b_fire_4;
  reg                 axi4Interface_isBurstComplete;

  assign _zz__zz_m_axi_wlast_1_1 = _zz_m_axi_wlast;
  assign _zz__zz_m_axi_wlast_1 = {8'd0, _zz__zz_m_axi_wlast_1_1};
  assign _zz__zz_when_Axi4WriteOnlyMaster_l89_1_1 = _zz_when_Axi4WriteOnlyMaster_l89;
  assign _zz__zz_when_Axi4WriteOnlyMaster_l89_1 = {8'd0, _zz__zz_when_Axi4WriteOnlyMaster_l89_1_1};
  assign _zz_when_Axi4WriteOnlyMaster_l89_3 = {1'd0, burstLen};
  assign _zz_when_Axi4WriteOnlyMaster_l152 = {1'd0, burstLen};
  assign _zz_m_axi_wlast_4 = (burstLen - 8'h01);
  assign _zz_m_axi_wlast_3 = {1'd0, _zz_m_axi_wlast_4};
  StreamFifo streamFifo_2 (
    .io_push_valid      (streamFifo_2_io_push_valid    ), //i
    .io_push_ready      (streamFifo_2_io_push_ready    ), //o
    .io_push_payload    (streamFifo_2_io_push_payload  ), //i
    .io_pop_valid       (streamFifo_2_io_pop_valid     ), //o
    .io_pop_ready       (streamFifo_2_io_pop_ready     ), //i
    .io_pop_payload     (streamFifo_2_io_pop_payload   ), //o
    .io_flush           (1'b0                          ), //i
    .io_occupancy       (streamFifo_2_io_occupancy     ), //o
    .io_availability    (streamFifo_2_io_availability  ), //o
    .aclk               (aclk                          ), //i
    .aresetn            (aresetn                       )  //i
  );
  always @(*) begin
    _zz_m_axi_wlast = 1'b0;
    if(axi4Interface_full_w_fire) begin
      _zz_m_axi_wlast = 1'b1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(axi4Interface_full_b_fire_2) begin
      _zz_1 = 1'b1;
    end
  end

  assign _zz_2 = (_zz_m_axi_wlast_2 == 9'h100);
  assign _zz_3 = (_zz_2 && _zz_m_axi_wlast);
  always @(*) begin
    if(_zz_3) begin
      _zz_m_axi_wlast_1 = 9'h0;
    end else begin
      _zz_m_axi_wlast_1 = (_zz_m_axi_wlast_2 + _zz__zz_m_axi_wlast_1);
    end
    if(_zz_1) begin
      _zz_m_axi_wlast_1 = 9'h0;
    end
  end

  assign axi4Interface_resetStartSendSignal = ((! m_axi_wlast) && m_axi_wlast_regNext);
  assign _zz_4 = (axi4Interface_resetStartSendSignal || (! aresetn));
  always @(*) begin
    _zz_when_Axi4WriteOnlyMaster_l89 = 1'b0;
    if(streamFifo_2_io_push_fire) begin
      _zz_when_Axi4WriteOnlyMaster_l89 = 1'b1;
    end
  end

  always @(*) begin
    _zz_5 = 1'b0;
    if(axi4Interface_full_b_fire) begin
      _zz_5 = 1'b1;
    end
  end

  assign _zz_6 = (_zz_when_Axi4WriteOnlyMaster_l89_2 == 9'h100);
  assign _zz_7 = (_zz_6 && _zz_when_Axi4WriteOnlyMaster_l89);
  always @(*) begin
    if(_zz_7) begin
      _zz_when_Axi4WriteOnlyMaster_l89_1 = 9'h0;
    end else begin
      _zz_when_Axi4WriteOnlyMaster_l89_1 = (_zz_when_Axi4WriteOnlyMaster_l89_2 + _zz__zz_when_Axi4WriteOnlyMaster_l89_1);
    end
    if(_zz_5) begin
      _zz_when_Axi4WriteOnlyMaster_l89_1 = 9'h0;
    end
  end

  always @(*) begin
    s_axis_ready = 1'b0;
    if(when_Axi4WriteOnlyMaster_l89) begin
      s_axis_ready = streamFifo_2_io_push_ready;
    end
  end

  always @(*) begin
    streamFifo_2_io_push_payload = s_axis_payload;
    if(when_Axi4WriteOnlyMaster_l89) begin
      streamFifo_2_io_push_payload = s_axis_payload;
    end
  end

  always @(*) begin
    streamFifo_2_io_push_valid = 1'b0;
    if(when_Axi4WriteOnlyMaster_l89) begin
      streamFifo_2_io_push_valid = s_axis_valid;
    end
  end

  assign when_Axi4WriteOnlyMaster_l89 = ((_zz_when_Axi4WriteOnlyMaster_l89_2 < _zz_when_Axi4WriteOnlyMaster_l89_3) && startSendSignal);
  assign streamFifo_2_io_push_fire = (streamFifo_2_io_push_valid && streamFifo_2_io_push_ready);
  assign axi4Interface_full_b_fire = (m_axi_bvalid && m_axi_bready);
  assign axi4Interface_full_b_fire_1 = (m_axi_bvalid && m_axi_bready);
  assign when_Axi4WriteOnlyMaster_l115 = (axi4Interface_full_b_fire_1 || axi4Interface_isTransferAfterReset);
  assign when_Axi4WriteOnlyMaster_l118 = (aresetn && startSendSignal);
  assign axi4Interface_full_aw_fire = (m_axi_awvalid && m_axi_awready);
  assign m_axi_awvalid = axi4Interface_controlAwValidSignal;
  assign m_axi_awaddr = offset;
  assign m_axi_awregion = 4'b0000;
  assign m_axi_awburst = 2'b01;
  assign m_axi_awlen = (burstLen - 8'h01);
  assign m_axi_awsize = 3'b010;
  assign m_axi_awcache = 4'b0000;
  assign m_axi_awqos = 4'b0000;
  assign m_axi_awprot = 3'b000;
  always @(*) begin
    m_axi_wvalid = 1'b0;
    if(when_Axi4WriteOnlyMaster_l152) begin
      m_axi_wvalid = streamFifo_2_io_pop_valid;
    end
  end

  always @(*) begin
    m_axi_wdata = streamFifo_2_io_pop_payload;
    if(when_Axi4WriteOnlyMaster_l152) begin
      m_axi_wdata = streamFifo_2_io_pop_payload;
    end
  end

  always @(*) begin
    streamFifo_2_io_pop_ready = 1'b0;
    if(when_Axi4WriteOnlyMaster_l152) begin
      streamFifo_2_io_pop_ready = m_axi_wready;
    end
  end

  assign when_Axi4WriteOnlyMaster_l152 = ((_zz_m_axi_wlast_2 < _zz_when_Axi4WriteOnlyMaster_l152) && startSendSignal);
  assign axi4Interface_full_w_fire = (m_axi_wvalid && m_axi_wready);
  assign axi4Interface_full_b_fire_2 = (m_axi_bvalid && m_axi_bready);
  assign m_axi_wstrb = 4'b1111;
  assign m_axi_wlast = (_zz_m_axi_wlast_2 == _zz_m_axi_wlast_3);
  assign axi4Interface_full_b_fire_3 = (m_axi_bvalid && m_axi_bready);
  assign m_axi_bready = axi4Interface_controlBReady;
  assign axi4Interface_full_b_fire_4 = (m_axi_bvalid && m_axi_bready);
  assign transInterrupt = axi4Interface_isBurstComplete;
  always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
      _zz_m_axi_wlast_2 <= 9'h0;
      _zz_when_Axi4WriteOnlyMaster_l89_2 <= 9'h0;
      axi4Interface_isTransferAfterReset <= 1'b1;
      axi4Interface_lastBurstComplete <= 1'b0;
      axi4Interface_controlAwValidSignal <= 1'b0;
      axi4Interface_controlBReady <= 1'b0;
    end else begin
      _zz_m_axi_wlast_2 <= _zz_m_axi_wlast_1;
      _zz_when_Axi4WriteOnlyMaster_l89_2 <= _zz_when_Axi4WriteOnlyMaster_l89_1;
      if(aresetn) begin
        axi4Interface_isTransferAfterReset <= 1'b0;
      end
      if(when_Axi4WriteOnlyMaster_l115) begin
        axi4Interface_lastBurstComplete <= 1'b1;
      end
      if(when_Axi4WriteOnlyMaster_l118) begin
        if(axi4Interface_full_aw_fire) begin
          axi4Interface_controlAwValidSignal <= 1'b0;
        end
        if(axi4Interface_lastBurstComplete) begin
          axi4Interface_controlAwValidSignal <= 1'b1;
          axi4Interface_lastBurstComplete <= 1'b0;
        end
      end
      if(m_axi_wvalid) begin
        axi4Interface_controlBReady <= 1'b1;
      end
      if(axi4Interface_full_b_fire_3) begin
        axi4Interface_controlBReady <= 1'b0;
      end
    end
  end

  always @(posedge aclk) begin
    m_axi_wlast_regNext <= m_axi_wlast;
    axi4Interface_isBurstComplete <= axi4Interface_full_b_fire_4;
    if(axi4Interface_isBurstComplete) begin
      axi4Interface_isBurstComplete <= 1'b0;
    end
  end

  always @(posedge start or posedge _zz_4) begin
    if(_zz_4) begin
      startSendSignal <= 1'b0;
    end else begin
      startSendSignal <= 1'b1;
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload,
  input               io_flush,
  output     [8:0]    io_occupancy,
  output     [8:0]    io_availability,
  input               aclk,
  input               aresetn
);
  reg        [31:0]   _zz_logic_ram_port0;
  wire       [7:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [7:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [7:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [7:0]    logic_pushPtr_valueNext;
  reg        [7:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [7:0]    logic_popPtr_valueNext;
  reg        [7:0]    logic_popPtr_value;
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
  wire       [7:0]    logic_ptrDif;
  reg [31:0] logic_ram [0:255];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_pop_payload = 1'b1;
  always @(posedge aclk) begin
    if(_zz_io_pop_payload) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge aclk) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'hff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 8'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'hff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 8'h0;
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
  always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
      logic_pushPtr_value <= 8'h0;
      logic_popPtr_value <= 8'h0;
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