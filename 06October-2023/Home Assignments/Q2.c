# include<stdio.h>
int main() {
    int n;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of matrix: ");
    int arr[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (i == j) {
                if (arr[i][j] != 1) {
                    flag = 1;
                    break;
                }
            }
        }
    }
    if (flag == 1)
        printf("The matrix is not an identity matrix.\n");
    else
        printf("The matrix is an identity matrix.\n");

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}