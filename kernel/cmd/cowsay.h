/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#pragma once


#include <io.h>
#include <magic.h>
#include <kernel/config.h>

void printcow(void);

char upperbubble='\\';
char lowerbubble='\\';

unsigned int counter;
unsigned int argscharcount=0;

int kowsay() {
    char* str = (char*) kmalloc(255);
    printf("%s ", KSH_PROMPT2);
    scan(str);

    for (int i; i < alen(str); i++) {
        argscharcount++;
    }

    for(counter=1; counter <= argscharcount; counter++) {
        printf("_");
    }

    printf("\n<");
    printf("%s", str);
    printf(">\n");

    for(counter=1; counter <= argscharcount; counter++) {
        printf("-");
    }
    printf("\n");
    printcow();
    return 0;
}

void printcow(void) {
printf("        %c   ^__^\n\
         %c  (Oo)\\_______\n\
            (__)\\       )\\/\\\n\
                ||----w |\n\
                ||     ||\n", upperbubble, lowerbubble);
}