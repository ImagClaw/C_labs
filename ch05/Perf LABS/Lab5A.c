/*
*  name: Whelpley
*  date: 01 Feb 2019
*  project: Perf 4A
*
*  Arithmetic
*  
*      - Write a program to calculate the hypotenuse of a right triangle
*      - Use the Pythagorean Theorem (a^2 + b^2 = c^2)
*      - Input the two legs (A and B)
*      - Output the hypotenuse (C)
*      - Add this to your code "shell"
*          - #include <math.h> // Math header contains sqrt()
*
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>


int main(void) {
    /* insert initialize variables here */
    int A = 0;
    int B = 0;

    /* insert input values and assign to variables here */
    printf("Using the Pythagorean Theorem we can calculate the hypotenuse\nof a right triangle.");
    printf("Enter the two legs of the right angle. Side A (verticle leg)\nand Side B (base leg) separated by a space: (IE. 3 4): ");
    
    
    if(scanf("%d %d", &A, &B) != 2) /*insert logical combo of relational expressions here */
        printf("Nah fam, Enter valid numbers...");
    else
        printf("The hypontenuse of Side A (%d) and Side B (%d) is %3.3f", A, B, sqrt((A*A)+(B*B))); /* insert arithmetic hypotenuse calculation and hypotenuse here*/

    return 0;
}