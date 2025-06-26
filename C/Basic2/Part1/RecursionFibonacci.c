#include <stdio.h>

int FibonacciSeries(int num){
    
    if(num<=1){
        return num;
    }
    return FibonacciSeries(num-1)+FibonacciSeries(num-2);
}

int main(){

    int num;
    printf("Enter the number of fibonacci series: ");
    scanf("%d",&num);
    
    int result=FibonacciSeries(num);
    printf("%d",result);
    return 0;
}