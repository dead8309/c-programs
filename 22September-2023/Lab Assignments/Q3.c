# include <stdio.h>
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], arr3[n];
    printf("Enter the 1st array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the 2nd array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("Multiple of elements of 1st and 2nd array\n");
    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i] * arr2[i];
        printf("%d ", arr3[i]);
    }
    return 0;
}