#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        return head;
    }

    struct Node* temp2=head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp;
    return head;
}

struct Node* ReverseRecursion(struct Node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }

    struct Node* newHead=ReverseRecursion(head->next);
    struct Node* temp=head->next;
    temp->next=head;
    head->next=NULL;
    return newHead;
}

void Print(struct Node* head){
    struct Node* temp=head;
    printf("List is: ");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    struct Node* head=NULL;
    head=Insert(head,1);
    head=Insert(head,2);
    head=Insert(head,3);
    head=Insert(head,4);
    head=Insert(head,5);
    Print(head);
    head=ReverseRecursion(head);
    Print(head);

    return 0;
}