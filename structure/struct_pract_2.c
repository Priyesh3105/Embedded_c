#include<stdio.h>

//local and global scope in structure

struct employee
{
    char *name;
    int age;
    int salary;
};

int manager(){
    struct employee manager;
    manager.age =17;
    if(manager.age>30) manager.salary = 65000;
    else manager.salary =55000;
    return manager.salary;
}

int main(){
    struct employee emp1;
    struct employee emp2;
    printf("enter the salary of employee one: ");
    scanf("%d",&emp1.salary);
    printf("enter the salary of employee two: ");
    scanf("%d",&emp2.salary);
    printf("\nsalary of employee one is %d", emp1.salary);
    printf("\nsalary of employee two is %d", emp2.salary);
    printf("\nsalary of manager is %d", manager());
    return 0;
}