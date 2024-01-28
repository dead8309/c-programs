# include<stdio.h>
# include<string.h>
int main() {
    char ch[100];
    printf("Enter the string: ");
    gets(ch);

    int len = 0;
    while (ch[len] != '\0'){
        len++;
    }
    printf("Length of entered String is - %d", len);
    return 0;
}