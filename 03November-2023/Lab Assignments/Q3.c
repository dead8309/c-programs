#include <stdio.h>
void sum(float,int);
int main() {
    float a;
    int b;
    printf("Enter a float and int number: ");
    scanf("%f %d", &a, &b);
    sum(a,b);
    return 0;
}

void sum(float a, int b) {
    float s = a + b;
    printf("Sum = %f", s);
}