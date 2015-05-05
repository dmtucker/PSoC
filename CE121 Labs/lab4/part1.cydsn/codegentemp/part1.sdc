# THIS FILE IS AUTOMATICALLY GENERATED
# Project: F:\PSoC Creator\lab4\part1.cydsn\part1.cyprj
# Date: Fri, 24 May 2013 05:06:22 GMT
#set_units -time ns
create_clock -name {ADC_Ext_CP_Clk(routed)} -period 375 -waveform {0 187.5} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {ADC_Ext_CP_Clk} -source [get_pins {ClockBlock/clk_sync}] -edges {1 9 19} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {Clock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 25 49} [list [get_pins {ClockBlock/dclk_glb_1}]]
create_generated_clock -name {ADC_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 39 77} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_clock -name {ADC_theACLK(fixed-function)} -period 1583.3333333333333 -waveform {0 791.666666666667} [get_pins {ClockBlock/aclk_glb_ff_0}]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for F:\PSoC Creator\lab4\part1.cydsn\TopDesign\TopDesign.cysch
# Project: F:\PSoC Creator\lab4\part1.cydsn\part1.cyprj
# Date: Fri, 24 May 2013 05:05:51 GMT
