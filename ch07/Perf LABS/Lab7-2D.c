/*
* name: Whelpley
* date: 8 Feb 2019
* project: Lab7.2D - SWITCH STATEMENTS
*
* SWITCH STATEMENT
* 
* Write a program that will evaluate a simple math formula.
* Input the formula with two integers separated by an arithmetic operator from one line.
*     Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
* Use a switch statement to print the correct value using the operators as cases.
* Set the default condition to an error.
* Ensure any division provides a double answer with a precision of two decimal places.
* 
* NOTE: Scan the arithmetic operator as a char
*/

#include <stdio.h>

int main() {
 char symbol = 0;
 int x = 0;
 int y = 0;

 fprintf(stdout, "Enter an equation you want evaluated: ");
 fscanf(stdin, "%d%c%d", &x, &symbol, &y);

 switch (symbol)
 {
    // Addition
    case '+':
        printf("%d + %d = %2f\n", x, y, x+y);
        break;
    // Subtraction
    case '-':
        printf("%d - %d = %2f\n", x, y, x-y);
        break;
    // Multiplication
    case '*':
        printf("%d * %d = %2f\n", x, y, x*y);
        break;
    // Division
    case '/':
        if(y!=0) {
            fprintf(stdout, "%d * %d = %2f\n", x, y, (double)x/y);
            break;
        } else {
            fprintf(stdout, "Nope, no dividing by 0... try again.\n");
        }
    // Modulus
    case '%':
        fprintf(stdout, "%d %% %d = %d", x, y, x%y);
        break;        
    // Default Run this:
    default:
        fprintf(stdout, "Did you even try?");
 }
}