# include <stdio.h>
int main() {
    int n;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in the array: \n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d :", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[j + 1]) {
               int temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
        }
    }
    int count = 0;
    int prev = arr[0];
    int count_of_current = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == prev) {
            count_of_current++;
            if (i == n - 1){
                count_of_current++;
            }
        }
        else {
            if (count_of_current > 1) {
                count++;
            }
            prev = arr[i];
            count_of_current = 0;
        }
    }
    if (count_of_current > 1) {
        count++;
    }
    printf("No of elements with duplicates found in array: %d", count);
    return 0;
}