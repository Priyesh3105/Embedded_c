#include <stdio.h>

//student id search

typedef struct {
    int id;
    int score;
} Student;

int main() {

    int n;
     printf("enter the number of student data you want to add:\n");
        scanf("%d", &n);

        Student students[n];

        printf("enter the id and score of students:\n");
        //get the student data from user
        for (int i = 0; i < n; i++){
            scanf("%d %d", &students[i].id, &students[i].score);
        }

        int userId; 
        printf("enter the the id: ");
        scanf("%d", &userId);
        int count = 0;
        for (int i = 0; i < n; i++){
            if(students[i].id == userId){
                printf("%d", students[i].score);
                break;
            }
            count++;
        }
        if(count == n) printf("Please enter valid user id");   
 
    return 0;
}