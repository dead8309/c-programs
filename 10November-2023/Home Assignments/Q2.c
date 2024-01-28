#include <stdio.h>

void swapFirstLast(int arr[], int size) {
    if (size < 2) {
        printf("Array size is less than 2.\n");
        return;
    }

    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entered array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    swapFirstLast(arr, size);
    printf("\nArray after swapping: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
