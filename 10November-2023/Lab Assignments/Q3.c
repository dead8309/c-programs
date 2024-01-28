#include <stdio.h>
int largest(int [], int);
int smallest(int [], int);
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array:\n");    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int large = largest(a,n);
    int small = smallest(a,n);
    printf("Largest element of array is %d\n", large);
    printf("Smallest element of array is %d", small);    
    return 0;
}
int largest(int a[], int len) {
    int max = a[0];
    for (int i = 0; i < len; i++){
            if (a[i] > max) {
                max = a[i];
            }
    }
    return max;
}

int smallest(int a[], int len) {
    int min = a[0];
    for (int i = 0; i < len; i++){
            if (a[i] < min) {
                min = a[i];
            }
    }
    return min;
}