#include "stdio.h"
int main() {
    int n1, n2, n3;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 == n2 && n2 == n3) {
        printf("The triangle is equilateral.");
    }
    else if (n1 == n2 || n2 == n3 || n1 == n3) {
        printf("The triangle is isosceles.");
    }
    else {
        printf("The triangle is scalene.");
    }
    return 0;
}