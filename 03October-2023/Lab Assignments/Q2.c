# include<stdio.h>
# include<string.h>
int main() {
    char s1[100], s2[100];
    printf("Enter the string1: ");
    gets(s1);
    int length = strlen(s1);
    printf("Enter the string2: ");
    gets(s2);
    int result1 = strcmp(s1,s2);
    if (result1 == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    int i;
    for (i = 0; i < s1[i] == s2[i] && s1[i] != '\0'; i++);
    
    if (s1[i] == s2[i]) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    return 0;
}
