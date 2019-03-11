    #include <stdio.h>
    #include <string.h>
     
    int main()
    {
       char string[256];
       int c = 0, count[26] = {0}, x;
     
       puts("Enter a string");
       gets(string);
     
       while (string[c] != '\0') {
       /** Considering characters from 'a' to 'z' only and ignoring others. */
     
          if (string[c] >= 'a' && string[c] <= 'z') {
             x = string[c] - 'a';
             count[x]++;
          } else if (string[c] >= 'A' && string[c] <= 'Z') {
             x = string[c] - 'A';
             count[x]++;
          }
          c++;
       }
     
       for (c = 0; c < 26; c++)
            if (string[c] >= 'a' && string[c] <= 'z') {
                printf("%c occurs %d times in the string.\n", c + 'a', count[c]);
            } else if (string[c] >= 'A' && string[c] <= 'Z') {
                printf("%c occurs %d times in the string.\n", c + 'A', count[c]);
            }
     
       return 0;
    }