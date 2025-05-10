#include <stdio.h>

int main(){

    int x;
    int* pX=&x;
    int** ptr=&pX;

    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Value of x is : %d",*(*ptr));

}