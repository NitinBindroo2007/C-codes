#include <stdio.h>

int main() {
    float amount;

    printf("Enter total purchase amount: ");
    scanf("%f", &amount);

    if (amount > 1000)
        amount *= 0.9; 

    printf("Payable Amount = Rs %.2f\n", amount);
    return 0;
}
