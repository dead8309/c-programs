# include <stdio.h>
int main() {
    int ch = 'A';
    for (int i = 0; i < 6; i++) {
        int temp = ch, c = 0;
        for (int j = 0; j <= i; j++) {
            temp += c;
            printf("%c ", temp);
            c = c == 0 ? 5 : c-1;
        }
        ch++;
        printf("\n");
    }
}