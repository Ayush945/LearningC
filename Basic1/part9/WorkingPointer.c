#include <stdio.h>

int main(){
    int a=10;
    int* p;
    p=&a;
    //int *p=&a;
    //int* p=&a;
    // printf("a=%d\n",a);
    // *p=12; //dereferencing
    // printf("a=%d\n",a);

    //Pointer arithmetic
    printf("%p\n",p);
    printf("The size of interger: %d \n",sizeof(int));
    printf("%p\n",p+1);

    printf("%d\n",*p); //10
    printf("%d\n",*p+1); //11
    
    printf("%d\n",*(p+1)); //garbage value


    return 0;
}