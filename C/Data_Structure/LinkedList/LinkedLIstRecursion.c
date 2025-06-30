#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

//Insert from head;
void Insert(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->data=head;
    head=temp;    
}

void Print(){
    struct Node* temp;
    printf("List is: ");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct Node* head;
int main(){
    head=NULL;
    return 0;
}