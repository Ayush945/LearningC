// Dynamically create and store a 2D matrix.

// Insert matrix elements into a linked list.

// Use recursion to print the list in reverse.

// Clean up memory.

#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* next;
};

void insert(struct Node** head, int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    (*newNode).data = value;
    (*newNode).next = NULL;

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        struct Node* temp = *head;
        while ((*temp).next != NULL) {
            temp = (*temp).next;
        }
        (*temp).next = newNode;
    }
}

void printReverse(struct Node* head) {
    if (head == NULL) return;
    printReverse((*head).next);
    printf("%d ", (*head).data);
}
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = (*head).next;
        free(temp);
    }
}
int main() {
    int rows = 2, cols = 2;
    int** matrix;
    struct Node* head = NULL;

    // Dynamically allocate memory for 2D matrix
    matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        *(matrix + i) = (int*)malloc(cols * sizeof(int));
    }

    // Input elements and insert into linked list
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter value for matrix[%d][%d]: ", i, j);
            scanf("%d", (*(matrix + i) + j));
            insert(&head, *(*(matrix + i) + j));
        }
    }

    // Print list in reverse using recursion
    printf("Linked list in reverse order: ");
    printReverse(head);
    printf("\n");

    // Free 2D matrix memory
    for (int i = 0; i < rows; i++) {
        free(*(matrix + i));
    }
    free(matrix);

    // Free linked list memory
    freeList(head);

    return 0;
}