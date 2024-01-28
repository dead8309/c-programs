# include<stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    float average = sum / n;
    printf("Average of numbers stored in array: %.2f\n", average);
    return 0;
}