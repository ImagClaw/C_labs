#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main() {
    // init variables
    char s[200];
    char c;
    int count = 0, i;

    
    printf("Enter the string: "); // Prompt user to enter a string
    fscanf(stdin, "%[^\n]s", s); // Store user input in variable 's'

    printf("Enter the char you want counted: "); // Prompt user to enter a single char to search for
    fscanf(stdin, " %c", &c); // Store search char in variable 'c'

    
    // While variable 'i' is less than the length of variable 's', cycle through each char in 's'
    // If that chare matches (uppercase or lowercase) the search char, up the count of the var 'count'
    for (i = 0; i < strlen(s); i++) {
        if ((s[i] == tolower(c)) || (s[i] == toupper(c))) {
            count++;
        }
        
    }
    // print what the user input as a search term and print the total count
    printf("The number of %c's in a given string are: %d\n", c, count);
}