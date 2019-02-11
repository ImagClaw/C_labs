/*
* name: Whelpley
* date: 11 Feb 2019
* project: Lab7-4 - CONTINUE
*
*
* Input an unsigned integer "x".
* Print the first 10 to 20 positive integers that x is divisible by utilizing the mod operator (not the most efficient)
* Repeat this process.
* Immediately stop this process when the user inputs an integer above 999.
* Ignore any "divide by 0" errors using continue.
*/


#include <stdio.h>

int main() {
    unsigned int uInt = 0;
    int safeSpace = 0;
    int count = 0;
    
    fprintf(stdout, "Print a number < 999: \n");
    fscanf(stdin, "%d", &uInt);

    while(safeSpace <= uInt && count != 19) {
        if (uInt > 999) 
        {
            fprintf(stdout, "Nah boo boo, Try again.  I said less than 999.");
            break;
        } 
        
        if (safeSpace == 0 || uInt % safeSpace == 0) 
        {
            if (safeSpace == 0) {
                safeSpace++;
                continue;
        }
        fprintf(stdout, "%d is divisible by %d\n", uInt, safeSpace);
        count++;
        } else {
            safeSpace++;
            continue;
        }
        safeSpace++;
    }

    return 0;

}
