# include<stdio.h>
int main() {
	char ch;
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Select any of the operations (+, -, *, /, %): ");
	scanf(" %c", &ch);
	switch(ch) {
		case '+' : printf("%d", a + b);
			break;
		case '-' : printf("%d", a - b);
			break;
		case '*' : printf("%d", a * b);
			break;
		case '/' : printf("%d", a / b);
			break;
		case '%' : printf("%d", a % b);
			break;
		default: printf("Invalid operation entered");
	}
	return 0;
}