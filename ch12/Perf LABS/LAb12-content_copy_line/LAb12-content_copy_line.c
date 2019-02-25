/*
*  name: Whelpley
*  date: 25 Feb 2019
*  project: Lab12-content_copy_line.c
*
*  File I/O – fputs()
*  
*  “Content Copy”
*     Open an existing file in read mode.
*     Open a new file in write mode.
*     Copy the existing file into the new file line-by-line .
*     Close the existing file.
*     Close and open the new file in read mode.
*     Print the new file line-by-line.
* 
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *oldFile, *newFile;
    char buf[1000];
    int lineNum = 1;
    int choice;
    
    newFile = fopen("./newfile.txt", "w");

    oldFile = fopen("./oldfile.txt", "r");

    if (oldFile == NULL) {
        printf("Could not open oldfile.txt");
        return EXIT_FAILURE;
    } 
    
    fprintf(stdout, "File will be overwritten. Continue? 0 for Yes, 1 for No: ");
    scanf("%d", &choice);
    switch (choice) {
        case 0:
            fprintf(stdout, "Will do, here we go...");
            while (fgets(buf, sizeof(buf), oldFile) != NULL) {
                fprintf(newFile, "%d: ", lineNum);
                fputs(buf, newFile);
                lineNum++;
            }
            fprintf(stdout, "\nShit works yo! Check newfile.txt if you don't believe me... O_O");
            fclose(oldFile);
            fclose(newFile);
            break;
        case 1:
            fprintf(stdout, "Ok, nice!");
            break;
        default:
            fprintf(stdout, "Not acceptable input.");
    }

    return 0;
}