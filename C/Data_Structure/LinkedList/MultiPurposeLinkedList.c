#include <stdio.h>
#include <stdlib.h>

// Structure for Node
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

// Add a number to linked list at last position
void Insert(int num){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
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

// Add a number to linked list at first position
void InsertAtHead(int num){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=head;
    head=temp;
}

// Add a number to linked list at n position
void InsertAtNPosition(int num,int pos){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=NULL;
    if(pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    struct Node* temp1;
    temp1=head;
    for(int i=0;i<pos-2;i++){
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}

// Delete a number from linked list at n position
void DeleteByPosition(int pos){
    if(pos==1){
        struct Node* temp=head;
        head=temp->next;
        free(temp);
        return;

    }
    struct Node* temp=head;
    for (int i=0;i<pos-2;i++){
        temp=temp->next;
    }
    struct Node* temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);

}

// Delete by number in linked list;
void DeleteTheNumber(int num){
    struct Node* temp=head;
    if(temp->data==num){
        head=temp->next;
        free(temp);
        return;
    }

    while (temp->data!=num){
        temp=temp->next;
    }
    struct Node* temp1=temp->next;
    if(temp1->next==NULL){
        temp->next=NULL;
        free(temp1);
        return;
    }
    temp->next=temp1->next;
    free(temp1);
}

// Reverse Linked List
void ReverseWithLoop(){
    struct Node* prev, *current, *next;
    
}

// Print Linked List
void Print(){
    struct Node* temp=head;
    printf("List is: ");
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    head=NULL;
    int choice,num,pos,exitFlag=0;
    printf("\n1. Insert number at last of linked list.");
    printf("\n2. Insert number at beginning of linked list.");
    printf("\n3. Insert number at nth place in linked list.");
    printf("\n4. Delete a number by position");
    printf("\n5. Delete the number.");
    printf("\n6. Reverse the linked list");
    printf("\n7. Display linked list");
    printf("\n8. Exit");
    
    while(exitFlag!=1){
        printf("\n\nPlease choose any one of the option (1-8): ");
        scanf("%d",&choice);
        switch(choice){

            case 1:
                printf("\nEnter a number: ");
                scanf("%d",&num);
                Insert(num);
                break;
            case 2:
                printf("\nEnter a number: ");
                scanf("%d",&num);
                InsertAtHead(num);
                break;
            case 3:
                printf("\nEnter a number: ");
                scanf("%d",&num);
                printf("\nEnter the position: ");
                scanf("%d",&pos);
                InsertAtNPosition(num,pos);
                break;
            case 4:
                printf("\nEnter the position: ");
                scanf("%d",&pos);
                DeleteByPosition(pos);
                break;
            case 5:
                printf("\nEnter a number: ");
                scanf("%d",&num);
                DeleteTheNumber(num);
                break;
            case 6:
                ReverseWithLoop();
                break;
            case 7:
                Print();
                break;   
            case 8: 
                exitFlag=1;
                break;
            default:
                printf("Invalid Choice");
                break;
        }
    }
    
    
    return 0;
}