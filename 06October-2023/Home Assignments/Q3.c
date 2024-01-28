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
    int odd = 0, even = 0;
    printf("The given matrix is:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t", arr[i][j]);
            if (arr[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
        printf("\n");
    }

    printf("The frequency of occurrence of odd number = %d\n", odd);
    printf("The frequency of occurrence of even number = %d\n", even);
    return 0;
}