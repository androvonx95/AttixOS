/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* Includes */
#include <stddef.h>

/* Functions */
byte port_byte_in(word port);
void port_byte_out(word port, byte data);
word port_word_in(word port);
void port_word_out(word port, word data);