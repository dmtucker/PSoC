/*******************************************************************************
* File Name: Beacon.h  
* Version 1.80
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

#if !defined(CY_PINS_Beacon_H) /* Pins Beacon_H */
#define CY_PINS_Beacon_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Beacon_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_80 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Beacon__PORT == 15 && ((Beacon__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Beacon_Write(uint8 value) ;
void    Beacon_SetDriveMode(uint8 mode) ;
uint8   Beacon_ReadDataReg(void) ;
uint8   Beacon_Read(void) ;
uint8   Beacon_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Beacon_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Beacon_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Beacon_DM_RES_UP          PIN_DM_RES_UP
#define Beacon_DM_RES_DWN         PIN_DM_RES_DWN
#define Beacon_DM_OD_LO           PIN_DM_OD_LO
#define Beacon_DM_OD_HI           PIN_DM_OD_HI
#define Beacon_DM_STRONG          PIN_DM_STRONG
#define Beacon_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Beacon_MASK               Beacon__MASK
#define Beacon_SHIFT              Beacon__SHIFT
#define Beacon_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Beacon_PS                     (* (reg8 *) Beacon__PS)
/* Data Register */
#define Beacon_DR                     (* (reg8 *) Beacon__DR)
/* Port Number */
#define Beacon_PRT_NUM                (* (reg8 *) Beacon__PRT) 
/* Connect to Analog Globals */                                                  
#define Beacon_AG                     (* (reg8 *) Beacon__AG)                       
/* Analog MUX bux enable */
#define Beacon_AMUX                   (* (reg8 *) Beacon__AMUX) 
/* Bidirectional Enable */                                                        
#define Beacon_BIE                    (* (reg8 *) Beacon__BIE)
/* Bit-mask for Aliased Register Access */
#define Beacon_BIT_MASK               (* (reg8 *) Beacon__BIT_MASK)
/* Bypass Enable */
#define Beacon_BYP                    (* (reg8 *) Beacon__BYP)
/* Port wide control signals */                                                   
#define Beacon_CTL                    (* (reg8 *) Beacon__CTL)
/* Drive Modes */
#define Beacon_DM0                    (* (reg8 *) Beacon__DM0) 
#define Beacon_DM1                    (* (reg8 *) Beacon__DM1)
#define Beacon_DM2                    (* (reg8 *) Beacon__DM2) 
/* Input Buffer Disable Override */
#define Beacon_INP_DIS                (* (reg8 *) Beacon__INP_DIS)
/* LCD Common or Segment Drive */
#define Beacon_LCD_COM_SEG            (* (reg8 *) Beacon__LCD_COM_SEG)
/* Enable Segment LCD */
#define Beacon_LCD_EN                 (* (reg8 *) Beacon__LCD_EN)
/* Slew Rate Control */
#define Beacon_SLW                    (* (reg8 *) Beacon__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Beacon_PRTDSI__CAPS_SEL       (* (reg8 *) Beacon__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Beacon_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Beacon__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Beacon_PRTDSI__OE_SEL0        (* (reg8 *) Beacon__PRTDSI__OE_SEL0) 
#define Beacon_PRTDSI__OE_SEL1        (* (reg8 *) Beacon__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Beacon_PRTDSI__OUT_SEL0       (* (reg8 *) Beacon__PRTDSI__OUT_SEL0) 
#define Beacon_PRTDSI__OUT_SEL1       (* (reg8 *) Beacon__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Beacon_PRTDSI__SYNC_OUT       (* (reg8 *) Beacon__PRTDSI__SYNC_OUT) 


#if defined(Beacon__INTSTAT)  /* Interrupt Registers */

    #define Beacon_INTSTAT                (* (reg8 *) Beacon__INTSTAT)
    #define Beacon_SNAP                   (* (reg8 *) Beacon__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Beacon_H */


/* [] END OF FILE */
