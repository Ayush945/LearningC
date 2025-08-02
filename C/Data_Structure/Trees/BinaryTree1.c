#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* root=NULL;

struct Node* GetNode(int data){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=node->right=NULL;
    return node;
}


void Insert(int data){

    struct Node* newNode = GetNode(data);
    if(root==NULL){
        root=newNode;
        return;
    }
    struct Node* current=root;
    struct Node* parent=NULL;
    
    while(current!=NULL){
        parent=current;
        if(data<=current->data){
            current=current->left;
        }
        else{
            current=current->right;
        }
    }

    if(data<parent->data){
        parent->left=newNode;
    }
    else{
        parent->right=newNode;
    }
}

void Traversal(struct Node* node){
    if(node!=NULL){
        Traversal(node->left);
        printf("%d",node->data);
        Traversal(node->right);
    }
}



int main(){
    Insert(5);
    Insert(2);
    Insert(10);
    Insert(1);
    Insert(8);
    Insert(90);
    Traversal(root);
    printf("\n");
    return 0;
}