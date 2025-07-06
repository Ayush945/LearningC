/** Creating Linked List */

#include<stdio.h>
#include<stdlib.h>

//Node
struct Node{
    int data;
    struct Node* next;
};

//Main pointer to node which stores the first node of linked list---helps in traversal of linked list
struct Node* head;


//Insert element on beginning of linked list.
void Insert(int x){

    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;  
}

void Print(){

    struct Node* temp=head;
    printf("List is: ");
    while (temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main(){
    head=NULL; // empty
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter the number \n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }


    return 0;
}