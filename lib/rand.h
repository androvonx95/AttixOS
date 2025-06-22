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
#define LCG_A 1103515245
#define LCG_C 12345
#define LCG_M 2147483648

/* Functions */
void rand_init();
int rand_lcg(int x);
int rand();