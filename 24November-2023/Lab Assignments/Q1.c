#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    char gender;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &s.gender);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Gender: %c\n", s.gender);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
