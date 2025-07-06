/** Delete a node from linked list on Nth position*/


#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data){ //insert an integer at end of list
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

void Print(){//print all elements in the list
    struct Node* temp=head;
    printf("List is: ");
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

void Delete(int n){//delete node at positio n
    struct Node* temp1=head;

    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    //for n-1 position
    for(int i=0;i<n-2;i++){
        temp1=temp1->next;
    }
    struct Node* temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}

int main(){

    head=NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5); //List is 1,2,3,4,5
    Print();
    printf("\n");
    int n;
    printf("Enter a position: ");
    scanf("%d",&n);
    printf("\n");
    Delete(n);
    Print();

    return 0;
}