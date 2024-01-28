
# include<stdio.h>
int main() {
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i = i/10) {
        int digit = i % 10;
        int factorial = 1;
        for (int j = 1; j <= digit; j++) {
            factorial *= j;
        }
        sum += factorial;
    }
    if (sum == n){
        printf("Strong number");
    } else {
        printf("Not a Strong number");
    }
    return 0;
}