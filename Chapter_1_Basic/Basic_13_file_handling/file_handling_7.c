#include <stdio.h>

//binaray file read and write

typedef struct {
    int id;
    float score;
} Student;

int main() {
    FILE* file = fopen("datasheet.txt", "w"); // Open binary file in write mode

    if (file != NULL) {
        Student students[] = {
            {1, 90.5},
            {2, 85.0},
            {3, 95.7}
        };

        // Write the student records to the file
        for (int i = 0; i < 3; i++) {
            fprintf(file, "ID: %d, Score: %.2f\n", students[i].id, students[i].score);
        }

        fclose(file); // Close the file
    }

    
    file = fopen("datasheet.txt", "r"); // Open binary file in read mode

    if (file != NULL) {
        Student students[3];

        // Read the student records from the file
        for (int i = 0; i < 3; i++) {
            fscanf(file, "ID: %d, Score: %f\n", &students[i].id, &students[i].score);
        }


        // Print the student records
        for (int i = 0; i < 3; i++) {
            printf("ID: %d, Score: %.2f\n", students[i].id, students[i].score);
        }

        fclose(file); // Close the file
    }
    else {
        printf("Unable to open the file.\n");
    }

    return 0;
}