# include <stdio.h>
int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            printf("%c", 65 + j);
        }
        printf("\n");
    }
  return 0;
}