#include <stdio.h>
int noOfDigits(int n) {
    if (n < 10) return 1;
    return 1 + noOfDigits(n/10);
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("No Of Digits = %d", noOfDigits(a));
    return 0;
}