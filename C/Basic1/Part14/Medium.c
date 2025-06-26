#include <stdio.h>

int main(){

    //Multidimensional Array --- question 20,21,22

    int matrix_1[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value for matrix [%d] [%d]: ",i,j);
            scanf("%d", &matrix_1[i][j]);
        }
    }

    // printf("\nThe values of matrix:\n\n");

    // for(int i=0; i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf(" %d\t ",matrix_1[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\n The transpose of matrix: \n\n");

    // for(int i=0; i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf(" %d\t ",matrix_1[j][i]);
    //     }
    //     printf("\n");
    // }

    int matrix_2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int totalMatrix[3][3];
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            totalMatrix[i][j]=matrix_1[i][j]*matrix_2[i][j];
        }
    }

    printf("\nThe values of matrix:\n\n");

    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d\t ",totalMatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}