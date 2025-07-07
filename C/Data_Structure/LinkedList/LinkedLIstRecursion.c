/** Tried to reverse linked list through recursion, Failed */
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


struct Node* head;

//Insert from head;
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

// Print linked list in forward order .... 1,2,3,4,5
void ForwardRecursion(struct Node* p){
    if(p==NULL) return; //Exit condition
    printf("%d",p->data); // First print the value in the node
    ForwardRecursion(p->next); //Recursive call
}

// Print linked list in reverse order .... 5,4,3,2,1
void ReverseRecursion(struct Node* p){
    if(p==NULL) return;
    ReverseRecursion(p->next);
    printf("%d",p->data);
}

int main(){
    head=NULL;
    Insert(5);
    Insert(4);
    Insert(3);
    Insert(2);
    Insert(1);
    Print(); // 1,2,3,4,5
    printf("\n");
    printf("New list from recursion: ");
    ForwardRecursion(head);
    printf("\n");
    printf("Reverse print: ");
    ReverseRecursion(head);
    return 0;
}