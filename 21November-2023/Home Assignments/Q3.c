#include "stdio.h"
int length(char *str) {
    int len = 0;
    while(*str) {
        len++;
        str++;
    }
    return len;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Length: %d", length(str));
    return 0;
}