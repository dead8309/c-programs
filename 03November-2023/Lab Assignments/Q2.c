#include <stdio.h>
void isEvenOrOdd(int);
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    isEvenOrOdd(a);
    return 0;
}

void isEvenOrOdd(int a) {
    if (a%2 == 0) {
        printf("Even Number");
    } else {
        printf("Odd Number");
    }
}