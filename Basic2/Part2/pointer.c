#include <stdio.h>

int main(){

    int x=50;
    int* pX=&x;
    int** ptr=&pX;

    printf("Value of x is : %d",*(*ptr));

}