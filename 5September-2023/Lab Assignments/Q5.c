
# include<stdio.h>
int main() {
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            c++;
    }
    if (c == 2){
        printf("Prime number");
    } else {
        printf("Not a Prime number");
    }
    return 0;
}