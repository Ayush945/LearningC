#include <stdio.h>


void Increment (int a){
    a=a+1;
}

void PointerIncrement(int* a){
    *a=*a+1;
}

int main(){

    int a;
    a=10;
    
    //Copy-Value
    Increment(a);
    printf("a without pointer= %d",a);

    //Real-Reference
    PointerIncrement(&a);
    printf("\na with pointer=%d",a);
    return 0;
}