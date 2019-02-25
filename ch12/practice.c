#include <stdio.h>

int main() {
    FILE *pFile;
    char input[81];

    pFile = fopen("./test.txt", "r");

    if (pFile == NULL) {
        fprintf(stdout, "No file");
    } else {
        while (!feof(pFile)) {
            fgets(input, sizeof(input), pFile);
            printf("%s", input);
        }
    }
    fclose(pFile);
}