/* Input a single char and then print the previous char in the sequence
*  Use getc() and putc()
*
*  name: Whelpley
*  date: 01 Feb 2019
*  project: Perf 4B
*
*/

#include <stdio.h>

int main(void) {
    int myInput = 0;
    printf("Enter a single char: ");
    myInput = getc(stdin);
    printf("The previous character in the sequence is: ");
    putc(myInput - 1, stdout);

    return 0;
}