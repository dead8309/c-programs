#include <stdio.h>
int main() {
    int num,sum,first,second_last;
    printf("Enter 5 digit number: ");
    scanf("%d", &num);
    first = num / 10000;
    second_last = (num % 100) / 10;
    sum = first + second_last;
    printf("Sum of digits is: %d", sum);
    return 0;
}