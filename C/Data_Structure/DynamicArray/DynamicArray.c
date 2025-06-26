#include <stdio.h>
#define MAX_SIZE 10


int main(){
    int number =10;
    //Time to start data structure in C
    int array[MAX_SIZE];
    
    for(int i=0; i<MAX_SIZE;i++){

        array[i]=number;
        number=number+10;
    }

    for(int i=0; i<MAX_SIZE;i++){

        printf("\nPrinting integers: %d",array[i]);
    }
    
    return 0;
}