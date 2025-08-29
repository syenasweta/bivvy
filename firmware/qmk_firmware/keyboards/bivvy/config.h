/*
Copyright 2025 QMK

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// General
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX
#define ENABLE_COMPILE_KEYCODE

/* // Serial Driver 
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_DRIVER SIOD0
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1 */

// Audio
#ifdef AUDIO_ENABLE
    #define AUDIO_PIN GP5
    #define AUDIO_PWM_DRIVER PWMD2
    #define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
    #define AUDIO_INIT_DELAY
    #define STARTUP_SONG SONG(STARTUP_SOUND)
    #define AUDIO_CLICKY
    #ifdef AUDIO_CLICKY
        #define AUDIO_CLICKY_FREQ_DEFAULT 440.0f
        #define AUDIO_CLICKY_FREQ_MIN 65.0f
        #define AUDIO_DAC_SAMPLE_MAX 4095U
        #define AUDIO_CLICKY_FREQ_MAX 1500.0f
        #define AUDIO_CLICKY_FREQ_FACTOR 1.18921f
        #define AUDIO_CLICKY_FREQ_RANDOMNESS 0.05f
        #define AUDIO_CLICKY_DELAY_DURATION 1
    #endif
#endif

// Bootmagic
#ifdef BOOTMAGIC_ENABLE
    #define BOOTMAGIC_ROW 1
    #define BOOTMAGIC_COLUMN 1
#endif

// Encoder
#ifdef ENCODER_ENABLE
    #define ENCODER_A_PINS { GP14, GP16 }
    #define ENCODER_B_PINS { GP15, GP17 }
    #define ENCODER_RESOLUTIONS { 2, 2 }
    #define ENCODER_DEFAULT_POS 0x3
    #define ENCODER_MAP_ENABLE
    #ifdef ENCODER_MAP_ENABLE
        #define ENCODER_MAP_KEY_DELAY 10
    #endif
#endif

// Debounce
#define DEBOUNCE 4

// Matrix
#define MATRIX_ROWS 4
#define MATRIX_COLS 5
#define MATRIX_ROW_PINS { GP21, GP20, GP19, GP18 }
#define MATRIX_COL_PINS { GP6, GP7, GP8, GP9, GP10 }

// Diode Direction
// COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
// ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
#define DIODE_DIRECTION COL2ROW

/* // #ifdef JOYSTICK_ENABLE
    #define JOYSTICK_BUTTON_COUNT 16
    #define JOYSTICK_AXIS_COUNT 3
    #define JOYSTICK_AXIS_RESOLUTION 10
#endif
*/

#ifdef DYNAMIC_KEYMAP_LAYER_COUNT
    #define DYNAMIC_KEYMAP_LAYER_COUNT 16
#endif

// Mouse Keys
#ifdef MOUSEKEY_ENABLE
    #define MOUSEKEY_INERTIA
#endif

// OS Detected
#ifdef OS_DETECTION_ENABLE
    #define OS_DETECTION_DEBOUNCE 250
    #define OS_DETECTION_KEYBOARD_RESET
#endif

// Pointing Device with Analog Joystick
#ifdef POINTING_DEVICE_ENABLE
    #define ANALOG_JOYSTICK_X_AXIS_PIN 26
    #define ANALOG_JOYSTICK_Y_AXIS_PIN 27
    //#define ANALOG_JOYSTICK_AUTO_AXIS
    #define ANALOG_JOYSTICK_SPEED_REGULATOR 7
    #define ANALOG_JOYSTICK_READ_INTERVAL 10
    #define ANALOG_JOYSTICK_SPEED_MAX 2
    #define ANALOG_JOYSTICK_CUTOFF
    #define ANALOG_JOYSTICK_WEIGHTS {0,2,4,5,7,8,9,10,12,13,14,15,15,16,17,18,18,19,19,20,20,21,21,21,22,22,22,22,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,24,24,24,24,24,24,25,25,25,26,26,26,27,28,28,29,29,30,31,32,33,34,35,36,37,38,40,41,43,44,46,48,49,51,53,56,58,60,62,65,68,70,73,76,79,82,85,89,92,96,100}
    //#define POINTING_DEVICE_HIRES_SCROLL_ENABLE
    //#define POINTING_DEVICE_HIRES_SCROLL_MULTIPLIER 127
    //#define POINTING_DEVICE_HIRES_SCROLL_EXPONENT	0
    //#define MOUSE_EXTENDED_REPORT
    //#define WHEEL_EXTENDED_REPORT
#endif
