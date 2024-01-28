#include <stdio.h>
int main() {
    int seconds, hours, minutes, input;

    printf("Enter the time in seconds: ");
    scanf("%d", &input);
    int total_min = input / 60;
    hours = total_min / 60;
    minutes = total_min % 60;
    seconds = input % 60;

    printf("%d seconds = %d hour, %d minutes and %d second\n", input, hours, minutes, seconds);

    return 0;
}
