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

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

int main(void) {
    uint32_t userInput = 0;
    uint32_t transNumber = 0;
    uint32_t bitChecker = 0x01;

    printf("Enter a number to be shifted: ");
    scanf("%u", &userInput);
    
    printf("Your new number is %u (Hex: 0x%08X) \n", userInput, userInput);

    transNumber = userInput;
    userInput = userInput >> 4;
    transNumber = transNumber << ((sizeof(transNumber)*8)-4);

    userInput = userInput | transNumber;


    printf("Your new number is %u (Hex: 0x%08X) \n", userInput, userInput);

}