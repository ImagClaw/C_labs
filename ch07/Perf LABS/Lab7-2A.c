/*
* name: Whelpley
* date: 7 Feb 2019
* project: Lab7.2A - IF STATEMENTS
*
* IF STATEMENTS
* 
*     Initialize a char array to zero.
*     Safely store a user-input string in the char array.
*     Safely print the string IF the following conditions are both true:
*         The first element greater than or equal to decimal value 32.
*         The first element is less than decimal value 126.
* 
* NOTE: decimal values 32-126 represent printable ASCII characters
*/ 

#include <stdio.h>

int main(void) {
    char myArray[] = {0};

    fprintf(stdout, "Enter a string: ");
    fscanf(stdin, "%s", &myArray);

    if (myArray[0] >= 32  && myArray[0] <= 126){
        fprintf(stdout, "%s", myArray);
    } else {
        fprintf(stdout, "Try agian playa.");
    }

    return 0;
}