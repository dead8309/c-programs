# include<stdio.h>
int main() {
    int rangeStart, rangeEnd;
    printf("Enter the range start: ");
    scanf("%d", &rangeStart);
    printf("Enter the range end: ");
    scanf("%d", &rangeEnd);
    printf("Even numbers in the range are: ");
    for (int i = rangeStart; i <= rangeEnd; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\nOdd numbers in the range are: ");
    for (int i = rangeStart; i <= rangeEnd; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    return 0;
}