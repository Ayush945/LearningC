#include <stdio.h>

#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;

void Push(int x){
    if(top==MAX_SIZE-1){
        printf("Error: stack overflow\n");
        return;
    }
    A[++top]=x; // ++top pre increment so increment then assignment.
}

void Pop(){
    if(top==-1){
        printf("Error: No element to pop\n");
        return;
    }
    top--;
}

int Top(){
    return A[top];
}

void Print(){
    int i;
    printf("Stack: ");
    for(i=0;i<=top;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(){
    Push(2);
    Print();
    Push(8);
    Print();
    Push(6);
    Print();
    Pop();
    Print();
    Push(9);
    Print();
    return 0;
}