#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// int absolute_compare(int a, int b){
//     if(abs(a)>abs(b)) return 1;
//     return -1;
// }

// void BubbleSort(int* A,int n, int(*compare)(int,int)){
//     int i,j,temp;
//     for(i=0;i<n;i++){
//         for(j=0;j<n-1;j++){
//             if(compare(A[j],A[j+1])>0){
//                 temp =A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//             }
//         }
//     }
// }

int compare(const void* a, const void* b){
    int A =*((int*)a); // typecasting to int* and getting value
    int B =*((int*)b);

    //return A-B;
    //return B-A;
    return abs(A)-abs(B);
}



int main(){
    int i, A[]={-31,22,-1,50,-6,4}; // => {-1,4,-6,22,-31,50}
    qsort(A,6,sizeof(int),compare);
    
    for(i=0;i<6;i++)printf(" %d ",A[i]);
    return 0;
}