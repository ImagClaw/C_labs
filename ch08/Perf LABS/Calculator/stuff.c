#include <stdio.h>
#include <math.h>

extern int addition(int x, int y) {
    printf("%d + %d = %d\n", x, y, x+y);
}

extern int subtraction(int x, int y) {
    printf("%d - %d = %d\n", x, y, x-y);
}

extern int multiplication(int x, int y) {
    printf("%d - %d = %5.2f\n", x, y, (double)x*y);
}

extern int division(int x, int y) {
    if(y!=0) {
        fprintf(stdout, "%d * %d = %5.2f\n", x, y, (double)x/y);
    } else {
        fprintf(stdout, "Nope, no dividing by 0... try again.\n");
    }
}

extern int modulus(int x, int y) {
    fprintf(stdout, "%d %% %d = %f\n", x, y, x%y);
}