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
*  project: Perf 4D
*
*/

#include <stdio.h>

int main(void) {
    char firstName[64] = {0};
    char middleName[64] = {0};
    char lastName[64] = {0};
    int firstNum = 0;
    int secondNum = 0;
    printf("Enter your full name (First<tab>Middle<tab>Last): \n");
    scanf("%32s\t%32s\t%32s", &firstName, &middleName, &lastName);

    printf("Your name is: \n %s\t\n%s\t\n%s\t\n", firstName, middleName, lastName);

    printf("Enter two integers, separated by a *, to be multiplied...: \n");
    scanf("%d*%d", &firstNum, &secondNum);
    printf("The result of %d multiplied by %d is %d", firstNum, secondNum, firstNum*secondNum);
    return 0;

}