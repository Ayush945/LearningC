#include <stdio.h>

int main(){
    
    int age=19;
    int *pAge=&age;

    age=25;
    *pAge=256;

    printf("The age is %d.\n",age);
    printf("The age is %d.\n",*pAge);
    return 0;
}