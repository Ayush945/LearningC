#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, aSize;
    int *randomNums;
    time_t t;

    double total=0;
    int biggest,smallest;
    float average;

    srand(time(&t));
    printf("How many random numbers do you want in your array? ");
    scanf(" %d",&aSize);

    randomNums=(int *) malloc(aSize *sizeof(int));

    if(!randomNums){
        printf("Random array allocation failed!\n");
        exit(1);
    }

    for(i=0;i<aSize;i++){
        randomNums[i]=(rand() % 500)+1;

    }

    biggest=0;
    smallest=500;

    for(i=0;i<aSize;i++){
        total+=randomNums[i];
        if(randomNums[i]>biggest){
            biggest=randomNums[i];
        }
        if(randomNums[i]<smallest){
            smallest=randomNums[i];
        }
    }

    average=((float)total)/((float)aSize);
    printf("The biggest random number is %d.\n",biggest);
    printf("The smallest random number is %d.\n",smallest);
    printf("The average of the random number is %.2f/\n",average);

    free(randomNums);

    return 0;
}