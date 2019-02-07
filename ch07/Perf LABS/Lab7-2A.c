/*
*
* name: Whelpley
* date: 7 Feb 2019
* project: Lab7.2A - IF STATEMENT
*/ 

#include <stdio.h>

int main(void) {
    char myArray[256];

    fprintf(stdout, "Enter a string: ");
    fscanf(stdin, "%s", &myArray);

    if (myArray[0] >= 32){
        fprintf(stdout, "%s", myArray);
    }

}