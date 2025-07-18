#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* link;
};

struct Node* top=NULL;

void Push(int num){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->link=top;
    top=temp;
}

void Pop(){
    struct Node* temp;
    if(top==NULL)return;
    temp=top;
    top=top->link;
    free(temp);
}

int Top(){
    int num=top->data;
    return num;
}
void IsEmpty(){
    printf("\n");
    if(top==NULL){
        printf("Stack is empty");
        return;
    }
    printf("Stack is not empty");
    
}

void ClearStack(){
    if(top!=NULL){
        Pop();
    }
}


int main(){
    IsEmpty();
    Push(2);
    Push(1);
    Push(4);
    Push(5);
    Push(3);
    Push(9);
    printf("\n");
    printf("%d",Top());
    IsEmpty();
    ClearStack();
    return 0;
}