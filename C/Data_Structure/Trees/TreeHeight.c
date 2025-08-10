#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b) ((a)>(b) ? (a):(b))


struct Node{
    
    int data;
    struct Node* left;
    struct Node* right;

};

struct Node* CreateNode(int data){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=node->right=NULL;
    return node;
}

struct Node* CreateTree(struct Node* root, int data){
    if(root==NULL){
        root=CreateNode(data);
        return root;        
    }
    else if(root->data<=data){
        root->left=CreateTree(root->left,data);
    }
    else{
        root->right=CreateTree(root->right,data);
    }
    return root;
}

// Height of tree = height of root
// Height of leaf node = 0
// Height of tree with 1 node = 0

// Depth of a node = No. of edge in path from root to that node.
// Depth of root = 0

// Height = Max depth

/*FindHeight(root){ o(n) complexity
    // if(root is null) return -1 
    // recursion: left subtree find height(root->left)
    // recursion: right subtree find height(root->right)

    // recursion: return max(leftheight,rightheight)+1
}
*/

int FindHeight(struct Node* root){
    if(root==NULL){
        return -1;
    }
    return MAX(FindHeight(root->left),FindHeight(root->right))+1;
}
int main(){
    struct Node* root=NULL;
    root=CreateTree(root,15);
    root=CreateTree(root,10);
    root=CreateTree(root,20);
    root=CreateTree(root,8);
    root=CreateTree(root,12);
    root=CreateTree(root,17);
    root=CreateTree(root,25);
     root=CreateTree(root,35);
    int height=FindHeight(root);
    printf("Height is: %d ",height);
    return 0;
}