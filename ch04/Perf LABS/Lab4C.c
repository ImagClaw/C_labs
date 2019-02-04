/* Read a string from stdin into a char array of dimension [10]
*  Write that string to stdout
*  Use fgets() and fputs()
*  Test it with the following input:
*       - Program
*       - Class rules
*       - <Enter>
*       - 1<tab>2<space>3456789
*       - |$(5)$|
*       - ~\_<Ctrl-D>_/~
*
*
*  name: Whelpley
*  date: 01 Feb 2019
*  project: Perf 4C
*
*/

#include <stdio.h>

int main(void) {
    char myString[10];

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);
    printf("Your entered string: ");
    fputs(myString, stdout);

    return 0;

}