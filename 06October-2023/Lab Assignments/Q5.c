#include <stdio.h>
int main() {
    int row1, col1, row2, col2;
    printf("Enter the rows and columns of matrix1: ");
    scanf("%d %d", &row1, &col1);
    int a[row1][col1];

    printf("Enter the rows and columns of matrix2: ");
    scanf("%d %d", &row2, &col2);
    int b[row2][col2];


    if (col1 != row2) {
        printf("Cannot Perform Multiplication of matrices");
        return 0;
    }
    
    printf("Input the matrix1 elements: ");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Input the matrix2 elements: ");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    int result[row1][col2];
    printf("Multiplication of two matrices: \n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += ("%d ", a[i][k] * b[k][j]);
            }
        }
    }
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
{1,2}       {1,1}           {3, 3}
        *               =
{3,4}       {1,1}           {7, 7}
*/