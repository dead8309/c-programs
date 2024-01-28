# include <stdio.h>
int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = i; j >= 1; j--) {
        printf("%c", 64 + j);
    }
    printf("\n");
  }
  return 0;
}