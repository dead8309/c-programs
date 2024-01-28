#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int primeSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
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
    printf("Sum of prime elements of array is %d\n", primeSum(arr, size));
    return 0;
}
