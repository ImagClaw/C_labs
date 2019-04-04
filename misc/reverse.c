#include <stdio.h>

int reversed(int input)
{
   int reverse = 0;
 
   while (input != 0)
   {
      reverse = reverse * 10;  // reverse = 0 * 10
      reverse = reverse + input%10; // adds reverse to the remainder of input/10
      input       = input/10; // 
   }
 
   return reverse;

}


int main() {
   int input, reverse;

   printf("Enter a number to be reversed: ");
   scanf("%d", &input);

   reverse = reversed(input);

   printf("Your reversed number is: %d", reverse);
}