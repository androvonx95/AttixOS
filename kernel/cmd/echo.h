/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

#include <io.h>
#include <mem.h>
#include <drivers/display.h>
#include <kernel/config.h>

void ksh_echo() {
    char* str = (char*) kmalloc(255);
    printf("%s ", KSH_PROMPT2);
    scan(str);
    printf("%s\n", str);
}