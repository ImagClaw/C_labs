#include <string.h>
#include <stdio.h>

const char * startswithB(char *sentence) {
    for (int i = 0; i < strlen(sentence); i++) {
        printf("%c \n", sentence[i]);
    }
}


int main() {
    char sentence[64];

    printf("Enter a string: ");
    gets(sentence);

    startswithB(sentence);

}