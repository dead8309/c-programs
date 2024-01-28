# include<stdio.h>
# include<stdlib.h>
struct Student {
    int rollNo;
    char name[50];
    char gender;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *s = (struct Student*) malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; ++i) {
        printf("\nEnter Student %d details:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Gender (M/F): ");
        scanf(" %c", &s[i].gender);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudents Information:\n");
    for (int i = 0; i < n; ++i) {
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Name: %s\n", s[i].name);
        printf("Gender: %c\n", s[i].gender);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }
    free(s);
    return 0;
}