/*
* name: Whelpley
* date: 8 Feb 2019
* project: Lab7.2B - IF-ELSE STATEMENTS
*
* IF-ELSE STATEMENT
*
* Initialize a signed int to 0.
* Input a number from the user and store it in the signed int.
* Determine if the number is negative or positive utilizing a bitwise operator.
* Utilizing an IF-ELSE statement:
*     INDICATE if the number is negative
*     Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative
* Print the binary
*
*/ 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int myInt = 0;

    fprintf(stdout, "Enter a negative or a positive number: ");
    fscanf(stdin, "%d", &myInt);

    if (myInt >> 31){
        char buffer[33] = {0};
        itoa(myInt,buffer,2);
        fprintf(stdout, "%d is already negative yo.\n", myInt);
        fprintf(stdout, "Binary: %s\n", buffer);
    }
    else
    {
        fprintf(stdout, "You've entered the positive number %d\n", myInt);
        fprintf(stdout, "But, you're in luck... I'm going to make it \na negative and print the binary.\n");
        myInt = ~myInt + 1;
        fprintf(stdout, "Your positive number is now: %d\n", myInt);
        char buffer[33] = {0};
        itoa(myInt,buffer,2);
        fprintf(stdout, "Binary: %s\n", buffer);
    }
}