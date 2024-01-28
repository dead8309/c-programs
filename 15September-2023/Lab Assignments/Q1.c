# include<stdio.h>
int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Array contents are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}