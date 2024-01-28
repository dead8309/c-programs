#include <stdio.h>
int sum(int [], int);
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array:\n");    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int s = sum(a,n);
    printf("Sum = %d", s);
    return 0;
}

int sum(int a[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += a[i];
    }
    return sum;
}