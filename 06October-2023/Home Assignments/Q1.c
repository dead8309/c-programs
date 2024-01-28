# include<stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the order of square matrix A: ");
    scanf("%d", &n);
    printf("Enter the elements of matrix A: ");
    int A[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                sum += A[i][j];
        }
    }
    printf("Sum of diagonal elements of matrix A: %d", sum);
    return 0;
}