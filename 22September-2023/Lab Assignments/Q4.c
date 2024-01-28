# include <stdio.h>
int main() {
    int n, search, pos = -1;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++) {
        if (arr[i] == search)
            pos = i + 1;
    }
    if (pos != -1) {
        printf("Number found at the location %d", pos);
    } else 
        printf("Number not found");
    
    return 0;
}