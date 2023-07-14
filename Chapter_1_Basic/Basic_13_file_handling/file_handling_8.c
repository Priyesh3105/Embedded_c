#include <stdio.h>

//binaray file read and write

typedef struct {
    int id;
    int score;
} Student;

//--------------------------------------------------------------------------------------------------------//
//***----------------------------------------"SORT ID FUNCTION"----------------------------------------***//
//--------------------------------------------------------------------------------------------------------//

void sortId(Student students[], int n) {
    int tempScore, tempId;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].id > students[j].id) {
                // Swap the id
                tempId = students[i].id;
                students[i].id = students[j].id;
                students[j].id = tempId;

                // Swap the score
                tempScore = students[i].score;
                students[i].score = students[j].score;
                students[j].score = tempScore;
            }
        }
    }
}


//--------------------------------------------------------------------------------------------------------//
//***----------------------------------------"SORT SCORE FUNCTION"-------------------------------------***//
//--------------------------------------------------------------------------------------------------------//

void sortScore(Student students[], int n){
    int temp, tempId;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(students[i].score < students[j].score){

                //swap the score

                temp = students[i].score;
                students[i].score = students[j].score;
                students[j].score = temp;

                //swap the id 

                tempId = students[i].id;
                students[i].id = students[j].id;
                students[j].id = tempId;
            }
        }
    }
}


int main() {


//--------------------------------------------------------------------------------------------------------//
//***--------------------"STUDENT STRUCTURE DECLEARATION AND DATA READ "-------------------------------***//
//--------------------------------------------------------------------------------------------------------//


    int n;
    printf("enter the number of student data you want to add:\n");
    scanf("%d", &n);

    Student students[n];

    printf("enter the id and score of students:\n");
    //get the student data from user
    for(int i=0; i<n; i++){
        scanf("%d %d", &students[i].id, &students[i].score);
    }


    sortId(students, n);



//--------------------------------------------------------------------------------------------------------//
//***------------------------"FILE OPEN AND WRITE STUDENT STRUCTURE "----------------------------------***//
//--------------------------------------------------------------------------------------------------------//


    FILE* file = fopen("datasheet2.txt", "w"); // Open binary file in write mode

    if (file != NULL) {

        // Write the student records to the file
        for (int i = 0; i < n; i++) {
            fprintf(file, "ID: %d -> Score: %d\n", students[i].id, students[i].score);
        }

        fclose(file); // Close the file
    }



//--------------------------------------------------------------------------------------------------------//
//***--------------------------"FILE OPEN AND READ STUDENT STRUCTURE "---------------------------------***//
//--------------------------------------------------------------------------------------------------------//

    file = fopen("datasheet2.txt", "r"); // Open binary file in read mode

    if (file != NULL) {
        Student students[n];

        // Read the student records from the file
        for (int i = 0; i < n; i++) {
            fscanf(file, "ID: %d -> Score: %d\n", &students[i].id, &students[i].score);
        }

        sortScore(students, n);


        // Print the student records
        for (int i = 0; i < n; i++) {
            printf("ID: %d -> Score: %d\n", students[i].id, students[i].score);
        }

        fclose(file); // Close the file
    }
    else {
        printf("Unable to open the file.\n");
    }

//--------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------//

    return 0;
}