#include <stdio.h>
void isPrime(int n) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            c++;
        }
    }
    if (c == 2)
        printf("%d is Prime\n", n);
    else
        printf("%d is not Prime\n", n);
}
int main() {
    isPrime();
    return 0;
}