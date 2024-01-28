#include <stdio.h>
int main() {
    int length,breath,area,perimeter;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the breath of rectangle: ");
    scanf("%d", &breath);
    area = length * breath;
    perimeter = 2 * (length + breath);
    printf("Area: %d, Perimeter: %d", area, perimeter);
    return 0;
}