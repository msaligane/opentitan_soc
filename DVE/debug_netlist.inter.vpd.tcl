# Begin_DVE_Session_Save_Info
# DVE full session
# Saved on Sat Jul 3 08:47:40 2021
# Designs open: 1
#   Sim: syn_simv
# Toplevel windows open: 2
# 	TopLevel.1
# 	TopLevel.2
#   Source.1: _vcs_unit__2949268156
#   Wave.1: 27 signals
#   Group count = 3
#   Group Group1 signal count = 11
#   Group Group2 signal count = 12
# End_DVE_Session_Save_Info

# DVE version: N-2017.12-SP2-1_Full64
# DVE build date: Jul 14 2018 20:58:30


#<Session mode="Full" path="/afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/opentitan_soc/debug_netlist.inter.vpd.tcl" type="Debug">

gui_set_loading_session_type Post
gui_continuetime_set

# Close design
if { [gui_sim_state -check active] } {
    gui_sim_terminate
}
gui_close_db -all
gui_expr_clear_all

# Close all windows
gui_close_window -type Console
gui_close_window -type Wave
gui_close_window -type Source
gui_close_window -type Schematic
gui_close_window -type Data
gui_close_window -type DriverLoad
gui_close_window -type List
gui_close_window -type Memory
gui_close_window -type HSPane
gui_close_window -type DLPane
gui_close_window -type Assertion
gui_close_window -type CovHier
gui_close_window -type CoverageTable
gui_close_window -type CoverageMap
gui_close_window -type CovDetail
gui_close_window -type Local
gui_close_window -type Stack
gui_close_window -type Watch
gui_close_window -type Group
gui_close_window -type Transaction



# Application preferences
gui_set_pref_value -key app_default_font -value {Helvetica,10,-1,5,50,0,0,0,0,0}
gui_src_preferences -tabstop 8 -maxbits 24 -windownumber 1
#<WindowLayout>

# DVE top-level session


# Create and position top-level window: TopLevel.1

if {![gui_exist_window -window TopLevel.1]} {
    set TopLevel.1 [ gui_create_window -type TopLevel \
       -icon $::env(DVE)/auxx/gui/images/toolbars/dvewin.xpm] 
} else { 
    set TopLevel.1 TopLevel.1
}
gui_show_window -window ${TopLevel.1} -show_state maximized -rect {{0 51} {1919 1054}}

# ToolBar settings
gui_set_toolbar_attributes -toolbar {TimeOperations} -dock_state top
gui_set_toolbar_attributes -toolbar {TimeOperations} -offset 0
gui_show_toolbar -toolbar {TimeOperations}
gui_hide_toolbar -toolbar {&File}
gui_set_toolbar_attributes -toolbar {&Edit} -dock_state top
gui_set_toolbar_attributes -toolbar {&Edit} -offset 0
gui_show_toolbar -toolbar {&Edit}
gui_hide_toolbar -toolbar {CopyPaste}
gui_set_toolbar_attributes -toolbar {&Trace} -dock_state top
gui_set_toolbar_attributes -toolbar {&Trace} -offset 0
gui_show_toolbar -toolbar {&Trace}
gui_hide_toolbar -toolbar {TraceInstance}
gui_hide_toolbar -toolbar {BackTrace}
gui_set_toolbar_attributes -toolbar {&Scope} -dock_state top
gui_set_toolbar_attributes -toolbar {&Scope} -offset 0
gui_show_toolbar -toolbar {&Scope}
gui_set_toolbar_attributes -toolbar {&Window} -dock_state top
gui_set_toolbar_attributes -toolbar {&Window} -offset 0
gui_show_toolbar -toolbar {&Window}
gui_set_toolbar_attributes -toolbar {Signal} -dock_state top
gui_set_toolbar_attributes -toolbar {Signal} -offset 0
gui_show_toolbar -toolbar {Signal}
gui_set_toolbar_attributes -toolbar {Zoom} -dock_state top
gui_set_toolbar_attributes -toolbar {Zoom} -offset 0
gui_show_toolbar -toolbar {Zoom}
gui_set_toolbar_attributes -toolbar {Zoom And Pan History} -dock_state top
gui_set_toolbar_attributes -toolbar {Zoom And Pan History} -offset 0
gui_show_toolbar -toolbar {Zoom And Pan History}
gui_set_toolbar_attributes -toolbar {Grid} -dock_state top
gui_set_toolbar_attributes -toolbar {Grid} -offset 0
gui_show_toolbar -toolbar {Grid}
gui_set_toolbar_attributes -toolbar {Simulator} -dock_state top
gui_set_toolbar_attributes -toolbar {Simulator} -offset 0
gui_show_toolbar -toolbar {Simulator}
gui_set_toolbar_attributes -toolbar {Interactive Rewind} -dock_state top
gui_set_toolbar_attributes -toolbar {Interactive Rewind} -offset 0
gui_show_toolbar -toolbar {Interactive Rewind}
gui_set_toolbar_attributes -toolbar {Testbench} -dock_state top
gui_set_toolbar_attributes -toolbar {Testbench} -offset 0
gui_show_toolbar -toolbar {Testbench}

# End ToolBar settings

# Docked window settings
set HSPane.1 [gui_create_window -type HSPane -parent ${TopLevel.1} -dock_state left -dock_on_new_line true -dock_extent 419]
catch { set Hier.1 [gui_share_window -id ${HSPane.1} -type Hier] }
catch { set Stack.1 [gui_share_window -id ${HSPane.1} -type Stack -silent] }
catch { set Class.1 [gui_share_window -id ${HSPane.1} -type Class -silent] }
catch { set Object.1 [gui_share_window -id ${HSPane.1} -type Object -silent] }
gui_set_window_pref_key -window ${HSPane.1} -key dock_width -value_type integer -value 419
gui_set_window_pref_key -window ${HSPane.1} -key dock_height -value_type integer -value -1
gui_set_window_pref_key -window ${HSPane.1} -key dock_offset -value_type integer -value 0
gui_update_layout -id ${HSPane.1} {{left 0} {top 0} {width 418} {height 726} {dock_state left} {dock_on_new_line true} {child_hier_colhier 296} {child_hier_coltype 127} {child_hier_colpd 0} {child_hier_col1 0} {child_hier_col2 1} {child_hier_col3 -1}}
set DLPane.1 [gui_create_window -type DLPane -parent ${TopLevel.1} -dock_state left -dock_on_new_line true -dock_extent 605]
catch { set Data.1 [gui_share_window -id ${DLPane.1} -type Data] }
catch { set Local.1 [gui_share_window -id ${DLPane.1} -type Local -silent] }
catch { set Member.1 [gui_share_window -id ${DLPane.1} -type Member -silent] }
gui_set_window_pref_key -window ${DLPane.1} -key dock_width -value_type integer -value 605
gui_set_window_pref_key -window ${DLPane.1} -key dock_height -value_type integer -value 721
gui_set_window_pref_key -window ${DLPane.1} -key dock_offset -value_type integer -value 0
gui_update_layout -id ${DLPane.1} {{left 0} {top 0} {width 604} {height 726} {dock_state left} {dock_on_new_line true} {child_data_colvariable 254} {child_data_colvalue 195} {child_data_coltype 163} {child_data_col1 0} {child_data_col2 1} {child_data_col3 2}}
set Console.1 [gui_create_window -type Console -parent ${TopLevel.1} -dock_state bottom -dock_on_new_line true -dock_extent 179]
gui_set_window_pref_key -window ${Console.1} -key dock_width -value_type integer -value 751
gui_set_window_pref_key -window ${Console.1} -key dock_height -value_type integer -value 179
gui_set_window_pref_key -window ${Console.1} -key dock_offset -value_type integer -value 0
gui_update_layout -id ${Console.1} {{left 0} {top 0} {width 750} {height 178} {dock_state bottom} {dock_on_new_line true}}
set DriverLoad.1 [gui_create_window -type DriverLoad -parent ${TopLevel.1} -dock_state bottom -dock_on_new_line false -dock_extent 179]
gui_set_window_pref_key -window ${DriverLoad.1} -key dock_width -value_type integer -value 1169
gui_set_window_pref_key -window ${DriverLoad.1} -key dock_height -value_type integer -value 179
gui_set_window_pref_key -window ${DriverLoad.1} -key dock_offset -value_type integer -value 0
gui_update_layout -id ${DriverLoad.1} {{left 0} {top 0} {width 1168} {height 178} {dock_state bottom} {dock_on_new_line false}}
#### Start - Readjusting docked view's offset / size
set dockAreaList { top left right bottom }
foreach dockArea $dockAreaList {
  set viewList [gui_ekki_get_window_ids -active_parent -dock_area $dockArea]
  foreach view $viewList {
      if {[lsearch -exact [gui_get_window_pref_keys -window $view] dock_width] != -1} {
        set dockWidth [gui_get_window_pref_value -window $view -key dock_width]
        set dockHeight [gui_get_window_pref_value -window $view -key dock_height]
        set offset [gui_get_window_pref_value -window $view -key dock_offset]
        if { [string equal "top" $dockArea] || [string equal "bottom" $dockArea]} {
          gui_set_window_attributes -window $view -dock_offset $offset -width $dockWidth
        } else {
          gui_set_window_attributes -window $view -dock_offset $offset -height $dockHeight
        }
      }
  }
}
#### End - Readjusting docked view's offset / size
gui_sync_global -id ${TopLevel.1} -option true

# MDI window settings
set Source.1 [gui_create_window -type {Source}  -parent ${TopLevel.1}]
gui_show_window -window ${Source.1} -show_state maximized
gui_update_layout -id ${Source.1} {{show_state maximized} {dock_state undocked} {dock_on_new_line false}}

# End MDI window settings


# Create and position top-level window: TopLevel.2

if {![gui_exist_window -window TopLevel.2]} {
    set TopLevel.2 [ gui_create_window -type TopLevel \
       -icon $::env(DVE)/auxx/gui/images/toolbars/dvewin.xpm] 
} else { 
    set TopLevel.2 TopLevel.2
}
gui_show_window -window ${TopLevel.2} -show_state maximized -rect {{60 77} {1979 1080}}

# ToolBar settings
gui_set_toolbar_attributes -toolbar {TimeOperations} -dock_state top
gui_set_toolbar_attributes -toolbar {TimeOperations} -offset 0
gui_show_toolbar -toolbar {TimeOperations}
gui_hide_toolbar -toolbar {&File}
gui_set_toolbar_attributes -toolbar {&Edit} -dock_state top
gui_set_toolbar_attributes -toolbar {&Edit} -offset 0
gui_show_toolbar -toolbar {&Edit}
gui_hide_toolbar -toolbar {CopyPaste}
gui_set_toolbar_attributes -toolbar {&Trace} -dock_state top
gui_set_toolbar_attributes -toolbar {&Trace} -offset 0
gui_show_toolbar -toolbar {&Trace}
gui_hide_toolbar -toolbar {TraceInstance}
gui_hide_toolbar -toolbar {BackTrace}
gui_set_toolbar_attributes -toolbar {&Scope} -dock_state top
gui_set_toolbar_attributes -toolbar {&Scope} -offset 0
gui_show_toolbar -toolbar {&Scope}
gui_set_toolbar_attributes -toolbar {&Window} -dock_state top
gui_set_toolbar_attributes -toolbar {&Window} -offset 0
gui_show_toolbar -toolbar {&Window}
gui_set_toolbar_attributes -toolbar {Signal} -dock_state top
gui_set_toolbar_attributes -toolbar {Signal} -offset 0
gui_show_toolbar -toolbar {Signal}
gui_set_toolbar_attributes -toolbar {Zoom} -dock_state top
gui_set_toolbar_attributes -toolbar {Zoom} -offset 0
gui_show_toolbar -toolbar {Zoom}
gui_set_toolbar_attributes -toolbar {Zoom And Pan History} -dock_state top
gui_set_toolbar_attributes -toolbar {Zoom And Pan History} -offset 0
gui_show_toolbar -toolbar {Zoom And Pan History}
gui_set_toolbar_attributes -toolbar {Grid} -dock_state top
gui_set_toolbar_attributes -toolbar {Grid} -offset 0
gui_show_toolbar -toolbar {Grid}
gui_set_toolbar_attributes -toolbar {Simulator} -dock_state top
gui_set_toolbar_attributes -toolbar {Simulator} -offset 0
gui_show_toolbar -toolbar {Simulator}
gui_set_toolbar_attributes -toolbar {Interactive Rewind} -dock_state top
gui_set_toolbar_attributes -toolbar {Interactive Rewind} -offset 0
gui_show_toolbar -toolbar {Interactive Rewind}
gui_set_toolbar_attributes -toolbar {Testbench} -dock_state top
gui_set_toolbar_attributes -toolbar {Testbench} -offset 0
gui_show_toolbar -toolbar {Testbench}

# End ToolBar settings

# Docked window settings
gui_sync_global -id ${TopLevel.2} -option true

# MDI window settings
set Wave.1 [gui_create_window -type {Wave}  -parent ${TopLevel.2}]
gui_show_window -window ${Wave.1} -show_state maximized
gui_update_layout -id ${Wave.1} {{show_state maximized} {dock_state undocked} {dock_on_new_line false} {child_wave_left 556} {child_wave_right 1358} {child_wave_colname 275} {child_wave_colvalue 277} {child_wave_col1 0} {child_wave_col2 1}}

# End MDI window settings

gui_set_env TOPLEVELS::TARGET_FRAME(Source) ${TopLevel.1}
gui_set_env TOPLEVELS::TARGET_FRAME(Schematic) ${TopLevel.1}
gui_set_env TOPLEVELS::TARGET_FRAME(PathSchematic) ${TopLevel.1}
gui_set_env TOPLEVELS::TARGET_FRAME(Wave) none
gui_set_env TOPLEVELS::TARGET_FRAME(List) none
gui_set_env TOPLEVELS::TARGET_FRAME(Memory) ${TopLevel.1}
gui_set_env TOPLEVELS::TARGET_FRAME(DriverLoad) none
gui_update_statusbar_target_frame ${TopLevel.1}
gui_update_statusbar_target_frame ${TopLevel.2}

#</WindowLayout>

#<Database>

# DVE Open design session: 

if { [llength [lindex [gui_get_db -design Sim] 0]] == 0 } {
gui_set_env SIMSETUP::SIMARGS {{-ucligui }}
gui_set_env SIMSETUP::SIMEXE {syn_simv}
gui_set_env SIMSETUP::ALLOW_POLL {0}
if { ![gui_is_db_opened -db {syn_simv}] } {
gui_sim_run Ucli -exe syn_simv -args {-ucligui } -dir ../opentitan_soc -nosource
}
}
if { ![gui_sim_state -check active] } {error "Simulator did not start correctly" error}
gui_set_precision 1fs
gui_set_time_units 1ns
#</Database>

# DVE Global setting session: 


# Global: Breakpoints

# Global: Bus

# Global: Expressions

# Global: Signal Time Shift

# Global: Signal Compare

# Global: Signal Groups
gui_load_child_values {spi_tb.ot_soc_top._45866_}


set _session_group_4 Group1
gui_sg_create "$_session_group_4"
set Group1 "$_session_group_4"

gui_sg_addsignal -group "$_session_group_4" { {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .clk0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .csb0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .web0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .wmask0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .addr0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .din0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .dout0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .clk1} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .csb1} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .addr1} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .dout1} }

set _session_group_5 Group2
gui_sg_create "$_session_group_5"
set Group2 "$_session_group_5"

gui_sg_addsignal -group "$_session_group_5" { spi_tb.ot_soc_top.system_rst_ni {spi_tb.ot_soc_top.\en_buf[0] } {spi_tb.ot_soc_top.\reset_manager.rst_fd } spi_tb.ot_soc_top._01514_ {spi_tb.ot_soc_top.\iccm.wen } spi_tb.ot_soc_top._03539_ {spi_tb.ot_soc_top.\u_dut.ctrl_fsm_cs[0] } {spi_tb.ot_soc_top.\programmer.rst_ni } spi_tb.ot_soc_top.rst_ni {spi_tb.ot_soc_top.\rst_buf[1] } {spi_tb.ot_soc_top.\rst_buf[2] } }

set _session_group_6 $_session_group_5|
append _session_group_6 _45866_
gui_sg_create "$_session_group_6"
set Group2|_45866_ "$_session_group_6"

gui_sg_addsignal -group "$_session_group_6" { spi_tb.ot_soc_top._45866_.Q spi_tb.ot_soc_top._45866_.CLK spi_tb.ot_soc_top._45866_.D spi_tb.ot_soc_top._45866_.RESET_B {spi_tb.ot_soc_top._45866_.$unit} }

gui_sg_move "$_session_group_6" -after "$_session_group_5" -pos 11 

# Global: Highlighting

# Global: Stack
gui_change_stack_mode -mode list

# Post database loading setting...

# Restore C1 time
gui_set_time -C1_only 6877.877429



# Save global setting...

# Wave/List view global setting
gui_cov_show_value -switch false

# Close all empty TopLevel windows
foreach __top [gui_ekki_get_window_ids -type TopLevel] {
    if { [llength [gui_ekki_get_window_ids -parent $__top]] == 0} {
        gui_close_window -window $__top
    }
}
gui_set_loading_session_type noSession
# DVE View/pane content session: 


# Hier 'Hier.1'
gui_show_window -window ${Hier.1}
gui_list_set_filter -id ${Hier.1} -list { {Package 1} {All 0} {Process 1} {VirtPowSwitch 0} {UnnamedProcess 1} {UDP 0} {Function 1} {Block 1} {SrsnAndSpaCell 0} {OVA Unit 1} {LeafScCell 1} {LeafVlgCell 1} {Interface 1} {LeafVhdCell 1} {$unit 1} {NamedBlock 1} {Task 1} {VlgPackage 1} {ClassDef 1} {VirtIsoCell 0} }
gui_list_set_filter -id ${Hier.1} -text {*}
gui_hier_list_init -id ${Hier.1}
gui_change_design -id ${Hier.1} -design Sim
catch {gui_list_expand -id ${Hier.1} spi_tb}
catch {gui_list_expand -id ${Hier.1} spi_tb.ot_soc_top}
catch {gui_list_select -id ${Hier.1} {{spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb }}}
gui_view_scroll -id ${Hier.1} -vertical -set 6460
gui_view_scroll -id ${Hier.1} -horizontal -set 0

# Class 'Class.1'
gui_list_set_filter -id ${Class.1} -list { {OVM 1} {VMM 1} {All 1} {Object 1} {UVM 1} {RVM 1} }
gui_list_set_filter -id ${Class.1} -text {*}
gui_change_design -id ${Class.1} -design Sim
# Warning: Class view not found.

# Member 'Member.1'
gui_list_set_filter -id ${Member.1} -list { {InternalMember 0} {RandMember 1} {All 0} {BaseMember 0} {PrivateMember 1} {LibBaseMember 0} {AutomaticMember 1} {VirtualMember 1} {PublicMember 1} {ProtectedMember 1} {OverRiddenMember 0} {InterfaceClassMember 1} {StaticMember 1} }
gui_list_set_filter -id ${Member.1} -text {*}

# Data 'Data.1'
gui_list_set_filter -id ${Data.1} -list { {Buffer 1} {Input 1} {Others 1} {Linkage 1} {Output 1} {LowPower 1} {Parameter 1} {All 1} {Aggregate 1} {LibBaseMember 1} {Event 1} {Assertion 1} {Constant 1} {Interface 1} {BaseMembers 1} {Signal 1} {$unit 1} {Inout 1} {Variable 1} }
gui_list_set_filter -id ${Data.1} -text {*}
gui_list_show_data -id ${Data.1} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb }
gui_show_window -window ${Data.1}
catch { gui_list_select -id ${Data.1} {{spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .clk0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .clk1} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .addr0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .addr1} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .wmask0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .dout0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .din0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .dout1} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .csb0} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .csb1} {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .web0} }}
gui_view_scroll -id ${Data.1} -vertical -set 0
gui_view_scroll -id ${Data.1} -horizontal -set 0
gui_view_scroll -id ${Hier.1} -vertical -set 6460
gui_view_scroll -id ${Hier.1} -horizontal -set 0

# DriverLoad 'DriverLoad.1'
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\iccm.iccm[0].sky130_sram_4kb .csb0} -time 0 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top._07358_ -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top._07357_ -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top._06873_ -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top.system_rst_ni -time 0 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\reset_manager.rst_fd } -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top._01514_ -time 0 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\reset_manager.rst_fd } -time 0 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\iccm.wen } -time 0 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top._03539_ -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top._18363_ -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top._18362_ -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top._20952_ -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top._20949_ -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\u_dut.ctrl_fsm_cs[0] } -time 0 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\programmer.rst_ni } -time 0 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\rst_buf[1] } -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\rst_buf[2] } -time 0 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\rst_buf[2] } -time 0 -starttime 10340
gui_get_loads -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\rst_buf[1] }
gui_get_loads -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\rst_buf[1] }
gui_get_drivers -session -id ${DriverLoad.1} -signal spi_tb.ot_soc_top.clk_i -time 10340 -starttime 10340
gui_get_drivers -session -id ${DriverLoad.1} -signal {spi_tb.ot_soc_top.\rst_buf[2] } -time 0 -starttime 10340

# Source 'Source.1'
gui_src_value_annotate -id ${Source.1} -switch false
gui_set_env TOGGLE::VALUEANNOTATE 0
gui_open_source -id ${Source.1}  -replace -active _vcs_unit__2949268156 ip/prim/rtl/prim_pkg.sv
gui_view_scroll -id ${Source.1} -vertical -set 0
gui_src_set_reusable -id ${Source.1}

# View 'Wave.1'
gui_wv_sync -id ${Wave.1} -switch false
set groupExD [gui_get_pref_value -category Wave -key exclusiveSG]
gui_set_pref_value -category Wave -key exclusiveSG -value {false}
set origWaveHeight [gui_get_pref_value -category Wave -key waveRowHeight]
gui_list_set_height -id Wave -height 25
set origGroupCreationState [gui_list_create_group_when_add -wave]
gui_list_create_group_when_add -wave -disable
gui_marker_set_ref -id ${Wave.1}  C1
gui_wv_zoom_timerange -id ${Wave.1} 0 10340
gui_list_add_group -id ${Wave.1} -after {New Group} {Group1}
gui_list_add_group -id ${Wave.1} -after {New Group} {Group2}
gui_list_add_group -id ${Wave.1}  -after {spi_tb.ot_soc_top.\rst_buf[2] } {Group2|_45866_}
gui_list_select -id ${Wave.1} {spi_tb.ot_soc_top._45866_.Q }
gui_seek_criteria -id ${Wave.1} {Any Edge}



gui_set_env TOGGLE::DEFAULT_WAVE_WINDOW ${Wave.1}
gui_set_pref_value -category Wave -key exclusiveSG -value $groupExD
gui_list_set_height -id Wave -height $origWaveHeight
if {$origGroupCreationState} {
	gui_list_create_group_when_add -wave -enable
}
if { $groupExD } {
 gui_msg_report -code DVWW028
}
gui_list_set_filter -id ${Wave.1} -list { {Buffer 1} {Input 1} {Others 1} {Linkage 1} {Output 1} {Parameter 1} {All 1} {Aggregate 1} {LibBaseMember 1} {Event 1} {Assertion 1} {Constant 1} {Interface 1} {BaseMembers 1} {Signal 1} {$unit 1} {Inout 1} {Variable 1} }
gui_list_set_filter -id ${Wave.1} -text {*}
gui_list_set_insertion_bar  -id ${Wave.1} -group Group2  -item {spi_tb.ot_soc_top.\programmer.rst_ni } -position below

gui_marker_move -id ${Wave.1} {C1} 6877.877429
gui_view_scroll -id ${Wave.1} -vertical -set 0
gui_show_grid -id ${Wave.1} -enable false
# Restore toplevel window zorder
# The toplevel window could be closed if it has no view/pane
if {[gui_exist_window -window ${TopLevel.1}]} {
	gui_set_active_window -window ${TopLevel.1}
	gui_set_active_window -window ${Source.1}
	gui_set_active_window -window ${DriverLoad.1}
}
if {[gui_exist_window -window ${TopLevel.2}]} {
	gui_set_active_window -window ${TopLevel.2}
	gui_set_active_window -window ${Wave.1}
}
#</Session>

