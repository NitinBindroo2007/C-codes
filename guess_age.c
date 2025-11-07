#include <stdio.h>

int main() {
    int guess;

    printf("Guess my age (between 10 - 30 :");
    scanf("%d", &guess);

    if (guess == 18)
        printf("You got it right! \n");
    else
        printf("Nope! My age is 18.\n");

    return 0;
}
