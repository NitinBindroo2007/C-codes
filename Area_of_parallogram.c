#include<stdio.h>

int main(){
    float area, base , height;

    printf("Enter the bsse of the parallelogram :");
    scanf("%f",&base);

    printf("Enter the height of the parallelogram :");
    scanf("%f",&height);

    area = base*height;

    printf("The area of the PARALLELOGRAM is :%.2f",area);

    return 0;
}