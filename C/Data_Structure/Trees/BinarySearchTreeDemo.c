// Binary Search Tree Implementaion (Basic Structure) with recursion
#include <stdio.h>
#include <stdlib.h>

struct BSTNode {
    int data;
    struct BSTNode* left;
    struct BSTNode* right;
};

struct BSTNode* GetNewNode(int data){
    struct BSTNode*newNode=(struct BSTNode*)malloc(sizeof(struct BSTNode));
    newNode->data=data; // (*newNode).data=data
    newNode->left=newNode->right=NULL;
    return newNode;
}

struct BSTNode* Insert(struct BSTNode* root,int data){
    if(root==NULL){ // empty tree
        root=GetNewNode(data);
        return root;
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}

int Search(struct BSTNode* root,int data){
    if(root==NULL) return 0;
    else if(root->data==data) return 1;
    else if(data<=root->data) return Search(root->left,data);
    else return Search(root->right, data);
}

int main(){

    struct BSTNode* root=NULL; //store the address of root node 
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,25);
    root=Insert(root,8);
    root=Insert(root,12);

    int number;
    printf("Enter number to be searched: ");
    scanf("%d",&number);
    printf("\n");
    if(Search(root,number)==1){
        printf("Found.\n");
    }
    else{
        printf("Not Found.\n");
    }

}