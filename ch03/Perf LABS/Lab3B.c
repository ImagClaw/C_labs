/* Initiates a char array of 256 in length and assigns \0 to all 256 indexes.
*  Assigned "Bird is the word!" to index 0-16.
*  Printed the array as a string and then printed the length. 
*
*  name: Whelpley
*  date: 30 Jan 2019
*  project: Demo 3B
*
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char nerdWerd[256] = {0};
    nerdWerd[0] = 66; // B
    nerdWerd[1] = 105; // i
    nerdWerd[2] = 114; // r
    nerdWerd[3] = 100; // d
    nerdWerd[4] = 32; // 
    nerdWerd[5] = 105; // i
    nerdWerd[6] = 115; // s
    nerdWerd[7] = 32; // 
    nerdWerd[8] = 116; // t
    nerdWerd[9] = 104; // h
    nerdWerd[10] = 101; // e
    nerdWerd[11] = 32; // 
    nerdWerd[12] = 119; // w
    nerdWerd[13] = 111; // o
    nerdWerd[14] = 114; // r
    nerdWerd[15] = 100; // d
    nerdWerd[16] = 33; // !
    nerdWerd[17] = '\0'; // NULL

    printf("%s\n", nerdWerd);
    printf("Sting length is %d.", strlen(nerdWerd));
}