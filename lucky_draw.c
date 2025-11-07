#include <stdio.h>

int main() {
    int num;

    printf("Enter a number between 1 and 5: ");
    scanf("%d", &num);

    if (num == 3)
        printf(" You are Lucky!\n");
    else
        printf("Better luck next time!\n");

    return 0;
}
