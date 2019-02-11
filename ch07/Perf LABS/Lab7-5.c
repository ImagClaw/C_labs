/*
* name: Whelpley
* date: 11 Feb 2019
* project: Lab7-5 - NESTED CONTROL FLOW
*
* Print all the even or odd numbers from 0 to 100.
* Prompt the user for input to indicate odds or evens.
* Loop from 0 to 100 and print all indicated numbers.
* Use and IF statement to check if even or odd.
*
*    BONUS: Ask the user to continue with a DO-WHILE loop
*    # write a version with the counting loop written as a FOR loop, and a WHILE loop version.
*
*/

#include <stdio.h>
#include <string.h>

int main() {
    char userInput[8];
    char odd[] = "odd", even[] = "even";
    int startHere = 0;

    fprintf(stdout, "This program will print 0 - 100\nbased on your selection of 'even' or 'odd'.\n");
    fprintf(stdout, "Enter 'even' or 'odd': \n");
    fscanf(stdin, "%s", &userInput);

    if (strcmp(userInput, even) == 0)
    {
        startHere = 2;
        for (int i = 0; i <50; i++)
        {
            if (startHere < 100) {
                fprintf(stdout, "%d, ", startHere);
                startHere += 2;
            } else {
                fprintf(stdout, "%d.", startHere);
            }
        }

    } 

    else if (strcmp(userInput, odd) == 0) 
    {
        startHere = 1;
        for (int i = 0; i <50; i++)
        {
            if (startHere < 99) {
                fprintf(stdout, "%d, ", startHere);
                startHere += 2;
            } else {
                fprintf(stdout, "%d.", startHere);
            }
        }
    } 

    else {
        fprintf(stdout, "Read much? Next time enter 'even' or 'odd'.");
    }
    
    return 0;

}