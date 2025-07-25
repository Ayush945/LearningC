/** Add node from head */

#include <stdio.h>
#include <stdlib.h>

struct Node* head;
struct Node{
    int data;
    struct Node* next;
};

void Insert(int x){

    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
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

int main(){
    head=NULL;
    int n,i,x;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    return 0;
}