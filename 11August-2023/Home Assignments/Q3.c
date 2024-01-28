#include <stdio.h>
int main() {
    int sum,first,last,num;

    printf("Enter the number: ");
    scanf("%d", &num);
    first = num / 100000;
    last = num % 10;
    sum = first + last;
    printf("Sum of digits is: %d", sum);

    return 0;
}
