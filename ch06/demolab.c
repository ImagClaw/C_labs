
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

int main(void) {
    uint32_t userInput = 0;
    uint32_t transNumber = 0;

    printf("Enter a number to be shifted: ");
    scanf("%u", &userInput);
    
    printf("Your number was %u (Hex: 0x%08X) \n", userInput, userInput);

    transNumber = userInput;
    userInput = userInput >> 4;
    transNumber = transNumber << ((sizeof(transNumber)*8)-4);

    userInput = userInput | transNumber;


    printf("Your new number is %u (Hex: 0x%08X) \n", userInput, userInput);


}