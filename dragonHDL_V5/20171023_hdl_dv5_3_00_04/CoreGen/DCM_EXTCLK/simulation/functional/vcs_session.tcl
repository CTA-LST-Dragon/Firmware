gui_open_window Wave
gui_sg_create DCM_EXTCLK_group
gui_list_add_group -id Wave.1 {DCM_EXTCLK_group}
gui_sg_addsignal -group DCM_EXTCLK_group {DCM_EXTCLK_tb.test_phase}
gui_set_radix -radix {ascii} -signals {DCM_EXTCLK_tb.test_phase}
gui_sg_addsignal -group DCM_EXTCLK_group {{Input_clocks}} -divider
gui_sg_addsignal -group DCM_EXTCLK_group {DCM_EXTCLK_tb.CLK_IN1}
gui_sg_addsignal -group DCM_EXTCLK_group {{Output_clocks}} -divider
gui_sg_addsignal -group DCM_EXTCLK_group {DCM_EXTCLK_tb.dut.clk}
gui_list_expand -id Wave.1 DCM_EXTCLK_tb.dut.clk
gui_sg_addsignal -group DCM_EXTCLK_group {{Status_control}} -divider
gui_sg_addsignal -group DCM_EXTCLK_group {DCM_EXTCLK_tb.RESET}
gui_sg_addsignal -group DCM_EXTCLK_group {DCM_EXTCLK_tb.LOCKED}
gui_sg_addsignal -group DCM_EXTCLK_group {{Counters}} -divider
gui_sg_addsignal -group DCM_EXTCLK_group {DCM_EXTCLK_tb.COUNT}
gui_sg_addsignal -group DCM_EXTCLK_group {DCM_EXTCLK_tb.dut.counter}
gui_list_expand -id Wave.1 DCM_EXTCLK_tb.dut.counter
gui_zoom -window Wave.1 -full