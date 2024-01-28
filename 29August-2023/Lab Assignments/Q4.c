# include<stdio.h>
int main() {
    int n;
    int sum = 0;
    float average;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("The sum is %d", sum);
    average = sum / 10.0;
    printf("\nThe average is %f", average);
    return 0;
}