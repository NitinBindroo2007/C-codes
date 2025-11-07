#include<stdio.h>

int main(){
    int signals;

    printf("=====TRAFFIC SINGALS LIGHT=====\n");
    printf("1. Red light\n");
    printf("2. Yellow light\n");
    printf("3. Green light\n");
    printf("=====TRAFFIC SINGALS LIGHT=====\n");

    printf("Enter the signal number (1-3): ");
    scanf("%d",&signals);

switch(signals){
    case 1:
    printf("RED LIGHT -stop!\n");
    break;
    case 2:
    printf("YELLOW LIGHT - get ready!\n");
    break;
    case 3:
    printf("GREEN LIGHT - go!\n");
    break;
default:
    printf("invalid signal ! please enter number between (1-3)\n");


}
printf("drive safely. happy journey");

return 0;
}