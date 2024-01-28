# include<stdio.h>
int main() {
    int n, largest;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] > largest) {
            largest= a[i];
        }
    }
    printf("Largest element stored in array: %d\n", largest);
    return 0;
}