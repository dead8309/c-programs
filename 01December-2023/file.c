# include<stdio.h>
int main() {
    FILE *file;
    char buffer[100];

    // writing to file
    file = fopen("example.txt", "w");
    fprintf(file,"Hello");
    fclose(file);

    // appending to file
    file = fopen("example.txt", "a");
    fprintf(file, " World!");
    fclose(file);

    // reading from file
    file = fopen("example.txt", "r");
    fgets(buffer, sizeof(buffer), file);
    fclose(file);

    printf("File contents: %s", buffer);

    return 0;
}