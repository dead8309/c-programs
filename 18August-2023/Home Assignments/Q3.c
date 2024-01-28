#include <stdio.h>
int main() {
    int num1,num2;
    float f_num1,f_num2;
    printf("Enter Integer num1, num2 and Float num1, num2: ");
    scanf("%d%d%f%f", &num1,&num2,&f_num1,&f_num2);
    printf("Integer numbers are %d, %d and Float numbers are %f, %f", num1, num2, f_num1, f_num2);
    return 0;
}
