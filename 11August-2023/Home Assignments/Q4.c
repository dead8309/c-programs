#include <stdio.h>
int main() {
    int sum,first,second,third,num;

    printf("Enter the number: ");
    scanf("%d", &num);
    first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;
    sum = first + second + third;
    printf("Sum of digits is: %d", sum);

    return 0;
}
