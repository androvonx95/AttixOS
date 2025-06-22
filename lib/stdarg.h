/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* * * * * * * * * * * * * * * * * * *
 *     The sixth commandment.        *
 * * * * * * * * * * * * * * * * * * *
 * When there is a builtin function  *
 * achieving thy goal, thou shall    *
 * utilize that function, e.g this   *
 * is a sin:                         *
 *                                   *
 *     #define va_start(ap, ...) \   *
 *         // Complicated impl...    *
 *                                   *
 * Yet thy soul shall be spared      *
 * should thou commence with this:   *
 *                                   *
 *     #define va_start(ap, ...) \   *
 *     __builtin_va_start(ap, 0)     *
 *                                   *
 * We DO NOT need more complicated   *
 * implementations, MARTHA. FOR THE  *
 * LOVE OF C AND C++!                *
 * * * * * * * * * * * * * * * * * * */

/* Types */
typedef __builtin_va_list va_list;

/* Defines */
#define va_start(ap, ...)  __builtin_va_start(ap, 0)
#define va_end(ap)         __builtin_va_end(ap)
#define va_arg(ap, type)   __builtin_va_arg(ap, type)
#define va_copy(dest, src) __builtin_va_copy(dest, src)