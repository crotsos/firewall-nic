-------------------------------------------------------------------------------
-- stim_nf10_10g_interface_1_m_axis_wrapper.vhd
-------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

library nf10_axis_sim_pkg_v1_00_a;
use nf10_axis_sim_pkg_v1_00_a.all;

library nf10_axis_sim_stim_v1_10_a;
use nf10_axis_sim_stim_v1_10_a.all;

entity stim_nf10_10g_interface_1_m_axis_wrapper is
  port (
    aclk : in std_logic;
    aresetn : in std_logic;
    m_axis_tdata : out std_logic_vector(255 downto 0);
    m_axis_tstrb : out std_logic_vector(31 downto 0);
    m_axis_tuser : out std_logic_vector(127 downto 0);
    m_axis_tvalid : out std_logic;
    m_axis_tready : in std_logic;
    m_axis_tlast : out std_logic
  );
end stim_nf10_10g_interface_1_m_axis_wrapper;

architecture STRUCTURE of stim_nf10_10g_interface_1_m_axis_wrapper is

  component nf10_axis_sim_stim is
    generic (
      C_M_AXIS_DATA_WIDTH : INTEGER;
      C_M_AXIS_TUSER_WIDTH : INTEGER;
      input_file : STRING
    );
    port (
      aclk : in std_logic;
      aresetn : in std_logic;
      m_axis_tdata : out std_logic_vector(C_M_AXIS_DATA_WIDTH-1 downto 0);
      m_axis_tstrb : out std_logic_vector((C_M_AXIS_DATA_WIDTH/8)-1 downto 0);
      m_axis_tuser : out std_logic_vector(C_M_AXIS_TUSER_WIDTH-1 downto 0);
      m_axis_tvalid : out std_logic;
      m_axis_tready : in std_logic;
      m_axis_tlast : out std_logic
    );
  end component;

begin

  stim_nf10_10g_interface_1_M_AXIS : nf10_axis_sim_stim
    generic map (
      C_M_AXIS_DATA_WIDTH => 256,
      C_M_AXIS_TUSER_WIDTH => 128,
      input_file => "../../nf10_10g_interface_1_stim.axi"
    )
    port map (
      aclk => aclk,
      aresetn => aresetn,
      m_axis_tdata => m_axis_tdata,
      m_axis_tstrb => m_axis_tstrb,
      m_axis_tuser => m_axis_tuser,
      m_axis_tvalid => m_axis_tvalid,
      m_axis_tready => m_axis_tready,
      m_axis_tlast => m_axis_tlast
    );

end architecture STRUCTURE;

