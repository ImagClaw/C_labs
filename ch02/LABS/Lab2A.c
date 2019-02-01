/* Declares 4 variables and prints them and their size
*
*  name: Whelpley
*  date: 29 Jan 2019
*  project: Demo 2a
*
*/

#include <stdio.h>

int main(void) {
    int myIntVar = 23;
    float myFloatVar = 2.3;
    double my2xVar = 2.12345678;
    char myCharVar = '%';

    printf("My integer is %d \n\tAnd has a size of %d\n", myIntVar, sizeof(myIntVar));
	printf("My float is %f \n\tAnd has a size of %d\n", myFloatVar, sizeof(myFloatVar));
	printf("My double is %lf \n\tAnd has a size of %d\n", my2xVar, sizeof(my2xVar));
	printf("My first char is %c \n\tAnd has a size of %d\n", myCharVar, sizeof(myCharVar));
	
    return 0;

}