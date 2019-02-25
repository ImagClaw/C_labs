#include <stdio.h>

int main() {
    int num;
    FILE *fPtr;
    
    fPtr = fopen("./test.txt", "r");
    num = fgetc(fPtr);

    while (num != EOF) {
        putchar(num);
        num = fgetc(fPtr);
    }
    fclose(fPtr);
}