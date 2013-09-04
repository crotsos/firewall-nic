//-----------------------------------------------------------------------------
// nf10_endianess_manager_0_wrapper.v
//-----------------------------------------------------------------------------

`timescale 1 ps / 100 fs

`uselib lib=unisims_ver lib=nf10_endianess_manager_v1_00_a

module nf10_endianess_manager_0_wrapper
  (
    ACLK,
    ARESETN,
    S_AXIS_TREADY,
    S_AXIS_TDATA,
    S_AXIS_TLAST,
    S_AXIS_TVALID,
    S_AXIS_TSTRB,
    S_AXIS_TUSER,
    M_AXIS_TVALID_INT,
    M_AXIS_TDATA_INT,
    M_AXIS_TLAST_INT,
    M_AXIS_TREADY_INT,
    M_AXIS_TSTRB_INT,
    M_AXIS_TUSER_INT,
    S_AXIS_TREADY_INT,
    S_AXIS_TDATA_INT,
    S_AXIS_TLAST_INT,
    S_AXIS_TVALID_INT,
    S_AXIS_TSTRB_INT,
    S_AXIS_TUSER_INT,
    M_AXIS_TVALID,
    M_AXIS_TDATA,
    M_AXIS_TLAST,
    M_AXIS_TREADY,
    M_AXIS_TSTRB,
    M_AXIS_TUSER
  );
  input ACLK;
  input ARESETN;
  output S_AXIS_TREADY;
  input [255:0] S_AXIS_TDATA;
  input S_AXIS_TLAST;
  input S_AXIS_TVALID;
  input [31:0] S_AXIS_TSTRB;
  input [127:0] S_AXIS_TUSER;
  output M_AXIS_TVALID_INT;
  output [255:0] M_AXIS_TDATA_INT;
  output M_AXIS_TLAST_INT;
  input M_AXIS_TREADY_INT;
  output [31:0] M_AXIS_TSTRB_INT;
  output [127:0] M_AXIS_TUSER_INT;
  output S_AXIS_TREADY_INT;
  input [255:0] S_AXIS_TDATA_INT;
  input S_AXIS_TLAST_INT;
  input S_AXIS_TVALID_INT;
  input [31:0] S_AXIS_TSTRB_INT;
  input [127:0] S_AXIS_TUSER_INT;
  output M_AXIS_TVALID;
  output [255:0] M_AXIS_TDATA;
  output M_AXIS_TLAST;
  input M_AXIS_TREADY;
  output [31:0] M_AXIS_TSTRB;
  output [127:0] M_AXIS_TUSER;

  nf10_endianess_manager
    #(
      .C_S_AXIS_TDATA_WIDTH ( 256 ),
      .C_S_AXIS_TUSER_WIDTH ( 128 ),
      .C_M_AXIS_TDATA_WIDTH ( 256 ),
      .C_M_AXIS_TUSER_WIDTH ( 128 )
    )
    nf10_endianess_manager_0 (
      .ACLK ( ACLK ),
      .ARESETN ( ARESETN ),
      .S_AXIS_TREADY ( S_AXIS_TREADY ),
      .S_AXIS_TDATA ( S_AXIS_TDATA ),
      .S_AXIS_TLAST ( S_AXIS_TLAST ),
      .S_AXIS_TVALID ( S_AXIS_TVALID ),
      .S_AXIS_TSTRB ( S_AXIS_TSTRB ),
      .S_AXIS_TUSER ( S_AXIS_TUSER ),
      .M_AXIS_TVALID_INT ( M_AXIS_TVALID_INT ),
      .M_AXIS_TDATA_INT ( M_AXIS_TDATA_INT ),
      .M_AXIS_TLAST_INT ( M_AXIS_TLAST_INT ),
      .M_AXIS_TREADY_INT ( M_AXIS_TREADY_INT ),
      .M_AXIS_TSTRB_INT ( M_AXIS_TSTRB_INT ),
      .M_AXIS_TUSER_INT ( M_AXIS_TUSER_INT ),
      .S_AXIS_TREADY_INT ( S_AXIS_TREADY_INT ),
      .S_AXIS_TDATA_INT ( S_AXIS_TDATA_INT ),
      .S_AXIS_TLAST_INT ( S_AXIS_TLAST_INT ),
      .S_AXIS_TVALID_INT ( S_AXIS_TVALID_INT ),
      .S_AXIS_TSTRB_INT ( S_AXIS_TSTRB_INT ),
      .S_AXIS_TUSER_INT ( S_AXIS_TUSER_INT ),
      .M_AXIS_TVALID ( M_AXIS_TVALID ),
      .M_AXIS_TDATA ( M_AXIS_TDATA ),
      .M_AXIS_TLAST ( M_AXIS_TLAST ),
      .M_AXIS_TREADY ( M_AXIS_TREADY ),
      .M_AXIS_TSTRB ( M_AXIS_TSTRB ),
      .M_AXIS_TUSER ( M_AXIS_TUSER )
    );

endmodule

