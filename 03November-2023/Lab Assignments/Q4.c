#include <stdio.h>
int max(int,int);
int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int largest = max(a,b);
    printf("Maximum value is = %d", largest);
    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}