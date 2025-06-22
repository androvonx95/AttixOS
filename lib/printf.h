/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* Includes */
#include <io.h>

/* Defines */
#ifndef putchar
#   define putchar(c) printc(c)
#endif

/* * * * * * * * * * * * * * * * * * *
 *     The first commandment.        *
 * * * * * * * * * * * * * * * * * * *
 * When you just need                *
 * printf, not the whole IO          *
 * library, do:                      *
 *                                   *
 *     #define PRINTF_IMPL           *
 *     #include <printf.h>           *
 *                                   *
 * If not, you have sinned,          *
 * and will be sent to programmer    *
 * hell forever (it's a              *
 * javascript repl).                 *
 * * * * * * * * * * * * * * * * * * */
#ifdef PRINTF_IMPL
#define printf  printf_
#define sprintf sprintf_
#endif

/* Functions */

/* Main ``printf`` function (true macro
 * defined in ``io.h`` though -_-). */
int printf_(const char *format, ...);