/* Read a User First, Middle, Last Name from stdin into a set of char arrays with a dimension of [64] each
*  Print to stdout
*  Use scanf
*  Formatted Input (strings)
*      1. Read a first, middle and last name as input into separate char arrays
*      2. Specify a field-width to protect against buffer overflow
*      3. Ensure the field-width leaves room for a nul-terminator
*      4. Specify a ("\t") as a delimitating character
*      5. Print the full name, separating each string with a tab and newline ("\t\n")
*  
*  name: Whelpley
*  date: 01 Feb 2019
*  project: Demo 4D
*
*/

#include <stdio.h>

int main(void) {
    char firstName[64] = {0};
    char middleName[64] = {0};
    char lastName[64] = {0};
    printf("Enter your full name (First<tab>Middle<tab>Last): \n");
    scanf("%32s\t%32s\t%32s", &firstName, &middleName, &lastName);

    printf("Your name is: \n %s\t\n%s\t\n%s\t\n", firstName, middleName, lastName);

    return 0;

}