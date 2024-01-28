# include "stdio.h"
int oddSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    return sum;
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
    printf("Sum of odd elements of array is %d\n", oddSum(arr, size));
    return 0;
}
