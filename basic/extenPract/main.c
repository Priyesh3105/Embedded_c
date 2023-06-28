#include<stdio.h>
extern int a;

int main(){
    printf("%d is an external variable", a);
    return 0;
}