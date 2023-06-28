#include<stdio.h>

union abc{
    int a;
    char b;
}var;

int main(){
    var.a =89;
    union abc *p = &var;
    printf("%d\n", p->a);
    printf("%c\n", p->b);
    return 0;
}