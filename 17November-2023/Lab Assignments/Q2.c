#include <stdio.h>
int main() {
    printf("Size of int pointer is %ld bytes\n", sizeof(int*));
    printf("Size of char pointer is %ld bytes\n", sizeof(char*));
    printf("Size of float pointer is %ld bytes\n", sizeof(float*));
    printf("Size of long pointer is %ld bytes\n", sizeof(long*));
    printf("Size of double pointer is %ld bytes\n", sizeof(double*));
    return 0;
}