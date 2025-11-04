#include <stdio.h>

int main()
{

    int number;
    printf(" Please Enter Number :- ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("the number is even number .");
    }
    else
    {
        printf("the number is odd .");
    }

    return 0;
}
