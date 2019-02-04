#include <stdio.h>
#include <math.h>


int main(void) {
    // Declaring variables
    int A = 0;
    int B = 0;

    printf("Using the Pythagorean Theorem we can calculate the hypotenuse\nof a right triangle.");
    printf("Enter the two legs of the right angle. Side A (verticle leg)\nand Side B (base leg) separated by a space: (IE. 3 4): ");
    scanf("%d %d", &A, &B);
    
    printf("The hypontenuse of Side A (%d) and Side B (%d) is %fl", A, B, sqrt((A*A)+(B*B)));

}