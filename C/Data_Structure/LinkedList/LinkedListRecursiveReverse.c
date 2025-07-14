#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


struct Node* head;

void Insert(int n){

    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=n;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        return;
    }
    
    struct Node* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next = temp;
}

void ReverseLinkedListRecursion(struct Node* p){
    if(p->next==NULL){
        head=p;
        return;
    }
    ReverseLinkedListRecursion(p->next);
    struct Node* q=p->next;
    q->next=p;
    p->next=NULL;
}

void PrintLinkedList(){

    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main(){
    head=NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    PrintLinkedList();
    ReverseLinkedListRecursion(head);
    PrintLinkedList();
    
    return 0;
}