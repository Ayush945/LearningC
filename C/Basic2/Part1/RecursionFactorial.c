#include <stdio.h>

int Factorial(int num){

    if(num==0)return 1;
    return num*Factorial(num-1);
}

int main(){
    int num;
    printf("Enter the number for factorial: ");
    scanf("%d",&num);
    
    int ans=Factorial(num);
    printf("\nThe factorial is: %d ",ans);
    return 0;
}