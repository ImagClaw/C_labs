#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    if (argc < 2) {
        fprintf(stdout, "No file name, enter a file name including path.\n");
        return EXIT_FAILURE;
    }
    fprintf(stdout, "The name of your file is %s.\n", argv[1]);
    return EXIT_SUCCESS;    
}