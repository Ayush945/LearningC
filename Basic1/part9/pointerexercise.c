#include <stdio.h>

int main(){

    int num=1;
    int *pNum;

    pNum=&num;
    *pNum=10;
    printf("The number is: %d.\n",num);
    printf("The address of number is: %p.\n",pNum);
    return 0;
}