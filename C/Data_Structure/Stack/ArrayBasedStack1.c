// Using simple program to demonstrate implementation of stack based on array.

#include <stdio.h>
#define MAX_SIZE 10

int Arr[MAX_SIZE];
int top=-1;

void Push(int num){
    if(top==MAX_SIZE-1){
        printf("Array is full, need to extend the size of array");
        return;
    }
    top=top+1;
    Arr[top]=num;
}

void Pop(){
    if(top==-1){
        Printf("No more elements left");
        return;
    }
    top--;
}

void Top(){
    printf("%d",Arr[top]);
}

void IsEmpty(){
    if(top==-1){
        printf("Message: Stack is empty");
        return;
    }
    printf("Message: Stack is not empty");
}
void Print(){
    int i;
    for(i=0;i<=top;i++){
        printf("%d",Arr[i]);
    }
    printf("\n");
}

int main(){
    Push(1);Print();
    Push(2);Print();
    Pop();Print();
    Push(3);Print();
    Push(4);Print();
    Pop();Print();
    Push(5);Print();
    IsEmpty();
    return 0;
}