#include <stdio.h>
int main() {
    int num1,num2;
    float f_num1,f_num2;
    printf("Enter Integer num1: ");
    scanf("%d", &num1);
    printf("Enter Integer num2: ");
    scanf("%d", &num2);
    printf("Enter Float num1: ");
    scanf("%f", &f_num1);
    printf("Enter Float num2: ");
    scanf("%f", &f_num2);
    printf("Integer numbers are %d, %d\n", num1, num2);
    printf("Float numbers are %f, %f", f_num1, f_num2);
    return 0;
}
