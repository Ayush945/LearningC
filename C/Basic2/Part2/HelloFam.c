#include <stdio.h>
#include <stdlib.h>
int main(){

    printf("Hello there, my friend");
    printf("\nShould start with implementation of linked list");
    printf("\nUnderstanding Linked List.");

    //Access direct memory from C.
    //int *ptr=(int *)0x000009BDCDFFC38; mostly no allowed so used dynamic memory

    int* ptr=(int*) malloc(sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated");
    }

    *ptr = 42;

    printf("\nThe location of pointer: %p",ptr);
    printf("\n");
    printf("The value of pointer: %d",*ptr);

    free(ptr);
    return 0;
}