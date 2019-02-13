#include <stdio.h>
#include "stuff.h"

int main() {
 char symbol;
 int x;
 int y;

 fprintf(stdout, "Enter an equation you want evaluated: ");
 fscanf(stdin, "%d%c%d", &x, &symbol, &y);

 switch (symbol)
    {
    // Addition
    case '+':
        addition(x, y);
        break;
    // Subtraction
    case '-':
        subtraction(x, y);
        break;
    // Multiplication
    case '*':
        multiplication(x, y);
        break;
    // Division
    case '/':
        division(x, y);
        break;
    // Modulus
    case '%':
        modulus(x, y);
        break;        
    // Default Run this:
    default:
        fprintf(stdout, "Did you even try?");
        break;
    }

main();
}