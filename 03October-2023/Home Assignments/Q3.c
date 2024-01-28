# include<stdio.h>
# include<string.h>
int main() {
    // WAP to Return minimum occurring character in an input string
    char ch[100];
    printf("Enter a string: ");
    gets(ch);
    int frequency[256] = {0};
    for (int i = 0; i < strlen(ch); i++) {
        if (ch[i] == ' ') {
            continue;
        }
        int index = (int)ch[i];
        frequency[index]++;
    }
    int min = 100000;
    int pos = 0;
    for (int i = 0; i < 256; i++) {
        if (frequency[i] < min && frequency[i] > 0) {
            min = frequency[i];
            pos = i;
        }
    }
    printf("Minimum occurring character is: %c\n", pos);
    return 0;
}