# include<stdio.h>
int main() {
    int n,i,reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = n;
    while (i != 0) {
        int remainder = i % 10;
        reverse = reverse * 10 + remainder;
        i /= 10;
    }
    printf("The reverse of %d is %d", n, reverse);
    return 0;
}