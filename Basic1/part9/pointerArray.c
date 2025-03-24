#include <stdio.h>


void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    // printf("The value of Swap X is: %d.\n",a);
    // printf("The value of Swap Y is: %d.\n",b);
}

void swapPointer(int *pX,int *pY){
    int temp;
    temp=*pX;
    *pX=*pY;
    *pY=temp;
}



int main(){

    // void *pI;
    // pI=&pI;
    
    // printf("Address of pI: %p\n",(void*)&pI);
    // printf("Value stored in pI: %p\n",pI);
    
    int x=10;
    int y=20;

    swap(x,y);
    printf("The value of x without pointer is: %d.\n",x);
    printf("The value of y without pointer is: %d.\n",y);
    
    swapPointer(&x,&y);
    printf("The value of x after swap pointer is: %d.\n",x);
    printf("The value of y after swap pointer is: %d.\n",y);   

    return 0;
}