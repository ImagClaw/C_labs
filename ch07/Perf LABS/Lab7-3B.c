/*
* name: Whelpley
* date: 9 Feb 2019
* project: Lab7-3B - WHILE LOOP
*
* 
* - Initialize a NUL terminated char array with multiple phrases separated by newlines (\n).
* - Test the char array with puts().
* - Write a WHILE loop that only prints the first line AND stops at a NUL character
* 
*  NOTE: Stopping at the null character is a safety measure that accounts for arrays lacking a new line
*
*/

#include <stdio.h>

int main() {
    // initialize variables
    char myPhrase[] = {"I\nknow\nwhat\nyou\ndid\nlast\nsummer.\0"};
    int counter = 0;

    // body of code
    while(myPhrase[counter] != NULL) {
        fprintf(stdout, "%c", myPhrase[counter]);
        if(myPhrase[counter] == "\n") {
            break;
        }
        counter++;
    }
}