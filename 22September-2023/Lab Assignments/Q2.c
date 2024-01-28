# include <stdio.h>
int main() {
    int even = 0, odd = 0;
    int arr[10];
    printf("Enter the array elements: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("No of even elements: %d\n", even);
    printf("No of odd elements: %d\n", odd);   
    return 0;
}