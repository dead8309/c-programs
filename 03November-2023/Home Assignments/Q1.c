#include <stdio.h>
int multiply(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = multiply(num1, num2);
    printf("Product of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
