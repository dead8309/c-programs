# include<stdio.h>
int main() {
    int amount;
    printf("Enter the amount in paisa: ");
    scanf("%d", &amount);
    int rupee = amount / 100;
    int paisa = amount % 100;
    printf("%d paisa = %d Rupee and %d paisa\n", amount, rupee, paisa);
    return 0;
}