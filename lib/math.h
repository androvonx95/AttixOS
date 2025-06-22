/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

/* No external libs needed. */

/* We need this for the ``INF`` macro,
 * because x/0 = inf. DO NOT REMOVE. */
double divide(double x, double y);

/* Defines */
#define INF divide(10, 0)

/* Functions */
double pow(double base, double exponent);