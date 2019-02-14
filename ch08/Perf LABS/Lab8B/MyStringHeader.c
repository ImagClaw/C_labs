// MyStringHeader.c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ERR_NULL_POINTER -1;        // string is null
#define ERR_INVALID_LENGTH -2;      // string length is zero or less

extern int print_the_count(char * inputString, int strLen)
{
    char tempChar = 0;      // Current char being acted on
    int table[26] = {0};    // Alpha
    int count = 0;

    if (!inputString)
    {
        return ERR_NULL_POINTER;
    }
    else if (!strLen)
    {
        return ERR_INVALID_LENGTH;
    }

    for (int i = 0; i < strLen; i++)
    {
        if (inputString[i] >= 33 && inputString[i] <= 126)
        {
            tempChar = inputString[i];
            tempChar = toupper(tempChar);
            table[tempChar - 65] += 1;
            count++;
        }
    }

    // Print the table
    for (int i = 0; i < sizeof(table)/sizeof(table[0]); i++)
    {
        printf("%c: %d\n", i + 65, table[i]);
    }
    return count;
}

extern int reverse_it(char * forwardString, int strLen) {

    // Error handling 
    if (!forwardString)
    {
        return ERR_NULL_POINTER;
    }
    else if (!strLen)
    {
        return ERR_INVALID_LENGTH;
    }

    // initializing variables
    char reverseString[256];
    int begin, end, count = 0;
  
    /* while loop that takes in our forwardString (user passed from main)
    * while forwardString does not contain a \0 iterate count +1
    */
    while (forwardString[count] != '\0')
       count++;
  
    end = count - 1;
  
    // for loop while begin is less than count, swap places with forwardString and reverseString
    for (begin = 0; begin < count; begin++) {
       reverseString[begin] = forwardString[end];
       end--;
    }
  
    // zeroizes reverseString[begin]
    reverseString[begin] = '\0';
  
    // prints the reverseString
    printf("Your string reversed is: %s\n", reverseString);
     
    //strrev(forwardString);
    //fprintf(stdout, "Your string reversed is: %s\n", r);

    return 0;

}