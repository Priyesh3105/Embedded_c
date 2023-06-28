#include <stdio.h>

//general example

int main() {
    FILE* file = fopen("data.txt", "w"); // Open file for writing

    if (file != NULL) {
        fprintf(file, "Hello, World!\n"); // Write text data to file
        fprintf(file, "I'm lovin this world :)\n");
        fclose(file); // Close the file
    }

    file = fopen("data.txt", "r"); // Open file for reading

    if (file != NULL) {
        char buffer[100];
        fgets(buffer, sizeof(buffer), file); // Read text data from file
        printf("Data read from file: %s", buffer);
        fclose(file); // Close the file
    }

    return 0;
}
