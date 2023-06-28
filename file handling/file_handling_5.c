#include<stdio.h>

//reading file using fscanf() function

int main(){

    FILE* file = fopen("data2.txt", "w"); // Open file for writing

    if (file != NULL) {
        fprintf(file, "1 2 3\n");
        fclose(file); // Close the file
    }

    file = fopen("data2.txt", "r");

    int a, b, c;

    if (file != 0)
    {
        fscanf(file, "%d %d %d", &a, &b, &c);
        printf("%d %d %d\n", a, b, c);
        fclose(file);
    }
    return 0;
}