# include<stdio.h>
int main() {
	int maths,phy,chem;
	printf("Input the marks obtained in Physics: ");
	scanf("%d", &phy);
	printf("Input the marks obtained in Chemistry: ");
	scanf("%d", &chem);
	printf("Input the marks obtained in Maths: ");
	scanf("%d", &maths);
	int total = maths + phy + chem;
	int maths_and_phy = maths + phy;
	if (maths >= 65 && phy >= 55 && chem >=50 && total >= 190)
		printf("The candidate is eligible for admission\n");
	else {
		if (maths_and_phy >= 140) 
			printf("The candidate is eligible for admission\n");
		else
			printf("The candidate is not eligible for admission\n");
	}
	return 0;
}
