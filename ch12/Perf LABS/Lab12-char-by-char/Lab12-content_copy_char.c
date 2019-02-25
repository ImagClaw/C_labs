/*
*  name: Whelpley
*  date: 25 Feb 2019
*  project: Lab12-content_copy_char.c
*
*  File I/O – putc()
*
*  “Content Copy”
*       Open an existing file in read mode.
*       Open a new file in write mode.
*       Copy the existing file into the new file char-by-char.
*       Close the existing file.
*       Close and open the new file in read mode.
*       Print the new file char-by-char.
*  
*  
*/

#include<stdio.h>
#include<stdlib.h>

void main() {
  FILE *oldFile1, *newFile2;
  char ch;


  oldFile1 = fopen("./newfile.txt", "r");
  newFile2 = fopen("./writefile.txt", "w");

  while (1) {
     ch = getc(oldFile1);

     if (ch == EOF)
        break;
     else
        putc(ch, newFile2);
  }

  printf("Shit works yo!");
  fclose(oldFile1);
  fclose(newFile2);
}