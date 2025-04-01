#include <stdio.h>

void printElement(int* arr, int size){

    for(int i=0; i<size;i++){
        printf("\nFunction value in array = %d ",*(arr+i));
    }
}

int main(){
    // Easy question 1
    int num[]={1,2,3,4,5};
    int *pNum=num;

    for(int i=0; i<5;i++){
        printf("Value of array = %d\n",*pNum);
        pNum++;
    }
    pNum=num;

    // Easy question 2
    int arr[5]={10,20,30,40,50};
    int* pArr=arr;
    printf("\n3rd Element of array = %d\n",*(pArr+2));
    
    // Easy question 3
    char str[] ="Hello";
    char* pStr=str;
    
    while (*pStr!='\0'){
        printf("\nCharacter in array = %c",*pStr);
        pStr++;
    }
    printf("\n");

    // Easy question 4
    int numArr[] = {100,200,300,400,500};
    int* pNumArr=numArr;
    int arrSize =sizeof(numArr)/sizeof(numArr[0]);
    printElement(pNumArr,arrSize);
    printf("\n");
    
    return 0;
}