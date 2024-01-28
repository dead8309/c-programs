#include <stdio.h>
int fac(int n) {
    if (n == 1 || n == 0) return 1;
    return n * fac(n-1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d", fac(n));
    return 0;
}