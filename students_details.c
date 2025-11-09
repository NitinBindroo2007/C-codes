#include<stdio.h>

int main(){

    char name[50];
    int roll_number;

    printf("enter name :");
    scanf("%s",name);

    printf("student roll nunber :");
    scanf("%d", &roll_number);

    printf("=====STUDENT DETAILS===== \n");
    printf("name of student : %s\n",name);
    printf("roll number of student :%d\n",roll_number);

    return 0;
}