#include<stdio.h>

//Definition of unions in C

union abc{
    int a;
    char b;
}var;

int main(){
    var.a =65;
    printf("%d\n", var.a);
    printf("%c\n", var.b);
    return 0;
}