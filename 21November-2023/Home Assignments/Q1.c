# include<stdio.h>
int max(int *a, int *b) {
    return *a > *b ? *a : *b;
}
int main() {
    int a, b, *p1, *p2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    printf("Maximum number is: %d", max(p1, p2));
    return 0;
}