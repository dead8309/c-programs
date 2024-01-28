# include<stdio.h>
int main() {
	int marks;
	printf("Enter the total marks secured by a student: ");
	scanf("%d", &marks);
	if (marks > 100)
		printf("Invalid marks entered");
	else if (marks >= 90 && marks <=100)
		printf("Secured grade is O");
	else if (marks >= 80 && marks <=89)
		printf("Secured grade is E");
	else if (marks >= 70 && marks <=79)
		printf("Secured grade is A");
	else if (marks >= 60 && marks <=69)
		printf("Secured grade is B");
	else if (marks >= 50 && marks <=59)
		printf("Secured grade is C");
	else if (marks >= 40 && marks <=49)
		printf("Secured grade is D");
	else 
		printf("Secured grade is F");
	return 0;
}
