#include <stdio.h>
#include <stdlib.h>


//Structure for Stack and Node

struct Node{
    int data;
    struct Node* next;
};

struct Stack{
    struct Node* data;
    struct Stack* link;
};

//Head pointer for stack and linked list
struct Stack* top=NULL;
struct Node* head;

//Push element into stack
void Push(struct Node* x){
    struct Stack* temp=(struct Stack*)malloc(sizeof(struct Stack));
    temp->data=x;
    temp->link=top;
    top=temp;
}

//Obtains the top element of stack
struct Node* Top(){
    return top->data;
}

//Remove the top element of stack
void Pop(){
    struct Stack* temp=top;
    top=temp->link;
    free(temp);
}

//Insert into linked list at head
void InsertAtHead(int num){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=head;
    head=temp;
}

int IsEmpty(){
    return top==NULL;
}

//Reverse the linked list
void Reverse(){
    struct Node* temp=head;
    while(temp!=NULL){
        Push(temp);
        temp=temp->next;
    }
    struct Node* temp1=Top();
    head=temp1;
    Pop();
    while(!IsEmpty()){
        temp1->next=Top();
        Pop();
        temp1=temp1->next;
    }
    temp1->next=NULL;
}


//Print linked list
void Print(){
    struct Node* temp=head;
    printf("List is: ");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
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
    Reverse();
    Print();
    return 0;
}