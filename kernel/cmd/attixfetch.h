/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

#include <io.h>
#include <mem.h>

#include <kernel/ksh.h>
#include <drivers/display.h>
#include <cpu/smbios.h>

/* I did NOT make this art btw */
#define attixFETCH_ART \
  "           _.-''|''-._         \n" \
  "        .-'     |     `-.      \n" \
  "      .'\\       |       /`.   \n" \
  "    .'   \\      |      /   `. \n" \
  "    \\     \\     |     /     /\n" \
  "     `\\    \\    |    /    /' \n" \
  "       `\\   \\   |   /   /'   \n" \
  "         `\\  \\  |  /  /'     \n" \
  "        _.-`\\ \\ | / /'-._    \n" \
  "       {_____`\\\\|//'_____}   \n" \
  "               `-'             \n"


void ksh_attixfetch() {
  printf(attixFETCH_ART);
  printf("OS: attixOS %s\n", OS_VERSION);

  printf("BIOS name: %s\n", smbios_get_bios_name());
  printf("BIOS version: %s\n", smbios_get_bios_version());

  printf("Memory: %d/%d\n", memory_usage(), memory_total());
  printf("Theme: %s\n", theme);
}