# include <stdio.h> 
void main() {
	double celcius, fahrenheit;
	printf("Enter the value in Celcius: ");
	scanf("%lf", &celcius);
	fahrenheit = ( celcius * 9 / 5) + 32;
	printf("%f in Celcius = %f in Fahrenheit\n", celcius, fahrenheit);
}
