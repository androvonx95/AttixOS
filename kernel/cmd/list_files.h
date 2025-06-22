/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

#include <io.h>
#include <drivers/display.h>
#include <fs/core.h>

void ksh_list_files() {
  char *name;
  for (int i = 0; i < file_count(); ++i) {
    name = file_get_name(i);
    if (name != (char *)FILE_NOT_FOUND) {
      printf("%s\n", name);
    }
  }
}