# include <stdio.h>
int main() {
    int ch = 'A';
    for (int i = 0; i < 5; i++) {
        int temp = ch;
        for (int j = 0; j <= i; j++) {
            printf("%c ", temp++);
        }
        ch++;
        printf("\n");
    }
}