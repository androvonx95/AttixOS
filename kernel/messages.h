/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

#define KERNEL_INFO_ENTERED       "Booting..."
#define KERNEL_INFO_INIT_START    "Initializing..."
#define KERNEL_INFO_INIT_DONE     "Done!"
#define KERNEL_INFO_WELCOME       "Welcome to attixOS!"

#define KERNEL_INFO_SHELL_WELCOME \
"\n"\
"/$$$$$$    /$$     /$$     /$$            /$$$$$$   /$$$$$$    \n" \
"/$$__  $$  |$$$    |$$$    |__/           /$$__  $$ /$$__  $$  \n" \
"| $$  \\ $$ /$$$$$$ /$$$$$$   /$$ /$$   /$$| $$  \\ $$| $$  \\__/ \n" \
"| $$$$$$$$|_  $$_/|_  $$_/  | $$|  $$ /$$/| $$  | $$|  $$$$$$  \n" \
"| $$__  $$  | $$    | $$    | $$ \\  $$$$/ | $$  | $$ \\____  $$ \n" \
"| $$  | $$  | $$ /$$| $$ /$$| $$  >$$  $$ | $$  | $$ /$$  \\ $$ \n" \
"| $$  | $$  |  $$$$/|  $$$$/| $$ /$$/\\  $$|  $$$$$$/|  $$$$$$/ \n" \
"|__/  |__/   \\___/   \\___/  |__/|__/  \\__/ \\______/  \\______/  \n" \
"\n"


#define KERNEL_INFO_MANUAL_HELP "Type \"help\" to open ksh manual.\n"
#define KERNEL_INFO_SHELL_UNKNOWN_COMMAND   "Invalid command!\n"
#define KERNEL_PANIC_MEMORY_INDEX_FULL      "Kernel index is full!\nCAUSE: Too many kmalloc() calls...\n"
#define KERNEL_PANIC_MEMORY_FULL            "Kernel memory is full!\nCAUSE: The system ran out of RAM..."
#define FIRMWARE_ERROR_ISR_EXCEPTION        "(ERROR) Recieved ISR exception: "
#define FIRMWARE_ERROR_SMBIOS_ENTRY_MISSING "(ERROR) Recieved exception: Couldn't find an SMBIOS entry...\n"