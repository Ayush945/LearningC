#include <stdlib.h>
#include <stdio.h>

int main(){

    int *temps; //will point to the first heap value
    temps=(int *) malloc(10*sizeof(int));

    if(!temps){
        printf("Oops! Not Enough Memory!\n");
        exit(1);
    }

    free(temps);
    return 0;
}