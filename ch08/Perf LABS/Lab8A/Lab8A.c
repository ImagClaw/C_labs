/*
* name: Whelpley
* date: 11 Feb 2019
* project: Lab8A - Function - "Healthy Substitutions"

* int replace_character(char * string, const char findThisChar, const char replaceItWithThis);
* 
*     Return Value - number of characters replaced
*     Parameters
*         - Pointer to a null-terminated string
*         - Character to find
*         - Character to replace it with
*     Purpose - replace all occurrences of findThisChar with replaceItWithThis
*     Use pre-defined return values as indicated in shell code
*/

#include <stdio.h>  // imported the standard inuput/output library
#include "replace.h" // imported the replace library

int replace_character(char * string, const char findThisChar, const char replaceItWithThis); // 

int main() {
    // Initializing Variables
    char myStr[] = {0};
    char find;
    char replace;

    // fprintf is used to ask the user to give input
    fprintf(stdout, "Enter a string followed by what you want replaced and what to replace it with.\nI.E. hello o 0\n");

    /* fscanf is used take user input and place it in the variables that have been initialzied above
    * myStr - takes the string input and stores it, find - takes the char to be replaced and stores it
    * replace - takes the char the user defines and replaces it with all found chars
    */
    fscanf(stdin, "%s %c %c", myStr, &find, &replace); 

    // replace_character is an external function called from the replace.h and passes myStr, find, and replace
    replace_character(myStr, find, replace);
    
    // prints the ne myStr with replaced chars
    fprintf(stdout, myStr);

    return 0;

}