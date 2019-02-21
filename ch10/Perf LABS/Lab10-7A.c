/*
* name: Whelpley
* date: 20 Feb 2019
* project: Lab10.6A - CONDITONAL COMPILATION
* 
* 
* Redefine EOF as 66 (without compiler warnings)
* Use preprocessor directive(s) to:
*     - Only compile in "release" and only compile if _INC_STDIO is defined
*     - Prints the name of a MACRO and also print the integer value of that MACRO
*     - Use a #else 'fall through' for ease of use and safety
* Use your preprocessor directives on FOPEN_MAX, FILENAME_MAX, and EOF
*
* 
*/

#include <stdio.h>
#undef EOF
#define EOF 66
#define _INC_STDIO 55
#define FOPEN_MAX 200
#define FILENAME_MAX 101

int main()
{
    #ifdef _INC_STDIO
        printf("The value of _INC_STDIO is %d \n", _INC_STDIO);
    #else
        printf("_INC_STDIO is defined\n");
    #endif
    #if (EOF == 66)
        printf("EOF is set to %d\n", EOF);
    #else 
        printf("EOF is set to default.\n");
    #endif
    #if (FOPEN_MAX < 199)
        printf("FOPEN_MAX is within the correct range\n");
    #else
        printf("FOPEN_MAX is not within the correct range\n");
    #endif
    #if (FILENAME_MAX >= 102)
        printf("FILENAME_MAX is too large, please change value and try again\n");
    #elif (FILENAME_MAX <= 0)
        prinf("FILENAME_MAX needs to be greater than 0\n");
    #else 
        printf("FILENAME_MAX is within the correct range\n");
    #endif
    return(0);
}