/*
* name: Whelpley
* date: 11 Feb 2019
* project: Lab7-3C - DO-WHILE LOOP
*
*
*  Initialize a 26 element int array to 0.
*  Initialize a char variable to 0.
*  Use a DO-WHILE loop to input, but not store, a string one character at a time from stdin without scanf()!!
*  Each time a character is entered:
*      - convert the character to upper case using toupper()
*      - increment the corresponding array element if the user input is a letter
*      - Ensure non-letters (i.e. Ctrl-D, tab) are safely handled
*  End the loop when a newline is read.
*  Print the results using a for loop ()
*/


#include <stdio.h>
#include <ctype.h>

int main() {
    int myElement[26] = {0};
    char myInput = 0;
    int myCount = 0;

    fprintf(stdout, "Enter a word in lowercase: \n");

    do {
        myInput = getc(stdin);
        //fscanf(stdin, myInput);
        if ((myInput > 64 && myInput < 91) || (myInput > 96 && myInput < 123)) {
            myElement[myCount] = toupper(myInput);
            myCount++;
        } else {
            break;
        }
    } while (&myInput != "\n" && myCount < 25);

    for (int c = 0; c < myCount; c++) {
        fprintf(stdout, "%c", myElement[c]);
    } 
    return 0;
}