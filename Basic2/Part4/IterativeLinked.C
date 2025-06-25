#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    head=temp;
}

void Print(){
    struct Node* temp=head;
    printf("List is: ");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void PrintReverse(){
    struct Node* temp=head;
}
int main(){
    head=NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Insert(6); //List is 6,5,4,3,2
    Print(); //List is 6,5,4,3,2
    printf("\n");
    PrintReverse(); //List is 2,3,4,5,6
    return 0;
}