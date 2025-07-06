/** Linked list without any function */

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data; // 4 bytes
    struct Node* next; // 8 bytes --- store address of next node in list
};

// void createNode(int data, struct *Node nextAddr){

    
// } 

int main(){
    //Implementation of linked list
    struct Node* node=NULL;
    struct Node*temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=1;
    temp->next=NULL;
    node=temp;

    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=2;
    temp->next=NULL;
    
    struct Node* temp1=node;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
    
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=3;
    temp->next=NULL;

    temp1=node;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;




    //Parsing through Linked List 
    struct Node* temp2=node;
    while(temp2!=NULL){
        printf("Data: %d\n",temp2->data);
        temp2=temp2->next;
        
    }
    return 0;


}