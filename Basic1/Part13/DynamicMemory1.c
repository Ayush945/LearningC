#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    
    //using malloc
    // int *A =(int*)malloc(n*sizeof(int)); // Dynamically allocated array using malloc

    // int* temp=A;

    // //Writing using pointer
    // for(int i=0;i<n;i++){
    //     *(A+i)=i+1;
    // }

    // for(int j=0;j<n;j++){
    //     printf("\nThe values in array = %d",*(A+1));
    //     A++;
    // }
    // free(temp);


    //using Calloc
    // int *A =(int*)calloc(n,sizeof(int)); // Dynamically allocated array using calloc

    // int* temp=A;

    //Writing using pointer
    // for(int i=0;i<n;i++){
    //     *(A+i)=i+1;
    // }

    // for(int j=0;j<n;j++){
    //     printf("\nThe values in array = %d",*(A+1));
    //     A++;
    // }
    // free(temp);
    // free(A);
    // temp=NULL;
    // A=NULL;

    
    // Using realloc

    int *A =(int*)calloc(n,sizeof(int)); // Dynamically allocated array using realloc


    for(int i=0;i<n;i++){
        *(A+i)=i+1;
    }

    printf("\nPrev bloc address = %p\n",A);

    printf("Before realloc:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(A + i));
    }


    int* B=(int*)realloc(A, (n/2)*sizeof(int));

    //int* B=(int*)realloc(A, 0); --- free(A) equivalent

    //int* B=(int*)realloc(NULL, n*sizeof(int)); //equivalent to malloc

    printf("\nNew address = %p \n",B);

    printf("\n\nAfter realloc (shrunk):\n");
    for(int i=0;i<n;i++){
        printf("\nThe value = %d",*(B+i));
    }
     

    return 0;

}