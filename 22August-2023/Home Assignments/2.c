# include<stdio.h>
int main() {
    int unit,bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &unit);
    if (unit < 50){
        bill = unit * 1;
    } else if (unit >= 50 && unit <= 120){
        bill = unit * 2;
    } else if (unit >= 121 && unit <= 250){
        bill = unit * 3;
    } else if (unit >= 251 && unit <= 350){
        bill = unit * 4;
    } else {
        bill = unit * 5;
    }
    printf("The bill is %d\n", bill);
    return 0;
}