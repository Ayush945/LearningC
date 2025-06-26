#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    while(head==NULL){
        head=temp;
    }
    struct Node* temp2=head;
    
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    if(&(*temp)!=&(*temp2)){
        temp2->next=temp;

    }
   
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

void InsertAtNthPosition(int pos, int x){
    struct Node* temp1=head;
    for(int i=0;i<pos;i++){
        temp1=temp1->next;
    }

    struct Node* temp2=head;
    for(int i=0;i<pos-1;i++){
        temp2=temp2->next;
    }

    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=temp1;
    temp2->next=temp;
}

int main(){
    head=NULL;
    int n,i,x;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        printf("Enter number: ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    printf("\n");
    int pos;
    printf("Enter the nth position to insert (1-n): ");
    scanf("%d",&pos);
    if(pos<=n){
        printf("\nEnter the number to insert: ");
        scanf("%d",&x);
        InsertAtNthPosition(pos,x);
        Print();
    }else{
        printf("\n\nNo such position exists.");
    }
    return 0;
}