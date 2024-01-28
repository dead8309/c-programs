# include<stdio.h>
# include<string.h>
int main() {
    char ch[100];
    printf("Enter your name: ");
    gets(ch);
    printf("Reverse of your name: ");
    int length = strlen(ch);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", ch[i]);
    }
    return 0;
}