/*
*
* name: Whelpley
* date: 7 Feb 2019
* project: Lab6A - Bitwise Shift Right (Convert Decimal Input to Binary)
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
    uint32_t bitChecker = 0x01;

    fprintf(stdout, "Enter a number to convert to binary: ");
    fscanf(stdin, "%u", &userInput);

    bitChecker = bitChecker << 31;

    while(bitChecker > 0) {
        if ((bitChecker & userInput) == 0) {
            fprintf(stdout, "0");
        }else
        {
            fprintf(stdout, "1");
        }
        bitChecker = bitChecker >> 1;
    }

}