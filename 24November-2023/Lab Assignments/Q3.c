#include <stdio.h>
union ABC {
    char a;
    int b;
};
int main() {
    union ABC ob;
    ob.a = 'A';
    printf("a: %c\n", ob.a);

    ob.b = 1088;
    printf("b: %d\n", ob.b);
    ob.a = 'A';
    ob.b = 1088;

    printf("\nValues assigned together:\n");
    printf("a: %c\n", ob.a);
    printf("b: %d\n", ob.b);
    return 0;
}
