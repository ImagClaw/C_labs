#include <stdio.h>
#define SIZE 10

int main() {

    void exchange(float *y, float *x);

    float *fPtr;
    float number1 = 7.3;
    float number2;

    fPtr = &number1;

    fprintf(stdout, "Value of number1 variable: %f\n", *fPtr);

    number2 = *fPtr;
    fprintf(stdout, "Value of number2 variable: %f\n", number2);

    fprintf(stdout, "Address of number1 variable: %p\n", &number1);

    fprintf(stdout, "Address of fPtr: %p", fPtr);



}

void exchange(float *y, float *x) {

}

int evaluate(int (*poly)(int), int x) {

}