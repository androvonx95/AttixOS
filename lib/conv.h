/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* Includes */
#include <stddef.h>
#include <math.h>
#include <string.h>

/* Defines */
#define INVALID_BYTE (byte) 0x1099
#define INVALID_INT  (int)  INF
#define INT_MAX             2147483647


/* Functions */
void uint32_to_str(char* output, uint32_t number);
void uint32_to_hex(char* output, uint32_t number);
void uint_to_str(char* output, uint number);
void int_to_str(char* output, int number);
void short_to_str(char* output, short number);
char uint32_to_char(uint32_t number);
char uint_to_char(uint number);
int str_to_int(char *array, size_t n);
byte char_to_hex(char character);
int hex_to_int(char* hex_str, size_t len);