#include <stdio.h>
void factorial() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    printf("Factorial of %d = %d\n",n,f);
}
int main() {
    factorial();
    return 0;
}