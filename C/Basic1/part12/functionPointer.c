#include <stdio.h>
//Fuction Pointer -1
int Sum(int a, int b){
    int c= a+b;
    return c;
}

int func(int a, int b){
    int c=a-b;
    return c;
}

void apply(){
    printf("Hello the sum =%d")
}
int main(){

    int (*ptr)(int,int);
    ptr=Sum;
    int sum=ptr(2,3);
    printf("Sum = %d ",sum);
    return 0;
}