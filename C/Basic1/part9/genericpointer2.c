#include <stdio.h>

int main(){
     
    int x=5;
    int *p =&x;
    *p=6; //dereferencing
    int **q=&p;
    int ***r=&q;

    printf("%d\n",*p); //value pointed by p i.e 6
    printf("%d\n",*q); //Address of p
    printf("%d\n",**q); // 6
    printf("%d\n",**r); // address of p
    printf("%d\n",***r); // 6
    
    ***r=10; //changes the value of x
    printf("x = %d\n",x);

    **q=*p+2;
    printf("x = %d\n",x);
    
    return 0;
}