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
    int max = 0;
    int pos = 0;
    for (int i = 0; i < MAX_CHARACTERS; i++) {
        if (frequency[i] > max) {
            max = frequency[i];
            pos = i;
        }
    }
    printf("Maximum occurring character is: %c\n", pos);
    return 0;
}
