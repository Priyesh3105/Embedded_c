#include<stdio.h>

struct code{
    int x;
    int c;
    struct code *ptr;
};

int main(){

    struct code var1;
    struct code var2;

    var1.x = 12;
    var1.c = 76;
    var1.ptr = NULL;

    var2.x = 56;
    var2.c = 69;
    var2.ptr = NULL;

    var1.ptr = &var2;
    printf("%d %c", var1.ptr -> x, var1.ptr -> c);

    return 0;    
}