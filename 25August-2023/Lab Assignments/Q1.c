# include<stdio.h>
int main() {
	int day;
	printf("Enter the week day: ");
	scanf("%d", &day);
	switch(day) {
		case 0: printf("This is Sunday");
			break;
		case 1: printf("This is Monday");
			break;
		
		case 2: printf("This is Tuesday");
			break;
		
		case 3: printf("This is Wednesday");
			break;
		
		case 4: printf("This is Thursday");
			break;
		
		case 5: printf("This is Friday");
			break;
		
		case 6: printf("This is Saturday");
			break;
		default: printf("Invalid Day entered");
	}
	return 0;
}
