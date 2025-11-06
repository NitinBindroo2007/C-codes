#include <stdio.h>

int main()
{

    int BirthYear, CurrentYear, age;

    printf("Enter your BirthYear :- ");
    scanf("%d", &BirthYear);

    printf("Enter current year:-");
    scanf("%d", &CurrentYear);

    age = CurrentYear - BirthYear;

    if (age <= 0)
    {
        printf("invalid ");
    }
    else
    {
        printf("your birth year is %d", age);
    }
    return 0;
}