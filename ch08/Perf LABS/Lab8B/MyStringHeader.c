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
        
    if (!forwardString)
    {
        return ERR_NULL_POINTER;
    }
    else if (!strLen)
    {
        return ERR_INVALID_LENGTH;
    }

    char reverse[256];
    int begin, end, count = 0;
  
    while (forwardString[count] != '\0')
       count++;
  
    end = count - 1;
  
    for (begin = 0; begin < count; begin++) {
       reverse[begin] = forwardString[end];
       end--;
    }
  
    reverse[begin] = '\0';
  
    printf("Your string reversed is: %s\n", reverse);
     
    //strrev(forwardString);
    //fprintf(stdout, "Your string reversed is: %s\n", r);

    return 0;

}