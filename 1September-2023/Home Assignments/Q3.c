# include<stdio.h>
int main() {
    int n,x, y = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (n < 0) {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    }
    int i = 1;
    while (i <= n) {
        y = y * x;
        i++;
    }
    printf("y = x^n is %d", y);
    return 0;
}