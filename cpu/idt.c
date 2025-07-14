/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#include <cpu/idt.h>
#include <kernel/kmsg.h>
#include <lib/magic.h>
#include <kernel/ksh.h>
#include <string.h>  // For memset
#include <lib/conv.h>  // For uint_to_str and uint32_to_hex
#include <lib/string.h>  // For stradd and strcls
void set_idt_gate(int n, uint32_t handler) {
    if (n < 0 || n >= IDT_ENTRIES) {
        kpanic("Invalid IDT entry number");
    }
    idt[n].low_offset = low_16(handler);
    idt[n].selector = KERNEL_CS;
    idt[n].always0 = 0;
    idt[n].flags = 0x8E;
    idt[n].high_offset = high_16(handler);
}

void apply_idt() {
    idt_reg.base = (uint32_t) &idt;
    idt_reg.limit = IDT_ENTRIES * sizeof(idt_gate_t) - 1;
    __asm__ __volatile__("lidtl (%0)" : : "r" (&idt_reg));
    __asm__ __volatile__("lidtl (%0)" : : "r" (&idt_reg));
}

void dump_idt_entry(int n) {
    if (n < 0 || n >= IDT_ENTRIES) return;
    
    char buf[64];
    strcls(buf);  // Clear buffer
    
    // Convert numbers to strings
    char num_str[12];
    uint_to_str(num_str, n);
    
    char addr_str[12];
    uint32_to_hex(addr_str, idt[n].low_offset | (idt[n].high_offset << 16));
    
    // Build message
    stradd(buf, "IDT Entry ");
    stradd(buf, num_str);
    stradd(buf, ": ");
    stradd(buf, addr_str);
    
    kinfo(buf);
}
void idt_init() {
    memset(idt, 0, sizeof(idt));
}