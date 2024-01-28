# include <stdio.h> 
void main() {
	int base,height;
	printf("Enter base and height of a triangle: ");
	scanf("%d%d", &base, &height);
	double area = 0.5 * base * height;
	printf("Area of Triangle: %lf", area);
}
