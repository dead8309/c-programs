# include<stdio.h>
int main() {
    int n, sum;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of numbers stored in array: %d\n", sum);
    
}