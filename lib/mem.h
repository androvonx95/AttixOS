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
#include <kernel/config.h>

/* Defines */
#define MEMORY_EMPTY 0x0

/* Functions */
void* kmalloc(uint32_t size);
void kfree(void* memory);
void memory_init();
void memcpy(byte* dest, byte* src, uint32_t size);
void *memset(void *s, int c, unsigned long n) ;
uint32_t memory_usage();
uint32_t memory_usage_effective();
uint32_t memory_total();
byte* get_memory_index();