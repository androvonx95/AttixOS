/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* Includes */
#include <stddef.h>

/* Defines */
uint strlen(char* string);
void strcpy(char* dest, char* src);
bool strcmp(char* a, char* b);
void stradd(char* base, char* extension);
void strcls(char* string);
char char_to_upper(char character);
void strupp(char* string);