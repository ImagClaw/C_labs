/* Student Age Arrays and Quote Array
*
*  name: Whelpley
*  date: 30 Jan 2019
*  project: Demo 3A
*
*/

#include <stdio.h>

int main(void)
{
    // Starting a new array called nerdAges and sets the index limit to 15 and the ages are filled in {age, age, age, age, ...}
	int nerdAges[15] = {29, 53, 24, 12, 43, 67, 9, 12, 54, 67, 34, 54, 43, 67, 78};

    // \n is new line and \t is tab 
    // so it will print like:
    //
    // 'You miss
    // 100% of
    // the shots
    // you dont
    // take.
    // -Wayne Gretzky'
    //        -MICHAEL SCOTT

	char nerdQuote[128] = {"'You miss\n100% of\nthe shots\nyou dont\ntake.\n-Wayne Gretzky'\n\t-MICHAEL SCOTT\0"};

    // Starting count variable with 0
	int count = 0;

    // While loop to print the ages line by line until count is less than 16
	while(count < 15)
	{
		printf("%d \n", nerdAges[count]);
		count++;
	}

    // Prints the nerd quote in the format specified in var nerdQuote
	printf("\n%s\n", nerdQuote);

	return 0;
}