# include <stdio.h> 
void main() {
	int a, b;
	printf("Enter the value of a and b");
	scanf("%d%d", &a, &b);
	printf("Addition = %d\n", add(a,b));
	printf("Subtraction = %d\n", subtract(a,b));		
	printf("Multiplication = %d\n", multiply(a,b));
	printf("Division = %d\n", divide(a,b));
}

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;//a > b ? a - b : b -a;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b; //a > b ? a / b : b / a;
}
