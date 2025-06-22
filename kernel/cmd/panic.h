/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

#include <io.h>
#include <mem.h>

#include <kernel/kmsg.h>
#include <kernel/config.h>

int usrpanic() {
    char *msg = (char *) kmalloc(255);

    printf("%s ", KSH_PROMPT2);
    scan(msg);
    kpanic(msg);

    return 0;
}