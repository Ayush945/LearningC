/* Write two polynomials as linked list (each node= coefficient + exponent)
and create a function to add them.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int coefficient;
    int exponent;
    struct Node* next;
};

struct Node* addHead;

struct Node* CreatePolynomial(int coefficient, int exponent,struct Node* head){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->coefficient=coefficient;
    temp->exponent=exponent;
    temp->next=head;
    head=temp;
    return head;
}

struct Node* AddPolynomial(struct Node* p1, struct Node* p2){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    while(p1->next!=NULL){
        if(p1->exponent==p2->exponent){
            temp->coefficient=p1->coefficient+p2->coefficient;
            temp->exponent=p1->exponent;
            addHead=temp;
        }
        else if(p1->exponents>p2->exponent){
            
        }
        else{

        }

    }
    
    return addHead;  
}

void Print(){
    struct Node* temp=addHead;
    while(temp!=NULL){
        printf("Coefficient: %d\n",temp->coefficient);
        printf("Exponent: %d\n",temp->exponent);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    addHead=NULL;
    struct Node* polyHead1=NULL;
    struct Node* polyHead2=NULL;
    
    polyHead1=CreatePolynomial(1,0,polyHead1);
    polyHead1=CreatePolynomial(4,1,polyHead1);
    polyHead1=CreatePolynomial(5,2,polyHead1);
    // 5x^2 + 4x + 1

    polyHead2=CreatePolynomial(7,0,polyHead2);
    polyHead2=CreatePolynomial(6,1,polyHead2);
    polyHead2=CreatePolynomial(2,2,polyHead2);
    // 2x^2 + 6x + 7

    AddPolynomial(polyHead1,polyHead2); // 7x^2 + 10x + 8
    Print();
    return 0;
}