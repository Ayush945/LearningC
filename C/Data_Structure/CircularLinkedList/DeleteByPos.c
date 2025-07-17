#include <stdlib.h>
#include <stdio.h>

struct Node {

    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head;

struct Node* GetNewNode(int num){
    struct Node* temp=(struct Node*) malloc(sizeof(struct Node));
    temp->data=num;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}

void InsertAtHead(int num){
    struct Node* newNode=GetNewNode(num);
    if(head==NULL){
        head=newNode;
        newNode->next=newNode;
        newNode->prev=newNode;
        return;
    }

    struct Node* last=head->prev;
    
    newNode->next = head;
    newNode->prev = last;
    last->next = newNode;
    head->prev = newNode;

    head = newNode;
}

void AddAtPos(int data,int pos){

}

void ReplaceByPos(int data,int pos){

}

void DeleteByPos(int pos){

}

void Print(){
    if(head==NULL)return;
    struct Node* temp=head;
    printf("List is: ");
    do{
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("\n");
}

int main(){
    head=NULL;
    InsertAtHead(5);
    InsertAtHead(4);
    InsertAtHead(3);
    InsertAtHead(2);
    InsertAtHead(1);
    Print();
    AddAtPos(9,3);
    Print();
    ReplaceByPos(7,2);
    Print();
    DeleteByPos(3);
    Print();
    
    return 0;
}