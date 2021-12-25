// Generator : SpinalHDL v1.6.1    git head : 3bf789d53b1b5a36974196e2d591342e15ddf28c
// Component : PingPongBufferWithWriteOnlyMaster
// Git hash  : d81d1ac26c3eeb33b3a06067cad9605790be8c08

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

  wire                pingPongBuffer_1_streamIn_ready;
  wire                pingPongBuffer_1_interruptOut;
  wire                pingPongBuffer_1_streamOut_valid;
  wire       [31:0]   pingPongBuffer_1_streamOut_payload;
  wire                pingPongBuffer_1_startOut;
  wire       [7:0]    pingPongBuffer_1_bufferDepthOut;
  wire                writeOnlyMater_axi4Interface_stream_ready;
  wire                writeOnlyMater_axi4Interface_full_aw_valid;
  wire       [31:0]   writeOnlyMater_axi4Interface_full_aw_payload_addr;
  wire       [3:0]    writeOnlyMater_axi4Interface_full_aw_payload_region;
  wire       [7:0]    writeOnlyMater_axi4Interface_full_aw_payload_len;
  wire       [2:0]    writeOnlyMater_axi4Interface_full_aw_payload_size;
  wire       [1:0]    writeOnlyMater_axi4Interface_full_aw_payload_burst;
  wire       [3:0]    writeOnlyMater_axi4Interface_full_aw_payload_cache;
  wire       [3:0]    writeOnlyMater_axi4Interface_full_aw_payload_qos;
  wire       [2:0]    writeOnlyMater_axi4Interface_full_aw_payload_prot;
  wire                writeOnlyMater_axi4Interface_full_w_valid;
  wire       [31:0]   writeOnlyMater_axi4Interface_full_w_payload_data;
  wire       [3:0]    writeOnlyMater_axi4Interface_full_w_payload_strb;
  wire                writeOnlyMater_axi4Interface_full_w_payload_last;
  wire                writeOnlyMater_axi4Interface_full_b_ready;
  wire                writeOnlyMater_axi4Interface_transInterrupt;

  PingPongBuffer pingPongBuffer_1 (
    .streamIn_valid       (streamIn_valid                               ), //i
    .streamIn_ready       (pingPongBuffer_1_streamIn_ready              ), //o
    .streamIn_payload     (streamIn_payload[31:0]                       ), //i
    .startIn              (startIn                                      ), //i
    .bufferDepthIn        (bufferDepthIn[7:0]                           ), //i
    .interruptOut         (pingPongBuffer_1_interruptOut                ), //o
    .streamOut_valid      (pingPongBuffer_1_streamOut_valid             ), //o
    .streamOut_ready      (writeOnlyMater_axi4Interface_stream_ready    ), //i
    .streamOut_payload    (pingPongBuffer_1_streamOut_payload[31:0]     ), //o
    .startOut             (pingPongBuffer_1_startOut                    ), //o
    .bufferDepthOut       (pingPongBuffer_1_bufferDepthOut[7:0]         ), //o
    .interruptIn          (writeOnlyMater_axi4Interface_transInterrupt  ), //i
    .aresetn              (aresetn                                      ), //i
    .aclk                 (aclk                                         )  //i
  );
  Stream2Axi4WriteOnlyMasterInterface writeOnlyMater (
    .axi4Interface_start                     (pingPongBuffer_1_startOut                                 ), //i
    .axi4Interface_burstLen                  (pingPongBuffer_1_bufferDepthOut[7:0]                      ), //i
    .axi4Interface_offset                    (offset[31:0]                                              ), //i
    .axi4Interface_stream_valid              (pingPongBuffer_1_streamOut_valid                          ), //i
    .axi4Interface_stream_ready              (writeOnlyMater_axi4Interface_stream_ready                 ), //o
    .axi4Interface_stream_payload            (pingPongBuffer_1_streamOut_payload[31:0]                  ), //i
    .axi4Interface_full_aw_valid             (writeOnlyMater_axi4Interface_full_aw_valid                ), //o
    .axi4Interface_full_aw_ready             (full_aw_ready                                             ), //i
    .axi4Interface_full_aw_payload_addr      (writeOnlyMater_axi4Interface_full_aw_payload_addr[31:0]   ), //o
    .axi4Interface_full_aw_payload_region    (writeOnlyMater_axi4Interface_full_aw_payload_region[3:0]  ), //o
    .axi4Interface_full_aw_payload_len       (writeOnlyMater_axi4Interface_full_aw_payload_len[7:0]     ), //o
    .axi4Interface_full_aw_payload_size      (writeOnlyMater_axi4Interface_full_aw_payload_size[2:0]    ), //o
    .axi4Interface_full_aw_payload_burst     (writeOnlyMater_axi4Interface_full_aw_payload_burst[1:0]   ), //o
    .axi4Interface_full_aw_payload_cache     (writeOnlyMater_axi4Interface_full_aw_payload_cache[3:0]   ), //o
    .axi4Interface_full_aw_payload_qos       (writeOnlyMater_axi4Interface_full_aw_payload_qos[3:0]     ), //o
    .axi4Interface_full_aw_payload_prot      (writeOnlyMater_axi4Interface_full_aw_payload_prot[2:0]    ), //o
    .axi4Interface_full_w_valid              (writeOnlyMater_axi4Interface_full_w_valid                 ), //o
    .axi4Interface_full_w_ready              (full_w_ready                                              ), //i
    .axi4Interface_full_w_payload_data       (writeOnlyMater_axi4Interface_full_w_payload_data[31:0]    ), //o
    .axi4Interface_full_w_payload_strb       (writeOnlyMater_axi4Interface_full_w_payload_strb[3:0]     ), //o
    .axi4Interface_full_w_payload_last       (writeOnlyMater_axi4Interface_full_w_payload_last          ), //o
    .axi4Interface_full_b_valid              (full_b_valid                                              ), //i
    .axi4Interface_full_b_ready              (writeOnlyMater_axi4Interface_full_b_ready                 ), //o
    .axi4Interface_full_b_payload_resp       (full_b_payload_resp[1:0]                                  ), //i
    .axi4Interface_transInterrupt            (writeOnlyMater_axi4Interface_transInterrupt               ), //o
    .aresetn                                 (aresetn                                                   ), //i
    .aclk                                    (aclk                                                      )  //i
  );
  assign streamIn_ready = pingPongBuffer_1_streamIn_ready;
  assign interruptOut = pingPongBuffer_1_interruptOut;
  assign full_aw_valid = writeOnlyMater_axi4Interface_full_aw_valid;
  assign full_aw_payload_addr = writeOnlyMater_axi4Interface_full_aw_payload_addr;
  assign full_aw_payload_region = writeOnlyMater_axi4Interface_full_aw_payload_region;
  assign full_aw_payload_len = writeOnlyMater_axi4Interface_full_aw_payload_len;
  assign full_aw_payload_size = writeOnlyMater_axi4Interface_full_aw_payload_size;
  assign full_aw_payload_burst = writeOnlyMater_axi4Interface_full_aw_payload_burst;
  assign full_aw_payload_cache = writeOnlyMater_axi4Interface_full_aw_payload_cache;
  assign full_aw_payload_qos = writeOnlyMater_axi4Interface_full_aw_payload_qos;
  assign full_aw_payload_prot = writeOnlyMater_axi4Interface_full_aw_payload_prot;
  assign full_w_valid = writeOnlyMater_axi4Interface_full_w_valid;
  assign full_w_payload_data = writeOnlyMater_axi4Interface_full_w_payload_data;
  assign full_w_payload_strb = writeOnlyMater_axi4Interface_full_w_payload_strb;
  assign full_w_payload_last = writeOnlyMater_axi4Interface_full_w_payload_last;
  assign full_b_ready = writeOnlyMater_axi4Interface_full_b_ready;

endmodule

module Stream2Axi4WriteOnlyMasterInterface (
  input               axi4Interface_start,
  input      [7:0]    axi4Interface_burstLen,
  input      [31:0]   axi4Interface_offset,
  input               axi4Interface_stream_valid,
  output reg          axi4Interface_stream_ready,
  input      [31:0]   axi4Interface_stream_payload,
  output              axi4Interface_full_aw_valid,
  input               axi4Interface_full_aw_ready,
  output     [31:0]   axi4Interface_full_aw_payload_addr,
  output     [3:0]    axi4Interface_full_aw_payload_region,
  output     [7:0]    axi4Interface_full_aw_payload_len,
  output     [2:0]    axi4Interface_full_aw_payload_size,
  output     [1:0]    axi4Interface_full_aw_payload_burst,
  output     [3:0]    axi4Interface_full_aw_payload_cache,
  output     [3:0]    axi4Interface_full_aw_payload_qos,
  output     [2:0]    axi4Interface_full_aw_payload_prot,
  output reg          axi4Interface_full_w_valid,
  input               axi4Interface_full_w_ready,
  output reg [31:0]   axi4Interface_full_w_payload_data,
  output     [3:0]    axi4Interface_full_w_payload_strb,
  output              axi4Interface_full_w_payload_last,
  input               axi4Interface_full_b_valid,
  output              axi4Interface_full_b_ready,
  input      [1:0]    axi4Interface_full_b_payload_resp,
  output              axi4Interface_transInterrupt,
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
  wire       [7:0]    _zz__zz_axi4Interface_full_w_payload_last_1;
  wire       [0:0]    _zz__zz_axi4Interface_full_w_payload_last_1_1;
  wire       [7:0]    _zz__zz_when_Axi4WriteOnlyMaster_l93_1;
  wire       [0:0]    _zz__zz_when_Axi4WriteOnlyMaster_l93_1_1;
  wire       [7:0]    _zz_axi4Interface_full_w_payload_last_3;
  wire       [31:0]   axi4Interface_transferDataType;
  reg                 _zz_axi4Interface_full_w_payload_last;
  reg                 _zz_1;
  reg        [7:0]    _zz_axi4Interface_full_w_payload_last_1;
  reg        [7:0]    _zz_axi4Interface_full_w_payload_last_2;
  wire                _zz_2;
  wire                _zz_3;
  reg                 axi4Interface_full_w_payload_last_regNext;
  wire                axi4Interface_resetStartSendSignal;
  wire                _zz_4;
  (* async_reg = "true" *) reg                 startSendSignal;
  reg                 _zz_when_Axi4WriteOnlyMaster_l93;
  reg                 _zz_5;
  reg        [7:0]    _zz_when_Axi4WriteOnlyMaster_l93_1;
  reg        [7:0]    _zz_when_Axi4WriteOnlyMaster_l93_2;
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

  assign _zz__zz_axi4Interface_full_w_payload_last_1_1 = _zz_axi4Interface_full_w_payload_last;
  assign _zz__zz_axi4Interface_full_w_payload_last_1 = {7'd0, _zz__zz_axi4Interface_full_w_payload_last_1_1};
  assign _zz__zz_when_Axi4WriteOnlyMaster_l93_1_1 = _zz_when_Axi4WriteOnlyMaster_l93;
  assign _zz__zz_when_Axi4WriteOnlyMaster_l93_1 = {7'd0, _zz__zz_when_Axi4WriteOnlyMaster_l93_1_1};
  assign _zz_axi4Interface_full_w_payload_last_3 = (axi4Interface_burstLen - 8'h01);
  StreamFifo_2 streamFifo_3 (
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
    _zz_axi4Interface_full_w_payload_last = 1'b0;
    if(axi4Interface_full_w_fire) begin
      _zz_axi4Interface_full_w_payload_last = 1'b1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(axi4Interface_full_b_fire_2) begin
      _zz_1 = 1'b1;
    end
  end

  assign _zz_2 = (_zz_axi4Interface_full_w_payload_last_2 == 8'h80);
  assign _zz_3 = (_zz_2 && _zz_axi4Interface_full_w_payload_last);
  always @(*) begin
    if(_zz_3) begin
      _zz_axi4Interface_full_w_payload_last_1 = 8'h0;
    end else begin
      _zz_axi4Interface_full_w_payload_last_1 = (_zz_axi4Interface_full_w_payload_last_2 + _zz__zz_axi4Interface_full_w_payload_last_1);
    end
    if(_zz_1) begin
      _zz_axi4Interface_full_w_payload_last_1 = 8'h0;
    end
  end

  assign axi4Interface_resetStartSendSignal = ((! axi4Interface_full_w_payload_last) && axi4Interface_full_w_payload_last_regNext);
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

  assign _zz_6 = (_zz_when_Axi4WriteOnlyMaster_l93_2 == 8'h80);
  assign _zz_7 = (_zz_6 && _zz_when_Axi4WriteOnlyMaster_l93);
  always @(*) begin
    if(_zz_7) begin
      _zz_when_Axi4WriteOnlyMaster_l93_1 = 8'h0;
    end else begin
      _zz_when_Axi4WriteOnlyMaster_l93_1 = (_zz_when_Axi4WriteOnlyMaster_l93_2 + _zz__zz_when_Axi4WriteOnlyMaster_l93_1);
    end
    if(_zz_5) begin
      _zz_when_Axi4WriteOnlyMaster_l93_1 = 8'h0;
    end
  end

  always @(*) begin
    axi4Interface_stream_ready = 1'b0;
    if(when_Axi4WriteOnlyMaster_l93) begin
      axi4Interface_stream_ready = streamFifo_3_io_push_ready;
    end
  end

  always @(*) begin
    streamFifo_3_io_push_payload = axi4Interface_stream_payload;
    if(when_Axi4WriteOnlyMaster_l93) begin
      streamFifo_3_io_push_payload = axi4Interface_stream_payload;
    end
  end

  always @(*) begin
    streamFifo_3_io_push_valid = 1'b0;
    if(when_Axi4WriteOnlyMaster_l93) begin
      streamFifo_3_io_push_valid = axi4Interface_stream_valid;
    end
  end

  assign when_Axi4WriteOnlyMaster_l93 = ((_zz_when_Axi4WriteOnlyMaster_l93_2 < axi4Interface_burstLen) && startSendSignal);
  assign streamFifo_3_io_push_fire = (streamFifo_3_io_push_valid && streamFifo_3_io_push_ready);
  assign axi4Interface_full_b_fire = (axi4Interface_full_b_valid && axi4Interface_full_b_ready);
  assign axi4Interface_full_b_fire_1 = (axi4Interface_full_b_valid && axi4Interface_full_b_ready);
  assign when_Axi4WriteOnlyMaster_l119 = (axi4Interface_full_b_fire_1 || axi4Interface_isTransferAfterReset);
  assign when_Axi4WriteOnlyMaster_l122 = (aresetn && startSendSignal);
  assign axi4Interface_full_aw_fire = (axi4Interface_full_aw_valid && axi4Interface_full_aw_ready);
  assign axi4Interface_full_aw_valid = axi4Interface_controlAwValidSignal;
  assign axi4Interface_full_aw_payload_addr = axi4Interface_offset;
  assign axi4Interface_full_aw_payload_region = 4'b0000;
  assign axi4Interface_full_aw_payload_burst = 2'b01;
  assign axi4Interface_full_aw_payload_len = (axi4Interface_burstLen - 8'h01);
  assign axi4Interface_full_aw_payload_size = 3'b010;
  assign axi4Interface_full_aw_payload_cache = 4'b0000;
  assign axi4Interface_full_aw_payload_qos = 4'b0000;
  assign axi4Interface_full_aw_payload_prot = 3'b000;
  always @(*) begin
    axi4Interface_full_w_valid = 1'b0;
    if(when_Axi4WriteOnlyMaster_l156) begin
      axi4Interface_full_w_valid = streamFifo_3_io_pop_valid;
    end
  end

  always @(*) begin
    axi4Interface_full_w_payload_data = streamFifo_3_io_pop_payload;
    if(when_Axi4WriteOnlyMaster_l156) begin
      axi4Interface_full_w_payload_data = streamFifo_3_io_pop_payload;
    end
  end

  always @(*) begin
    streamFifo_3_io_pop_ready = 1'b0;
    if(when_Axi4WriteOnlyMaster_l156) begin
      streamFifo_3_io_pop_ready = axi4Interface_full_w_ready;
    end
  end

  assign when_Axi4WriteOnlyMaster_l156 = ((_zz_axi4Interface_full_w_payload_last_2 < axi4Interface_burstLen) && startSendSignal);
  assign axi4Interface_full_w_fire = (axi4Interface_full_w_valid && axi4Interface_full_w_ready);
  assign axi4Interface_full_b_fire_2 = (axi4Interface_full_b_valid && axi4Interface_full_b_ready);
  assign axi4Interface_full_w_payload_strb = 4'b1111;
  assign axi4Interface_full_w_payload_last = (_zz_axi4Interface_full_w_payload_last_2 == _zz_axi4Interface_full_w_payload_last_3);
  assign axi4Interface_full_b_fire_3 = (axi4Interface_full_b_valid && axi4Interface_full_b_ready);
  assign axi4Interface_full_b_ready = axi4Interface_controlBReady;
  assign axi4Interface_full_b_fire_4 = (axi4Interface_full_b_valid && axi4Interface_full_b_ready);
  assign axi4Interface_transInterrupt = axi4Interface_isBurstComplete;
  always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
      _zz_axi4Interface_full_w_payload_last_2 <= 8'h0;
      _zz_when_Axi4WriteOnlyMaster_l93_2 <= 8'h0;
      axi4Interface_isTransferAfterReset <= 1'b1;
      axi4Interface_lastBurstComplete <= 1'b0;
      axi4Interface_controlAwValidSignal <= 1'b0;
      axi4Interface_controlBReady <= 1'b0;
    end else begin
      _zz_axi4Interface_full_w_payload_last_2 <= _zz_axi4Interface_full_w_payload_last_1;
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
      if(axi4Interface_full_w_valid) begin
        axi4Interface_controlBReady <= 1'b1;
      end
      if(axi4Interface_full_b_fire_3) begin
        axi4Interface_controlBReady <= 1'b0;
      end
    end
  end

  always @(posedge aclk) begin
    axi4Interface_full_w_payload_last_regNext <= axi4Interface_full_w_payload_last;
    axi4Interface_isBurstComplete <= axi4Interface_full_b_fire_4;
    if(axi4Interface_isBurstComplete) begin
      axi4Interface_isBurstComplete <= 1'b0;
    end
  end

  always @(posedge axi4Interface_start or posedge _zz_4) begin
    if(_zz_4) begin
      startSendSignal <= 1'b0;
    end else begin
      startSendSignal <= 1'b1;
    end
  end


endmodule

module PingPongBuffer (
  input               streamIn_valid,
  output reg          streamIn_ready,
  input      [31:0]   streamIn_payload,
  input               startIn,
  input      [7:0]    bufferDepthIn,
  output              interruptOut,
  output reg          streamOut_valid,
  input               streamOut_ready,
  output reg [31:0]   streamOut_payload,
  output              startOut,
  output     [7:0]    bufferDepthOut,
  input               interruptIn,
  input               aresetn,
  input               aclk
);
  localparam pingPongBufferStateMachine_enumDef_writeFifoA = 2'd0;
  localparam pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA = 2'd1;
  localparam pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB = 2'd2;

  reg                 bufferFifoA_io_push_valid;
  reg        [31:0]   bufferFifoA_io_push_payload;
  reg                 bufferFifoA_io_pop_ready;
  reg                 bufferFifoB_io_push_valid;
  reg        [31:0]   bufferFifoB_io_push_payload;
  reg                 bufferFifoB_io_pop_ready;
  wire                bufferFifoA_io_push_ready;
  wire                bufferFifoA_io_pop_valid;
  wire       [31:0]   bufferFifoA_io_pop_payload;
  wire       [7:0]    bufferFifoA_io_occupancy;
  wire       [7:0]    bufferFifoA_io_availability;
  wire                bufferFifoB_io_push_ready;
  wire                bufferFifoB_io_pop_valid;
  wire       [31:0]   bufferFifoB_io_pop_payload;
  wire       [7:0]    bufferFifoB_io_occupancy;
  wire       [7:0]    bufferFifoB_io_availability;
  wire       [7:0]    _zz_startFifoASignal;
  wire       [7:0]    _zz_startFifoBSignal;
  wire       [7:0]    _zz_when_PingPongBuffer_l155;
  wire       [7:0]    _zz_when_PingPongBuffer_l159;
  wire       [7:0]    _zz_when_PingPongBuffer_l202;
  wire       [7:0]    _zz_when_PingPongBuffer_l206;
  wire       [7:0]    _zz_when_PingPongBuffer_l108;
  wire       [7:0]    _zz_when_PingPongBuffer_l111;
  reg                 startReceiveResetSignal;
  wire                _zz_1;
  (* async_reg = "true" *) reg                 startReceiveSignal;
  wire                _zz_2;
  (* async_reg = "true" *) reg                 lastBurstCompleteSignal;
  reg                 controlOutputInterrupt;
  reg                 controlOutputStartSignal;
  wire       [1:0]    currentState;
  wire                activeFifoA;
  wire                activeFifoB;
  wire                startFifoASignal;
  wire                startFifoBSignal;
  wire                pingPongBufferStateMachine_wantExit;
  reg                 pingPongBufferStateMachine_wantStart;
  wire                pingPongBufferStateMachine_wantKill;
  reg        [1:0]    pingPongBufferStateMachine_stateReg;
  reg        [1:0]    pingPongBufferStateMachine_stateNext;
  wire                when_PingPongBuffer_l155;
  wire                bufferFifoB_io_push_fire;
  wire                when_PingPongBuffer_l159;
  wire                when_PingPongBuffer_l167;
  wire                when_PingPongBuffer_l202;
  wire                bufferFifoA_io_push_fire;
  wire                when_PingPongBuffer_l206;
  wire                when_PingPongBuffer_l214;
  wire                when_PingPongBuffer_l108;
  wire                bufferFifoA_io_push_fire_1;
  wire                when_PingPongBuffer_l111;
  `ifndef SYNTHESIS
  reg [151:0] pingPongBufferStateMachine_stateReg_string;
  reg [151:0] pingPongBufferStateMachine_stateNext_string;
  `endif


  assign _zz_startFifoASignal = (bufferDepthIn - 8'h01);
  assign _zz_startFifoBSignal = (bufferDepthIn - 8'h01);
  assign _zz_when_PingPongBuffer_l155 = (bufferDepthIn - 8'h01);
  assign _zz_when_PingPongBuffer_l159 = (bufferDepthIn - 8'h01);
  assign _zz_when_PingPongBuffer_l202 = (bufferDepthIn - 8'h01);
  assign _zz_when_PingPongBuffer_l206 = (bufferDepthIn - 8'h01);
  assign _zz_when_PingPongBuffer_l108 = (bufferDepthIn - 8'h01);
  assign _zz_when_PingPongBuffer_l111 = (bufferDepthIn - 8'h01);
  StreamFifo bufferFifoA (
    .io_push_valid      (bufferFifoA_io_push_valid          ), //i
    .io_push_ready      (bufferFifoA_io_push_ready          ), //o
    .io_push_payload    (bufferFifoA_io_push_payload[31:0]  ), //i
    .io_pop_valid       (bufferFifoA_io_pop_valid           ), //o
    .io_pop_ready       (bufferFifoA_io_pop_ready           ), //i
    .io_pop_payload     (bufferFifoA_io_pop_payload[31:0]   ), //o
    .io_flush           (1'b0                               ), //i
    .io_occupancy       (bufferFifoA_io_occupancy[7:0]      ), //o
    .io_availability    (bufferFifoA_io_availability[7:0]   ), //o
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
    .io_occupancy       (bufferFifoB_io_occupancy[7:0]      ), //o
    .io_availability    (bufferFifoB_io_availability[7:0]   ), //o
    .aclk               (aclk                               ), //i
    .aresetn            (aresetn                            )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoA : pingPongBufferStateMachine_stateReg_string = "writeFifoA         ";
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : pingPongBufferStateMachine_stateReg_string = "writeFifoBReadFifoA";
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : pingPongBufferStateMachine_stateReg_string = "writeFifoAReadFifoB";
      default : pingPongBufferStateMachine_stateReg_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(pingPongBufferStateMachine_stateNext)
      pingPongBufferStateMachine_enumDef_writeFifoA : pingPongBufferStateMachine_stateNext_string = "writeFifoA         ";
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : pingPongBufferStateMachine_stateNext_string = "writeFifoBReadFifoA";
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : pingPongBufferStateMachine_stateNext_string = "writeFifoAReadFifoB";
      default : pingPongBufferStateMachine_stateNext_string = "???????????????????";
    endcase
  end
  `endif

  always @(*) begin
    startReceiveResetSignal = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        if(startFifoBSignal) begin
          if(when_PingPongBuffer_l155) begin
            startReceiveResetSignal = 1'b1;
          end
        end
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        if(startFifoASignal) begin
          if(when_PingPongBuffer_l202) begin
            startReceiveResetSignal = 1'b1;
          end
        end
      end
      default : begin
        if(startFifoASignal) begin
          if(when_PingPongBuffer_l108) begin
            startReceiveResetSignal = 1'b1;
          end
        end
      end
    endcase
  end

  assign _zz_1 = ((! aresetn) || startReceiveResetSignal);
  assign _zz_2 = ((! aresetn) || startOut);
  assign activeFifoA = (currentState != 2'b01);
  assign activeFifoB = (currentState == 2'b01);
  assign startFifoASignal = ((startReceiveSignal || (bufferFifoA_io_occupancy == _zz_startFifoASignal)) && activeFifoA);
  assign startFifoBSignal = ((startReceiveSignal || (bufferFifoB_io_occupancy == _zz_startFifoBSignal)) && activeFifoB);
  assign pingPongBufferStateMachine_wantExit = 1'b0;
  always @(*) begin
    pingPongBufferStateMachine_wantStart = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
      end
      default : begin
        pingPongBufferStateMachine_wantStart = 1'b1;
      end
    endcase
  end

  assign pingPongBufferStateMachine_wantKill = 1'b0;
  assign bufferDepthOut = bufferDepthIn;
  assign startOut = controlOutputStartSignal;
  assign interruptOut = controlOutputInterrupt;
  always @(*) begin
    pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_stateReg;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        if(startFifoBSignal) begin
          if(when_PingPongBuffer_l159) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB;
          end
        end else begin
          if(when_PingPongBuffer_l167) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB;
          end
        end
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        if(startFifoASignal) begin
          if(when_PingPongBuffer_l206) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA;
          end
        end else begin
          if(when_PingPongBuffer_l214) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA;
          end
        end
      end
      default : begin
        if(startFifoASignal) begin
          if(when_PingPongBuffer_l111) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA;
          end
        end
      end
    endcase
    if(pingPongBufferStateMachine_wantKill) begin
      pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_writeFifoA;
    end
  end

  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        streamOut_valid = bufferFifoA_io_pop_valid;
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        streamOut_valid = bufferFifoB_io_pop_valid;
      end
      default : begin
        if(startFifoASignal) begin
          streamOut_valid = 1'b0;
        end else begin
          streamOut_valid = 1'b0;
        end
      end
    endcase
  end

  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        bufferFifoA_io_pop_ready = streamOut_ready;
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        bufferFifoA_io_pop_ready = 1'b0;
      end
      default : begin
        if(startFifoASignal) begin
          bufferFifoA_io_pop_ready = 1'b0;
        end else begin
          bufferFifoA_io_pop_ready = 1'b0;
        end
      end
    endcase
  end

  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        streamOut_payload = bufferFifoA_io_pop_payload;
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        streamOut_payload = bufferFifoB_io_pop_payload;
      end
      default : begin
        if(startFifoASignal) begin
          streamOut_payload = 32'h0;
        end else begin
          streamOut_payload = 32'h0;
        end
      end
    endcase
  end

  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        bufferFifoB_io_pop_ready = 1'b0;
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        bufferFifoB_io_pop_ready = streamOut_ready;
      end
      default : begin
        if(startFifoASignal) begin
          bufferFifoB_io_pop_ready = 1'b0;
        end else begin
          bufferFifoB_io_pop_ready = 1'b0;
        end
      end
    endcase
  end

  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        if(startFifoBSignal) begin
          bufferFifoB_io_push_valid = streamIn_valid;
        end else begin
          bufferFifoB_io_push_valid = 1'b0;
        end
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        if(startFifoASignal) begin
          bufferFifoB_io_push_valid = 1'b0;
        end else begin
          bufferFifoB_io_push_valid = 1'b0;
        end
      end
      default : begin
        if(startFifoASignal) begin
          bufferFifoB_io_push_valid = 1'b0;
        end else begin
          bufferFifoB_io_push_valid = 1'b0;
        end
      end
    endcase
  end

  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        if(startFifoBSignal) begin
          streamIn_ready = bufferFifoB_io_push_ready;
        end else begin
          streamIn_ready = 1'b0;
        end
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        if(startFifoASignal) begin
          streamIn_ready = bufferFifoA_io_push_ready;
        end else begin
          streamIn_ready = 1'b0;
        end
      end
      default : begin
        if(startFifoASignal) begin
          streamIn_ready = bufferFifoA_io_push_ready;
        end else begin
          streamIn_ready = 1'b0;
        end
      end
    endcase
  end

  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        if(startFifoBSignal) begin
          bufferFifoB_io_push_payload = streamIn_payload;
        end else begin
          bufferFifoB_io_push_payload = 32'h0;
        end
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        if(startFifoASignal) begin
          bufferFifoB_io_push_payload = 32'h0;
        end else begin
          bufferFifoB_io_push_payload = 32'h0;
        end
      end
      default : begin
        if(startFifoASignal) begin
          bufferFifoB_io_push_payload = 32'h0;
        end else begin
          bufferFifoB_io_push_payload = 32'h0;
        end
      end
    endcase
  end

  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        if(startFifoBSignal) begin
          bufferFifoA_io_push_valid = 1'b0;
        end else begin
          bufferFifoA_io_push_valid = 1'b0;
        end
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        if(startFifoASignal) begin
          bufferFifoA_io_push_valid = streamIn_valid;
        end else begin
          bufferFifoA_io_push_valid = 1'b0;
        end
      end
      default : begin
        if(startFifoASignal) begin
          bufferFifoA_io_push_valid = streamIn_valid;
        end else begin
          bufferFifoA_io_push_valid = 1'b0;
        end
      end
    endcase
  end

  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
        if(startFifoBSignal) begin
          bufferFifoA_io_push_payload = 32'h0;
        end else begin
          bufferFifoA_io_push_payload = 32'h0;
        end
      end
      pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
        if(startFifoASignal) begin
          bufferFifoA_io_push_payload = streamIn_payload;
        end else begin
          bufferFifoA_io_push_payload = 32'h0;
        end
      end
      default : begin
        if(startFifoASignal) begin
          bufferFifoA_io_push_payload = streamIn_payload;
        end else begin
          bufferFifoA_io_push_payload = 32'h0;
        end
      end
    endcase
  end

  assign when_PingPongBuffer_l155 = (_zz_when_PingPongBuffer_l155 <= bufferFifoB_io_occupancy);
  assign bufferFifoB_io_push_fire = (bufferFifoB_io_push_valid && bufferFifoB_io_push_ready);
  assign when_PingPongBuffer_l159 = (((bufferFifoB_io_occupancy == _zz_when_PingPongBuffer_l159) && bufferFifoB_io_push_fire) && lastBurstCompleteSignal);
  assign when_PingPongBuffer_l167 = ((bufferFifoB_io_occupancy == bufferDepthIn) && lastBurstCompleteSignal);
  assign when_PingPongBuffer_l202 = (_zz_when_PingPongBuffer_l202 <= bufferFifoA_io_occupancy);
  assign bufferFifoA_io_push_fire = (bufferFifoA_io_push_valid && bufferFifoA_io_push_ready);
  assign when_PingPongBuffer_l206 = (((bufferFifoA_io_occupancy == _zz_when_PingPongBuffer_l206) && bufferFifoA_io_push_fire) && lastBurstCompleteSignal);
  assign when_PingPongBuffer_l214 = ((bufferFifoA_io_occupancy == bufferDepthIn) && lastBurstCompleteSignal);
  assign when_PingPongBuffer_l108 = (_zz_when_PingPongBuffer_l108 <= bufferFifoA_io_occupancy);
  assign bufferFifoA_io_push_fire_1 = (bufferFifoA_io_push_valid && bufferFifoA_io_push_ready);
  assign when_PingPongBuffer_l111 = ((bufferFifoA_io_occupancy == _zz_when_PingPongBuffer_l111) && bufferFifoA_io_push_fire_1);
  assign currentState = pingPongBufferStateMachine_stateReg;
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

  always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
      controlOutputInterrupt <= 1'b0;
      controlOutputStartSignal <= 1'b0;
      pingPongBufferStateMachine_stateReg <= pingPongBufferStateMachine_enumDef_writeFifoA;
    end else begin
      pingPongBufferStateMachine_stateReg <= pingPongBufferStateMachine_stateNext;
      case(pingPongBufferStateMachine_stateReg)
        pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA : begin
          if(controlOutputInterrupt) begin
            controlOutputInterrupt <= 1'b0;
          end
          if(controlOutputStartSignal) begin
            controlOutputStartSignal <= 1'b0;
          end
          if(startFifoBSignal) begin
            if(when_PingPongBuffer_l159) begin
              controlOutputStartSignal <= 1'b1;
              controlOutputInterrupt <= 1'b1;
            end
          end else begin
            if(when_PingPongBuffer_l167) begin
              controlOutputStartSignal <= 1'b1;
              controlOutputInterrupt <= 1'b1;
            end
          end
        end
        pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB : begin
          if(controlOutputInterrupt) begin
            controlOutputInterrupt <= 1'b0;
          end
          if(controlOutputStartSignal) begin
            controlOutputStartSignal <= 1'b0;
          end
          if(startFifoASignal) begin
            if(when_PingPongBuffer_l206) begin
              controlOutputStartSignal <= 1'b1;
              controlOutputInterrupt <= 1'b1;
            end
          end else begin
            if(when_PingPongBuffer_l214) begin
              controlOutputStartSignal <= 1'b1;
              controlOutputInterrupt <= 1'b1;
            end
          end
        end
        default : begin
          if(startFifoASignal) begin
            if(when_PingPongBuffer_l111) begin
              controlOutputStartSignal <= 1'b1;
              controlOutputInterrupt <= 1'b1;
            end
          end
        end
      endcase
    end
  end


endmodule

module StreamFifo_2 (
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

//StreamFifo replaced by StreamFifo

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload,
  input               io_flush,
  output     [7:0]    io_occupancy,
  output     [7:0]    io_availability,
  input               aclk,
  input               aresetn
);

  reg        [31:0]   _zz_logic_ram_port0;
  wire       [6:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [6:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [6:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [6:0]    logic_pushPtr_valueNext;
  reg        [6:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [6:0]    logic_popPtr_valueNext;
  reg        [6:0]    logic_popPtr_value;
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
  wire       [6:0]    logic_ptrDif;
  reg [31:0] logic_ram [0:127];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {6'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {6'd0, _zz_logic_popPtr_valueNext_1};
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 7'h7f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 7'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 7'h7f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 7'h0;
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
      logic_pushPtr_value <= 7'h0;
      logic_popPtr_value <= 7'h0;
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
