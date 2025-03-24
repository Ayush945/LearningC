#include <stdio.h>

int main(){

    // unsigned int a;
    // long long int b;
    // a=12;
    // b=15;
    // printf("The value is: %d",a);
    // printf("\nThe value is: %lld",b);
    // printf("\n%d bytes",(int)sizeof(long long int));

    int myInt;
    myInt=0xFFFFFFE2; //-30
    printf("%x\n",myInt); //hex value
    printf("%d\n",myInt);//hex to decimal
    int num1 = 0b00000000000000000000000001000101;  // Binary representation of 69 (4 bytes)
    int num2 = 0b00000000000000000000000000001100;  // Binary representation of 12 (4 bytes)

    printf("num1: %d\n", num1);  // Outputs 69
    printf("num2: %d\n", num2);  // Outputs 12

    return 0;
}