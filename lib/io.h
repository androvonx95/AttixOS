/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* Includes */
#include <stddef.h>
#include <printf.h>
#include <drivers/display.h>
#include <drivers/keyboard.h>
#include <drivers/display_color.h>

/* Defines */
#define printf  printf_

/* Functions */
void printi(int number);
void printu(uint number);
void printu32(uint32_t number);
void printk(char* text);
void printhex(uint32_t number);
void cprintk(char* text, char color);
void println(char* text);
void cprintln(char* text, char color);
void scan(char* output);