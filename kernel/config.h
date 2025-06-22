/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* kernel.c */
#define DEFAULT_THEME  WHITE_ON_BLUE
#define KERNEL_STARTUP ksh_start()
#define KERNEL_UPDATE

/* ksh.h */
#define KSH_PROMPT  "%"
#define KSH_PROMPT2 ">"
#define KSH_COMMENT ';'

/* mem.h */
#define KERNEL_MEMORY_OFFSET_START 0xffffff
#define KERNEL_MEMORY_OFFSET_END   0xffffffff
#define MEMORY_INDEX_BASE_SIZE     10000