#include <stdio.h>
#include <string.h>
void reverse(char *s)
{
    int i,j;
    char temp;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}
int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    reverse(s);
    printf("After reversing: %s\n",s);
}