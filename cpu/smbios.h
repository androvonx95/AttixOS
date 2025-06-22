/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* Includes */
#include <stddef.h>
#include <kernel/kmsg.h>

/* Functions */
char* smbios_get_bios_version();
char* smbios_get_bios_name();
void smbios_init();