#include <stdio.h>

int main() {
    int i, num, sum = 0;

    for(i = 1; i <= 10; i++) {
        printf("Enter num%d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum of 10 numbers = %d\n", sum);
    return 0;
}
