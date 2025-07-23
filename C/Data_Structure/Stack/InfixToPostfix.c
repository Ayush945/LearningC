#include <stdio.h>
#include <string.h>
#include <ctype.h>


int Arr[20];
int top=-1;

void Push(int num){
    Arr[++top]=num;
}

void Pop(){
    top--;
}

int Top(){
    return Arr[top];
}

int IsEmpty(){
    return top==-1;
}



int main(){
    char C[10];
    printf("Enter Infix to convert to Postfix: "); // Infix expression: A*B+C (Without Parentheses)
    fgets(C,sizeof(C),stdin);
    C[strcspn(C,"\n")]= '\0';
    int num=(int)strlen(C);
    
    return 0;
}