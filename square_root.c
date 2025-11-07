#include<stdio.h>
#include<math.h>

int main(){
    double num, result ;
    printf("Enter a number :");
    scanf("%lf",&num);

    result = sqrt(num);

    printf("square root of %.2lf = %.2lf\n",num,result);

    return 0;

    }