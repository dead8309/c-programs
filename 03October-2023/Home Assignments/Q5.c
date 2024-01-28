# include<stdio.h>
# include<string.h>
int main() {
    // WAP to find the first occurrence of a character from string
    char str[100],c;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &c);
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == c) {
            printf("First occurrence of %c is at position %d\n", c, i);
            break;
        }
    }
    return 0;
}