/*** Delete Linked List based on the value.*/

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
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    struct Node* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;

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

void Delete(int n){
    struct Node* temp=head;
    if(temp->data==n){
        head=temp->next;
        free(temp);
        return;
    }
    
    while(temp->data!=n){
        temp=temp->next;
    }
    struct Node* temp1=temp;
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
}

int main(){
    head=NULL;
    Insert(3);
    Insert(1);
    Insert(5);
    Insert(6);
    Insert(9); //List is: 3,1,5,6,9
    Print();
    printf("\n");
    int n;
    printf("Which number to delete from list: ");
    scanf("%d",&n);
    Delete(n);
    Print();
    return 0;
}