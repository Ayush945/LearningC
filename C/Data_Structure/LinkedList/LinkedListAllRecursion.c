#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int num){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        return head;
    }
    struct Node* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;

    return head;
}

// Print and access by recursion forward
void RecursionForward(struct Node* head){
    if(head==NULL){
        return;
    }
    printf("%d",head->data);
    RecursionForward(head->next);
}


// Print and access by recursion backward
void RecursionBackward(struct Node* head){
    if(head==NULL){
        return;
    }
    RecursionBackward(head->next);
    printf("%d",head->data);
}

// Reverse Linked list by recursion
struct Node* RecursionReverse(struct Node* head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    struct Node* newHead=RecursionReverse(head->next);
    struct Node* temp=head->next;
    temp->next=head;
    head->next=NULL;
    return newHead;
}

//Reverse by Iterative method 

void Print(struct Node* head){
    printf("List is: ");
    while(head!=NULL){
        printf("%d",head->data);
        head=head->next;
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
    RecursionForward(head);
    printf("\n");
    RecursionBackward(head);
    head=RecursionReverse(head);
    printf("\n");
    Print(head);
    return 0;
}