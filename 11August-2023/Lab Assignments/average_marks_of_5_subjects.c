# include<stdio.h>
const float EACH_SUBJECT_FULL_MARKS = 200;
int main() {
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter the number of 1st subject: ");
    scanf("%f", &sub1);
    printf("Enter the number of 2nd subject: ");
    scanf("%f", &sub2);
    printf("Enter the number of 3rd subject: ");
    scanf("%f", &sub3);
    printf("Enter the number of 4th subject: ");
    scanf("%f", &sub4);
    printf("Enter the number of 5th subject: ");
    scanf("%f", &sub5);
    float total = sub1 + sub2 + sub3 + sub4 + sub5;
    float average = total / 5;
    float percentage = (total / (EACH_SUBJECT_FULL_MARKS * 5) ) * 100;
    printf("The average is: %f\n", average);
    printf("The percentage is: %f%%", percentage);
    return 0;
}