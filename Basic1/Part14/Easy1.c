#include <stdio.h>
#include <stdlib.h>

int IncreaseNumber(int* num){

    *num=*num+1;
    return *num;
}

struct Student{
    char name[50];
    int age;
    float marks;
};

int main(){

    //Pointer question 14,15,16

    int num =2;
    int* pNum=&num;
    int newNum=IncreaseNumber(pNum);
    printf("\nThe new number is = %d\n",newNum);
    
    int arr[5]={2,5,10,14,25};
    printf("The values of array are : %d,%d,%d,%d,%d",*arr,*(arr+1),*(arr+2),*(arr+3),*(arr+4));
    printf("\n");
    int temp;
    temp=*arr;
    
    *arr=*(arr+4);
    *(arr+4)=temp;

    temp=*(arr+1);
    *(arr+1)=*(arr+3);
    *(arr+3)=temp;

    printf("The new array are : %d,%d,%d,%d,%d",*arr,*(arr+1),*(arr+2),*(arr+3),*(arr+4));
    
    //Dynamic Memory Allocation --- question 17,18
    // int* newArray= (int*) malloc(2*sizeof(int)); //stores heap address in newArray

    
    // printf("\n");
    // printf("Enter a number:");
    // scanf("%d",newArray);
    // printf("\n");
    // printf("Enter a number:");
    // scanf("%d",newArray+1);
    
    // printf("The sum is : %d",*(newArray)+*(newArray+1));
    // printf("\n");

    // int* rellarr=(int*)realloc(newArray,4*sizeof(int));

    // free(rellarr);

    // Dynamic Memory Allocation --- question 19

    int i,n=2;

    //Allocating memory for n students of type struct pointer
    struct Student* students =(struct Student*)malloc(n*(sizeof(struct Student)));

    //Safety if malloc doesnt work and allocateY address
    if(students==NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(i=0;i<n;i++){
        printf("\nEnter details for student %d:\n",i+1);
        printf("Name: ");
        scanf(" %s",students[i].name);
        printf("Age: ");
        scanf("%d",&students[i].age);
        printf("Marks: ");
        scanf("%f",&students[i].marks);
    }

    printf("\n\nStudent Details: \n");
    for(i=0;i<n;i++){
        printf("Student %d: Name = %s, Age = %d, Marks = %.2f\n",i+1,students[i].name,students[i].age,students[i].marks);
    }


    free(students);
    

    return 0;
}