/* Input a single char and then print the next char in the sequence
*  Use getchar() and putchar()
*
*  name: Whelpley
*  date: 01 Feb 2019
*  project: Perf 4A
*
*/

#include <stdio.h>

int main(void) {
    int myInput = 0;
    printf("Enter a single char: ");
    myInput = getchar();
    printf("The next character in the sequence is: ");
    putchar(myInput + 1);
    
    return 0;
}