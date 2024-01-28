# include<stdio.h>
# include<string.h>

int main() {
    char str[100], c;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &c);
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == c) {
            printf("Last occurrence of %c is at position %d\n", c, i);
            break;
        }
    }
    return 0;
}