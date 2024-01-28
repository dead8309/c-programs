#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int size) {
    int first, second;

    if (size < 2) {
        printf("Array size is less than 2.\n");
        return -1;
    }

    first = second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return second;
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

    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != -1) {
        printf("Second largest element of array is %d\n", secondLargest);
    }

    return 0;
}
