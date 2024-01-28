# include<stdio.h>
int main() {
    int n,i,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = n;
    while (i != 0) {
        int digit = i % 10;
        sum += digit * digit * digit;
        i /= 10;
    }
    if (n == sum)
        printf("The number is Armstrong number\n");
    else 
        printf("The number is not Armstrong number\n");
    return 0;
}