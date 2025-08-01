#include <stdio.h>

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
    if(root==NULL){
        root=GetNode(data);
        return;
    }
    struct Node* temp=GetNode(data);
    if(root->data<=temp->data){
        root->left=Insert(data);
    }   
    else{
        root->right=Insert(data);
    } 
}



int main(){
    Insert(5);
    Insert(2);
    Insert(10);
    return 0;
}