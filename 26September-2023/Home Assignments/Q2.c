# include<stdio.h>
int main() {
    char ch[100];
    printf("Enter a string: ");
    gets(ch);
    int length = 0,flag = 1;
    while (ch[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length/2; i++) {
        if (ch[i] != ch[length - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("The string is a palindrome.");
    }
    else {
        printf("The string is not a palindrome.");
    }
    return 0;
}