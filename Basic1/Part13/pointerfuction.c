#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld(){
    printf("Hello world\n");
}

int* Add(int* a, int* b){ // Called function - returns pointer to integer
    
    //a and b pointer to integer local to Add

    // printf("Adress of a in Add = %p\n",&a); // Address of pointer variable
    // printf("Value of a of Add (address of a of main) = %p\n",a);
    // printf("Value at address stored in a of Add = %d\n",*a);
    
    //Instead of this
    //int c= (*a)+(*b);
    //return &c;

    // This is used
    int* c =(int*) malloc(sizeof(int));
    *c=*(a)+*(b);
    return c;


}

int main(){ // Calling function

    int a=2, b=4;
    //printf("Adress of a in Main = %p\n",&a);

    // Call by value
    //int c=Add(a,b); // Value of a in main is copied to a of Add
                    // Value of b in main is copied to b of Add
    
    
    // Call by reference
    int* ptr =Add(&a,&b); // a and b are integers local to main
    PrintHelloWorld();
    printf("Sum = %d\n",*ptr);
    return 0;
}