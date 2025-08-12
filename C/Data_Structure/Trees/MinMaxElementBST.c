/* Min and Max element of Tree.*/
#include <stdio.h>
#include <stdlib.h>

//Node structure for tree
struct BstNode{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

struct BstNode* GetNode(int data){
    struct BstNode* temp=(struct BstNode*)malloc(sizeof(struct BstNode));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct BstNode* Insert(struct BstNode* root,int num){
    if(root==NULL){
        root=GetNode(num);
        return root;
    }
    else if(root->data <=num){
        root->left=Insert(root->left,num);
    }
    else{
        root->right=Insert(root->right,num);
    }
    return root;
}


// Iterative Min
int FindMinIterative(struct BstNode* root){
    if(root==NULL){
        printf("Error: Tree is empty\n");
        return -1;
    }
    
    while(root->left !=NULL){
        root=root->left;
    }
    return root->data;
}

// Recursion Min
int FindMinRecursion(struct BstNode* root){
    if(root==NULL){
        printf("Error: Tree is empty\n");
        return -1;
    }
    else if(root->left==NULL){
        return root->data;
    }
    return FindMinRecursion(root->left);
}

// Iterative Max
int FindMaxIterative(struct BstNode* root){
    if(root==NULL){
        printf("Error: Tree is empty\n");
        return -1;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}


// Recursion Max
int FindMaxRecursion(struct BstNode* root){
    if(root==NULL){
        printf("Error: Tree is empty\n");
        return -1;
    }
    else if(root->right==NULL){
        return root->data;
    }
    return FindMaxRecursion(root->right);
}

int main(){
    struct BstNode* root=NULL;

    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,8);
    root=Insert(root,12);
    root=Insert(root,17);
    root=Insert(root,25);
    int max=FindMaxRecursion(root);
    printf("%d\n",max);
    max=FindMaxIterative(root);
    printf("%d\n",max);

    int min=FindMinRecursion(root);
    printf("%d\n",min);
    min=FindMinIterative(root);
    printf("%d\n",min);
    return 0;
}