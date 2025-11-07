#include <stdio.h>

int main() {
    int i;

    for (i = 5; i > 0; i--) {
        if (i == 3) {
            continue; 
        }

        if (i == 1) {
            break;     
        }

        printf("%d\n", i);
    }

    printf("Loop ended!");
    return 0;
}