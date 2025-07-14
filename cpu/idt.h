/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* Includes */
#include <stddef.h>

/* Segment selectors */
#define KERNEL_CS 0x08
#define IDT_ENTRIES 256

/* Structs */
typedef struct {
    word low_offset; /* Lower 16 bits of handler address */
    word selector;   /* Kernel seg selector */
    byte always0;
    byte flags;
    word high_offset;
} __attribute__((packed)) idt_gate_t;

/* Pointer to interrupt handler array */
typedef struct {
    word limit;
    uint32_t base;
} __attribute__((packed)) idt_register_t;

/* Defines */
static idt_gate_t idt[IDT_ENTRIES];
static idt_register_t idt_reg;

/* Functions */
void set_idt_gate(int n, uint32_t handler);
void apply_idt();
void dump_idt_entry(int n);
void idt_init();
