/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* Includes */
#include <kernel/messages.h>

/* Functions */
void kinfo(char* msg);
void kwarning(char* msg);
void kerror(char* msg);
void kpanic(char* msg);