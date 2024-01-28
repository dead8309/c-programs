#include <stdio.h>
int main() {
    int km,m,input;

    printf("Enter the distance: ");
    scanf("%d", &input);
    km = input / 1000;
    m = input % 1000;

    printf("%d meter = %d km, %d meter\n", input, km, m);

    return 0;
}
