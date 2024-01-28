# include<stdio.h>
int main() {
	char ch;
	printf("Enter an alphabet: ");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
			printf("The entered character %c is a vowel\n", ch);
		else 
			printf("The entered character %c is a consonant\n", ch);
	}
	else
		printf("The entered character %c is not an alphabet\n", ch);
	return 0;
}
