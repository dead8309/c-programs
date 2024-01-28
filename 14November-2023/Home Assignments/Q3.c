# include <stdio.h>
int decimalToBinary(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 2 + 10 * decimalToBinary(n / 2));
}
int main() {
    int n;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    printf("The binary equivalent of %d is %d", n, decimalToBinary(n));
    return 0;
}