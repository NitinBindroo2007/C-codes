#include <stdio.h>

int main()
{
    int choice;
    float amount, price, change;

    printf("===== VENDING MECHINE MENU =====\n");
    printf("1. tea           - Rs 20\n");
    printf("2. Cold coffee   - Rs 50\n");
    printf("3. Samosa        - Rs 12\n");
    printf("4. Pizza         - Rs 100\n");
    printf("5. ColdDrink     - Rs 10\n");
    printf("===== VENDING MECHINE MENU =====\n");

    printf("Enter your choice (1-5) :- ");
    scanf("%d", &choice);

    printf("Enter the amount you inserted : ");
    scanf("%f", &amount);

    switch (choice)
    {

    case 1:
        price = 20;
        printf(" you selected tea.\n");
        break;
    case 2:
        price = 50;
        printf("you slected cold coffee.\n");
        break;
    case 3:
        price = 12;
        printf("you selected samosa.\n");
        break;
    case 4:
        price = 100;
        printf("you selected pizza.\n");
        break;
    case 5:
        price = 10;
        printf("you selected cold drink.\n");
        break;

    default:
        printf("invalid choice, please enter number between (1-5).");

        return 0;
    }

    if (amount >= price)
    {
        change = amount - price;
        printf("payment successful. plx collect your iten.\n");
        printf("your change %.2f\n", change);
    }
    else
    {
        printf("insufficent amount add more money %.2f\n", price - amount);
    }
    printf("thanku for using vending mechine ");

    return 0;
}
