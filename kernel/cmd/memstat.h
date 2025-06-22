/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

#include <io.h>
#include <err.h>
#include <mem.h>
#include <drivers/display.h>

excode ksh_memstat() {
    println("Memory usage:");
    printf("total: %d\n", memory_usage());
    printf("effective: %d\n", memory_usage_effective());
    
    return exitval;
}