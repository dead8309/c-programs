# include<stdio.h>
# include<string.h>
int main() {
    char ch1[100],ch2[100];
    printf("Enter the string1: ");
    gets(ch1);

    int i;
    for (i = 0; ch1[i] != '\0'; i++)
        ch2[i] = ch1[i];
        
    ch2[i] = '\0';

    printf("%s\n", ch2);
    return 0;
}