#include <stdio.h>

int main() {
    int temperature;

    printf("Enter the current temperature : ");
    scanf("%d", &temperature);

    if (temperature >=40) {
        printf("It's extremely hot outside.\n");
    } else if (temperature >=30) {
        printf("It's hot today. Wear light clothes.\n");
    } else if (temperature >=20) {
        printf("The weather pleasant.\n");
    } else if (temperature >=10) {
        printf("It's a bit cool.\n");
    } else if (temperature >=0) {
        printf("It's cold outside.\n");
    } else {
        printf("It's freezing! .\n");
    }

    return 0;
}