# include<stdio.h>
int main() {
	int a,b;
	printf("Enter two numbers: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	int largest = a > b ? a : b;
	printf("The largest number is %d\n", largest);
	return 0;
}
