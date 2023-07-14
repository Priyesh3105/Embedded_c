#include<stdio.h>
#define pi 3.14
#define area pi*r*r
#define STRING "%s is a constant using #define"
#define VAL "Hello World!"

int main(){

    int r = 7;
    printf("%.2f is the area of the circle\n", area);
    printf(STRING,VAL);
    return 0;

}