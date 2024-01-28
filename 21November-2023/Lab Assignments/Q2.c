#include <stdio.h>
int sumArr(int* arr, int size) {
    int sum  = 0;
    for(int i = 0; i< size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter array elements: \n");
    int a[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int sum = sumArr(a,size);
    printf("Sum of array elements: %d", sum);
    return 0;
}