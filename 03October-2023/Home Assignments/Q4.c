# include<stdio.h>
# include<string.h>
# include<ctype.h>
int main() {
    char ch[100];
    printf("Enter a string: ");
    gets(ch);
    int count = 0;
    int length = strlen(ch);

    for (int i = 0; i < length; i++) {
        char currentChar = ch[i];
        if (currentChar >= 'A' && currentChar <= 'Z') {
            currentChar = currentChar + 32;
        }
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
            count++;
        }
    }
    printf("Number of vowels in the string is: %d\n", count);
    return 0;
}