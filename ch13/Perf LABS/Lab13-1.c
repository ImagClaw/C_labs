/*
*
*  name: Whelpley
*  date: 26 Feb 2019
*  project: Lab13-1.c
*  
*  PERFORMANCE LAB 1
*  Follow instructions below!
*  The basis of this lab is simple... allocate a section of memory that will
*  hold a string (your first name). Print the name out, then cleanup the memory and exit.
*
*/

//TODO: Include needed headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //TODO: Create a string containing your first name
    char *name = "Dal";    

    //TODO: Get the size of this string

    int sizeName = strlen(name) +1;
    
    //TODO: Declare a char pointer *str

    //TODO: Allocate a section of memory of type char
    //TODO: Set the size of this allocated space to 40 bytes
    //TODO: Asign the address of this allocated space to the pointer value
    char *str = (char *)malloc(40);

    // prints the mem address of str before assigning name to it
    //printf("%p\n", str);
    
    //TODO: Copy your name into the allocated space using strcpy()
    strcpy(str, name);

    //TODO: Print out your name that is stored in the allocated memory space
    printf("My name is %s stored at address %p.\n", str, &str);
    
    // Checks the size of the sizeName var
    //printf("This is the size of sizeName: %d\n", sizeName);

    //TODO: Reallocate the memory space using the size of the string rather than 40 bytes
    //TODO: Print out the string again

    (char *)realloc(str, sizeName);
    //
    printf("My new name under the new allocation is %s stored at address %p.", str, &str);
    
    // Prints the mem address of str
    //printf("%p\n", str);

    free(str);

    return EXIT_SUCCESS;
}