/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2013 Oleg Kostyuk <cub.uanic@gmail.com>

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

// Copy and worked on with love from the EZ team

#pragma once
#include "config_common.h"

#define BOOTMAGIC_LITE_ROW 13
#define BOOTMAGIC_LITE_COLUMN 2

#ifndef SCROLLSTEP
#    define SCROLLSTEP 1
#endif

#define VERBOSE

/* USB Device descriptor parameter */
#define VENDOR_ID 0x0007
#define PRODUCT_ID 0x0004
#define DEVICE_VER 0x0001
#define MANUFACTURER g Heavy Industries
#define PRODUCT BuzzSaw
#define DESCRIPTION Crouching Alice, Hidden Gergo

/* key matrix size */
#define MATRIX_ROWS 16
#define MATRIX_COLS 6
#define MATRIX_LEFT 7
#define MATRIX_RIGHT 9

#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_DELAY 0
#define TAPPING_TOGGLE 1

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT  // this makes it possible to do rolling combos (zx) with keys that convert to other keys on hold (z becomes ctrl when you hold it, and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() (get_mods() == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL)) || get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)))

#define DEBOUNCE 5
#define USB_MAX_POWER_CONSUMPTION 500
