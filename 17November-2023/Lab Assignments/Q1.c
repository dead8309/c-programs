#include <stdio.h>
int main() {
    int a = 10;
    int* p;
    p = &a;
    printf("Pointer value %d\n", *p);
    printf("Pointer address %p\n", p); 
    return 0;
}