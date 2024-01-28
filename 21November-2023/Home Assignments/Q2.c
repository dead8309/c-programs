# include <stdio.h>
# include <string.h>
void allPermutations(char *str, int r);
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    allPermutations(str, n);
    return 0;
}
void allPermutations(char *str, int r)
{
    if (r == 1)
    {
        printf("%s\n", str);
        return;
    }
    for (int i = 0; i < r; i++)
    {
        allPermutations(str, r - 1);
        if (r % 2 == 1)
        {
            char temp = str[0];
            str[0] = str[r - 1];
            str[r - 1] = temp;
        }
        else
        {
            char temp = str[i];
            str[i] = str[r - 1];
            str[r - 1] = temp;
        }
    }
}