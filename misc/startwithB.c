#include <string.h>
#include <stdio.h>

const char * startswithB(char *sentence) {
    for (int i = 0; i < strlen(sentence); i++) {
        printf("%c \n", sentence[i]);
    }
}


int main() {

    // Init variable
    char sentence[64];

    printf("Enter a string: "); // prompt user to enter a string
    fscanf(stdin, "%[^\n]s", sentence); //

    // Send the variable 'sentence' to sift for 
    startswithB(sentence);
}