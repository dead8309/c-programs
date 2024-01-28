#include <stdio.h>
int swapByValue(int, int);
void swapByRef(int*, int*);
int main() {
    int x,y;
    x = 5;
    y = 7;
    swapByValue(x,y);
    swapByRef(&x,&y);
    printf("In main Value of x = %d, Value of y = %d\n",x,y);
    return 0;
}

int swapByValue(int x, int y) {
    x = 7;
    y = 5;
    printf("In Fun Value of x = %d, Value of y = %d\n",x,y);
}

void swapByRef(int* x, int* y) {
    *x = 7;
    *y = 5;
}