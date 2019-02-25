/*
*  name: Whelpley
*  date: 25 Feb 2019
*  project: Your_Song.c
*  File I/O – fgets() “Your Song”
*
*  Save your favorite song into a text file.
*  
*  Write a C program to:
*      Open the file in read-only mode
*      Read it line-by-line
*      Print each line as it is read
*      Close the file at the end
*  
*/


#include <stdio.h>

int main() {
    FILE *fBanana;
    char banana[256];

    fBanana = fopen("./bananaphone.txt", "r");

    if (fBanana == NULL) {
        fprintf(stdout, "You did not enter a file");
    } else {
        while (!feof(fBanana)) {
            fgets(banana, sizeof(banana), fBanana);
            printf("%s", banana);
        }
    }
    fclose(fBanana);
}