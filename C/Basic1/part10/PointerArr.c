#include <stdio.h>

int main(){

    //int a[5]={1,2,3,4,5};
    // int *p;
    // p=a;
    // printf("The address of value is %p",*(a+1));
    
    int A[]={2,3,4,5,8,1};
    int *p=A;
    // A++; Invalid can't be used
    p++; // Valid can be used

    //Address of 1st element of array
    printf("%d.\n",A);
    printf("%d.\n",&A[0]);

    //Value of 1st element of array
    printf("%d.\n",A[0]);
    printf("%d.\n",*A);




    //Address of 2nd element of array
    printf("%d.\n",A+1);
    printf("%d.\n",&A[1]);

    //Value of 2nd element of array
    printf("%d.\n",A[1]);
    printf("%d.\n",*A+1);
    return 0;  
}