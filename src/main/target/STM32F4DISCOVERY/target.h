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

#define TARGET_BOARD_IDENTIFIER "F4DI"
#define USBD_PRODUCT_STRING "STM32 F4 Discovery"

#define CONFIG_START_FLASH_ADDRESS 0x08000000 

#define LED0    PD13 //Orange
#define LED1    PD12 //Green
#define LED2    PD14 //Red
#define LED3    PD15 //Blue

#define USE_SPI

#define USE_SPI_DEVICE_1 //L3GD20
#define SPI1_NSS_PIN            PA15
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define GYRO
#define USE_GYRO_L3GD20

#define L3GD20_SPI                      SPI1
#define L3GD20_CS_PIN                   PE3

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff
