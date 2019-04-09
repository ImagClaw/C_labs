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
    charSheet myChar;
    char *myAlign;
    int alignSelect;
    //charClass myClass;
    //race_t myRace;

characterName:
    printf(" _____ _                          _              _   _ \n");                     
    printf("/  __ \\ |                        | |            | \\ | |\n");                     
    printf("| /  \\/ |__   __ _ _ __ __ _  ___| |_ ___ _ __  |  \\| | __ _ _ __ ___   ___ \n");
    printf("| |   | '_ \\ / _` | '__/ _` |/ __| __/ _ \\ '__| | . ` |/ _` | '_ ` _ \\ / _ \\\n");
    printf("| \\__/\\ | | | (_| | | | (_| | (__| ||  __/ |    | |\\  | (_| | | | | | |  __/\n");
    printf(" \\____/_| |_|\\__,_|_|  \\__,_|\\___|\\__\\___|_|    \\_| \\_/\\__,_|_| |_| |_|\\___|\n");
    printf("\n Enter a character name: ");
    fscanf(stdin, "%32s", myChar.cName);
    if (myChar.cName == NULL) {
        printf("You did not enter a Character Name. Try Again");
        goto characterName;
    }


alignmentSelect: // Needs to be a function.
     printf("______ _                          ___  _ _                                  _   \n");
     printf("| ___ \\ |                        / _ \\| (_)                                | |  \n");
     printf("| |_/ / | __ _ _   _  ___ _ __  / /_\\ \\ |_  __ _ _ __  _ __ ___   ___ _ __ | |_ \n");
     printf("|  __/| |/ _` | | | |/ _ \\ '__| |  _  | | |/ _` | '_ \\| '_ ` _ \\ / _ \\ '_ \\| __|\n");
     printf("| |   | | (_| | |_| |  __/ |    | | | | | | (_| | | | | | | | | |  __/ | | | |_ \n");
     printf("\\_|   |_|\\__,_|\\__, |\\___|_|    \\_| |_/_|_|\\__, |_| |_|_| |_| |_|\\___|_| |_|\\__|\n");
     printf("                __/ |                       __/ |                               \n");
     printf("               |___/                       |___/                                \n");
     printf("_________________________________________________________________________________\n");
     printf("|\t1 - LAWFULGOOD\t|\t2 - LAWFULNEUTRAL\t|\t3 - LAWFULEVIL\t|\n|\t4 - NUETRALGOOD\t|\t\
 5 - NUETRAL\t\t|\t6 - NUETRALEVIL\t|\n|\t7 - CHAOTICGOOD\t|\t8 - CHAOTICNUETRAL\t|\t9 - CHAOTICEVIL\t| \
     \n\n Enter the number associated with your alignment choice: ");
     fscanf(stdin, "%d", &alignSelect);
     if ((alignSelect >=1) && (alignSelect <= 9)) {
         switch (alignSelect) {
             case 1:
                 myAlign = LAWFULGOOD;
                 break;
             case 2:
                 myAlign = LAWFULNEUTRAL;
                 break;
             case 3:
                 myAlign = LAWFULEVIL;
                 break;
             case 4:
                 myAlign = NEUTRALGOOD;
                 break;
             case 5:
                 myAlign = NEUTRAL;
                 break;
             case 6:
                 myAlign = NEUTRALEVIL;
                 break;
             case 7:
                 myAlign = CHAOTICGOOD;
                 break;
             case 8:
                 myAlign = CHAOTICNEUTRAL;
                 break;
             case 9:
                 myAlign = CHAOTICEVIL;
                 break;
             default:
                 printf("\n ERROR: You did not select a choice between 1 - 9.  Try Again.\n\n");
                 goto alignmentSelect;
         }
         printf("\n %s's alignment is %s\n", myChar.cName, myAlign);
     }
}