/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once

#include <io.h>
#include <mem.h>
#include <drivers/display.h>
#include <fs/core.h>
#include <kernel/config.h>

void ksh_make_file() {
  printf("%s ", KSH_PROMPT2);
  char* file_to_make = (char*) kmalloc(512);
  scan(file_to_make);

  int response = file_make(file_to_make);

  if (response == FILE_ALREADY_EXISTS) {
    println("File already exists!");
  }
  else if (response == FILE_NAME_INVALID) {
    printf("File name can only contain the following characters:\n%s\n",
           FS_FILE_NAME_VALID_CHARS);
  }
  else if (response == FILE_COUNT_MAX_EXCEEDED) {
    println("There are too many files!");
  }

  kfree(file_to_make);
}