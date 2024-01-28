# include <stdio.h>
int main() {
	int num,num2;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Enter a number:");
	scanf("%d",&num2);
	printf("Your sum %d", sum(num,num2));
	return 0;
} 

int sum(int a,int b) {
 return a + b;
}
