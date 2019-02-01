/* Declares 4 variables and prints them and casts them as something else.
*
*  name: Whelpley
*  date: 29 Jan 2019
*  project: Demo 2a
*
*/

#include <stdio.h>

int main(void) {
    int myInt = 23;
    float myFloat = 2.3;
    double myDouble = 2.4;
    char myChar = 'A';

    printf("My int %d is now a float: %f \n", myInt, (float) myInt);
    printf("My int %d is now a char: %c \n", myInt, (char) myInt);
    printf("My float %f is now a double: %lf \n", myFloat, (double) myFloat);
    printf("My double %lf is now a float: %f \n", myDouble, (float) myDouble);
    printf("My char %c is now an int: %d \n", myChar, (int) myChar);
    printf("The number 33 is now a char: %c \n", (char) 33);

    return 0;
}