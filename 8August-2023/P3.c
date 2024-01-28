# include <stdio.h> 
const double PI = 3.14;
void main() {
	int radius;
	printf("Enter the radius of a circle: ");
	scanf("%d", &radius);
	double area = PI * radius * radius;
	printf("Area of circle: %lf", area);
}
