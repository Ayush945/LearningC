#include <stdio.h>

int main(){
    float num1,num2,result;
    char choice;

    do{
        printf("Enter first number(int): ");
        scanf("%f",&num1);
        printf("Enter Second number(int): ");
        scanf("%f",&num2);

        result=num1*num2;
        printf("%.2f times %.2f equals %.2f\n ",num1,num2,result);
        printf("Do you want to enter another pair of numbers ");
        printf("to multiply (Y/N)");
        scanf(" %c",&choice);

        
        
    }
    while (choice!='N' && choice!='n');

    return 0;
}