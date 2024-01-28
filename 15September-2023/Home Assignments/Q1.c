#include "stdio.h"
int main() {
    int n,product = 1;
    printf("Enter the size of an array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        product *= arr[i];
    }
    printf("Product of the array elements = %d", product);
    return 0;
}
