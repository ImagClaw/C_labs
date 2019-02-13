#include <stdio.h>
#include <string.h>

extern int replace_character(char * string, const char findThisChar, const char replaceItWithThis) {
    int replaced = 0;
    for (int i = 0; i < strlen(string);i++) {
        if (string[i] == findThisChar) {
            string[i] = replaceItWithThis;
            replaced++;
        }
    }
    fprintf(stdout, "%d replacements.\n", replaced);
    return replaced;
}