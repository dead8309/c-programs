#include <stdio.h>
int main() {
    int row, col, sum = 0;
    printf("Enter the value of row: ");
    scanf("%d", &row);
    printf("Enter the value of row: ");
    scanf("%d", &col);
    int a[row][col];
    printf("Input the array elements: ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of elements: %d", sum);
    return 0;
}