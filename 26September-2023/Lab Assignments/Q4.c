# include<stdio.h>
# include<string.h>
int main() {
    char ch[100];
    printf("Enter the string: ");
    gets(ch);
    int vowels = 0, characters = 0,consonants = 0, words = 0;
    int i = 0;
    while (ch[i] != '\0') {
        characters++;

        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z')) {
            if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') {
                vowels++;    
            } else {
                consonants++;
            }
        }
        if (ch[i] == ' ')
            words++;
        
        i++;
    }
    if (strlen(ch) > 0){
        words++;
    }
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nCharacters: %d", characters);
    printf("\nWords: %d", words);
    return 0;
}