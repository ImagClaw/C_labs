/* Input a single char and then print the next char in the sequence
*  Use getchar() and putchar()
*
*  name: Whelpley
*  date: 01 Feb 2019
*  project: Demo 4B
*
*/

#include <stdio.h>

int main(void) {
    int myInput = 0;
    printf("Enter a single char: ");
    myInput = getc(stdin);
    printf("The previous character in the sequence is: ");
    putc(myInput - 1, stdout);

    // Calling getchar() which is assigned to myInput
    getchar();
    return 0;
}