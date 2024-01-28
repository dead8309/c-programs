#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1;
    int n, num3;
    int i = 2;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\n%d %d", num1, num2);
    while (i < n) {
        num3 = num1 + num2;
        printf(" %d", num3);
        num1 = num2;
        num2 = num3;
        i++;
    }
    return 0;
}