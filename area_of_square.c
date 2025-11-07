#include<stdio.h>

int main (){
    float area, side;

    printf("Enter the side of the square :");
    scanf("%f",&side);

    area = side*side;

    printf("area of the square :%.2f",area);
    return 0;
    
}