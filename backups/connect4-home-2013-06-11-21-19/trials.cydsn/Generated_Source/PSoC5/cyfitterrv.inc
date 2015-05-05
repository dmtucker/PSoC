    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; UART_IntClock
UART_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
UART_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
UART_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
UART_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_IntClock__INDEX EQU 0x00
UART_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_IntClock__PM_ACT_MSK EQU 0x01
UART_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_IntClock__PM_STBY_MSK EQU 0x01

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

; UART_BUART
UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB10_11_ST
UART_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B0_UDB10_MSK
UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB10_ST_CTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB10_ST_CTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B0_UDB10_ST
UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB10_11_MSK
UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB10_11_MSK
UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
UART_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B0_UDB10_CTL
UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB10_ST_CTL
UART_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B0_UDB10_CTL
UART_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B0_UDB10_ST_CTL
UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B0_UDB10_MSK
UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB10_11_A0
UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB10_11_A1
UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB10_11_D0
UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB10_11_D1
UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB10_11_F0
UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB10_11_F1
UART_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB10_A0_A1
UART_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B0_UDB10_A0
UART_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B0_UDB10_A1
UART_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB10_D0_D1
UART_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B0_UDB10_D0
UART_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B0_UDB10_D1
UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
UART_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB10_F0_F1
UART_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B0_UDB10_F0
UART_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B0_UDB10_F1
UART_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
UART_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB13_14_ST
UART_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_BUART_sRX_RxSts__3__POS EQU 3
UART_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_BUART_sRX_RxSts__4__POS EQU 4
UART_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_BUART_sRX_RxSts__5__POS EQU 5
UART_BUART_sRX_RxSts__MASK EQU 0x38
UART_BUART_sRX_RxSts__MASK_REG EQU CYREG_B0_UDB13_MSK
UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
UART_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B0_UDB13_ST
UART_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB15_A0_A1
UART_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B0_UDB15_A0
UART_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B0_UDB15_A1
UART_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB15_D0_D1
UART_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B0_UDB15_D0
UART_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B0_UDB15_D1
UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB15_ACTL
UART_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB15_F0_F1
UART_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B0_UDB15_F0
UART_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B0_UDB15_F1
UART_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_BUART_sTX_TxSts__0__POS EQU 0
UART_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_BUART_sTX_TxSts__1__POS EQU 1
UART_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_BUART_sTX_TxSts__2__POS EQU 2
UART_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_BUART_sTX_TxSts__3__POS EQU 3
UART_BUART_sTX_TxSts__MASK EQU 0x0F
UART_BUART_sTX_TxSts__MASK_REG EQU CYREG_B0_UDB15_MSK
UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB15_ACTL
UART_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B0_UDB15_ST
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B0_UDB12_13_A0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B0_UDB12_13_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B0_UDB12_13_D0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B0_UDB12_13_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB12_13_ACTL
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B0_UDB12_13_F0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B0_UDB12_13_F1
UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B0_UDB12_A0_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B0_UDB12_A0
UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B0_UDB12_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B0_UDB12_D0_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B0_UDB12_D0
UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B0_UDB12_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B0_UDB12_ACTL
UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B0_UDB12_F0_F1
UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B0_UDB12_F0
UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B0_UDB12_F1

; RemoteLED
RemoteLED__0__MASK EQU 0x08
RemoteLED__0__PC EQU CYREG_PRT6_PC3
RemoteLED__0__PORT EQU 6
RemoteLED__0__SHIFT EQU 3
RemoteLED__AG EQU CYREG_PRT6_AG
RemoteLED__AMUX EQU CYREG_PRT6_AMUX
RemoteLED__BIE EQU CYREG_PRT6_BIE
RemoteLED__BIT_MASK EQU CYREG_PRT6_BIT_MASK
RemoteLED__BYP EQU CYREG_PRT6_BYP
RemoteLED__CTL EQU CYREG_PRT6_CTL
RemoteLED__DM0 EQU CYREG_PRT6_DM0
RemoteLED__DM1 EQU CYREG_PRT6_DM1
RemoteLED__DM2 EQU CYREG_PRT6_DM2
RemoteLED__DR EQU CYREG_PRT6_DR
RemoteLED__INP_DIS EQU CYREG_PRT6_INP_DIS
RemoteLED__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
RemoteLED__LCD_EN EQU CYREG_PRT6_LCD_EN
RemoteLED__MASK EQU 0x08
RemoteLED__PORT EQU 6
RemoteLED__PRT EQU CYREG_PRT6_PRT
RemoteLED__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
RemoteLED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
RemoteLED__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
RemoteLED__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
RemoteLED__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
RemoteLED__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
RemoteLED__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
RemoteLED__PS EQU CYREG_PRT6_PS
RemoteLED__SHIFT EQU 3
RemoteLED__SLW EQU CYREG_PRT6_SLW

; TestLED
TestLED__0__MASK EQU 0x04
TestLED__0__PC EQU CYREG_PRT6_PC2
TestLED__0__PORT EQU 6
TestLED__0__SHIFT EQU 2
TestLED__AG EQU CYREG_PRT6_AG
TestLED__AMUX EQU CYREG_PRT6_AMUX
TestLED__BIE EQU CYREG_PRT6_BIE
TestLED__BIT_MASK EQU CYREG_PRT6_BIT_MASK
TestLED__BYP EQU CYREG_PRT6_BYP
TestLED__CTL EQU CYREG_PRT6_CTL
TestLED__DM0 EQU CYREG_PRT6_DM0
TestLED__DM1 EQU CYREG_PRT6_DM1
TestLED__DM2 EQU CYREG_PRT6_DM2
TestLED__DR EQU CYREG_PRT6_DR
TestLED__INP_DIS EQU CYREG_PRT6_INP_DIS
TestLED__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
TestLED__LCD_EN EQU CYREG_PRT6_LCD_EN
TestLED__MASK EQU 0x04
TestLED__PORT EQU 6
TestLED__PRT EQU CYREG_PRT6_PRT
TestLED__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
TestLED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
TestLED__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
TestLED__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
TestLED__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
TestLED__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
TestLED__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
TestLED__PS EQU CYREG_PRT6_PS
TestLED__SHIFT EQU 2
TestLED__SLW EQU CYREG_PRT6_SLW

; Dout
Dout__0__MASK EQU 0x40
Dout__0__PC EQU CYREG_PRT6_PC6
Dout__0__PORT EQU 6
Dout__0__SHIFT EQU 6
Dout__AG EQU CYREG_PRT6_AG
Dout__AMUX EQU CYREG_PRT6_AMUX
Dout__BIE EQU CYREG_PRT6_BIE
Dout__BIT_MASK EQU CYREG_PRT6_BIT_MASK
Dout__BYP EQU CYREG_PRT6_BYP
Dout__CTL EQU CYREG_PRT6_CTL
Dout__DM0 EQU CYREG_PRT6_DM0
Dout__DM1 EQU CYREG_PRT6_DM1
Dout__DM2 EQU CYREG_PRT6_DM2
Dout__DR EQU CYREG_PRT6_DR
Dout__INP_DIS EQU CYREG_PRT6_INP_DIS
Dout__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
Dout__LCD_EN EQU CYREG_PRT6_LCD_EN
Dout__MASK EQU 0x40
Dout__PORT EQU 6
Dout__PRT EQU CYREG_PRT6_PRT
Dout__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
Dout__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
Dout__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
Dout__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
Dout__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
Dout__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
Dout__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
Dout__PS EQU CYREG_PRT6_PS
Dout__SHIFT EQU 6
Dout__SLW EQU CYREG_PRT6_SLW

; Din
Din__0__MASK EQU 0x01
Din__0__PC EQU CYREG_PRT6_PC0
Din__0__PORT EQU 6
Din__0__SHIFT EQU 0
Din__AG EQU CYREG_PRT6_AG
Din__AMUX EQU CYREG_PRT6_AMUX
Din__BIE EQU CYREG_PRT6_BIE
Din__BIT_MASK EQU CYREG_PRT6_BIT_MASK
Din__BYP EQU CYREG_PRT6_BYP
Din__CTL EQU CYREG_PRT6_CTL
Din__DM0 EQU CYREG_PRT6_DM0
Din__DM1 EQU CYREG_PRT6_DM1
Din__DM2 EQU CYREG_PRT6_DM2
Din__DR EQU CYREG_PRT6_DR
Din__INP_DIS EQU CYREG_PRT6_INP_DIS
Din__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
Din__LCD_EN EQU CYREG_PRT6_LCD_EN
Din__MASK EQU 0x01
Din__PORT EQU 6
Din__PRT EQU CYREG_PRT6_PRT
Din__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
Din__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
Din__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
Din__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
Din__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
Din__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
Din__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
Din__PS EQU CYREG_PRT6_PS
Din__SHIFT EQU 0
Din__SLW EQU CYREG_PRT6_SLW

; Miscellaneous
; -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_MEMBER_5B EQU 4
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_DIE_PSOC5LP EQU 4
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_PSOC5LP
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 3
CYDEV_CHIP_DIE_PSOC4A EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 2
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
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
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
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
CYDEV_INTR_RISING EQU 0x00000000
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