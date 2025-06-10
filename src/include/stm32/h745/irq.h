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

#ifndef _YASTM32LIB_STM32_H745_IRQ_H
#define _YASTM32LIB_STM32_H745_IRQ_H

/**
 *
 * STMicroelectronics STM32H745 NVIC IRQ's positions
 *
 */

/**
 * Cortex-M7 NVIC1 (CPU1)
 */
#define STM32H745_CM7_IRQ_WWDG1                     0
#define STM32H745_CM7_IRQ_PVD_PVM                   1
#define STM32H745_CM7_IRQ_RTC_TAMP_STAMP_CSS_LSE    2
#define STM32H745_CM7_IRQ_RTC_WKUP                  3
#define STM32H745_CM7_IRQ_FLASH                     4
#define STM32H745_CM7_IRQ_RCC                       5
#define STM32H745_CM7_IRQ_EXTI0                     6
#define STM32H745_CM7_IRQ_EXTI1                     7
#define STM32H745_CM7_IRQ_EXTI2                     8
#define STM32H745_CM7_IRQ_EXTI3                     9
#define STM32H745_CM7_IRQ_EXTI4                     10
#define STM32H745_CM7_IRQ_DMA1_STR0                 11
#define STM32H745_CM7_IRQ_DMA1_STR1                 12
#define STM32H745_CM7_IRQ_DMA1_STR2                 13
#define STM32H745_CM7_IRQ_DMA1_STR3                 14
#define STM32H745_CM7_IRQ_DMA1_STR4                 15
#define STM32H745_CM7_IRQ_DMA1_STR5                 16
#define STM32H745_CM7_IRQ_DMA1_STR6                 17
#define STM32H745_CM7_IRQ_ADC1_2                    18
#define STM32H745_CM7_IRQ_FDCAN1_IT0                19
#define STM32H745_CM7_IRQ_FDCAN2_IT0                20
#define STM32H745_CM7_IRQ_FDCAN1_IT1                21
#define STM32H745_CM7_IRQ_FDCAN2_IT1                22
#define STM32H745_CM7_IRQ_EXTI9_5                   23
#define STM32H745_CM7_IRQ_TIM1_BRK                  24
#define STM32H745_CM7_IRQ_TIM1_UP                   25
#define STM32H745_CM7_IRQ_TIM1_TRG_COM              26
#define STM32H745_CM7_IRQ_TIM1_CC                   27
#define STM32H745_CM7_IRQ_TIM2                      28
#define STM32H745_CM7_IRQ_TIM3                      29
#define STM32H745_CM7_IRQ_TIM4                      30
#define STM32H745_CM7_IRQ_I2C1_EV                   31
#define STM32H745_CM7_IRQ_I2C1_ER                   32
#define STM32H745_CM7_IRQ_I2C2_EV                   33
#define STM32H745_CM7_IRQ_I2C2_ER                   34
#define STM32H745_CM7_IRQ_SPI1                      35
#define STM32H745_CM7_IRQ_SPI2                      36
#define STM32H745_CM7_IRQ_USART1                    37
#define STM32H745_CM7_IRQ_USART2                    38
#define STM32H745_CM7_IRQ_USART3                    39
#define STM32H745_CM7_IRQ_EXTI15_10                 40
#define STM32H745_CM7_IRQ_RTC_ALARM                 41
#define STM32H745_CM7_IRQ_TIM8_BRK_TIM12            43
#define STM32H745_CM7_IRQ_TIM8_UP_TIM13             44
#define STM32H745_CM7_IRQ_TIM8_TRG_COM_TIM14        45
#define STM32H745_CM7_IRQ_TIM8_CC                   46
#define STM32H745_CM7_IRQ_DMA1_STR7                 47
#define STM32H745_CM7_IRQ_FMC                       48
#define STM32H745_CM7_IRQ_SDMMC1                    49
#define STM32H745_CM7_IRQ_TIM5                      50
#define STM32H745_CM7_IRQ_SPI3                      51
#define STM32H745_CM7_IRQ_UART4                     52
#define STM32H745_CM7_IRQ_UART5                     53
#define STM32H745_CM7_IRQ_TIM6_DAC                  54
#define STM32H745_CM7_IRQ_TIM7                      55
#define STM32H745_CM7_IRQ_DMA2_STR0                 56
#define STM32H745_CM7_IRQ_DMA2_STR1                 57
#define STM32H745_CM7_IRQ_DMA2_STR2                 58
#define STM32H745_CM7_IRQ_DMA2_STR3                 59
#define STM32H745_CM7_IRQ_DMA2_STR4                 60
#define STM32H745_CM7_IRQ_ETH                       61
#define STM32H745_CM7_IRQ_ETH_WKUP                  62
#define STM32H745_CM7_IRQ_FDCAN_CAL                 63
#define STM32H745_CM7_IRQ_CM4_SEV                   65
#define STM32H745_CM7_IRQ_DMA2_STR5                 68
#define STM32H745_CM7_IRQ_DMA2_STR6                 69
#define STM32H745_CM7_IRQ_DMA2_STR7                 70
#define STM32H745_CM7_IRQ_USART6                    71
#define STM32H745_CM7_IRQ_I2C3_EV                   72
#define STM32H745_CM7_IRQ_I2C3_ER                   73
#define STM32H745_CM7_IRQ_OTG_HS_EP1_OUT            74
#define STM32H745_CM7_IRQ_OTG_HS_EP1_IN             75
#define STM32H745_CM7_IRQ_OTG_HS_WKUP               76
#define STM32H745_CM7_IRQ_OTG_HS                    77
#define STM32H745_CM7_IRQ_DCMI                      78
#define STM32H745_CM7_IRQ_FPU                       81
#define STM32H745_CM7_IRQ_UART7                     82
#define STM32H745_CM7_IRQ_UART8                     83
#define STM32H745_CM7_IRQ_SPI4                      84
#define STM32H745_CM7_IRQ_SPI5                      85
#define STM32H745_CM7_IRQ_SPI6                      86
#define STM32H745_CM7_IRQ_SAI1                      87
#define STM32H745_CM7_IRQ_LTDC                      88
#define STM32H745_CM7_IRQ_LTDC_ER                   89
#define STM32H745_CM7_IRQ_DMA2D                     90
#define STM32H745_CM7_IRQ_SAI2                      91
#define STM32H745_CM7_IRQ_QUADSPI                   92
#define STM32H745_CM7_IRQ_LPTIM1                    93
#define STM32H745_CM7_IRQ_CEC                       94
#define STM32H745_CM7_IRQ_I2C4_EV                   95
#define STM32H745_CM7_IRQ_I2C4_ER                   96
#define STM32H745_CM7_IRQ_SPDIF                     97
#define STM32H745_CM7_IRQ_OTG_FS_EP1_OUT            98
#define STM32H745_CM7_IRQ_OTG_FS_EP1_IN             99
#define STM32H745_CM7_IRQ_OTG_FS_WKUP               100
#define STM32H745_CM7_IRQ_OTG_FS                    101
#define STM32H745_CM7_IRQ_DMAMUX1_OV                102
#define STM32H745_CM7_IRQ_HRTIM1_MST                103
#define STM32H745_CM7_IRQ_HRTIM1_TIMA               104
#define STM32H745_CM7_IRQ_HRTIM1_TIMB               105
#define STM32H745_CM7_IRQ_HRTIM1_TIMC               106
#define STM32H745_CM7_IRQ_HRTIM1_TIMD               107
#define STM32H745_CM7_IRQ_HRTIM1_TIME               108
#define STM32H745_CM7_IRQ_HRTIM1_FLT                109
#define STM32H745_CM7_IRQ_DFSDM1_FLT0               110
#define STM32H745_CM7_IRQ_DFSDM1_FLT1               111
#define STM32H745_CM7_IRQ_DFSDM1_FLT2               112
#define STM32H745_CM7_IRQ_DFSDM1_FLT3               113
#define STM32H745_CM7_IRQ_SAI3                      114
#define STM32H745_CM7_IRQ_SWPMI1                    115
#define STM32H745_CM7_IRQ_TIM15                     116
#define STM32H745_CM7_IRQ_TIM16                     117
#define STM32H745_CM7_IRQ_TIM17                     118
#define STM32H745_CM7_IRQ_MDIOS_WKUP                119
#define STM32H745_CM7_IRQ_MDIOS                     120
#define STM32H745_CM7_IRQ_JPEG                      121
#define STM32H745_CM7_IRQ_MDMA                      122
#define STM32H745_CM7_IRQ_SDMMC2                    125
#define STM32H745_CM7_IRQ_HSEM0                     126
#define STM32H745_CM7_IRQ_ADC3                      128
#define STM32H745_CM7_IRQ_DMAMUX2_OV                129
#define STM32H745_CM7_IRQ_BDMA_CH0                  130
#define STM32H745_CM7_IRQ_BDMA_CH1                  131
#define STM32H745_CM7_IRQ_BDMA_CH2                  132
#define STM32H745_CM7_IRQ_BDMA_CH3                  133
#define STM32H745_CM7_IRQ_BDMA_CH4                  134
#define STM32H745_CM7_IRQ_BDMA_CH5                  135
#define STM32H745_CM7_IRQ_BDMA_CH6                  136
#define STM32H745_CM7_IRQ_BDMA_CH7                  137
#define STM32H745_CM7_IRQ_COMP                      138
#define STM32H745_CM7_IRQ_LPTIM2                    139
#define STM32H745_CM7_IRQ_LPTIM3                    140
#define STM32H745_CM7_IRQ_LPTIM4                    141
#define STM32H745_CM7_IRQ_LPTIM5                    142
#define STM32H745_CM7_IRQ_LPUART                    143
#define STM32H745_CM7_IRQ_WWDG2_RST                 144
#define STM32H745_CM7_IRQ_CRS                       145
#define STM32H745_CM7_IRQ_ECC                       146
#define STM32H745_CM7_IRQ_SAI4                      147
#define STM32H745_CM7_IRQ_HOLD_CORE                 148
#define STM32H745_CM7_IRQ_WKUP                      149

/**
 * Cortex-M4 NVIC2 (CPU2)
 */
#define STM32H745_CM4_IRQ_WWDG2                     0
#define STM32H745_CM4_IRQ_PVD_PVM                   1
#define STM32H745_CM4_IRQ_RTC_TAMP_STAMP_CSS_LSE    2
#define STM32H745_CM4_IRQ_RTC_WKUP                  3
#define STM32H745_CM4_IRQ_FLASH                     4
#define STM32H745_CM4_IRQ_RCC                       5
#define STM32H745_CM4_IRQ_EXTI0                     6
#define STM32H745_CM4_IRQ_EXTI1                     7
#define STM32H745_CM4_IRQ_EXTI2                     8
#define STM32H745_CM4_IRQ_EXTI3                     9
#define STM32H745_CM4_IRQ_EXTI4                     10
#define STM32H745_CM4_IRQ_DMA1_STR0                 11
#define STM32H745_CM4_IRQ_DMA1_STR1                 12
#define STM32H745_CM4_IRQ_DMA1_STR2                 13
#define STM32H745_CM4_IRQ_DMA1_STR3                 14
#define STM32H745_CM4_IRQ_DMA1_STR4                 15
#define STM32H745_CM4_IRQ_DMA1_STR5                 16
#define STM32H745_CM4_IRQ_DMA1_STR6                 17
#define STM32H745_CM4_IRQ_ADC1_2                    18
#define STM32H745_CM4_IRQ_FDCAN1_IT0                19
#define STM32H745_CM4_IRQ_FDCAN2_IT0                20
#define STM32H745_CM4_IRQ_FDCAN1_IT1                21
#define STM32H745_CM4_IRQ_FDCAN2_IT1                22
#define STM32H745_CM4_IRQ_EXTI9_5                   23
#define STM32H745_CM4_IRQ_TIM1_BRK                  24
#define STM32H745_CM4_IRQ_TIM1_UP                   25
#define STM32H745_CM4_IRQ_TIM1_TRG_COM              26
#define STM32H745_CM4_IRQ_TIM1_CC                   27
#define STM32H745_CM4_IRQ_TIM2                      28
#define STM32H745_CM4_IRQ_TIM3                      29
#define STM32H745_CM4_IRQ_TIM4                      30
#define STM32H745_CM4_IRQ_I2C1_EV                   31
#define STM32H745_CM4_IRQ_I2C1_ER                   32
#define STM32H745_CM4_IRQ_I2C2_EV                   33
#define STM32H745_CM4_IRQ_I2C2_ER                   34
#define STM32H745_CM4_IRQ_SPI1                      35
#define STM32H745_CM4_IRQ_SPI2                      36
#define STM32H745_CM4_IRQ_USART1                    37
#define STM32H745_CM4_IRQ_USART2                    38
#define STM32H745_CM4_IRQ_USART3                    39
#define STM32H745_CM4_IRQ_EXTI15_10                 40
#define STM32H745_CM4_IRQ_RTC_ALARM                 41
#define STM32H745_CM4_IRQ_TIM8_BRK_TIM12            43
#define STM32H745_CM4_IRQ_TIM8_UP_TIM13             44
#define STM32H745_CM4_IRQ_TIM8_TRG_COM_TIM14        45
#define STM32H745_CM4_IRQ_TIM8_CC                   46
#define STM32H745_CM4_IRQ_DMA1_STR7                 47
#define STM32H745_CM4_IRQ_FMC                       48
#define STM32H745_CM4_IRQ_SDMMC1                    49
#define STM32H745_CM4_IRQ_TIM5                      50
#define STM32H745_CM4_IRQ_SPI3                      51
#define STM32H745_CM4_IRQ_UART4                     52
#define STM32H745_CM4_IRQ_UART5                     53
#define STM32H745_CM4_IRQ_TIM6_DAC                  54
#define STM32H745_CM4_IRQ_TIM7                      55
#define STM32H745_CM4_IRQ_DMA2_STR0                 56
#define STM32H745_CM4_IRQ_DMA2_STR1                 57
#define STM32H745_CM4_IRQ_DMA2_STR2                 58
#define STM32H745_CM4_IRQ_DMA2_STR3                 59
#define STM32H745_CM4_IRQ_DMA2_STR4                 60
#define STM32H745_CM4_IRQ_ETH                       61
#define STM32H745_CM4_IRQ_ETH_WKUP                  62
#define STM32H745_CM4_IRQ_FDCAN_CAL                 63
#define STM32H745_CM4_IRQ_CM7_SEV                   64
#define STM32H745_CM4_IRQ_DMA2_STR5                 68
#define STM32H745_CM4_IRQ_DMA2_STR6                 69
#define STM32H745_CM4_IRQ_DMA2_STR7                 70
#define STM32H745_CM4_IRQ_USART6                    71
#define STM32H745_CM4_IRQ_I2C3_EV                   72
#define STM32H745_CM4_IRQ_I2C3_ER                   73
#define STM32H745_CM4_IRQ_OTG_HS_EP1_OUT            74
#define STM32H745_CM4_IRQ_OTG_HS_EP1_IN             75
#define STM32H745_CM4_IRQ_OTG_HS_WKUP               76
#define STM32H745_CM4_IRQ_OTG_HS                    77
#define STM32H745_CM4_IRQ_DCMI                      78
#define STM32H745_CM4_IRQ_FPU                       81
#define STM32H745_CM4_IRQ_UART7                     82
#define STM32H745_CM4_IRQ_UART8                     83
#define STM32H745_CM4_IRQ_SPI4                      84
#define STM32H745_CM4_IRQ_SPI5                      85
#define STM32H745_CM4_IRQ_SPI6                      86
#define STM32H745_CM4_IRQ_SAI1                      87
#define STM32H745_CM4_IRQ_LTDC                      88
#define STM32H745_CM4_IRQ_LTDC_ER                   89
#define STM32H745_CM4_IRQ_DMA2D                     90
#define STM32H745_CM4_IRQ_SAI2                      91
#define STM32H745_CM4_IRQ_QUADSPI                   92
#define STM32H745_CM4_IRQ_LPTIM1                    93
#define STM32H745_CM4_IRQ_CEC                       94
#define STM32H745_CM4_IRQ_I2C4_EV                   95
#define STM32H745_CM4_IRQ_I2C4_ER                   96
#define STM32H745_CM4_IRQ_SPDIF                     97
#define STM32H745_CM4_IRQ_OTG_FS_EP1_OUT            98
#define STM32H745_CM4_IRQ_OTG_FS_EP1_IN             99
#define STM32H745_CM4_IRQ_OTG_FS_WKUP               100
#define STM32H745_CM4_IRQ_OTG_FS                    101
#define STM32H745_CM4_IRQ_DMAMUX1_OV                102
#define STM32H745_CM4_IRQ_HRTIM1_MST                103
#define STM32H745_CM4_IRQ_HRTIM1_TIMA               104
#define STM32H745_CM4_IRQ_HRTIM1_TIMB               105
#define STM32H745_CM4_IRQ_HRTIM1_TIMC               106
#define STM32H745_CM4_IRQ_HRTIM1_TIMD               107
#define STM32H745_CM4_IRQ_HRTIM1_TIME               108
#define STM32H745_CM4_IRQ_HRTIM1_FLT                109
#define STM32H745_CM4_IRQ_DFSDM1_FLT0               110
#define STM32H745_CM4_IRQ_DFSDM1_FLT1               111
#define STM32H745_CM4_IRQ_DFSDM1_FLT2               112
#define STM32H745_CM4_IRQ_DFSDM1_FLT3               113
#define STM32H745_CM4_IRQ_SAI3                      114
#define STM32H745_CM4_IRQ_SWPMI1                    115
#define STM32H745_CM4_IRQ_TIM15                     116
#define STM32H745_CM4_IRQ_TIM16                     117
#define STM32H745_CM4_IRQ_TIM17                     118
#define STM32H745_CM4_IRQ_MDIOS_WKUP                119
#define STM32H745_CM4_IRQ_MDIOS                     120
#define STM32H745_CM4_IRQ_JPEG                      121
#define STM32H745_CM4_IRQ_MDMA                      122
#define STM32H745_CM4_IRQ_SDMMC2                    125
#define STM32H745_CM4_IRQ_HSEM0                     126
#define STM32H745_CM4_IRQ_ADC3                      128
#define STM32H745_CM4_IRQ_DMAMUX2_OV                129
#define STM32H745_CM4_IRQ_BDMA_CH0                  130
#define STM32H745_CM4_IRQ_BDMA_CH1                  131
#define STM32H745_CM4_IRQ_BDMA_CH2                  132
#define STM32H745_CM4_IRQ_BDMA_CH3                  133
#define STM32H745_CM4_IRQ_BDMA_CH4                  134
#define STM32H745_CM4_IRQ_BDMA_CH5                  135
#define STM32H745_CM4_IRQ_BDMA_CH6                  136
#define STM32H745_CM4_IRQ_BDMA_CH7                  137
#define STM32H745_CM4_IRQ_COMP                      138
#define STM32H745_CM4_IRQ_LPTIM2                    139
#define STM32H745_CM4_IRQ_LPTIM3                    140
#define STM32H745_CM4_IRQ_LPTIM4                    141
#define STM32H745_CM4_IRQ_LPTIM5                    142
#define STM32H745_CM4_IRQ_LPUART                    143
#define STM32H745_CM4_IRQ_WWDG1_RST                 144
#define STM32H745_CM4_IRQ_CRS                       145
#define STM32H745_CM4_IRQ_ECC                       146
#define STM32H745_CM4_IRQ_SAI4                      147
#define STM32H745_CM4_IRQ_HOLD_CORE                 148
#define STM32H745_CM4_IRQ_WKUP                      149

#endif
