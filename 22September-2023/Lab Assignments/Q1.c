# include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("Sum of marks: %d\n", sum);
    float avg = sum / n;
    printf("Average of marks: %lf", avg);   
    return 0;
}