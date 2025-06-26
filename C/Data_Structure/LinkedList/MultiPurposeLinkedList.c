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

}

// Add a number to linked list at first position
void InsertAtHead(int num){

}

// Add a number to linked list at n position
void InsertAtNPosition(int num,int pos){

}

// Delete a number from linked list at n position
void DeleteByPosition(int pos){

}

void DeleteTheNumber(int num){

}

// Reverse Linked List
void Reverse(){

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
    
    while(!exitFlag){
        printf("\n1. Insert number at last of linked list.");
        printf("\n2. Insert number at beginning of linked list.");
        printf("\n3. Insert number at nth place in linked list.");
        printf("\n4. Delete a number by position");
        printf("\n5. Delete the number.");
        printf("\n6. Reverse the linked list");
        printf("\n7. Exit");
        printf("\n\nPlease choose any one of the option: ");
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
                Reverse();
                break;
            case 7:
                Print();
                break;   
            case 7: 
                exitFlag=1;
                break;
            default:
                printf("Invalid Choice");
                break;
        }
    }
    
    
    return 0;
}