#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

//Takes constant time
void InsertAtHead(int num){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=head;
    head=temp;
}

int Top(){
    return head->data;
}
void Pop(){
    struct Node* temp=head;
    head=head->next;
    free(temp);
}

void IsEmpty(){
    if(head==NULL){
        printf("Stack is empty");
    }
    else{
        printf("Stack is not empty");
    }
}

void ClearStack(){
    if(head!=NULL){
        Pop();
    }
}

int main(){
    head=NULL;
    IsEmpty();
    InsertAtHead(5);
    InsertAtHead(4);
    InsertAtHead(3);
    InsertAtHead(2);
    InsertAtHead(1);
    
    printf("\n");
    printf("%d",Top());
    Pop();
    printf("\n");
    printf("%d",Top());
    
    printf("\n");
    IsEmpty();
    ClearStack();
}