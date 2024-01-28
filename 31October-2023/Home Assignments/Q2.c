# include<stdio.h>
void fib() {
    int n, a = 0, b = 1, c;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("%d", a);
        return;
    }
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d", b);
}
int main() {
    fib();
    return 0;
}