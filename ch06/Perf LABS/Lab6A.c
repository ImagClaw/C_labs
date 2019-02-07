/*
*
* name: Whelpley
* date: 6 Feb 2019
* project: Lab6A - Bitwise Shift Right
*
*    1. Input a uint32_t userInput from stdin utilizing fscanf()
*    2. Initialize another uint32_t bitChecker to 0x01
*    3. Use a Bitwise Shift Left on bitChecker to ensure only the left most bit is turned on
*    4. Print the binary representation of userInput to stdout using only the following:
*        - fprintf()
*        - Bitwise Shift Right >>
*        - Bitwise AND &
*        - Relational Operator (e.g., >)
*
*/

#include <stdio.h>
#include <inttypes.h>

int main(void) {
    uint32_t userInput = 0;
    uint32_t bitChecker = 1;



    printf("Enter a number to convert to binary: ");
    fscanf(stdin, "%u", &userInput);

    bitChecker = bitChecker << 20;

    while(bitChecker > 0) {
        if ((bitChecker & userInput) == 0) {
            printf("0");
        }else
        {
            printf("1");
        }
        bitChecker = bitChecker >> 1;
    }

}