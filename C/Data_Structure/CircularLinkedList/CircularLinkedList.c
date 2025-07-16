#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head;

void InsertAtTail(int num){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=NULL;
    temp->prev=NULL;

    if(head==NULL){
        head=temp;
        temp->next=head;
        temp->prev=head;
        return;
    }
    struct Node* tail=head->prev;
    tail->next=temp;
    temp->prev=tail;
    temp->next=head;
    head->prev=temp;
}

void Print(){
    if(head==NULL) return;
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
    InsertAtTail(1);
    InsertAtTail(2);
    InsertAtTail(3);
    InsertAtTail(4);
    InsertAtTail(5);
    Print();
    return 0;
}