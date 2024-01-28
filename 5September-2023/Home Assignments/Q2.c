#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("1/%d + ", i);
        sum += 1.0 / i;
    }
    printf("\nSum of the series is %f", sum);
}