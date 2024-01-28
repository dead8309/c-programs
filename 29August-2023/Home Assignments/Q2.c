# include<stdio.h>
int main() {
    int rangeStart, rangeEnd;
    printf("Enter the range start: ");
    scanf("%d", &rangeStart);
    printf("Enter the range end: ");
    scanf("%d", &rangeEnd);
    printf("Numbers in the range (%d, %d) are: \n", rangeStart, rangeEnd);
    for (int i = rangeStart; i <= rangeEnd; i++) {
        printf("%d ", i);
    }
    return 0;
}