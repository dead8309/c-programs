# include<stdio.h>
int main() {
	int a,b,c,largest;
	printf("Enter three numbers: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a>b && a>c)
		largest = a;
	else if (b>c)
		largest = b;
	else 
		largest = c;
	printf("The largest number is %d\n", largest);
	return 0;
}
