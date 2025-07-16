#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head;

struct Node* GetNewNode(int num){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}

void InsertAtTail(int num){
    struct Node* temp=GetNewNode(num);
    if(head==NULL){
        head=temp;
        return;
    }
    struct Node* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->prev=temp1; 
}

void InsertAtHead(int x){
    struct Node* newNode=GetNewNode(x);
    if(head==NULL){
        head=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}


void Print(){
    struct Node* temp=head;
    printf("Forward: ");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void ReversePrint(){
    struct Node* temp=head;
    if(temp==NULL) return;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    //Traversing backward using prev pointer
    printf("Reverse: ");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

void FreeList(){
    struct Node* temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}


int main(){
    head=NULL;
    InsertAtTail(1);
    InsertAtTail(2);
    InsertAtTail(3);
    InsertAtTail(4);
    InsertAtTail(5);
    InsertAtHead(9);
    InsertAtHead(8);
    InsertAtHead(7);
    Print();
    ReversePrint();
    FreeList();
    return 0;
}