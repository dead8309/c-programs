# include<stdio.h>
# include<string.h>
#define MAX_CHARACTERS 256
int main() {
    char ch[100];
    printf("Enter a string: ");
    gets(ch);
    int frequency[MAX_CHARACTERS] = {0};
    for (int i = 0; i < strlen(ch); i++) {
        if (ch[i] == ' ') {
            continue;
        }
        int index = (int)ch[i];
        frequency[index]++;
    }
    for (int i = 0; i < MAX_CHARACTERS; i++) {
        if (frequency[i] > 0) {
            printf("Frequency of %c is: %d\n", i, frequency[i]);
        }
    }
    return 0;
}
