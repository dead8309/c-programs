# include<stdio.h>
# include<string.h>
int main() {
    char ch[100];
    printf("Enter the string: ");
    gets(ch);

    int i = 0;
    if (ch[0] >= 'a' && ch[0] <= 'z'){
        ch[0] -= 32;
    }
    while (ch[i] != '\0'){
        if (ch[i] == ' ') {
            if (ch[i + 1] >= 'a' || ch[i + 1] <= 'z'){
                ch[i+1] -= 32;
            }
        }
        i++;
    }
    printf("%s", ch);
    return 0;
}