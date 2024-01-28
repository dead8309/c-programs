#include <stdio.h>
int maxOfArray(int a[], int size) {
    if (size == 1) return a[0];
    int max = maxOfArray(a + 1, size - 1);
    return a[0] > max ? a[0] : max;
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Maximum Element of given array = %d", maxOfArray(a,n));
    return 0;
}