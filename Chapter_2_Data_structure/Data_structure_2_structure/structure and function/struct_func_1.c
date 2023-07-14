#include <stdio.h>

struct students{
    char name[50];
    int roll_no;
    int age;
    float marks;
};

void scan(char* name, int* roll_no, int* age, float* marks){
    scanf("%s %d %d %f", name, roll_no, age, marks);
}

void print(char* name, int* roll_no, int* age, float* marks){
    printf("%s %d %d %f", name, *roll_no, *age, *marks);
}

int main(){
    struct students student;
    scan(student.name, &student.roll_no, &student.age, &student.marks);
    print(student.name, &student.roll_no, &student.age, &student.marks);
}