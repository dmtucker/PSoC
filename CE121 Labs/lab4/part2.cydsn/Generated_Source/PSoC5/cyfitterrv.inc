    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; Counter_CounterUDB
Counter_CounterUDB_sC16_counterdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB10_11_A0
Counter_CounterUDB_sC16_counterdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB10_11_A1
Counter_CounterUDB_sC16_counterdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB10_11_D0
Counter_CounterUDB_sC16_counterdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB10_11_D1
Counter_CounterUDB_sC16_counterdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
Counter_CounterUDB_sC16_counterdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB10_11_F0
Counter_CounterUDB_sC16_counterdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB10_11_F1
Counter_CounterUDB_sC16_counterdp_u0__A0_A1_REG EQU CYREG_B1_UDB10_A0_A1
Counter_CounterUDB_sC16_counterdp_u0__A0_REG EQU CYREG_B1_UDB10_A0
Counter_CounterUDB_sC16_counterdp_u0__A1_REG EQU CYREG_B1_UDB10_A1
Counter_CounterUDB_sC16_counterdp_u0__D0_D1_REG EQU CYREG_B1_UDB10_D0_D1
Counter_CounterUDB_sC16_counterdp_u0__D0_REG EQU CYREG_B1_UDB10_D0
Counter_CounterUDB_sC16_counterdp_u0__D1_REG EQU CYREG_B1_UDB10_D1
Counter_CounterUDB_sC16_counterdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
Counter_CounterUDB_sC16_counterdp_u0__F0_F1_REG EQU CYREG_B1_UDB10_F0_F1
Counter_CounterUDB_sC16_counterdp_u0__F0_REG EQU CYREG_B1_UDB10_F0
Counter_CounterUDB_sC16_counterdp_u0__F1_REG EQU CYREG_B1_UDB10_F1
Counter_CounterUDB_sC16_counterdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
Counter_CounterUDB_sC16_counterdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
Counter_CounterUDB_sC16_counterdp_u1__A0_A1_REG EQU CYREG_B1_UDB11_A0_A1
Counter_CounterUDB_sC16_counterdp_u1__A0_REG EQU CYREG_B1_UDB11_A0
Counter_CounterUDB_sC16_counterdp_u1__A1_REG EQU CYREG_B1_UDB11_A1
Counter_CounterUDB_sC16_counterdp_u1__D0_D1_REG EQU CYREG_B1_UDB11_D0_D1
Counter_CounterUDB_sC16_counterdp_u1__D0_REG EQU CYREG_B1_UDB11_D0
Counter_CounterUDB_sC16_counterdp_u1__D1_REG EQU CYREG_B1_UDB11_D1
Counter_CounterUDB_sC16_counterdp_u1__DP_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
Counter_CounterUDB_sC16_counterdp_u1__F0_F1_REG EQU CYREG_B1_UDB11_F0_F1
Counter_CounterUDB_sC16_counterdp_u1__F0_REG EQU CYREG_B1_UDB11_F0
Counter_CounterUDB_sC16_counterdp_u1__F1_REG EQU CYREG_B1_UDB11_F1
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB10_11_MSK
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB10_11_MSK
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB10_CTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB10_ST_CTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_B1_UDB10_CTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB10_ST_CTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB10_MSK
Counter_CounterUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
Counter_CounterUDB_sSTSReg_rstSts_stsreg__0__MASK EQU 0x01
Counter_CounterUDB_sSTSReg_rstSts_stsreg__0__POS EQU 0
Counter_CounterUDB_sSTSReg_rstSts_stsreg__1__MASK EQU 0x02
Counter_CounterUDB_sSTSReg_rstSts_stsreg__1__POS EQU 1
Counter_CounterUDB_sSTSReg_rstSts_stsreg__2__MASK EQU 0x04
Counter_CounterUDB_sSTSReg_rstSts_stsreg__2__POS EQU 2
Counter_CounterUDB_sSTSReg_rstSts_stsreg__4__MASK EQU 0x10
Counter_CounterUDB_sSTSReg_rstSts_stsreg__4__POS EQU 4
Counter_CounterUDB_sSTSReg_rstSts_stsreg__5__MASK EQU 0x20
Counter_CounterUDB_sSTSReg_rstSts_stsreg__5__POS EQU 5
Counter_CounterUDB_sSTSReg_rstSts_stsreg__6__MASK EQU 0x40
Counter_CounterUDB_sSTSReg_rstSts_stsreg__6__POS EQU 6
Counter_CounterUDB_sSTSReg_rstSts_stsreg__MASK EQU 0x77
Counter_CounterUDB_sSTSReg_rstSts_stsreg__MASK_REG EQU CYREG_B1_UDB11_MSK
Counter_CounterUDB_sSTSReg_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
Counter_CounterUDB_sSTSReg_rstSts_stsreg__STATUS_REG EQU CYREG_B1_UDB11_ST

; ADC_Ext_CP_Clk
ADC_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ADC_Ext_CP_Clk__INDEX EQU 0x00
ADC_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ADC_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_Ext_CP_Clk__PM_STBY_MSK EQU 0x01

; Timer_TimerUDB
Timer_TimerUDB_rstSts_stsreg__0__MASK EQU 0x01
Timer_TimerUDB_rstSts_stsreg__0__POS EQU 0
Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB10_11_ST
Timer_TimerUDB_rstSts_stsreg__2__MASK EQU 0x04
Timer_TimerUDB_rstSts_stsreg__2__POS EQU 2
Timer_TimerUDB_rstSts_stsreg__3__MASK EQU 0x08
Timer_TimerUDB_rstSts_stsreg__3__POS EQU 3
Timer_TimerUDB_rstSts_stsreg__MASK EQU 0x0D
Timer_TimerUDB_rstSts_stsreg__MASK_REG EQU CYREG_B0_UDB10_MSK
Timer_TimerUDB_rstSts_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
Timer_TimerUDB_rstSts_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
Timer_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
Timer_TimerUDB_rstSts_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB10_ST_CTL
Timer_TimerUDB_rstSts_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB10_ST_CTL
Timer_TimerUDB_rstSts_stsreg__STATUS_REG EQU CYREG_B0_UDB10_ST
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB11_12_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB11_12_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB11_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB11_ST_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_B0_UDB11_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB11_ST_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB11_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Timer_TimerUDB_sT24_timerdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB08_09_A0
Timer_TimerUDB_sT24_timerdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB08_09_A1
Timer_TimerUDB_sT24_timerdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB08_09_D0
Timer_TimerUDB_sT24_timerdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB08_09_D1
Timer_TimerUDB_sT24_timerdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB08_09_ACTL
Timer_TimerUDB_sT24_timerdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB08_09_F0
Timer_TimerUDB_sT24_timerdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB08_09_F1
Timer_TimerUDB_sT24_timerdp_u0__A0_A1_REG EQU CYREG_B0_UDB08_A0_A1
Timer_TimerUDB_sT24_timerdp_u0__A0_REG EQU CYREG_B0_UDB08_A0
Timer_TimerUDB_sT24_timerdp_u0__A1_REG EQU CYREG_B0_UDB08_A1
Timer_TimerUDB_sT24_timerdp_u0__D0_D1_REG EQU CYREG_B0_UDB08_D0_D1
Timer_TimerUDB_sT24_timerdp_u0__D0_REG EQU CYREG_B0_UDB08_D0
Timer_TimerUDB_sT24_timerdp_u0__D1_REG EQU CYREG_B0_UDB08_D1
Timer_TimerUDB_sT24_timerdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB08_ACTL
Timer_TimerUDB_sT24_timerdp_u0__F0_F1_REG EQU CYREG_B0_UDB08_F0_F1
Timer_TimerUDB_sT24_timerdp_u0__F0_REG EQU CYREG_B0_UDB08_F0
Timer_TimerUDB_sT24_timerdp_u0__F1_REG EQU CYREG_B0_UDB08_F1
Timer_TimerUDB_sT24_timerdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB09_10_A0
Timer_TimerUDB_sT24_timerdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB09_10_A1
Timer_TimerUDB_sT24_timerdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB09_10_D0
Timer_TimerUDB_sT24_timerdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB09_10_D1
Timer_TimerUDB_sT24_timerdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
Timer_TimerUDB_sT24_timerdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB09_10_F0
Timer_TimerUDB_sT24_timerdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB09_10_F1
Timer_TimerUDB_sT24_timerdp_u1__A0_A1_REG EQU CYREG_B0_UDB09_A0_A1
Timer_TimerUDB_sT24_timerdp_u1__A0_REG EQU CYREG_B0_UDB09_A0
Timer_TimerUDB_sT24_timerdp_u1__A1_REG EQU CYREG_B0_UDB09_A1
Timer_TimerUDB_sT24_timerdp_u1__D0_D1_REG EQU CYREG_B0_UDB09_D0_D1
Timer_TimerUDB_sT24_timerdp_u1__D0_REG EQU CYREG_B0_UDB09_D0
Timer_TimerUDB_sT24_timerdp_u1__D1_REG EQU CYREG_B0_UDB09_D1
Timer_TimerUDB_sT24_timerdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
Timer_TimerUDB_sT24_timerdp_u1__F0_F1_REG EQU CYREG_B0_UDB09_F0_F1
Timer_TimerUDB_sT24_timerdp_u1__F0_REG EQU CYREG_B0_UDB09_F0
Timer_TimerUDB_sT24_timerdp_u1__F1_REG EQU CYREG_B0_UDB09_F1
Timer_TimerUDB_sT24_timerdp_u2__16BIT_A0_REG EQU CYREG_B0_UDB10_11_A0
Timer_TimerUDB_sT24_timerdp_u2__16BIT_A1_REG EQU CYREG_B0_UDB10_11_A1
Timer_TimerUDB_sT24_timerdp_u2__16BIT_D0_REG EQU CYREG_B0_UDB10_11_D0
Timer_TimerUDB_sT24_timerdp_u2__16BIT_D1_REG EQU CYREG_B0_UDB10_11_D1
Timer_TimerUDB_sT24_timerdp_u2__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
Timer_TimerUDB_sT24_timerdp_u2__16BIT_F0_REG EQU CYREG_B0_UDB10_11_F0
Timer_TimerUDB_sT24_timerdp_u2__16BIT_F1_REG EQU CYREG_B0_UDB10_11_F1
Timer_TimerUDB_sT24_timerdp_u2__A0_A1_REG EQU CYREG_B0_UDB10_A0_A1
Timer_TimerUDB_sT24_timerdp_u2__A0_REG EQU CYREG_B0_UDB10_A0
Timer_TimerUDB_sT24_timerdp_u2__A1_REG EQU CYREG_B0_UDB10_A1
Timer_TimerUDB_sT24_timerdp_u2__D0_D1_REG EQU CYREG_B0_UDB10_D0_D1
Timer_TimerUDB_sT24_timerdp_u2__D0_REG EQU CYREG_B0_UDB10_D0
Timer_TimerUDB_sT24_timerdp_u2__D1_REG EQU CYREG_B0_UDB10_D1
Timer_TimerUDB_sT24_timerdp_u2__DP_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
Timer_TimerUDB_sT24_timerdp_u2__F0_F1_REG EQU CYREG_B0_UDB10_F0_F1
Timer_TimerUDB_sT24_timerdp_u2__F0_REG EQU CYREG_B0_UDB10_F0
Timer_TimerUDB_sT24_timerdp_u2__F1_REG EQU CYREG_B0_UDB10_F1
Timer_TimerUDB_sT24_timerdp_u2__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
Timer_TimerUDB_sT24_timerdp_u2__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL

; Accelerator
Accelerator__0__MASK EQU 0x20
Accelerator__0__PC EQU CYREG_PRT6_PC5
Accelerator__0__PORT EQU 6
Accelerator__0__SHIFT EQU 5
Accelerator__AG EQU CYREG_PRT6_AG
Accelerator__AMUX EQU CYREG_PRT6_AMUX
Accelerator__BIE EQU CYREG_PRT6_BIE
Accelerator__BIT_MASK EQU CYREG_PRT6_BIT_MASK
Accelerator__BYP EQU CYREG_PRT6_BYP
Accelerator__CTL EQU CYREG_PRT6_CTL
Accelerator__DM0 EQU CYREG_PRT6_DM0
Accelerator__DM1 EQU CYREG_PRT6_DM1
Accelerator__DM2 EQU CYREG_PRT6_DM2
Accelerator__DR EQU CYREG_PRT6_DR
Accelerator__INP_DIS EQU CYREG_PRT6_INP_DIS
Accelerator__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
Accelerator__LCD_EN EQU CYREG_PRT6_LCD_EN
Accelerator__MASK EQU 0x20
Accelerator__PORT EQU 6
Accelerator__PRT EQU CYREG_PRT6_PRT
Accelerator__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
Accelerator__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
Accelerator__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
Accelerator__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
Accelerator__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
Accelerator__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
Accelerator__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
Accelerator__PS EQU CYREG_PRT6_PS
Accelerator__SHIFT EQU 5
Accelerator__SLW EQU CYREG_PRT6_SLW

; ADC_theACLK
ADC_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_theACLK__INDEX EQU 0x00
ADC_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_theACLK__PM_ACT_MSK EQU 0x01
ADC_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_theACLK__PM_STBY_MSK EQU 0x01

; LCD_LCDPort
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

; PWM_PWMUDB
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB10_11_MSK
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB10_11_MSK
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB10_CTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB10_ST_CTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_B0_UDB10_CTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB10_ST_CTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB10_MSK
PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB12_13_A0
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB12_13_A1
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB12_13_D0
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB12_13_D1
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB12_13_ACTL
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB12_13_F0
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB12_13_F1
PWM_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB12_A0_A1
PWM_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B0_UDB12_A0
PWM_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B0_UDB12_A1
PWM_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB12_D0_D1
PWM_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B0_UDB12_D0
PWM_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B0_UDB12_D1
PWM_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB12_ACTL
PWM_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB12_F0_F1
PWM_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B0_UDB12_F0
PWM_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B0_UDB12_F1
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB13_14_A0
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB13_14_A1
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB13_14_D0
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB13_14_D1
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB13_14_F0
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB13_14_F1
PWM_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B0_UDB13_A0_A1
PWM_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B0_UDB13_A0
PWM_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B0_UDB13_A1
PWM_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B0_UDB13_D0_D1
PWM_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B0_UDB13_D0
PWM_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B0_UDB13_D1
PWM_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
PWM_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B0_UDB13_F0_F1
PWM_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B0_UDB13_F0
PWM_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B0_UDB13_F1
PWM_PWMUDB_sSTSReg_rstSts_stsreg__0__MASK EQU 0x01
PWM_PWMUDB_sSTSReg_rstSts_stsreg__0__POS EQU 0
PWM_PWMUDB_sSTSReg_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
PWM_PWMUDB_sSTSReg_rstSts_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB13_14_ST
PWM_PWMUDB_sSTSReg_rstSts_stsreg__2__MASK EQU 0x04
PWM_PWMUDB_sSTSReg_rstSts_stsreg__2__POS EQU 2
PWM_PWMUDB_sSTSReg_rstSts_stsreg__3__MASK EQU 0x08
PWM_PWMUDB_sSTSReg_rstSts_stsreg__3__POS EQU 3
PWM_PWMUDB_sSTSReg_rstSts_stsreg__5__MASK EQU 0x20
PWM_PWMUDB_sSTSReg_rstSts_stsreg__5__POS EQU 5
PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK EQU 0x2D
PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK_REG EQU CYREG_B0_UDB13_MSK
PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_REG EQU CYREG_B0_UDB13_ST

; Tachometer
Tachometer__0__MASK EQU 0x80
Tachometer__0__PC EQU CYREG_PRT1_PC7
Tachometer__0__PORT EQU 1
Tachometer__0__SHIFT EQU 7
Tachometer__AG EQU CYREG_PRT1_AG
Tachometer__AMUX EQU CYREG_PRT1_AMUX
Tachometer__BIE EQU CYREG_PRT1_BIE
Tachometer__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Tachometer__BYP EQU CYREG_PRT1_BYP
Tachometer__CTL EQU CYREG_PRT1_CTL
Tachometer__DM0 EQU CYREG_PRT1_DM0
Tachometer__DM1 EQU CYREG_PRT1_DM1
Tachometer__DM2 EQU CYREG_PRT1_DM2
Tachometer__DR EQU CYREG_PRT1_DR
Tachometer__INP_DIS EQU CYREG_PRT1_INP_DIS
Tachometer__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Tachometer__LCD_EN EQU CYREG_PRT1_LCD_EN
Tachometer__MASK EQU 0x80
Tachometer__PORT EQU 1
Tachometer__PRT EQU CYREG_PRT1_PRT
Tachometer__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Tachometer__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Tachometer__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Tachometer__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Tachometer__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Tachometer__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Tachometer__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Tachometer__PS EQU CYREG_PRT1_PS
Tachometer__SHIFT EQU 7
Tachometer__SLW EQU CYREG_PRT1_SLW

; Indicator
Indicator__0__MASK EQU 0x08
Indicator__0__PC EQU CYREG_PRT6_PC3
Indicator__0__PORT EQU 6
Indicator__0__SHIFT EQU 3
Indicator__AG EQU CYREG_PRT6_AG
Indicator__AMUX EQU CYREG_PRT6_AMUX
Indicator__BIE EQU CYREG_PRT6_BIE
Indicator__BIT_MASK EQU CYREG_PRT6_BIT_MASK
Indicator__BYP EQU CYREG_PRT6_BYP
Indicator__CTL EQU CYREG_PRT6_CTL
Indicator__DM0 EQU CYREG_PRT6_DM0
Indicator__DM1 EQU CYREG_PRT6_DM1
Indicator__DM2 EQU CYREG_PRT6_DM2
Indicator__DR EQU CYREG_PRT6_DR
Indicator__INP_DIS EQU CYREG_PRT6_INP_DIS
Indicator__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
Indicator__LCD_EN EQU CYREG_PRT6_LCD_EN
Indicator__MASK EQU 0x08
Indicator__PORT EQU 6
Indicator__PRT EQU CYREG_PRT6_PRT
Indicator__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
Indicator__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
Indicator__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
Indicator__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
Indicator__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
Indicator__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
Indicator__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
Indicator__PS EQU CYREG_PRT6_PS
Indicator__SHIFT EQU 3
Indicator__SLW EQU CYREG_PRT6_SLW

; ADC_DSM4
ADC_DSM4__BUF0 EQU CYREG_DSM0_BUF0
ADC_DSM4__BUF1 EQU CYREG_DSM0_BUF1
ADC_DSM4__BUF2 EQU CYREG_DSM0_BUF2
ADC_DSM4__BUF3 EQU CYREG_DSM0_BUF3
ADC_DSM4__CLK EQU CYREG_DSM0_CLK
ADC_DSM4__CR0 EQU CYREG_DSM0_CR0
ADC_DSM4__CR1 EQU CYREG_DSM0_CR1
ADC_DSM4__CR10 EQU CYREG_DSM0_CR10
ADC_DSM4__CR11 EQU CYREG_DSM0_CR11
ADC_DSM4__CR12 EQU CYREG_DSM0_CR12
ADC_DSM4__CR13 EQU CYREG_DSM0_CR13
ADC_DSM4__CR14 EQU CYREG_DSM0_CR14
ADC_DSM4__CR15 EQU CYREG_DSM0_CR15
ADC_DSM4__CR16 EQU CYREG_DSM0_CR16
ADC_DSM4__CR17 EQU CYREG_DSM0_CR17
ADC_DSM4__CR2 EQU CYREG_DSM0_CR2
ADC_DSM4__CR3 EQU CYREG_DSM0_CR3
ADC_DSM4__CR4 EQU CYREG_DSM0_CR4
ADC_DSM4__CR5 EQU CYREG_DSM0_CR5
ADC_DSM4__CR6 EQU CYREG_DSM0_CR6
ADC_DSM4__CR7 EQU CYREG_DSM0_CR7
ADC_DSM4__CR8 EQU CYREG_DSM0_CR8
ADC_DSM4__CR9 EQU CYREG_DSM0_CR9
ADC_DSM4__DEM0 EQU CYREG_DSM0_DEM0
ADC_DSM4__DEM1 EQU CYREG_DSM0_DEM1
ADC_DSM4__MISC EQU CYREG_DSM0_MISC
ADC_DSM4__OUT0 EQU CYREG_DSM0_OUT0
ADC_DSM4__OUT1 EQU CYREG_DSM0_OUT1
ADC_DSM4__REF0 EQU CYREG_DSM0_REF0
ADC_DSM4__REF1 EQU CYREG_DSM0_REF1
ADC_DSM4__REF2 EQU CYREG_DSM0_REF2
ADC_DSM4__REF3 EQU CYREG_DSM0_REF3
ADC_DSM4__RSVD1 EQU CYREG_DSM0_RSVD1
ADC_DSM4__SW0 EQU CYREG_DSM0_SW0
ADC_DSM4__SW2 EQU CYREG_DSM0_SW2
ADC_DSM4__SW3 EQU CYREG_DSM0_SW3
ADC_DSM4__SW4 EQU CYREG_DSM0_SW4
ADC_DSM4__SW6 EQU CYREG_DSM0_SW6
ADC_DSM4__TR0 EQU CYREG_NPUMP_DSM_TR0
ADC_DSM4__TST0 EQU CYREG_DSM0_TST0
ADC_DSM4__TST1 EQU CYREG_DSM0_TST1

; ADC_DEC
ADC_DEC__COHER EQU CYREG_DEC_COHER
ADC_DEC__CR EQU CYREG_DEC_CR
ADC_DEC__DR1 EQU CYREG_DEC_DR1
ADC_DEC__DR2 EQU CYREG_DEC_DR2
ADC_DEC__DR2H EQU CYREG_DEC_DR2H
ADC_DEC__GCOR EQU CYREG_DEC_GCOR
ADC_DEC__GCORH EQU CYREG_DEC_GCORH
ADC_DEC__GVAL EQU CYREG_DEC_GVAL
ADC_DEC__OCOR EQU CYREG_DEC_OCOR
ADC_DEC__OCORH EQU CYREG_DEC_OCORH
ADC_DEC__OCORM EQU CYREG_DEC_OCORM
ADC_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ADC_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ADC_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ADC_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ADC_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ADC_DEC__PM_ACT_MSK EQU 0x01
ADC_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ADC_DEC__PM_STBY_MSK EQU 0x01
ADC_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ADC_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ADC_DEC__SR EQU CYREG_DEC_SR
ADC_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ADC_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ADC_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ADC_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ADC_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ADC_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ADC_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ADC_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8

; ADC_IRQ
ADC_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_IRQ__INTC_MASK EQU 0x20000000
ADC_IRQ__INTC_NUMBER EQU 29
ADC_IRQ__INTC_PRIOR_NUM EQU 7
ADC_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
ADC_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Sample
Sample__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
Sample__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
Sample__INTC_MASK EQU 0x02
Sample__INTC_NUMBER EQU 1
Sample__INTC_PRIOR_NUM EQU 7
Sample__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
Sample__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
Sample__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Toggle
Toggle__0__MASK EQU 0x02
Toggle__0__PC EQU CYREG_PRT6_PC1
Toggle__0__PORT EQU 6
Toggle__0__SHIFT EQU 1
Toggle__AG EQU CYREG_PRT6_AG
Toggle__AMUX EQU CYREG_PRT6_AMUX
Toggle__BIE EQU CYREG_PRT6_BIE
Toggle__BIT_MASK EQU CYREG_PRT6_BIT_MASK
Toggle__BYP EQU CYREG_PRT6_BYP
Toggle__CTL EQU CYREG_PRT6_CTL
Toggle__DM0 EQU CYREG_PRT6_DM0
Toggle__DM1 EQU CYREG_PRT6_DM1
Toggle__DM2 EQU CYREG_PRT6_DM2
Toggle__DR EQU CYREG_PRT6_DR
Toggle__INP_DIS EQU CYREG_PRT6_INP_DIS
Toggle__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
Toggle__LCD_EN EQU CYREG_PRT6_LCD_EN
Toggle__MASK EQU 0x02
Toggle__PORT EQU 6
Toggle__PRT EQU CYREG_PRT6_PRT
Toggle__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
Toggle__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
Toggle__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
Toggle__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
Toggle__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
Toggle__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
Toggle__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
Toggle__PS EQU CYREG_PRT6_PS
Toggle__SHIFT EQU 1
Toggle__SLW EQU CYREG_PRT6_SLW

; Clock
Clock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clock__CFG2_SRC_SEL_MASK EQU 0x07
Clock__INDEX EQU 0x01
Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock__PM_ACT_MSK EQU 0x02
Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock__PM_STBY_MSK EQU 0x02

; Speed
Speed__0__MASK EQU 0x40
Speed__0__PC EQU CYREG_PRT1_PC6
Speed__0__PORT EQU 1
Speed__0__SHIFT EQU 6
Speed__AG EQU CYREG_PRT1_AG
Speed__AMUX EQU CYREG_PRT1_AMUX
Speed__BIE EQU CYREG_PRT1_BIE
Speed__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Speed__BYP EQU CYREG_PRT1_BYP
Speed__CTL EQU CYREG_PRT1_CTL
Speed__DM0 EQU CYREG_PRT1_DM0
Speed__DM1 EQU CYREG_PRT1_DM1
Speed__DM2 EQU CYREG_PRT1_DM2
Speed__DR EQU CYREG_PRT1_DR
Speed__INP_DIS EQU CYREG_PRT1_INP_DIS
Speed__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Speed__LCD_EN EQU CYREG_PRT1_LCD_EN
Speed__MASK EQU 0x40
Speed__PORT EQU 1
Speed__PRT EQU CYREG_PRT1_PRT
Speed__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Speed__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Speed__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Speed__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Speed__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Speed__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Speed__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Speed__PS EQU CYREG_PRT1_PS
Speed__SHIFT EQU 6
Speed__SLW EQU CYREG_PRT1_SLW

; Mode
Mode__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
Mode__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
Mode__INTC_MASK EQU 0x01
Mode__INTC_NUMBER EQU 0
Mode__INTC_PRIOR_NUM EQU 7
Mode__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
Mode__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
Mode__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Miscellaneous
; -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_MEMBER_5B EQU 3
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_DIE_PSOC5LP EQU 3
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_PSOC5LP
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_5A EQU 2
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REV_PSOC5LP_PRODUCTION
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_REQXRES EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x1000
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000003
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x4000
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 EQU 5
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 EQU 5
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 EQU 5
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 EQU 5
CYDEV_VIO3_MV EQU 5000
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END