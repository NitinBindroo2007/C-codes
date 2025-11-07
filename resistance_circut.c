#include<stdio.h>

int main(){
    float resistance, current, voltage;

    printf("Enter voltage (in volts) : ");
    scanf("%f",&voltage);

    printf("Enter voltage (in Amperes) : ");
    scanf("%f",&current);

    resistance = voltage / current ;

    printf("Resistance =%.2fohms",resistance);

    return 0;
    
}
