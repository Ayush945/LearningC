#include <stdio.h>

int SumOfElements(int A[] /*  int* A   */, int size){ // "int A[]" or "int* A" ... it's the same
    int i, sum=0;
    //int size =sizeof(A)/sizeof(A[0]); This is useless as array pass by reference (address)
    //printf("SOE - Size of A =  %d, size of A[0] = %d", sizeof(A),sizeof(A[0]));
    for(i=0; i<size;i++){
        sum=sum+A[i]; // A[i] is *(A+1)
    }
    return sum;
}

void Double(int* A, int size){
    int i, sum=0;
    for(i=0; i<size;i++){
        A[i]=2*A[i];
    }
    
}

int main(){

    int A[]={1,2,3,4,5};
    int size =sizeof(A)/sizeof(A[0]);
    int total=SumOfElements(A,size); // A can be used for &A[0]
    printf("\n\nThe total of elements is: %d",total);
    
    //printf("\n\nMain - Size of A = %d, size of A[0] = %d", sizeof(A),sizeof(A[0]));
    
    
    //Doubling the value---Call by reference so there is change
    Double(A,size);
    int i;
    for(i=0;i<size;i++){
        printf("\n %d ",A[i]);
    }


    return 0;
}