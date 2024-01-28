# include<stdio.h>
# include<string.h>
int main() {
    char s1[100];
    printf("Enter the string: ");
    gets(s1);
    int length = strlen(s1);
    for (int i = length - 1; i >= 0; i--) {
        printf("Reverse using normal way: %c", s1[i]);
    }/* 
    strrev(s1);
    printf("Reverse using library funtion: %s", s1); */
    return 0;
}
