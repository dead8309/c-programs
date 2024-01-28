#include <stdio.h>
int main() {
    int row, col;
    printf("Enter the value of row: ");
    scanf("%d", &row);
    printf("Enter the value of col: ");
    scanf("%d", &col);
    int a[row][col];
    int transposed[col][row];
    printf("Input the array elements: ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
            transposed[j][i] = a[i][j];
        }
    }
    printf("Original array: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of array: \n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    return 0;
}