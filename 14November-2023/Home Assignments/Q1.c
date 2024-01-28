#include<stdio.h>
#include<string.h>
void reverse(char *str,int i,int j)
{
    char temp;
    if(i>=j)
    {
        return;
    }
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    reverse(str,i+1,j-1);
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    reverse(str,0,strlen(str)-1);
    printf("The reversed string is: %s",str);
    return 0;
}
