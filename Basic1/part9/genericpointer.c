#include <stdio.h>

int main(){

    int a =1025;
    int *p;
    p=&a;
    printf ("Size of integer is %d bytes\n",sizeof(int));
    printf("Address = %d, value = %d\n",p,*p);

    //Void pointer - Generic pointer
    void *p0;
    p0=p;
    printf("Address %d\n",p0);
    //printf("value =%d",*p0); -Not allowed, as it is generic
    return 0;
} 