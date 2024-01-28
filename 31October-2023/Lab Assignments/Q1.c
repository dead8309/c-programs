#include <stdio.h>
void sum() {
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("Sum of %d and %d = %d\n", a,b,sum);
}
int main() {
    sum();
    return 0;
}