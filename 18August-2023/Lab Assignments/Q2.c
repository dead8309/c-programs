# include<stdio.h>
int main() {
	char input, upper;
	printf("Enter an alphabet: ");
	scanf("%c", &input);
	if (input >= 'A' && input <= 'Z')
		printf("You have entered %c which is already in upper case\n", input);
	else {
		upper = input - 32;
		printf("The upper case of entered letter is %c\n", upper);
	}
	return 0;
}
