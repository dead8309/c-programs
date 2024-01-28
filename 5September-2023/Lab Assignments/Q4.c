
# include<stdio.h>
int main() {
    int n, sum=0;
    int a = 0,b = 1,c=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d ",a);
    for (int i = 1; i < n; i++) {
        printf("%d ", b);
        int next = a + b + c; 
        a = b;
        b = c;
        c = next;
    }
    return 0;
}