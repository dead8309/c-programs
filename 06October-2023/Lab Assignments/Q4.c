#include <stdio.h>
int main() {
    int row, col;
    printf("Enter the value of row: ");
    scanf("%d", &row);
    printf("Enter the value of col: ");
    scanf("%d", &col);
    int a[row][col], b[row][col];
    printf("Input the matrix1 elements: ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Input the matrix2 elements: ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Sum of two matrices: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}