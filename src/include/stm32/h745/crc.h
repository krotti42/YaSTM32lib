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
 * STmicroelectronics STM32H745 Cyclic redundancy check calculation 
 * unit (CRC) registers
 */

#ifndef _YASTM32LIB_STM32_H745_CRC_H
#define _YASTM32LIB_STM32_H745_CRC_H

struct stm32_pregs_crc {
    volatile unsigned int DR;               /* CRC data register */
    volatile unsigned int IDR;              /* CRC independent data register */
    volatile unsigned int CR;               /* CRC control register */
    volatile unsigned int reserved0;
    volatile unsigned int INIT;             /* CRC initial value */
    volatile unsigned int POL;              /* CRC polynomial */
};

#define CRC_BASE                            0x58024C00
#define CRC                                 ((struct stm32_pregs_crc *) CRC_BASE)

/**
 * CRC control register
 */
#define CRC_CR_Mask                         0xFFFFFF06

/* RESET bit */
#define CRC_CR_RESET                        (1U << 0)
/* Polynomial size */
#define CRC_CR_POLYSIZE_Pos                 3

/* 32 bit polynomial */
#define CRC_CR_POLYSIZE_32BIT               (0U << CRC_CR_POLYSIZE_Pos)
/* 16 bit polynomial */
#define CRC_CR_POLYSIZE_16BIT               (1U << CRC_CR_POLYSIZE_Pos)
/* 8 bit polynomial */
#define CRC_CR_POLYSIZE_8BIT                (2U << CRC_CR_POLYSIZE_Pos)
/* 7 bit polynomial */
#define CRC_CR_POLYSIZE_7BIT                (3U << CRC_CR_POLYSIZE_Pos)

/* Reverse input data */
#define CRC_CR_REV_IN_Pos                   5

/* Bit order not affected */
#define CRC_CR_REV_IN_BONA                  (0U << CRC_CR_REV_IN_Pos)
/* Bit reversal done by byte */
#define CRC_CR_REV_IN_BRB                   (1U << CRC_CR_REV_IN_Pos)
/* Bit reversal done by half-word */
#define CRC_CR_REV_IN_BRH                   (2U << CRC_CR_REV_IN_Pos)
/* Bit reversal done by word */
#define CRC_CR_REV_IN_BRW                   (3U << CRC_CR_REV_IN_Pos)

/* Reverse output data */
#define CRC_CR_REV_OUT                      (1U << 7)

#endif
