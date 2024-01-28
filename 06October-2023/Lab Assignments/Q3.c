#include <stdio.h>
int main() {
    int row, col;
    printf("Enter the value of row: ");
    scanf("%d", &row);
    printf("Enter the value of col: ");
    scanf("%d", &col);
    int a[row][col];
    printf("Input the array elements: ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        int sum_row = 0, sum_col = 0;
        for (int j = 0; j < col; j++) {
            sum_row += a[i][j];
            sum_col += a[j][i];
        }
        printf("Sum Column = %d, Sum Row = %d\n", sum_col, sum_row);
    }
    return 0;
}