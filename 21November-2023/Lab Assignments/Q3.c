#include <stdio.h>
void sort(int* arr, int size) {
    for(int i = 0; i< size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }   
    }
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
    sort(a,size);
    printf("Sorted Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}