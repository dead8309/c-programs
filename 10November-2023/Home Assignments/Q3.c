#include <stdio.h>
int findLargestIndex(int arr[], int size) {
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    return maxIndex;
}

int findSmallestIndex(int arr[], int size) {
    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return minIndex;
}

void swap(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

void swapLargestSmallest(int arr[], int size) {
    if (size < 2) {
        printf("Array size is less than 2.\n");
        return;
    }
    int largestIndex = findLargestIndex(arr, size);
    int smallestIndex = findSmallestIndex(arr, size);
    swap(arr, largestIndex, smallestIndex);
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
    swapLargestSmallest(arr, size);
    printf("\nArray after swapping: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
