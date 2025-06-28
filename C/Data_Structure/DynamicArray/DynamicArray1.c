#include <stdio.h>

int main(){

    int num, size=4;
    int arr[size]={};
    
    for(int i=0;i<size;i++){
        if(i==size-1){
            size=size+size;
        }
        if(num==0){
            break;
        }
        printf("Enter a number: ");
        scanf("%d",&num);
        arr[i]=num;        
    }
    printf("\n");
    printf("Size is : %d\n",size);
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            break;
        }
        printf("%d ",arr[i]);
    }
    printf("\n");
}