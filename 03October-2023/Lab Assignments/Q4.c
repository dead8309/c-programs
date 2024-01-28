# include<stdio.h>
# include<string.h>
int main() {
    char ch[100];
    printf("Enter the string: ");
    gets(ch);
    int words = 0;
    int i = 0;
    while (ch[i] != '\0') {
        if (ch[i] == ' ')
            words++;
        
        i++;
    }
    if (strlen(ch) > 0){
        words++;
    }
    printf("\nWords: %d", words);
    return 0;
}