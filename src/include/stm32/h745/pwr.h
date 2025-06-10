/**
 *
 * YaSTM32lib - Yet another STM32 library
 *
 * Copyright (c) 2025 Johannes Krottmayer <github.krotti42@proton.me>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */

/**
 * STmicroelectronics STM32H745 Power control (PWR) registers
 */

#ifndef _YASTM32LIB_STM32_H745_PWR_H
#define _YASTM32LIB_STM32_H745_PWR_H

struct stm32_pregs_pwr {
    volatile unsigned int CR1;              /* PWR control register 1 */
    volatile unsigned int CSR1;             /* PWR control status register 1 */
    volatile unsigned int CR2;              /* PWR control register 2 */
    volatile unsigned int CR3;              /* PWR control register 3 */
    volatile unsigned int CPU1CR;           /* PWR CPU1 control register */
    volatile unsigned int CPU2CR;           /* PWR CPU2 control register */
    volatile unsigned int D3CR;             /* PWR D3 domain control register */
    volatile unsigned int WKUPCR;           /* PWR wakeup clear register */
    volatile unsigned int WKUPFR;           /* PWR wakeup flag register */
    volatile unsigned int WKUPEPR;          /* PWR wakeup enable and polarity register */
};

#define PWR_BASE                        0x58024800
#define PWR                             ((struct stm32_pregs_pwr *) PWR_BASE)

/**
 * PWR control register 1 flags and bit fields
 */
#define PWR_CR1_Mask                    0xFFF83C0E

/* Low-power Deepsleep with SVOS3 */
#define PWR_CR1_LPDS                    (1U << 0)
/* Programmable voltage detector enable */
#define PWR_CR1_PVDE                    (1U << 4)
/* Programmable voltage detector level selection */
#define PWR_CR1_PLS_Pos                 5

/* 1.95 V */
#define PWR_CR1_PLS_1_95V               (0U << PWR_CR1_PLS_Pos)
/* 2.1 V */
#define PWR_CR1_PLS_2_1V                (1U << PWR_CR1_PLS_Pos)
/* 2.25 V */
#define PWR_CR1_PLS_2_25V               (2U << PWR_CR1_PLS_Pos)
/* 2.4 V */
#define PWR_CR1_PLS_2_4V                (3U << PWR_CR1_PLS_Pos)
/* 2.55 V */
#define PWR_CR1_PLS_2_55V               (4U << PWR_CR1_PLS_Pos)
/* 2.7 V */
#define PWR_CR1_PLS_2_7V                (5U << PWR_CR1_PLS_Pos)
/* 2.85 V */
#define PWR_CR1_PLS_2_85V               (6U << PWR_CR1_PLS_Pos)
/* External voltage level on PVD_IN pin */
#define PWR_CR1_PLS_EXT                 (7U << PWR_CR1_PLS_Pos)

/* Disable backup domain write protection */
#define PWR_CR1_DBP                     (1U << 8)
/* Flash low-power mode in DStop mode */
#define PWR_CR1_FLPS                    (1U << 9)
/* System Stop mode voltage scaling selection */
#define PWR_CR1_SVOS_Pos                14

/* SVOS5 Scale 5 */
#define PWR_CR1_SVOS_S5                 (1U << PWR_CR1_SVOS_Pos)
/* SVOS4 Scale 4 */
#define PWR_CR1_SVOS_S4                 (2U << PWR_CR1_SVOS_Pos)
/* SVOS3 Scale 3 (default) */
#define PWR_CR1_SVOS_S3                 (3U << PWR_CR1_SVOS_Pos)

/* Peripheral voltage monitor on VDDA enable */
#define PWR_CR1_AVDEN                   (1U << 16)
/* Analog voltage detector level selection */
#define PWR_CR1_ALS_Pos                 17

/* 1.7 V */
#define PWR_CR1_ALS_1_7V                (0U << PWR_CR1_ALS_Pos)
/* 2.1 V */
#define PWR_CR1_ALS_2_1V                (1U << PWR_CR1_ALS_Pos)
/* 2.5 V */
#define PWR_CR1_ALS_2_5V                (2U << PWR_CR1_ALS_Pos)
/* 2.8 V */
#define PWR_CR1_ALS_2_8V                (3U << PWR_CR1_ALS_Pos)

/**
 * PWR control status register 1 flags and bit fields
 */
#define PWR_CSR1_Mask                   0xFFFE1FEF

/* Programmable voltage detect output */
#define PWR_CSR1_PVDO                   (1U << 4)
/* Voltage levels ready bit for currently used VOS and SDLEVEL */
#define PWR_CSR1_ACTVOSRDY              (1U << 13)
/* VOS currently applied for VCORE voltage scaling selection */
#define PWR_CSR1_ACTVOS_Pos             14

/* Scale 3 */
#define PWR_CSR1_ACTVOS_S3              (1U << PWR_CSR1_ACTVOS_Pos)
/* Scale 2 */
#define PWR_CSR1_ACTVOS_S2              (2U << PWR_CSR1_ACTVOS_Pos)
/* Scale 1 */
#define PWR_CSR1_ACTVOS_S1              (3U << PWR_CSR1_ACTVOS_Pos)

/* Analog voltage detector output on VDDA */
#define PWR_CSR1_AVDO                   (1U << 16)

/**
 * PWR control register 2 flags and bit fields
 */
#define PWR_CR2_Mask                    0xFF0EFFEE

/* Backup regulator enable */
#define PWR_CR2_BREN                    (1U << 0)
/* VBAT and temperature monitoring enable */
#define PWR_CR2_MONEN                   (1U << 4)
/* Backup regulator ready */
#define PWR_CR2_BRRDY                   (1U << 16)
/* VBAT level monitoring versus low threshold */
#define PWR_CR2_VBATL                   (1U << 20)
/* VBAT level monitoring versus high threshold */
#define PWR_CR2_VBATH                   (1U << 21)
/* Temperature level monitoring versus low threshold */
#define PWR_CR2_TEMPL                   (1U << 22)
/* Temperature level monitoring versus high threshold */
#define PWR_CR2_TEMPH                   (1U << 23)

/**
 * PWR control register 3 flags and bit fields
 */
#define PWR_CR3_Mask                    0xF8FEFCC0

/* Power management unit bypass */
#define PWR_CR3_BYPASS                  (1U << 0)
/* Low drop-out regulator enable */
#define PWR_CR3_LDOEN                   (1U << 1)
/* SMPS step-down converter enable */
#define PWR_CR3_SDEN                    (1U << 2)
/* SMPS step-down converter forced ON and in High Power MR mode */
#define PWR_CR3_SDEXTHP                 (1U << 3)
/* SMPS step-down converter voltage output level selection */
#define PWR_CR3_SDLEVEL_Pos             4

/* 1.8 V */
#define PWR_CR3_SDLEVEL_1_8V            (1U << PWR_CR3_SDLEVEL_Pos)
/* 2.5 V */
#define PWR_CR3_SDLEVEL_2_5V            (2U << PWR_CR3_SDLEVEL_Pos)
/* 2.5 V (alternative setting) */
#define PWR_CR3_SDLEVEL_2_5V_ALT        (3U << PWR_CR3_SDLEVEL_Pos)

/* VBAT charging enable */
#define PWR_CR3_VBE                     (1U << 8)
/* VBAT charging resistor selection */
#define PWR_CR3_VBRS                    (1U << 9)
/* SMPS step-down converter external supply ready */
#define PWR_CR3_SDEXTRDY                (1U << 16)
/* VDD33USB voltage level detector enable */
#define PWR_CR3_USB33DEN                (1U << 24)
/* USB regulator enable */
#define PWR_CR3_USBREGEN                (1U << 25)
/* USB supply ready */
#define PWR_CR3_USB33RDY                (1U << 26)

/**
 * PWR CPU1 control register flags and bit fields
 */
#define PWR_CPU1CR_Mask                 0xFFFFF008

/* D1 domain Power Down Deepsleep selection */
#define PWR_CPU1CR_PDDS_D1              (1U << 0)
/* D2 domain Power Down Deepsleep */
#define PWR_CPU1CR_PDDS_D2              (1U << 1)
/* System D3 domain Power Down Deepsleep */
#define PWR_CPU1CR_PDDS_D3              (1U << 2)
/* CPU2 on hold wakeup flag */
#define PWR_CPU1CR_HOLD2F               (1U << 4)
/* STOP flag */
#define PWR_CPU1CR_STOPF                (1U << 5)
/* System Standby flag */
#define PWR_CPU1CR_SBF                  (1U << 6)
/* D1 domain DStandby flag */
#define PWR_CPU1CR_SBF_D1               (1U << 7)
/* D2 domain DStandby flag */
#define PWR_CPU1CR_SBF_D2               (1U << 8)
/* Clear D1 domain CPU1 Standby, Stop and HOLD flags */
#define PWR_CPU1CR_CSSF                 (1U << 9)
/* Clear D1 domain CPU1 Standby, Stop and HOLD flags */
#define PWR_CPU1CR_HOLD2                (1U << 10)
/* Keep system D3 domain in Run mode regardless of the CPU subsystems modes */
#define PWR_CPU1CR_RUN_D3               (1U << 11)

/**
 * PWR CPU2 control register flags and bit fields
 */
#define PWR_CPU2CR_Mask                 0xFFFFF008

/* D1 domain Power Down Deepsleep selection */
#define PWR_CPU2CR_PDDS_D1              (1U << 0)
/* D2 domain Power Down Deepsleep */
#define PWR_CPU2CR_PDDS_D2              (1U << 1)
/* System D3 domain Power Down Deepsleep */
#define PWR_CPU2CR_PDDS_D3              (1U << 2)
/* CPU1 in hold wakeup flag */
#define PWR_CPU2CR_HOLD1F               (1U << 4)
/* Stop Flag */
#define PWR_CPU2CR_STOPF                (1U << 5)
/* System Standby flag */
#define PWR_CPU2CR_SBF                  (1U << 6)
/* D1 domain DStandby flag */
#define PWR_CPU2CR_SBF_D1               (1U << 7)
/* D2 domain DStandby flag */
#define PWR_CPU2CR_SBF_D2               (1U << 8)
/* Clear D2 domain CPU2 Standby, Stop and HOLD flags */
#define PWR_CPU2CR_CSSF                 (1U << 9)
/* Hold the CPU1 and allocated peripherals when exiting from Stop mode */
#define PWR_CPU2CR_HOLD1                (1U << 10)
/* Keep D3 domain in Run mode regardless of the other CPU subsystems modes */
#define PWR_CPU2CR_RUN_D3               (1U << 11)

/**
 * PWR D3 domain control register flags and bit fields
 */
#define PWR_D3CR_Mask                   0xFFFF1FFF

/* VOS Ready bit for VCORE voltage scaling output selection */
#define PWR_D3CR_VOSRDY                 (1U << 13)
/* Voltage scaling selection according to performance */
#define PWR_D3CR_VOS_Pos                14

/* Scale 3 */
#define PWR_D3CR_VOS_S3                 (1U << PWR_D3CR_VOS_Pos)
/* Scale 2 */
#define PWR_D3CR_VOS_S2                 (2U << PWR_D3CR_VOS_Pos)
/* Scale 1 */
#define PWR_D3CR_VOS_S1                 (3U << PWR_D3CR_VOS_Pos)

/**
 * PWR wakeup clear register flags and bit fields
 */
#define PWR_WKUPCR_Mask                 0xFFFFFFC0

/* Clear Wakeup pin flag for WKUPn */
#define PWR_WKUPCR_WKUPC1               (1U << 0)
#define PWR_WKUPCR_WKUPC2               (1U << 1)
#define PWR_WKUPCR_WKUPC3               (1U << 2)
#define PWR_WKUPCR_WKUPC4               (1U << 3)
#define PWR_WKUPCR_WKUPC5               (1U << 4)
#define PWR_WKUPCR_WKUPC6               (1U << 5)

/**
 * PWR wakeup flag register flags and bit fields
 */
#define PWR_WKUPFR_Mask                 0xFFFFFFC0

/* Wakeup pin WKUPn flag */
#define PWR_WKUPFR_WKUP1                (1U << 0)
#define PWR_WKUPFR_WKUP2                (1U << 1)
#define PWR_WKUPFR_WKUP3                (1U << 2)
#define PWR_WKUPFR_WKUP4                (1U << 3)
#define PWR_WKUPFR_WKUP5                (1U << 4)
#define PWR_WKUPFR_WKUP6                (1U << 5)

/**
 * PWR wakeup enable and polarity register flags and bit fields
 */
#define PWR_WKUPEPR_Mask                0xF000C0C0

/* Enable Wakeup Pin WKUPn */
#define PWR_WKUPEPR_WKUPEN1             (1U << 0)
#define PWR_WKUPEPR_WKUPEN2             (1U << 1)
#define PWR_WKUPEPR_WKUPEN3             (1U << 2)
#define PWR_WKUPEPR_WKUPEN4             (1U << 3)
#define PWR_WKUPEPR_WKUPEN5             (1U << 4)
#define PWR_WKUPEPR_WKUPEN6             (1U << 5)
/* Wakeup pin polarity bit for WKUPn */
#define PWR_WKUPEPR_WKUPP1              (1U << 8)
#define PWR_WKUPEPR_WKUPP2              (1U << 9)
#define PWR_WKUPEPR_WKUPP3              (1U << 10)
#define PWR_WKUPEPR_WKUPP4              (1U << 11)
#define PWR_WKUPEPR_WKUPP5              (1U << 12)
#define PWR_WKUPEPR_WKUPP6              (1U << 13)
/* Wakeup pin pull configuration for WKUPn */
#define PWR_WKUPEPR_WKUPPUPD1_Pos       16

/* No pull-up */
#define PWR_WKUPEPR_WKUPPUPD1_NONE      (0U << PWR_WKUPEPR_WKUPPUPD1_Pos)
/* Pull-up */
#define PWR_WKUPEPR_WKUPPUPD1_PU        (1U << PWR_WKUPEPR_WKUPPUPD1_Pos)
/* Pull-down */
#define PWR_WKUPEPR_WKUPPUPD1_PD        (2U << PWR_WKUPEPR_WKUPPUPD1_Pos)

#define PWR_WKUPEPR_WKUPPUPD2_Pos       18

/* No pull-up */
#define PWR_WKUPEPR_WKUPPUPD2_NONE      (0U << PWR_WKUPEPR_WKUPPUPD2_Pos)
/* Pull-up */
#define PWR_WKUPEPR_WKUPPUPD2_PU        (1U << PWR_WKUPEPR_WKUPPUPD2_Pos)
/* Pull-down */
#define PWR_WKUPEPR_WKUPPUPD2_PD        (2U << PWR_WKUPEPR_WKUPPUPD2_Pos)

#define PWR_WKUPEPR_WKUPPUPD3_Pos       20

/* No pull-up */
#define PWR_WKUPEPR_WKUPPUPD3_NONE      (0U << PWR_WKUPEPR_WKUPPUPD3_Pos)
/* Pull-up */
#define PWR_WKUPEPR_WKUPPUPD3_PU        (1U << PWR_WKUPEPR_WKUPPUPD3_Pos)
/* Pull-down */
#define PWR_WKUPEPR_WKUPPUPD3_PD        (2U << PWR_WKUPEPR_WKUPPUPD3_Pos)

#define PWR_WKUPEPR_WKUPPUPD4_Pos       22

/* No pull-up */
#define PWR_WKUPEPR_WKUPPUPD4_NONE      (0U << PWR_WKUPEPR_WKUPPUPD4_Pos)
/* Pull-up */
#define PWR_WKUPEPR_WKUPPUPD4_PU        (1U << PWR_WKUPEPR_WKUPPUPD4_Pos)
/* Pull-down */
#define PWR_WKUPEPR_WKUPPUPD4_PD        (2U << PWR_WKUPEPR_WKUPPUPD4_Pos)

#define PWR_WKUPEPR_WKUPPUPD5_Pos       24

/* No pull-up */
#define PWR_WKUPEPR_WKUPPUPD5_NONE      (0U << PWR_WKUPEPR_WKUPPUPD5_Pos)
/* Pull-up */
#define PWR_WKUPEPR_WKUPPUPD5_PU        (1U << PWR_WKUPEPR_WKUPPUPD5_Pos)
/* Pull-down */
#define PWR_WKUPEPR_WKUPPUPD5_PD        (2U << PWR_WKUPEPR_WKUPPUPD5_Pos)

#define PWR_WKUPEPR_WKUPPUPD6_Pos       26

/* No pull-up */
#define PWR_WKUPEPR_WKUPPUPD6_NONE      (0U << PWR_WKUPEPR_WKUPPUPD6_Pos)
/* Pull-up */
#define PWR_WKUPEPR_WKUPPUPD6_PU        (1U << PWR_WKUPEPR_WKUPPUPD6_Pos)
/* Pull-down */
#define PWR_WKUPEPR_WKUPPUPD6_PD        (2U << PWR_WKUPEPR_WKUPPUPD6_Pos)

#endif
