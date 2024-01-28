#include <stdio.h>
void sort(int [], int);
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array:\n");    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Before Sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
    sort(a,n);
    return 0;
}
void sort(int a[], int len) {
    for (int i = 0; i < len; i++){
        for (int j = i + 1; j < len; j++){
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp; 
            }
        }
        
    }
    printf("\nAfter Sorting: ");
    for (int i = 0; i < len; i++) {
        printf("%d", a[i]);
    }
}