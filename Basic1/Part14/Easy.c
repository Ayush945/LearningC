#include <stdio.h>

int main(){

    // Question 1 ---- 10
    
    //Question 2
    int x=10,y=20,temp;
    
    // Question 4
    int* pX=&x; 
    int* pY=&y;
    temp=*pX;
    *pX=*pY;
    *pY=temp;

    //Question 3
    printf("Address of X = %p",pX);

    /* Strings 
        Question --- 11
    */ 
    



    return 0;
}