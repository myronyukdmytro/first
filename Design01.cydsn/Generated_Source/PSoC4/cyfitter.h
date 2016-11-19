#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* Fix */
#define Fix__0__DM__MASK 0x38u
#define Fix__0__DM__SHIFT 3u
#define Fix__0__DR CYREG_PRT3_DR
#define Fix__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Fix__0__HSIOM_MASK 0x000000F0u
#define Fix__0__HSIOM_SHIFT 4u
#define Fix__0__INTCFG CYREG_PRT3_INTCFG
#define Fix__0__INTSTAT CYREG_PRT3_INTSTAT
#define Fix__0__MASK 0x02u
#define Fix__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Fix__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Fix__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Fix__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Fix__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Fix__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Fix__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Fix__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Fix__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Fix__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Fix__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Fix__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Fix__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Fix__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Fix__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Fix__0__PC CYREG_PRT3_PC
#define Fix__0__PC2 CYREG_PRT3_PC2
#define Fix__0__PORT 3u
#define Fix__0__PS CYREG_PRT3_PS
#define Fix__0__SHIFT 1u
#define Fix__DR CYREG_PRT3_DR
#define Fix__INTCFG CYREG_PRT3_INTCFG
#define Fix__INTSTAT CYREG_PRT3_INTSTAT
#define Fix__MASK 0x02u
#define Fix__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Fix__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Fix__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Fix__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Fix__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Fix__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Fix__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Fix__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Fix__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Fix__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Fix__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Fix__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Fix__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Fix__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Fix__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Fix__PC CYREG_PRT3_PC
#define Fix__PC2 CYREG_PRT3_PC2
#define Fix__PORT 3u
#define Fix__PS CYREG_PRT3_PS
#define Fix__SHIFT 1u

/* pwm */
#define pwm__0__DM__MASK 0x07u
#define pwm__0__DM__SHIFT 0u
#define pwm__0__DR CYREG_PRT3_DR
#define pwm__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define pwm__0__HSIOM_MASK 0x0000000Fu
#define pwm__0__HSIOM_SHIFT 0u
#define pwm__0__INTCFG CYREG_PRT3_INTCFG
#define pwm__0__INTSTAT CYREG_PRT3_INTSTAT
#define pwm__0__MASK 0x01u
#define pwm__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define pwm__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define pwm__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define pwm__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define pwm__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define pwm__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define pwm__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define pwm__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define pwm__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define pwm__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define pwm__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define pwm__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define pwm__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define pwm__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define pwm__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define pwm__0__PC CYREG_PRT3_PC
#define pwm__0__PC2 CYREG_PRT3_PC2
#define pwm__0__PORT 3u
#define pwm__0__PS CYREG_PRT3_PS
#define pwm__0__SHIFT 0u
#define pwm__DR CYREG_PRT3_DR
#define pwm__INTCFG CYREG_PRT3_INTCFG
#define pwm__INTSTAT CYREG_PRT3_INTSTAT
#define pwm__MASK 0x01u
#define pwm__PA__CFG0 CYREG_UDB_PA3_CFG0
#define pwm__PA__CFG1 CYREG_UDB_PA3_CFG1
#define pwm__PA__CFG10 CYREG_UDB_PA3_CFG10
#define pwm__PA__CFG11 CYREG_UDB_PA3_CFG11
#define pwm__PA__CFG12 CYREG_UDB_PA3_CFG12
#define pwm__PA__CFG13 CYREG_UDB_PA3_CFG13
#define pwm__PA__CFG14 CYREG_UDB_PA3_CFG14
#define pwm__PA__CFG2 CYREG_UDB_PA3_CFG2
#define pwm__PA__CFG3 CYREG_UDB_PA3_CFG3
#define pwm__PA__CFG4 CYREG_UDB_PA3_CFG4
#define pwm__PA__CFG5 CYREG_UDB_PA3_CFG5
#define pwm__PA__CFG6 CYREG_UDB_PA3_CFG6
#define pwm__PA__CFG7 CYREG_UDB_PA3_CFG7
#define pwm__PA__CFG8 CYREG_UDB_PA3_CFG8
#define pwm__PA__CFG9 CYREG_UDB_PA3_CFG9
#define pwm__PC CYREG_PRT3_PC
#define pwm__PC2 CYREG_PRT3_PC2
#define pwm__PORT 3u
#define pwm__PS CYREG_PRT3_PS
#define pwm__SHIFT 0u

/* Data */
#define Data__0__DM__MASK 0x1C0000u
#define Data__0__DM__SHIFT 18u
#define Data__0__DR CYREG_PRT2_DR
#define Data__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Data__0__HSIOM_MASK 0x0F000000u
#define Data__0__HSIOM_SHIFT 24u
#define Data__0__INTCFG CYREG_PRT2_INTCFG
#define Data__0__INTSTAT CYREG_PRT2_INTSTAT
#define Data__0__MASK 0x40u
#define Data__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Data__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Data__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Data__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Data__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Data__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Data__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Data__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Data__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Data__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Data__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Data__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Data__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Data__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Data__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Data__0__PC CYREG_PRT2_PC
#define Data__0__PC2 CYREG_PRT2_PC2
#define Data__0__PORT 2u
#define Data__0__PS CYREG_PRT2_PS
#define Data__0__SHIFT 6u
#define Data__DR CYREG_PRT2_DR
#define Data__INTCFG CYREG_PRT2_INTCFG
#define Data__INTSTAT CYREG_PRT2_INTSTAT
#define Data__MASK 0x40u
#define Data__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Data__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Data__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Data__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Data__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Data__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Data__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Data__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Data__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Data__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Data__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Data__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Data__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Data__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Data__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Data__PC CYREG_PRT2_PC
#define Data__PC2 CYREG_PRT2_PC2
#define Data__PORT 2u
#define Data__PS CYREG_PRT2_PS
#define Data__SHIFT 6u

/* pwm2 */
#define pwm2__0__DM__MASK 0xE00000u
#define pwm2__0__DM__SHIFT 21u
#define pwm2__0__DR CYREG_PRT3_DR
#define pwm2__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define pwm2__0__HSIOM_MASK 0xF0000000u
#define pwm2__0__HSIOM_SHIFT 28u
#define pwm2__0__INTCFG CYREG_PRT3_INTCFG
#define pwm2__0__INTSTAT CYREG_PRT3_INTSTAT
#define pwm2__0__MASK 0x80u
#define pwm2__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define pwm2__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define pwm2__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define pwm2__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define pwm2__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define pwm2__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define pwm2__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define pwm2__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define pwm2__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define pwm2__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define pwm2__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define pwm2__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define pwm2__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define pwm2__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define pwm2__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define pwm2__0__PC CYREG_PRT3_PC
#define pwm2__0__PC2 CYREG_PRT3_PC2
#define pwm2__0__PORT 3u
#define pwm2__0__PS CYREG_PRT3_PS
#define pwm2__0__SHIFT 7u
#define pwm2__DR CYREG_PRT3_DR
#define pwm2__INTCFG CYREG_PRT3_INTCFG
#define pwm2__INTSTAT CYREG_PRT3_INTSTAT
#define pwm2__MASK 0x80u
#define pwm2__PA__CFG0 CYREG_UDB_PA3_CFG0
#define pwm2__PA__CFG1 CYREG_UDB_PA3_CFG1
#define pwm2__PA__CFG10 CYREG_UDB_PA3_CFG10
#define pwm2__PA__CFG11 CYREG_UDB_PA3_CFG11
#define pwm2__PA__CFG12 CYREG_UDB_PA3_CFG12
#define pwm2__PA__CFG13 CYREG_UDB_PA3_CFG13
#define pwm2__PA__CFG14 CYREG_UDB_PA3_CFG14
#define pwm2__PA__CFG2 CYREG_UDB_PA3_CFG2
#define pwm2__PA__CFG3 CYREG_UDB_PA3_CFG3
#define pwm2__PA__CFG4 CYREG_UDB_PA3_CFG4
#define pwm2__PA__CFG5 CYREG_UDB_PA3_CFG5
#define pwm2__PA__CFG6 CYREG_UDB_PA3_CFG6
#define pwm2__PA__CFG7 CYREG_UDB_PA3_CFG7
#define pwm2__PA__CFG8 CYREG_UDB_PA3_CFG8
#define pwm2__PA__CFG9 CYREG_UDB_PA3_CFG9
#define pwm2__PC CYREG_PRT3_PC
#define pwm2__PC2 CYREG_PRT3_PC2
#define pwm2__PORT 3u
#define pwm2__PS CYREG_PRT3_PS
#define pwm2__SHIFT 7u

/* pwm3 */
#define pwm3__0__DM__MASK 0x38000u
#define pwm3__0__DM__SHIFT 15u
#define pwm3__0__DR CYREG_PRT3_DR
#define pwm3__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define pwm3__0__HSIOM_MASK 0x00F00000u
#define pwm3__0__HSIOM_SHIFT 20u
#define pwm3__0__INTCFG CYREG_PRT3_INTCFG
#define pwm3__0__INTSTAT CYREG_PRT3_INTSTAT
#define pwm3__0__MASK 0x20u
#define pwm3__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define pwm3__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define pwm3__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define pwm3__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define pwm3__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define pwm3__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define pwm3__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define pwm3__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define pwm3__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define pwm3__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define pwm3__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define pwm3__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define pwm3__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define pwm3__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define pwm3__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define pwm3__0__PC CYREG_PRT3_PC
#define pwm3__0__PC2 CYREG_PRT3_PC2
#define pwm3__0__PORT 3u
#define pwm3__0__PS CYREG_PRT3_PS
#define pwm3__0__SHIFT 5u
#define pwm3__DR CYREG_PRT3_DR
#define pwm3__INTCFG CYREG_PRT3_INTCFG
#define pwm3__INTSTAT CYREG_PRT3_INTSTAT
#define pwm3__MASK 0x20u
#define pwm3__PA__CFG0 CYREG_UDB_PA3_CFG0
#define pwm3__PA__CFG1 CYREG_UDB_PA3_CFG1
#define pwm3__PA__CFG10 CYREG_UDB_PA3_CFG10
#define pwm3__PA__CFG11 CYREG_UDB_PA3_CFG11
#define pwm3__PA__CFG12 CYREG_UDB_PA3_CFG12
#define pwm3__PA__CFG13 CYREG_UDB_PA3_CFG13
#define pwm3__PA__CFG14 CYREG_UDB_PA3_CFG14
#define pwm3__PA__CFG2 CYREG_UDB_PA3_CFG2
#define pwm3__PA__CFG3 CYREG_UDB_PA3_CFG3
#define pwm3__PA__CFG4 CYREG_UDB_PA3_CFG4
#define pwm3__PA__CFG5 CYREG_UDB_PA3_CFG5
#define pwm3__PA__CFG6 CYREG_UDB_PA3_CFG6
#define pwm3__PA__CFG7 CYREG_UDB_PA3_CFG7
#define pwm3__PA__CFG8 CYREG_UDB_PA3_CFG8
#define pwm3__PA__CFG9 CYREG_UDB_PA3_CFG9
#define pwm3__PC CYREG_PRT3_PC
#define pwm3__PC2 CYREG_PRT3_PC2
#define pwm3__PORT 3u
#define pwm3__PS CYREG_PRT3_PS
#define pwm3__SHIFT 5u

/* pwm4 */
#define pwm4__0__DM__MASK 0x07u
#define pwm4__0__DM__SHIFT 0u
#define pwm4__0__DR CYREG_PRT1_DR
#define pwm4__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define pwm4__0__HSIOM_MASK 0x0000000Fu
#define pwm4__0__HSIOM_SHIFT 0u
#define pwm4__0__INTCFG CYREG_PRT1_INTCFG
#define pwm4__0__INTSTAT CYREG_PRT1_INTSTAT
#define pwm4__0__MASK 0x01u
#define pwm4__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define pwm4__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define pwm4__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define pwm4__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define pwm4__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define pwm4__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define pwm4__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define pwm4__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define pwm4__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define pwm4__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define pwm4__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define pwm4__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define pwm4__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define pwm4__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define pwm4__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define pwm4__0__PC CYREG_PRT1_PC
#define pwm4__0__PC2 CYREG_PRT1_PC2
#define pwm4__0__PORT 1u
#define pwm4__0__PS CYREG_PRT1_PS
#define pwm4__0__SHIFT 0u
#define pwm4__DR CYREG_PRT1_DR
#define pwm4__INTCFG CYREG_PRT1_INTCFG
#define pwm4__INTSTAT CYREG_PRT1_INTSTAT
#define pwm4__MASK 0x01u
#define pwm4__PA__CFG0 CYREG_UDB_PA1_CFG0
#define pwm4__PA__CFG1 CYREG_UDB_PA1_CFG1
#define pwm4__PA__CFG10 CYREG_UDB_PA1_CFG10
#define pwm4__PA__CFG11 CYREG_UDB_PA1_CFG11
#define pwm4__PA__CFG12 CYREG_UDB_PA1_CFG12
#define pwm4__PA__CFG13 CYREG_UDB_PA1_CFG13
#define pwm4__PA__CFG14 CYREG_UDB_PA1_CFG14
#define pwm4__PA__CFG2 CYREG_UDB_PA1_CFG2
#define pwm4__PA__CFG3 CYREG_UDB_PA1_CFG3
#define pwm4__PA__CFG4 CYREG_UDB_PA1_CFG4
#define pwm4__PA__CFG5 CYREG_UDB_PA1_CFG5
#define pwm4__PA__CFG6 CYREG_UDB_PA1_CFG6
#define pwm4__PA__CFG7 CYREG_UDB_PA1_CFG7
#define pwm4__PA__CFG8 CYREG_UDB_PA1_CFG8
#define pwm4__PA__CFG9 CYREG_UDB_PA1_CFG9
#define pwm4__PC CYREG_PRT1_PC
#define pwm4__PC2 CYREG_PRT1_PC2
#define pwm4__PORT 1u
#define pwm4__PS CYREG_PRT1_PS
#define pwm4__SHIFT 0u

/* Clock */
#define Clock__0__DM__MASK 0x07u
#define Clock__0__DM__SHIFT 0u
#define Clock__0__DR CYREG_PRT0_DR
#define Clock__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Clock__0__HSIOM_MASK 0x0000000Fu
#define Clock__0__HSIOM_SHIFT 0u
#define Clock__0__INTCFG CYREG_PRT0_INTCFG
#define Clock__0__INTSTAT CYREG_PRT0_INTSTAT
#define Clock__0__MASK 0x01u
#define Clock__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Clock__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Clock__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Clock__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Clock__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Clock__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Clock__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Clock__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Clock__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Clock__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Clock__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Clock__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Clock__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Clock__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Clock__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Clock__0__PC CYREG_PRT0_PC
#define Clock__0__PC2 CYREG_PRT0_PC2
#define Clock__0__PORT 0u
#define Clock__0__PS CYREG_PRT0_PS
#define Clock__0__SHIFT 0u
#define Clock__DR CYREG_PRT0_DR
#define Clock__INTCFG CYREG_PRT0_INTCFG
#define Clock__INTSTAT CYREG_PRT0_INTSTAT
#define Clock__MASK 0x01u
#define Clock__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Clock__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Clock__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Clock__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Clock__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Clock__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Clock__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Clock__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Clock__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Clock__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Clock__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Clock__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Clock__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Clock__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Clock__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Clock__PC CYREG_PRT0_PC
#define Clock__PC2 CYREG_PRT0_PC2
#define Clock__PORT 0u
#define Clock__PS CYREG_PRT0_PS
#define Clock__SHIFT 0u

/* Enable */
#define Enable__0__DM__MASK 0xE00000u
#define Enable__0__DM__SHIFT 21u
#define Enable__0__DR CYREG_PRT2_DR
#define Enable__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Enable__0__HSIOM_MASK 0xF0000000u
#define Enable__0__HSIOM_SHIFT 28u
#define Enable__0__INTCFG CYREG_PRT2_INTCFG
#define Enable__0__INTSTAT CYREG_PRT2_INTSTAT
#define Enable__0__MASK 0x80u
#define Enable__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Enable__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Enable__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Enable__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Enable__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Enable__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Enable__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Enable__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Enable__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Enable__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Enable__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Enable__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Enable__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Enable__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Enable__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Enable__0__PC CYREG_PRT2_PC
#define Enable__0__PC2 CYREG_PRT2_PC2
#define Enable__0__PORT 2u
#define Enable__0__PS CYREG_PRT2_PS
#define Enable__0__SHIFT 7u
#define Enable__DR CYREG_PRT2_DR
#define Enable__INTCFG CYREG_PRT2_INTCFG
#define Enable__INTSTAT CYREG_PRT2_INTSTAT
#define Enable__MASK 0x80u
#define Enable__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Enable__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Enable__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Enable__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Enable__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Enable__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Enable__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Enable__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Enable__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Enable__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Enable__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Enable__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Enable__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Enable__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Enable__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Enable__PC CYREG_PRT2_PC
#define Enable__PC2 CYREG_PRT2_PC2
#define Enable__PORT 2u
#define Enable__PS CYREG_PRT2_PS
#define Enable__SHIFT 7u

/* Miscellaneous */
#define CY_PROJECT_NAME "Design01"
#define CY_VERSION "PSoC Creator  3.3 CP3"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 19u
#define CYDEV_CHIP_DIE_PSOC4A 11u
#define CYDEV_CHIP_DIE_PSOC5LP 18u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 11u
#define CYDEV_CHIP_MEMBER_4C 16u
#define CYDEV_CHIP_MEMBER_4D 7u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 12u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 10u
#define CYDEV_CHIP_MEMBER_4I 15u
#define CYDEV_CHIP_MEMBER_4J 8u
#define CYDEV_CHIP_MEMBER_4K 9u
#define CYDEV_CHIP_MEMBER_4L 14u
#define CYDEV_CHIP_MEMBER_4M 13u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 18u
#define CYDEV_CHIP_MEMBER_5B 17u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 5
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5
#define CYDEV_VDDD_MV 5000
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */