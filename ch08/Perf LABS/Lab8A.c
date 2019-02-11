/*
* name: Whelpley
* date: 11 Feb 2019
* project: Lab8A - Function - "Healthy Substitutions"

* int replace_character(char * string, const char findThisChar, const char replaceItWithThis);
* 
*     Return Value - number of characters replaced
*     Parameters
*         - Pointer to a null-terminated string
*         - Character to find
*         - Character to replace it with
*     Purpose - replace all occurrences of findThisChar with replaceItWithThis
*     Use pre-defined return values as indicated in shell code
*/

#include <stdio.h>
#include <string.h>

int replace_character(char * string, const char findThisChar, const char replaceItWithThis);

int main() {
    char myStr[] = {0};
    char find;
    char replace;
    fprintf(stdout, "Enter a string followed by what you want replaced and what to replace it with.\nI.E. hello o 0\n");
    fscanf(stdin, "%s %c %c", &myStr, &find, &replace);
    replace_character(myStr, find, replace);
    fprintf(stdout, myStr);

    return 0;

}

int replace_character(char * string, const char findThisChar, const char replaceItWithThis) {
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