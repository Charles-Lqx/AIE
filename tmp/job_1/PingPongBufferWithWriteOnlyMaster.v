// Generator : SpinalHDL v1.6.1    git head : 3bf789d53b1b5a36974196e2d591342e15ddf28c
// Component : PingPongBufferWithWriteOnlyMaster
// Git hash  : bcf6aa3771bfd5ca7adaf0601a0e5779037fde65

`timescale 1ns/1ps 

module PingPongBufferWithWriteOnlyMaster (
  input               streamIn_valid,
  output              streamIn_ready,
  input      [31:0]   streamIn_payload,
  input               startIn,
  input      [7:0]    bufferDepthIn,
  output              interruptOut,
  output              full_aw_valid,
  input               full_aw_ready,
  output     [31:0]   full_aw_payload_addr,
  output     [3:0]    full_aw_payload_region,
  output     [7:0]    full_aw_payload_len,
  output     [2:0]    full_aw_payload_size,
  output     [1:0]    full_aw_payload_burst,
  output     [3:0]    full_aw_payload_cache,
  output     [3:0]    full_aw_payload_qos,
  output     [2:0]    full_aw_payload_prot,
  output              full_w_valid,
  input               full_w_ready,
  output     [31:0]   full_w_payload_data,
  output     [3:0]    full_w_payload_strb,
  output              full_w_payload_last,
  input               full_b_valid,
  output              full_b_ready,
  input      [1:0]    full_b_payload_resp,
  input      [31:0]   offset,
  input               aresetn,
  input               aclk
);

  wire                pingPongBuffer_1_s_axis_ready;
  wire                pingPongBuffer_1_interruptOut;
  wire                pingPongBuffer_1_m_axis_valid;
  wire       [31:0]   pingPongBuffer_1_m_axis_payload;
  wire                pingPongBuffer_1_startOut;
  wire       [7:0]    pingPongBuffer_1_bufferDepthOut;
  wire                writeOnlyMater_s_axis_ready;
  wire                writeOnlyMater_m_axi_awvalid;
  wire       [31:0]   writeOnlyMater_m_axi_awaddr;
  wire       [3:0]    writeOnlyMater_m_axi_awregion;
  wire       [7:0]    writeOnlyMater_m_axi_awlen;
  wire       [2:0]    writeOnlyMater_m_axi_awsize;
  wire       [1:0]    writeOnlyMater_m_axi_awburst;
  wire       [3:0]    writeOnlyMater_m_axi_awcache;
  wire       [3:0]    writeOnlyMater_m_axi_awqos;
  wire       [2:0]    writeOnlyMater_m_axi_awprot;
  wire                writeOnlyMater_m_axi_wvalid;
  wire       [31:0]   writeOnlyMater_m_axi_wdata;
  wire       [3:0]    writeOnlyMater_m_axi_wstrb;
  wire                writeOnlyMater_m_axi_wlast;
  wire                writeOnlyMater_m_axi_bready;
  wire                writeOnlyMater_transInterrupt;

  PingPongBuffer pingPongBuffer_1 (
    .s_axis_valid      (streamIn_valid                         ), //i
    .s_axis_ready      (pingPongBuffer_1_s_axis_ready          ), //o
    .s_axis_payload    (streamIn_payload[31:0]                 ), //i
    .startIn           (startIn                                ), //i
    .bufferDepthIn     (bufferDepthIn[7:0]                     ), //i
    .interruptOut      (pingPongBuffer_1_interruptOut          ), //o
    .m_axis_valid      (pingPongBuffer_1_m_axis_valid          ), //o
    .m_axis_ready      (writeOnlyMater_s_axis_ready            ), //i
    .m_axis_payload    (pingPongBuffer_1_m_axis_payload[31:0]  ), //o
    .startOut          (pingPongBuffer_1_startOut              ), //o
    .bufferDepthOut    (pingPongBuffer_1_bufferDepthOut[7:0]   ), //o
    .interruptIn       (writeOnlyMater_transInterrupt          ), //i
    .aresetn           (aresetn                                ), //i
    .aclk              (aclk                                   )  //i
  );
  Stream2Axi4WriteOnlyMasterInterface writeOnlyMater (
    .start             (pingPongBuffer_1_startOut              ), //i
    .burstLen          (pingPongBuffer_1_bufferDepthOut[7:0]   ), //i
    .offset            (offset[31:0]                           ), //i
    .s_axis_valid      (pingPongBuffer_1_m_axis_valid          ), //i
    .s_axis_ready      (writeOnlyMater_s_axis_ready            ), //o
    .s_axis_payload    (pingPongBuffer_1_m_axis_payload[31:0]  ), //i
    .m_axi_awvalid     (writeOnlyMater_m_axi_awvalid           ), //o
    .m_axi_awready     (full_aw_ready                          ), //i
    .m_axi_awaddr      (writeOnlyMater_m_axi_awaddr[31:0]      ), //o
    .m_axi_awregion    (writeOnlyMater_m_axi_awregion[3:0]     ), //o
    .m_axi_awlen       (writeOnlyMater_m_axi_awlen[7:0]        ), //o
    .m_axi_awsize      (writeOnlyMater_m_axi_awsize[2:0]       ), //o
    .m_axi_awburst     (writeOnlyMater_m_axi_awburst[1:0]      ), //o
    .m_axi_awcache     (writeOnlyMater_m_axi_awcache[3:0]      ), //o
    .m_axi_awqos       (writeOnlyMater_m_axi_awqos[3:0]        ), //o
    .m_axi_awprot      (writeOnlyMater_m_axi_awprot[2:0]       ), //o
    .m_axi_wvalid      (writeOnlyMater_m_axi_wvalid            ), //o
    .m_axi_wready      (full_w_ready                           ), //i
    .m_axi_wdata       (writeOnlyMater_m_axi_wdata[31:0]       ), //o
    .m_axi_wstrb       (writeOnlyMater_m_axi_wstrb[3:0]        ), //o
    .m_axi_wlast       (writeOnlyMater_m_axi_wlast             ), //o
    .m_axi_bvalid      (full_b_valid                           ), //i
    .m_axi_bready      (writeOnlyMater_m_axi_bready            ), //o
    .m_axi_bresp       (full_b_payload_resp[1:0]               ), //i
    .transInterrupt    (writeOnlyMater_transInterrupt          ), //o
    .aresetn           (aresetn                                ), //i
    .aclk              (aclk                                   )  //i
  );
  assign streamIn_ready = pingPongBuffer_1_s_axis_ready;
  assign interruptOut = pingPongBuffer_1_interruptOut;
  assign full_aw_valid = writeOnlyMater_m_axi_awvalid;
  assign full_aw_payload_addr = writeOnlyMater_m_axi_awaddr;
  assign full_aw_payload_region = writeOnlyMater_m_axi_awregion;
  assign full_aw_payload_len = writeOnlyMater_m_axi_awlen;
  assign full_aw_payload_size = writeOnlyMater_m_axi_awsize;
  assign full_aw_payload_burst = writeOnlyMater_m_axi_awburst;
  assign full_aw_payload_cache = writeOnlyMater_m_axi_awcache;
  assign full_aw_payload_qos = writeOnlyMater_m_axi_awqos;
  assign full_aw_payload_prot = writeOnlyMater_m_axi_awprot;
  assign full_w_valid = writeOnlyMater_m_axi_wvalid;
  assign full_w_payload_data = writeOnlyMater_m_axi_wdata;
  assign full_w_payload_strb = writeOnlyMater_m_axi_wstrb;
  assign full_w_payload_last = writeOnlyMater_m_axi_wlast;
  assign full_b_ready = writeOnlyMater_m_axi_bready;

endmodule

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

  reg                 streamFifo_3_io_push_valid;
  reg        [31:0]   streamFifo_3_io_push_payload;
  reg                 streamFifo_3_io_pop_ready;
  wire                streamFifo_3_io_push_ready;
  wire                streamFifo_3_io_pop_valid;
  wire       [31:0]   streamFifo_3_io_pop_payload;
  wire       [8:0]    streamFifo_3_io_occupancy;
  wire       [8:0]    streamFifo_3_io_availability;
  wire       [8:0]    _zz__zz_m_axi_wlast_1;
  wire       [0:0]    _zz__zz_m_axi_wlast_1_1;
  wire       [8:0]    _zz__zz_when_Axi4WriteOnlyMaster_l93_1;
  wire       [0:0]    _zz__zz_when_Axi4WriteOnlyMaster_l93_1_1;
  wire       [8:0]    _zz_when_Axi4WriteOnlyMaster_l93_3;
  wire       [8:0]    _zz_when_Axi4WriteOnlyMaster_l156;
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
  reg                 _zz_when_Axi4WriteOnlyMaster_l93;
  reg                 _zz_5;
  reg        [8:0]    _zz_when_Axi4WriteOnlyMaster_l93_1;
  reg        [8:0]    _zz_when_Axi4WriteOnlyMaster_l93_2;
  wire                _zz_6;
  wire                _zz_7;
  wire                when_Axi4WriteOnlyMaster_l93;
  wire                streamFifo_3_io_push_fire;
  wire                axi4Interface_full_b_fire;
  reg                 axi4Interface_isTransferAfterReset;
  wire                axi4Interface_full_b_fire_1;
  wire                when_Axi4WriteOnlyMaster_l119;
  reg                 axi4Interface_lastBurstComplete;
  reg                 axi4Interface_controlAwValidSignal;
  wire                when_Axi4WriteOnlyMaster_l122;
  wire                axi4Interface_full_aw_fire;
  wire                when_Axi4WriteOnlyMaster_l156;
  wire                axi4Interface_full_w_fire;
  wire                axi4Interface_full_b_fire_2;
  reg                 axi4Interface_controlBReady;
  wire                axi4Interface_full_b_fire_3;
  wire                axi4Interface_full_b_fire_4;
  reg                 axi4Interface_isBurstComplete;

  assign _zz__zz_m_axi_wlast_1_1 = _zz_m_axi_wlast;
  assign _zz__zz_m_axi_wlast_1 = {8'd0, _zz__zz_m_axi_wlast_1_1};
  assign _zz__zz_when_Axi4WriteOnlyMaster_l93_1_1 = _zz_when_Axi4WriteOnlyMaster_l93;
  assign _zz__zz_when_Axi4WriteOnlyMaster_l93_1 = {8'd0, _zz__zz_when_Axi4WriteOnlyMaster_l93_1_1};
  assign _zz_when_Axi4WriteOnlyMaster_l93_3 = {1'd0, burstLen};
  assign _zz_when_Axi4WriteOnlyMaster_l156 = {1'd0, burstLen};
  assign _zz_m_axi_wlast_4 = (burstLen - 8'h01);
  assign _zz_m_axi_wlast_3 = {1'd0, _zz_m_axi_wlast_4};
  StreamFifo streamFifo_3 (
    .io_push_valid      (streamFifo_3_io_push_valid          ), //i
    .io_push_ready      (streamFifo_3_io_push_ready          ), //o
    .io_push_payload    (streamFifo_3_io_push_payload[31:0]  ), //i
    .io_pop_valid       (streamFifo_3_io_pop_valid           ), //o
    .io_pop_ready       (streamFifo_3_io_pop_ready           ), //i
    .io_pop_payload     (streamFifo_3_io_pop_payload[31:0]   ), //o
    .io_flush           (1'b0                                ), //i
    .io_occupancy       (streamFifo_3_io_occupancy[8:0]      ), //o
    .io_availability    (streamFifo_3_io_availability[8:0]   ), //o
    .aclk               (aclk                                ), //i
    .aresetn            (aresetn                             )  //i
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
    _zz_when_Axi4WriteOnlyMaster_l93 = 1'b0;
    if(streamFifo_3_io_push_fire) begin
      _zz_when_Axi4WriteOnlyMaster_l93 = 1'b1;
    end
  end

  always @(*) begin
    _zz_5 = 1'b0;
    if(axi4Interface_full_b_fire) begin
      _zz_5 = 1'b1;
    end
  end

  assign _zz_6 = (_zz_when_Axi4WriteOnlyMaster_l93_2 == 9'h100);
  assign _zz_7 = (_zz_6 && _zz_when_Axi4WriteOnlyMaster_l93);
  always @(*) begin
    if(_zz_7) begin
      _zz_when_Axi4WriteOnlyMaster_l93_1 = 9'h0;
    end else begin
      _zz_when_Axi4WriteOnlyMaster_l93_1 = (_zz_when_Axi4WriteOnlyMaster_l93_2 + _zz__zz_when_Axi4WriteOnlyMaster_l93_1);
    end
    if(_zz_5) begin
      _zz_when_Axi4WriteOnlyMaster_l93_1 = 9'h0;
    end
  end

  always @(*) begin
    s_axis_ready = 1'b0;
    if(when_Axi4WriteOnlyMaster_l93) begin
      s_axis_ready = streamFifo_3_io_push_ready;
    end
  end

  always @(*) begin
    streamFifo_3_io_push_payload = s_axis_payload;
    if(when_Axi4WriteOnlyMaster_l93) begin
      streamFifo_3_io_push_payload = s_axis_payload;
    end
  end

  always @(*) begin
    streamFifo_3_io_push_valid = 1'b0;
    if(when_Axi4WriteOnlyMaster_l93) begin
      streamFifo_3_io_push_valid = s_axis_valid;
    end
  end

  assign when_Axi4WriteOnlyMaster_l93 = ((_zz_when_Axi4WriteOnlyMaster_l93_2 < _zz_when_Axi4WriteOnlyMaster_l93_3) && startSendSignal);
  assign streamFifo_3_io_push_fire = (streamFifo_3_io_push_valid && streamFifo_3_io_push_ready);
  assign axi4Interface_full_b_fire = (m_axi_bvalid && m_axi_bready);
  assign axi4Interface_full_b_fire_1 = (m_axi_bvalid && m_axi_bready);
  assign when_Axi4WriteOnlyMaster_l119 = (axi4Interface_full_b_fire_1 || axi4Interface_isTransferAfterReset);
  assign when_Axi4WriteOnlyMaster_l122 = (aresetn && startSendSignal);
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
    if(when_Axi4WriteOnlyMaster_l156) begin
      m_axi_wvalid = streamFifo_3_io_pop_valid;
    end
  end

  always @(*) begin
    m_axi_wdata = streamFifo_3_io_pop_payload;
    if(when_Axi4WriteOnlyMaster_l156) begin
      m_axi_wdata = streamFifo_3_io_pop_payload;
    end
  end

  always @(*) begin
    streamFifo_3_io_pop_ready = 1'b0;
    if(when_Axi4WriteOnlyMaster_l156) begin
      streamFifo_3_io_pop_ready = m_axi_wready;
    end
  end

  assign when_Axi4WriteOnlyMaster_l156 = ((_zz_m_axi_wlast_2 < _zz_when_Axi4WriteOnlyMaster_l156) && startSendSignal);
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
      _zz_when_Axi4WriteOnlyMaster_l93_2 <= 9'h0;
      axi4Interface_isTransferAfterReset <= 1'b1;
      axi4Interface_lastBurstComplete <= 1'b0;
      axi4Interface_controlAwValidSignal <= 1'b0;
      axi4Interface_controlBReady <= 1'b0;
    end else begin
      _zz_m_axi_wlast_2 <= _zz_m_axi_wlast_1;
      _zz_when_Axi4WriteOnlyMaster_l93_2 <= _zz_when_Axi4WriteOnlyMaster_l93_1;
      if(aresetn) begin
        axi4Interface_isTransferAfterReset <= 1'b0;
      end
      if(when_Axi4WriteOnlyMaster_l119) begin
        axi4Interface_lastBurstComplete <= 1'b1;
      end
      if(when_Axi4WriteOnlyMaster_l122) begin
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

module PingPongBuffer (
  input               s_axis_valid,
  output reg          s_axis_ready,
  input      [31:0]   s_axis_payload,
  input               startIn,
  input      [7:0]    bufferDepthIn,
  output              interruptOut,
  output reg          m_axis_valid,
  input               m_axis_ready,
  output reg [31:0]   m_axis_payload,
  output              startOut,
  output     [7:0]    bufferDepthOut,
  input               interruptIn,
  input               aresetn,
  input               aclk
);
  localparam pingPongBufferStateMachine_enumDef_BOOT = 2'd0;
  localparam pingPongBufferStateMachine_enumDef_EMPTY = 2'd1;
  localparam pingPongBufferStateMachine_enumDef_HALF = 2'd2;
  localparam pingPongBufferStateMachine_enumDef_FULL = 2'd3;

  reg                 bufferFifoA_io_push_valid;
  reg        [31:0]   bufferFifoA_io_push_payload;
  reg                 bufferFifoA_io_pop_ready;
  reg                 bufferFifoB_io_push_valid;
  reg        [31:0]   bufferFifoB_io_push_payload;
  reg                 bufferFifoB_io_pop_ready;
  wire                bufferFifoA_io_push_ready;
  wire                bufferFifoA_io_pop_valid;
  wire       [31:0]   bufferFifoA_io_pop_payload;
  wire       [8:0]    bufferFifoA_io_occupancy;
  wire       [8:0]    bufferFifoA_io_availability;
  wire                bufferFifoB_io_push_ready;
  wire                bufferFifoB_io_pop_valid;
  wire       [31:0]   bufferFifoB_io_pop_payload;
  wire       [8:0]    bufferFifoB_io_occupancy;
  wire       [8:0]    bufferFifoB_io_availability;
  wire       [7:0]    _zz_inCounter_valueNext;
  wire       [0:0]    _zz_inCounter_valueNext_1;
  wire       [7:0]    _zz_outCounter_valueNext;
  wire       [0:0]    _zz_outCounter_valueNext_1;
  wire       [7:0]    _zz_inCounterWillOverflow;
  wire       [7:0]    _zz_inCounterWillOverflow_1;
  wire       [0:0]    _zz_inCounterWillOverflow_2;
  wire       [7:0]    _zz_outCounterWillOverflow;
  wire       [7:0]    _zz_outCounterWillOverflow_1;
  wire       [0:0]    _zz_outCounterWillOverflow_2;
  wire       [7:0]    _zz_realStartSignal;
  wire       [7:0]    _zz_realStartSignal_1;
  wire       [0:0]    _zz_realStartSignal_2;
  reg                 inCounter_willIncrement;
  reg                 inCounter_willClear;
  reg        [7:0]    inCounter_valueNext;
  reg        [7:0]    inCounter_value;
  wire                inCounter_willOverflowIfInc;
  wire                inCounter_willOverflow;
  reg                 outCounter_willIncrement;
  reg                 outCounter_willClear;
  reg        [7:0]    outCounter_valueNext;
  reg        [7:0]    outCounter_value;
  wire                outCounter_willOverflowIfInc;
  wire                outCounter_willOverflow;
  reg                 isWriteBufferA;
  reg                 isReadBufferA;
  wire                streamIn_fire;
  wire                inCounterWillOverflow;
  wire                streamOut_fire;
  wire                outCounterWillOverflow;
  wire                streamIn_fire_1;
  wire                streamOut_fire_1;
  reg                 startReceiveResetSignal;
  wire                _zz_1;
  (* async_reg = "true" *) reg                 startReceiveSignal;
  wire                realStartSignal;
  wire                _zz_2;
  (* async_reg = "true" *) reg                 lastBurstCompleteSignal;
  reg                 isAfterResetState;
  wire                pingPongBufferStateMachine_wantExit;
  reg                 pingPongBufferStateMachine_wantStart;
  wire                pingPongBufferStateMachine_wantKill;
  reg                 outputStartSignalState;
  reg                 outputInterruptSignalState;
  reg        [1:0]    pingPongBufferStateMachine_stateReg;
  reg        [1:0]    pingPongBufferStateMachine_stateNext;
  wire                _zz_when_StateMachine_l219;
  wire                _zz_when_StateMachine_l219_1;
  wire                when_PingPongBuffer_l135;
  wire                when_PingPongBuffer_l142;
  wire                when_PingPongBuffer_l155;
  wire                when_PingPongBuffer_l164;
  wire                when_PingPongBuffer_l167;
  wire                when_PingPongBuffer_l168;
  wire                when_PingPongBuffer_l179;
  wire                when_StateMachine_l219;
  wire                when_StateMachine_l219_1;
  wire                when_StateMachine_l235;
  `ifndef SYNTHESIS
  reg [39:0] pingPongBufferStateMachine_stateReg_string;
  reg [39:0] pingPongBufferStateMachine_stateNext_string;
  `endif


  assign _zz_inCounter_valueNext_1 = inCounter_willIncrement;
  assign _zz_inCounter_valueNext = {7'd0, _zz_inCounter_valueNext_1};
  assign _zz_outCounter_valueNext_1 = outCounter_willIncrement;
  assign _zz_outCounter_valueNext = {7'd0, _zz_outCounter_valueNext_1};
  assign _zz_inCounterWillOverflow = (bufferDepthIn - _zz_inCounterWillOverflow_1);
  assign _zz_inCounterWillOverflow_2 = 1'b1;
  assign _zz_inCounterWillOverflow_1 = {7'd0, _zz_inCounterWillOverflow_2};
  assign _zz_outCounterWillOverflow = (bufferDepthIn - _zz_outCounterWillOverflow_1);
  assign _zz_outCounterWillOverflow_2 = 1'b1;
  assign _zz_outCounterWillOverflow_1 = {7'd0, _zz_outCounterWillOverflow_2};
  assign _zz_realStartSignal = (bufferDepthIn - _zz_realStartSignal_1);
  assign _zz_realStartSignal_2 = 1'b1;
  assign _zz_realStartSignal_1 = {7'd0, _zz_realStartSignal_2};
  StreamFifo bufferFifoA (
    .io_push_valid      (bufferFifoA_io_push_valid          ), //i
    .io_push_ready      (bufferFifoA_io_push_ready          ), //o
    .io_push_payload    (bufferFifoA_io_push_payload[31:0]  ), //i
    .io_pop_valid       (bufferFifoA_io_pop_valid           ), //o
    .io_pop_ready       (bufferFifoA_io_pop_ready           ), //i
    .io_pop_payload     (bufferFifoA_io_pop_payload[31:0]   ), //o
    .io_flush           (1'b0                               ), //i
    .io_occupancy       (bufferFifoA_io_occupancy[8:0]      ), //o
    .io_availability    (bufferFifoA_io_availability[8:0]   ), //o
    .aclk               (aclk                               ), //i
    .aresetn            (aresetn                            )  //i
  );
  StreamFifo bufferFifoB (
    .io_push_valid      (bufferFifoB_io_push_valid          ), //i
    .io_push_ready      (bufferFifoB_io_push_ready          ), //o
    .io_push_payload    (bufferFifoB_io_push_payload[31:0]  ), //i
    .io_pop_valid       (bufferFifoB_io_pop_valid           ), //o
    .io_pop_ready       (bufferFifoB_io_pop_ready           ), //i
    .io_pop_payload     (bufferFifoB_io_pop_payload[31:0]   ), //o
    .io_flush           (1'b0                               ), //i
    .io_occupancy       (bufferFifoB_io_occupancy[8:0]      ), //o
    .io_availability    (bufferFifoB_io_availability[8:0]   ), //o
    .aclk               (aclk                               ), //i
    .aresetn            (aresetn                            )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_BOOT : pingPongBufferStateMachine_stateReg_string = "BOOT ";
      pingPongBufferStateMachine_enumDef_EMPTY : pingPongBufferStateMachine_stateReg_string = "EMPTY";
      pingPongBufferStateMachine_enumDef_HALF : pingPongBufferStateMachine_stateReg_string = "HALF ";
      pingPongBufferStateMachine_enumDef_FULL : pingPongBufferStateMachine_stateReg_string = "FULL ";
      default : pingPongBufferStateMachine_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(pingPongBufferStateMachine_stateNext)
      pingPongBufferStateMachine_enumDef_BOOT : pingPongBufferStateMachine_stateNext_string = "BOOT ";
      pingPongBufferStateMachine_enumDef_EMPTY : pingPongBufferStateMachine_stateNext_string = "EMPTY";
      pingPongBufferStateMachine_enumDef_HALF : pingPongBufferStateMachine_stateNext_string = "HALF ";
      pingPongBufferStateMachine_enumDef_FULL : pingPongBufferStateMachine_stateNext_string = "FULL ";
      default : pingPongBufferStateMachine_stateNext_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    inCounter_willIncrement = 1'b0;
    if(streamIn_fire_1) begin
      inCounter_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    inCounter_willClear = 1'b0;
    if(inCounterWillOverflow) begin
      inCounter_willClear = 1'b1;
    end
  end

  assign inCounter_willOverflowIfInc = (inCounter_value == 8'hff);
  assign inCounter_willOverflow = (inCounter_willOverflowIfInc && inCounter_willIncrement);
  always @(*) begin
    inCounter_valueNext = (inCounter_value + _zz_inCounter_valueNext);
    if(inCounter_willClear) begin
      inCounter_valueNext = 8'h0;
    end
  end

  always @(*) begin
    outCounter_willIncrement = 1'b0;
    if(streamOut_fire_1) begin
      outCounter_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    outCounter_willClear = 1'b0;
    if(outCounterWillOverflow) begin
      outCounter_willClear = 1'b1;
    end
  end

  assign outCounter_willOverflowIfInc = (outCounter_value == 8'hff);
  assign outCounter_willOverflow = (outCounter_willOverflowIfInc && outCounter_willIncrement);
  always @(*) begin
    outCounter_valueNext = (outCounter_value + _zz_outCounter_valueNext);
    if(outCounter_willClear) begin
      outCounter_valueNext = 8'h0;
    end
  end

  assign streamIn_fire = (s_axis_valid && s_axis_ready);
  assign inCounterWillOverflow = ((inCounter_value == _zz_inCounterWillOverflow) && streamIn_fire);
  assign streamOut_fire = (m_axis_valid && m_axis_ready);
  assign outCounterWillOverflow = ((outCounter_value == _zz_outCounterWillOverflow) && streamOut_fire);
  assign streamIn_fire_1 = (s_axis_valid && s_axis_ready);
  assign streamOut_fire_1 = (m_axis_valid && m_axis_ready);
  always @(*) begin
    startReceiveResetSignal = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l155) begin
          startReceiveResetSignal = 1'b1;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
    if(when_StateMachine_l219) begin
      startReceiveResetSignal = 1'b1;
    end
    if(when_StateMachine_l219_1) begin
      startReceiveResetSignal = 1'b1;
    end
  end

  assign _zz_1 = ((! aresetn) || startReceiveResetSignal);
  assign realStartSignal = (startReceiveSignal || (inCounter_value == _zz_realStartSignal));
  assign _zz_2 = ((! aresetn) || startOut);
  always @(*) begin
    bufferFifoA_io_push_valid = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l135) begin
          bufferFifoA_io_push_valid = s_axis_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l167) begin
          bufferFifoA_io_push_valid = s_axis_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bufferFifoA_io_push_payload = s_axis_payload;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l135) begin
          bufferFifoA_io_push_payload = s_axis_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l167) begin
          bufferFifoA_io_push_payload = s_axis_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bufferFifoB_io_push_valid = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l142) begin
          bufferFifoB_io_push_valid = s_axis_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l168) begin
          bufferFifoB_io_push_valid = s_axis_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bufferFifoB_io_push_payload = s_axis_payload;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l142) begin
          bufferFifoB_io_push_payload = s_axis_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l168) begin
          bufferFifoB_io_push_payload = s_axis_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bufferFifoA_io_pop_ready = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(isReadBufferA) begin
          bufferFifoA_io_pop_ready = m_axis_ready;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(isReadBufferA) begin
          bufferFifoA_io_pop_ready = m_axis_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bufferFifoB_io_pop_ready = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l164) begin
          bufferFifoB_io_pop_ready = m_axis_ready;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(when_PingPongBuffer_l179) begin
          bufferFifoB_io_pop_ready = m_axis_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    m_axis_valid = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(isReadBufferA) begin
          m_axis_valid = bufferFifoA_io_pop_valid;
        end
        if(when_PingPongBuffer_l164) begin
          m_axis_valid = bufferFifoB_io_pop_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(isReadBufferA) begin
          m_axis_valid = bufferFifoA_io_pop_valid;
        end
        if(when_PingPongBuffer_l179) begin
          m_axis_valid = bufferFifoB_io_pop_valid;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    m_axis_payload = bufferFifoA_io_pop_payload;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(isReadBufferA) begin
          m_axis_payload = bufferFifoA_io_pop_payload;
        end
        if(when_PingPongBuffer_l164) begin
          m_axis_payload = bufferFifoB_io_pop_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(isReadBufferA) begin
          m_axis_payload = bufferFifoA_io_pop_payload;
        end
        if(when_PingPongBuffer_l179) begin
          m_axis_payload = bufferFifoB_io_pop_payload;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    s_axis_ready = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l135) begin
          s_axis_ready = bufferFifoA_io_push_ready;
        end
        if(when_PingPongBuffer_l142) begin
          s_axis_ready = bufferFifoB_io_push_ready;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l167) begin
          s_axis_ready = bufferFifoA_io_push_ready;
        end
        if(when_PingPongBuffer_l168) begin
          s_axis_ready = bufferFifoB_io_push_ready;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  assign pingPongBufferStateMachine_wantExit = 1'b0;
  always @(*) begin
    pingPongBufferStateMachine_wantStart = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
        pingPongBufferStateMachine_wantStart = 1'b1;
      end
    endcase
  end

  assign pingPongBufferStateMachine_wantKill = 1'b0;
  assign bufferDepthOut = bufferDepthIn;
  assign startOut = outputStartSignalState;
  assign interruptOut = outputInterruptSignalState;
  assign _zz_when_StateMachine_l219 = (pingPongBufferStateMachine_stateReg == pingPongBufferStateMachine_enumDef_EMPTY);
  assign _zz_when_StateMachine_l219_1 = (pingPongBufferStateMachine_stateNext == pingPongBufferStateMachine_enumDef_EMPTY);
  always @(*) begin
    pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_stateReg;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l135) begin
          if(inCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
          end
        end
        if(when_PingPongBuffer_l142) begin
          if(inCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
          end
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l155) begin
          pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
        end else begin
          if(inCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_FULL;
          end else begin
            if(outCounterWillOverflow) begin
              pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_EMPTY;
            end
          end
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(isReadBufferA) begin
          if(outCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
          end
        end
        if(when_PingPongBuffer_l179) begin
          if(outCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
          end
        end
      end
      default : begin
      end
    endcase
    if(pingPongBufferStateMachine_wantStart) begin
      pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_EMPTY;
    end
    if(pingPongBufferStateMachine_wantKill) begin
      pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_BOOT;
    end
  end

  assign when_PingPongBuffer_l135 = (realStartSignal && isWriteBufferA);
  assign when_PingPongBuffer_l142 = (realStartSignal && (! isWriteBufferA));
  assign when_PingPongBuffer_l155 = (inCounterWillOverflow && outCounterWillOverflow);
  assign when_PingPongBuffer_l164 = (! isReadBufferA);
  assign when_PingPongBuffer_l167 = (realStartSignal && isWriteBufferA);
  assign when_PingPongBuffer_l168 = (realStartSignal && (! isWriteBufferA));
  assign when_PingPongBuffer_l179 = (! isWriteBufferA);
  assign when_StateMachine_l219 = (_zz_when_StateMachine_l219 && (! _zz_when_StateMachine_l219_1));
  assign when_StateMachine_l219_1 = ((pingPongBufferStateMachine_stateReg == pingPongBufferStateMachine_enumDef_FULL) && (! (pingPongBufferStateMachine_stateNext == pingPongBufferStateMachine_enumDef_FULL)));
  assign when_StateMachine_l235 = ((! _zz_when_StateMachine_l219) && _zz_when_StateMachine_l219_1);
  always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
      inCounter_value <= 8'h0;
      outCounter_value <= 8'h0;
      isWriteBufferA <= 1'b1;
      isReadBufferA <= 1'b1;
      isAfterResetState <= 1'b1;
      outputStartSignalState <= 1'b0;
      outputInterruptSignalState <= 1'b0;
      pingPongBufferStateMachine_stateReg <= pingPongBufferStateMachine_enumDef_BOOT;
    end else begin
      inCounter_value <= inCounter_valueNext;
      outCounter_value <= outCounter_valueNext;
      if(inCounterWillOverflow) begin
        isWriteBufferA <= (! isWriteBufferA);
      end
      if(outCounterWillOverflow) begin
        isReadBufferA <= (! isReadBufferA);
      end
      if(aresetn) begin
        isAfterResetState <= 1'b0;
      end
      if(isAfterResetState) begin
        outputStartSignalState <= 1'b1;
      end else begin
        outputStartSignalState <= lastBurstCompleteSignal;
      end
      pingPongBufferStateMachine_stateReg <= pingPongBufferStateMachine_stateNext;
      case(pingPongBufferStateMachine_stateReg)
        pingPongBufferStateMachine_enumDef_EMPTY : begin
          outputInterruptSignalState <= 1'b0;
          if(when_PingPongBuffer_l135) begin
            if(inCounterWillOverflow) begin
              outputInterruptSignalState <= 1'b1;
            end
          end
          if(when_PingPongBuffer_l142) begin
            if(inCounterWillOverflow) begin
              outputInterruptSignalState <= 1'b1;
            end
          end
        end
        pingPongBufferStateMachine_enumDef_HALF : begin
          outputInterruptSignalState <= 1'b0;
          if(when_PingPongBuffer_l155) begin
            outputInterruptSignalState <= 1'b1;
          end
        end
        pingPongBufferStateMachine_enumDef_FULL : begin
          if(isReadBufferA) begin
            if(outCounterWillOverflow) begin
              outputInterruptSignalState <= 1'b1;
            end
          end
          if(when_PingPongBuffer_l179) begin
            if(outCounterWillOverflow) begin
              outputInterruptSignalState <= 1'b1;
            end
          end
        end
        default : begin
        end
      endcase
      if(when_StateMachine_l235) begin
        if(isAfterResetState) begin
          outputInterruptSignalState <= 1'b1;
        end
      end
    end
  end

  always @(posedge startIn or posedge _zz_1) begin
    if(_zz_1) begin
      startReceiveSignal <= 1'b0;
    end else begin
      startReceiveSignal <= 1'b1;
    end
  end

  always @(posedge interruptIn or posedge _zz_2) begin
    if(_zz_2) begin
      lastBurstCompleteSignal <= 1'b0;
    end else begin
      lastBurstCompleteSignal <= 1'b1;
    end
  end


endmodule

//StreamFifo replaced by StreamFifo

//StreamFifo replaced by StreamFifo

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
  wire                when_Stream_l946;
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
  assign when_Stream_l946 = (logic_pushing != logic_popping);
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
      if(when_Stream_l946) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule
