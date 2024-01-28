#include <stdio.h>
#include <stdlib.h>
struct Book {
    char title[50];
    char author[50];
    char publication[50];
    float price;
};
int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct Book *b = (struct Book*) malloc(n * sizeof(struct Book));
    for (int i = 0; i < n; ++i) {
        printf("\nEnter Book %d details:\n", i + 1);
        printf("Enter Title: ");
        scanf(" %[^\n]", b[i].title);
        printf("Enter Author: ");
        scanf(" %[^\n]", b[i].author);
        printf("Enter Publication: ");
        scanf(" %[^\n]", b[i].publication);
        printf("Enter Price: ");
        scanf("%f", &b[i].price);
    }
    printf("\nBooks Information:\n");
    for (int i = 0; i < n; ++i) {
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Publication: %s\n", b[i].publication);
        printf("Price: %.2f\n", b[i].price);
        printf("\n");
    }
    free(b);
}