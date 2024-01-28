#include <stdio.h>
int sumOfDigits(int n) {
    if (n < 10) return n;
    return n % 10 + sumOfDigits(n/10);
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Sum Of Digits = %d", sumOfDigits(a));
    return 0;
}