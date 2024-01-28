# include <stdio.h>
int main() {
    int start = 'G';
    for (int i = 0; i < 7; i++) {
        for (int j = start; j >= 65; j--) {
            printf("%c ", j);
        }
        printf("\n");
        start--;
    }
  return 0;
}
