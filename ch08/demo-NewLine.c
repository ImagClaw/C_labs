/* 
* name: Whelpley
* date: 11 Feb 2019
* project: Demo Lab8 - Newline Records"
* 
* int remove_newline(char * buffer);
* 
*     We are going to create a function that takes a pointer (don't get too caught up on the use of a poitner) to a buffer, containing a nul-terminated string. We are then going to replace all newline characters with spaces and return the number of newline characters changed.
* 
*     Return Value : Number of newline characters changed
* 
*     Parameters : Pointer to a null-terminated string
* 
*     Purpose : Replace all newline characters with spaces
* 
*     Requirments :
*         Ensure buffer is not NULL
*         Return ERR_NULL_POINTER if buffer is NULL
*         Return ERR_NONE_FOUND if no newlines are found
*/

#include <stdio.h>
#include <string.h>

int remove_newline();

int main() {
    char myPhrase[] = {"Hey\nthere\nbud.\nWhat's\nup\nwith\nyou?"};
    remove_newline(myPhrase);
    fprintf(stdout, myPhrase);

}

int remove_newline(char * buffer) {
    int replaced = 0;
    for (int i = 0; i < strlen(buffer);i++) {
        if (buffer[i] == '\n') {
            buffer[i] = ' ';
            replaced++;
        }
    }
    fprintf(stdout, "We replaced %d new line chars\n", replaced);
    return replaced;
}