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
    struct Node* node=GetNewNode(data);
    struct Node* temp=head;
    for(int i=0;i<pos-2;i++){
        temp=temp->next;
    }
    node->prev=temp;
    node->next=temp->next;
    struct Node* temp2=temp->next;
    temp->next=node;
    temp2->prev=node;
}

void ReplaceByPos(int data,int pos){
    struct Node* temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    temp->data=data;
}

void DeleteByPos(int pos){
    struct Node* temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    struct Node* temp2=temp;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp2);
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
    InsertAtHead(5); // List: 5
    InsertAtHead(4); // List: 4 5
    InsertAtHead(3); // List: 3 4 5
    InsertAtHead(2); // List: 2 3 4 5
    InsertAtHead(1); // List: 1 2 3 4 5
    Print();         // => List is: 12345

    AddAtPos(9,3);   // List: 1 2 9 3 4 5
    Print();         // => List is: 129345

    ReplaceByPos(7,2); // 2nd element becomes 7 -> List: 1 7 9 3 4 5
    Print();           // => List is: 179345

    DeleteByPos(3);    // Delete 3rd element (9) -> List: 1 7 3 4 5
    Print();           // => List is: 17345

    
    return 0;
}