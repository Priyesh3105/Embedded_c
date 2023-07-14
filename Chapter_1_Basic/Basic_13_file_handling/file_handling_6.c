#include <stdio.h>

//binaray file read and write

typedef struct {
    int id;
    float score;
} Student;

int main() {
    FILE* file = fopen("data.bin", "wb"); // Open binary file in write mode

    if (file != NULL) {
        Student students[] = {
            {1, 90.5},
            {2, 85.0},
            {3, 95.7}
        };

        // Write the student records to the file
        fwrite(students, sizeof(Student), 3, file);

        fclose(file); // Close the file
    }

    
    file = fopen("data.bin", "rb"); // Open binary file in read mode

    if (file != NULL) {
        Student students[3];

        // Read three Student records from the file
        fread(students, sizeof(Student), 3, file);

        // Print the student records
        for (int i = 0; i < 3; i++) {
            printf("ID: %d, Score: %.2f\n", students[i].id, students[i].score);
        }

        fclose(file); // Close the file
    }

    return 0;
}