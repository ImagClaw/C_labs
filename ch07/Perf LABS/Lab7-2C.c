/*
* name: Whelpley
* date: 8 Feb 2019
* project: Lab7.2C - ELSE-IF STATEMENTS
*
* ELSE-IF STATEMENT
*
* SWAP THE LARGEST NUMBER
* 
* Initialize ONLY three unsigned int variables to 0.
* Safely scan user input into the variable #1 and #2 utilizing a single line.
* Using a single ELSE-IF statement:
*     If variable #1 is equal to variable #2, print an ERROR.
*     Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.
* Print the values of all three variables if the SUM of the three variables is greater than 2 regardless of the previous ELSE-IF statement.
* 
*
*/ 

#include <stdio.h>
#include <math.h>

int main() {
    unsigned int myUINT1 = 0;
    unsigned int myUINT2 = 0;
    unsigned int myUINT3 = 0;

    fprintf(stdout, "Enter two number separated by a space (i.e - 4 5): ");
    fscanf(stdin, "%d %d", &myUINT1, &myUINT2);
    
    if (myUINT1 == myUINT2) {
        fprintf(stdout, "ERROR.  Bruh... your numbers cannot be the same.\n");
    } else if ( myUINT1 > myUINT2) {
        myUINT3 = myUINT1;
    } else {
        myUINT3 = myUINT2;
    }

    if ((myUINT1 + myUINT2 + myUINT3) > 2) {
        fprintf(stdout, "X = %d\ny = %d\nz = %d\n", myUINT1, myUINT2, myUINT3);
    }
    return 0;
}
