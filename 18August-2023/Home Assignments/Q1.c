#include <stdio.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("The given number is 0");
    } else if (num > 0) {
        printf("The given number is positive");
    } else {
        printf("The given number is negative");
    }
    return 0;
}
