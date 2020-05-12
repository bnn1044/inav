/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define USE_TARGET_CONFIG
#define TARGET_BOARD_IDENTIFIER "CLRA"
#define USBD_PRODUCT_STRING  "CLRACINGF7"

#define LED0                    PB0

#define BEEPER                  PB4
#define BEEPER_INVERTED
// *************** Gyro & ACC **********************
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_BUS         BUS_SPI1
#define USE_EXTI
#define GYRO_INT_EXTI            PC4
#define USE_MPU_DATA_READY_SIGNAL
#define USE_GYRO
#define USE_GYRO_MPU6000
#define GYRO_MPU6000_ALIGN      CW90_DEG
#define USE_ACC
#define USE_ACC_MPU6000
#define ACC_MPU6000_ALIGN       CW90_DEG

// *************** I2C/Baro/Mag *********************
#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10        // SCL pad
#define I2C2_SDA                PB11        // SDA pad

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C2
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_LPS25H

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C2
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

#define TEMPERATURE_I2C_BUS     BUS_I2C2
#define PITOT_I2C_BUS           BUS_I2C2

// ***************  Black Box **************************
#define USE_SPI_DEVICE_2
#define SPI2_NSS_PIN             PB12
#define SPI2_SCK_PIN             PB13
#define SPI2_MISO_PIN            PB14
#define SPI2_MOSI_PIN            PB15

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_CS_PIN            PB12
#define M25P16_SPI_BUS           BUS_SPI2

// *************** OSD *****************************

#define USE_SPI_DEVICE_3
#define SPI3_NSS_PIN             PA15
#define SPI3_SCK_PIN             PC10
#define SPI3_MISO_PIN            PC11
#define SPI3_MOSI_PIN            PB5

#define USE_OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI3
#define MAX7456_CS_PIN          PA15

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            PA2

/*#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10*/

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

#define USE_UART5
#define UART5_RX_PIN            PD2
#define UART5_TX_PIN            PC12

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define SERIAL_PORT_COUNT       7

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART1

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0
#define ADC_CHANNEL_1_PIN           PC1
#define ADC_CHANNEL_2_PIN           PC2
#define ADC_CHANNEL_3_PIN           PC3
#define VBAT_ADC_CHANNEL            ADC_CHN_2
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_1
#define RSSI_ADC_CHANNEL            ADC_CHN_3

// *************** PINIO ***************************
#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PC13 // VTX power switcher
#define PINIO2_PIN                  PC14 // Camera switcher
#define PINIO3_PIN                  PC15 // BT_ON
//#define PINIO4_PIN                  PC9 // 2xCamera switcher

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS         BUS_I2C2

#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_CURRENT_METER | FEATURE_TELEMETRY| FEATURE_VBAT | FEATURE_OSD )

#define USE_LED_STRIP
#define WS2811_PIN                      PB1   //TIM2_CH1

#define USE_SPEKTRUM_BIND
#define BIND_PIN                     PA3  //USART2_RX

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define MAX_PWM_OUTPUT_PORTS        9
#define USE_DSHOT
#define USE_ESC_SENSOR
#define USE_SERIALSHOT
