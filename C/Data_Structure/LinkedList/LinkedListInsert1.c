/** Creating linked list*/


#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void InsertAtFirst(struct Node** head, int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=*head;
    *head=temp;
}

void PrintData(struct Node* head){
    printf("\n");
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
    int n,i,x;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the number: ");
        scanf("%d",&x);
        InsertAtFirst(&head,x);
        PrintData(head);
    }

    return 0;
}