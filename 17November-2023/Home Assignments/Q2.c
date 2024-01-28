#include "stdio.h"
void print(char *s) {
    printf("%s", s);
}
int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    print(s);
}