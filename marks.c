#include <stdio.h>

int main()
{
    float marks[5], total = 0, percentage;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    printf("Total marks = %.2f\n", total);

    percentage = (total / 500) * 100;

    if (percentage > 75)
    {
        printf("Result =  Distinction");
    }
    else if (percentage <= 75 && percentage >= 60)
    {
        printf("Result = First Grade");
    }
    else if (percentage < 60 && percentage >= 50)
    {
        printf("Result = Second Grade");
    }
    else if (percentage < 50 && percentage >= 40)
    {
        printf("Result = Third Grade");
    }
    else
    {
        printf("Result = Fail");
    }

    return 0;
}
