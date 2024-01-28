# include<stdio.h>
int main() {
	int marks;
	printf("Enter the total marks secured by a student: ");
	scanf("%d", &marks);
	switch(marks/10) {
		case 10:
		case 9: printf("Secured grade is O");
			break;
		case 8: printf("Secured grade is E");
			break;
		case 7: printf("Secured grade is A");
			break;
		case 6: printf("Secured grade is B");
			break;
		case 5: printf("Secured grade is C");
			break;
		case 4: printf("Secured grade is D");
			break;
		default: printf("Secured grade is F");
	}
	return 0;
}
