# include<stdio.h>
int main() {
    int n,i,reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = n;
    while (i > 0) {
        int digit = i % 10;
        reverse = reverse * 10 + digit;
        i /= 10;
    }
    if (n == reverse)
        printf("The number is Palindrome\n");
    else 
        printf("The number is not Palindrome\n");
    return 0;
}