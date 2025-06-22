/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* Includes */
#include <cpu/port.h>
#include <stddef.h>

/* Defines */
#define REG_DISPLAY_CTRL 0x3d4
#define REG_DISPLAY_DATA 0x3d5

/* Functions */
uint32_t get_cursor_position_x(void);
uint32_t get_cursor_position_y(void);
uint get_cursor_offset();
void set_cursor_offset(uint offset);