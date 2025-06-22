/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

typedef struct {
    int code;
} excode;

excode exitval = { 
    .code = 0 
};

excode errval    = { .code = 1   };
excode errval256 = { .code = 256 };

#define fetch return