# include<stdio.h>
# include<string.h>
int main() {
    char s1[100], s2[100], s3[200];
    printf("Enter the string1: ");
    gets(s1);
    int length = strlen(s1);
    printf("Enter the string2: ");
    gets(s2);
    int length1 = strlen(s1);
    int length2 = strlen(s2);
    int index = 0;
    for (int i = 0; i < length1; i++) {
        s3[index] = s1[i];
        index++;
    }
    for (int i = 0; i < length2; i++) {
        s3[index] = s2[i];
        index++;
    }
    
    printf("Concatenated String using normal way: %s", s3);
    printf("\nConcatenated String using library way: %s", strcat(s1,s2));

    return 0;
}