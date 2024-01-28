#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int* p_a = &a;
    int* p_b = &b;
    int s = *p_a + *p_b;
    printf("Sum = %d", s);
    return 0;
}
