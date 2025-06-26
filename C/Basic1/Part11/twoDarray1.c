#include <stdio.h>

int main(){

    int arr[3][3];
    int (*pArr)[3]=arr;

    printf("\n\nAddress of whole 2-D array = %p",pArr);
    
    printf("\n\nAddress of 1st 1-D array = %p",*pArr);
    printf("\nAddress of 1st element in 1st 1-D array = %p",*(pArr)+0);
    printf("\nAddress of 2nd element in 1st 1-D array = %p",*(pArr)+1);
    printf("\nAddress of 3rd element in 1st 1-D array = %p",*(pArr)+2);
    
    printf("\n\nAddress of 2nd 1-D array = %p", *(pArr + 1));  
    printf("\nAddress of 1st element in 2nd 1-D array = %p", *(pArr + 1) + 0);
    printf("\nAddress of 2nd element in 2nd 1-D array = %p", *(pArr + 1) + 1);
    printf("\nAddress of 3rd element in 2nd 1-D array = %p", *(pArr + 1) + 2);

    printf("\n\nAddress of 3rd 1-D array = %p", *(pArr + 2));  
    printf("\nAddress of 1st element in 3rd 1-D array = %p", *(pArr + 2) + 0);
    printf("\nAddress of 2nd element in 3rd 1-D array = %p", *(pArr + 2) + 1);
    printf("\nAddress of 3rd element in 3rd 1-D array = %p", *(pArr + 2) + 2); 
    return 0;
}