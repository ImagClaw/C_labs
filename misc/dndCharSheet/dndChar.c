/*
*   Character Builder for DnD
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "character.h"


int main() {
    
    // init variables
    //bool done = false;
    charSheet myChar;
    charAlign myAlign;
    //charClass myClass;
    //race_t myRace;


    printf("Enter a character name: ");
    fscanf(stdin, " %32[^\n]c", myChar.cName);
    printf("(0 - LAWFULGOOD, 1- LAWFULNEUTRAL, 2 - LAWFULEVIL, 3 - NUETRALGOOD \
, 4 - NUETRAL, 5 - NUETRALEVIL, 6 - CHAOTICGOOD, 7 - CHAOTICNUETRAL, 8 - CHAOTICEVIL) \
    \nEnter the number associated with your alignment choice: ");
    fscanf(stdin, "%d", &myAlign.id);


    if ((myAlign.id >= 0) && (myAlign.id <= 8)) {
        printf("%s's alignment is %s\n", myChar.cName, LAWFULNEUTRAL.alignName);
    } else {
        printf("You did not enter an alignment");
        return EXIT_SUCCESS;
    }
}