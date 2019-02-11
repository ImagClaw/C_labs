/*
* name: Whelpley
* date: 8 Feb 2019
* project: Lab7-3A - FOR LOOP
*
* FOR LOOP: OCCUPANDI TEMPORIS
* 
* Following demo lab 1 for 7.3, you should have identified your past code/programs where a for loop would have been more economical. Well NOW is your chance. Create a C file where your previous code is commented out and directly underneath, you implement a for loop.
* 
* ##commented-out code from areas in previous programs that could really use a for loop
* 
* for (x1; x2; x3)
* {
*     statement;
* }
*/


#include <stdio.h>

int main(void)
{
    // Starting a new array called nerdAges and sets the index limit to 15 and the ages are filled in {age, age, age, age, ...}
    int nerdAges[15] = {29, 53, 24, 12, 43, 67, 9, 12, 54, 67, 34, 54, 43, 67, 78};
    int i = 0;
    int count = 0;

    // While loop to print the ages line by line until count is less than 16
	for(i =0; i <15; i++)
	{
        count += 1;
		fprintf(stdout, "Student %d is %d yrs old.\n", count, nerdAges[i]);
	}
	return 0;
}