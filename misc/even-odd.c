#include <stdio.h>

const char * oddoreven(int oOe) {
    if(oOe % 2 == 0)
        return "Even";
    else
        return "Odd";
}

int main()
{
    int number[32];

    printf("Enter an integer: ");
    scanf("%d", &number);

    const char * num = oddoreven(*number);

    printf("%d is an %s number.", *number, num);
    
}v