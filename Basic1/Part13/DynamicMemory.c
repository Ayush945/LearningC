#include <stdio.h>
#include <stdlib.h>
int main(){

    int a=10;

    int* p;
    p= (int*) malloc(sizeof(int));
    *p=20;

    printf("\nThe value in Heap = %d ",*p);
    printf("\nThe value in Stack = %d ",a);
    free(p);
    //p=NULL;
    printf("\nThe value in Heap after free = %d ",*p);
    return 0;
}