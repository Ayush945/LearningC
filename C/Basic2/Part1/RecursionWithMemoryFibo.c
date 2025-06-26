#include <stdio.h>
int F[51]; //first 51 number in fibonacci series

int FibonacciSeries(int num){
    
    if(F[num]!=-1){
        return F[num];
    }
    F[num]= FibonacciSeries(num-1)+FibonacciSeries(num-2);
    return F[num];
}

int main(){

    for (int i=0;i<51;i++){
        F[i]=-1;
    }
    F[0]=0;
    F[1]=1;
    int num;
    printf("Enter the number of fibonacci series: ");
    scanf("%d",&num);
    
    int result=FibonacciSeries(num);
    printf("%d",result);
    return 0;
}