#include <stdio.h>

int main(){

    int array[2][3]={{1,2,3},{4,5,6}};

    printf("\n\nAddress of array = %p",array);
    
    
    printf("\n\nAddress of 1st 1d array = %p",*array);
    printf("\nValue of 1st element in 1d array = %d",*(*array));
    printf("\nValue of 2nd element in 1d array = %d",*(*array+1));
    printf("\nValue of 3rd element in 1d array = %d",*(*array+2));

    printf("\n\nAddress of 2nd 1d array = %p",*(array+1));
    printf("\nValue of 1st element in 2d array = %d",*(*(array+1)));
    printf("\nValue of 2nd element in 2d array = %d",*(*(array+1)+1));
    printf("\nValue of 3rd element in 2d array = %d",*(*(array+1)+2));
    return 0;
}