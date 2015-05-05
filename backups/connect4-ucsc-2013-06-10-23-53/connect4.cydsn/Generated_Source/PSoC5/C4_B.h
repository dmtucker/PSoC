/*******************************************************************************
* File Name: C4_B.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_C4_B_H) /* Pins C4_B_H */
#define CY_PINS_C4_B_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "C4_B_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 C4_B__PORT == 15 && ((C4_B__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    C4_B_Write(uint8 value) ;
void    C4_B_SetDriveMode(uint8 mode) ;
uint8   C4_B_ReadDataReg(void) ;
uint8   C4_B_Read(void) ;
uint8   C4_B_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define C4_B_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define C4_B_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define C4_B_DM_RES_UP          PIN_DM_RES_UP
#define C4_B_DM_RES_DWN         PIN_DM_RES_DWN
#define C4_B_DM_OD_LO           PIN_DM_OD_LO
#define C4_B_DM_OD_HI           PIN_DM_OD_HI
#define C4_B_DM_STRONG          PIN_DM_STRONG
#define C4_B_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define C4_B_MASK               C4_B__MASK
#define C4_B_SHIFT              C4_B__SHIFT
#define C4_B_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define C4_B_PS                     (* (reg8 *) C4_B__PS)
/* Data Register */
#define C4_B_DR                     (* (reg8 *) C4_B__DR)
/* Port Number */
#define C4_B_PRT_NUM                (* (reg8 *) C4_B__PRT) 
/* Connect to Analog Globals */                                                  
#define C4_B_AG                     (* (reg8 *) C4_B__AG)                       
/* Analog MUX bux enable */
#define C4_B_AMUX                   (* (reg8 *) C4_B__AMUX) 
/* Bidirectional Enable */                                                        
#define C4_B_BIE                    (* (reg8 *) C4_B__BIE)
/* Bit-mask for Aliased Register Access */
#define C4_B_BIT_MASK               (* (reg8 *) C4_B__BIT_MASK)
/* Bypass Enable */
#define C4_B_BYP                    (* (reg8 *) C4_B__BYP)
/* Port wide control signals */                                                   
#define C4_B_CTL                    (* (reg8 *) C4_B__CTL)
/* Drive Modes */
#define C4_B_DM0                    (* (reg8 *) C4_B__DM0) 
#define C4_B_DM1                    (* (reg8 *) C4_B__DM1)
#define C4_B_DM2                    (* (reg8 *) C4_B__DM2) 
/* Input Buffer Disable Override */
#define C4_B_INP_DIS                (* (reg8 *) C4_B__INP_DIS)
/* LCD Common or Segment Drive */
#define C4_B_LCD_COM_SEG            (* (reg8 *) C4_B__LCD_COM_SEG)
/* Enable Segment LCD */
#define C4_B_LCD_EN                 (* (reg8 *) C4_B__LCD_EN)
/* Slew Rate Control */
#define C4_B_SLW                    (* (reg8 *) C4_B__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define C4_B_PRTDSI__CAPS_SEL       (* (reg8 *) C4_B__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define C4_B_PRTDSI__DBL_SYNC_IN    (* (reg8 *) C4_B__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define C4_B_PRTDSI__OE_SEL0        (* (reg8 *) C4_B__PRTDSI__OE_SEL0) 
#define C4_B_PRTDSI__OE_SEL1        (* (reg8 *) C4_B__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define C4_B_PRTDSI__OUT_SEL0       (* (reg8 *) C4_B__PRTDSI__OUT_SEL0) 
#define C4_B_PRTDSI__OUT_SEL1       (* (reg8 *) C4_B__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define C4_B_PRTDSI__SYNC_OUT       (* (reg8 *) C4_B__PRTDSI__SYNC_OUT) 


#if defined(C4_B__INTSTAT)  /* Interrupt Registers */

    #define C4_B_INTSTAT                (* (reg8 *) C4_B__INTSTAT)
    #define C4_B_SNAP                   (* (reg8 *) C4_B__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_C4_B_H */


/* [] END OF FILE */
