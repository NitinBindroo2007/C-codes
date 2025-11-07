#include<stdio.h>

int main (){
    int age ;

    printf("Enter your age :");
    scanf("%d",&age);

    if(age>=18){
        printf("you are eligible to vote.");

    }

    else{
        printf("you are not eligible to vote.");
        printf("you can vote after %d age",18-age);
    }
    return 0;
}