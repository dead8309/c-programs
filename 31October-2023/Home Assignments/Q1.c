# include<stdio.h>
void sumOfDigits() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i < 0; ++i)
        sum += n % 10;
    printf("Sum of digits of %d = %d", n, sum);
}
int main() {
    sumOfDigits();
    return 0;
}