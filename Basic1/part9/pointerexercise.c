#include <stdio.h>

int main(){

    int num;
    int *pNum;

    pNum=&num;
    num=10;
    printf("The value of pointerNum is %p.\n",pNum);//address pointed to num by pointer
    printf("The value of num is: %d.\n",num);//value of num
    printf("The address of num is %p.\n",&num);//address of num
    printf("The address where pointer is stored: %p.\n",&pNum);// address of pointer
    
    //This is also called dereferencing.
    *pNum=8;
    printf("The value pointed by pointer %d.\n",*pNum);//value pointed to num by pointer
    printf("The value of num is: %d.\n",num);//value of num
    return 0;
}