/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* ps: I wish I could change the name of this file but uhh
 * to many files depend on this so this'll be the magic file
 * I fucking guess lol :3 */

/* ALen (Array [Due to referencing the array
 * directly] Length) calculates length of array
 * by using ``sizeof(x) / sizeof(x[0])``. Clang
 * likes this implementation, and is thus preferred. */
#define alen(arr) (sizeof(arr) / sizeof(arr[0]))