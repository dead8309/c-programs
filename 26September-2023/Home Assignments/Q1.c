# include<stdio.h>
int main() {
    char ch[100];
    printf("Enter a string: ");
    gets(ch);
    int i = 0, count = 0;
    while (ch[i] != '\0') {
        if (ch[i] == 'a') {
            count++;
        }
        i++;
    }
    printf("Number of a's in the string: %d", count);
    return 0;
}