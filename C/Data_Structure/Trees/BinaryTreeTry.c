#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* root=NULL;

void OrderedCreateBinaryTree(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
}


// Lets try to store complete binary tree with Array
int main() {
    int treeStr[7];
    treeStr[0] = 2;
    treeStr[1] = 4;
    treeStr[2] = 1;
    treeStr[3] = 5;
    treeStr[4] = 8;
    treeStr[5] = 7;
    treeStr[6] = 9;

    for (int i = 0; i < 7; i++) {
        int left_child = 2 * i + 1;
        int right_child = 2 * i + 2;

        if (left_child < 7 && treeStr[left_child] != 0) {
            printf("\n%d is left child of number %d.", treeStr[left_child], treeStr[i]);
        }

        if (right_child < 7 && treeStr[right_child] != 0) {
            printf("\n%d is right child of number %d.", treeStr[right_child], treeStr[i]);
        }
    }

    return 0;
}
