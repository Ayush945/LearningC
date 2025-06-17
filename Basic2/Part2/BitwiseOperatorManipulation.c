#include <stdio.h>

int main(){
    char a =0b10101100;

    int bit3 = (a>>3)&1; //Get bit at position 3 (counting from 0)
    a |=(1<<5); 
    a &= ~(1<<2);
    printf("%d",bit3);
    return 0;
}