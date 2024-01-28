# include<stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i = i/10) {
        int digit = i % 10;
        sum += digit;
    }
    printf("The sum of digits of %d is %d", n, sum);
    return 0;
}