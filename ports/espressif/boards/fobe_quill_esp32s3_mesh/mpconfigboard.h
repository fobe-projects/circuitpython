// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2025 FoBE Studio
//
// SPDX-License-Identifier: MIT

#pragma once

// Micropython setup

#define MICROPY_HW_BOARD_NAME       "FoBE Quill ESP32S3 Mesh"
#define MICROPY_HW_MCU_NAME         "ESP32S3"

#define MICROPY_HW_LED_STATUS (&pin_GPIO11)
#define MICROPY_HW_LED_STATUS_INVERTED (1)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO36)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO35)

#define DEFAULT_SPI_BUS_SCK (&pin_GPIO47)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO33)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO34)

#define DEFAULT_UART_BUS_RX (&pin_GPIO38)
#define DEFAULT_UART_BUS_TX (&pin_GPIO37)

// #define DOUBLE_TAP_PIN (&pin_GPIO34)
