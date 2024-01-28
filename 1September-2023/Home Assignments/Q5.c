# include<stdio.h>
int main() {
    int sum = 0,n = 0;
    printf("Enter the number: ");
    while (n >= 0) {
        sum += n;
        scanf("%d", &n);
    }
    printf("Sum of the numbers is %d", sum);
    return 0;
}