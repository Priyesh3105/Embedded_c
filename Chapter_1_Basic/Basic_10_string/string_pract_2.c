#include<stdio.h>

//declearing string using pointers

int main(){
    char *ptr = "hello";
    printf("%s\n", ptr);
    printf("%.4s\n", ptr);
    printf("%9.4s\n", ptr);
    puts(ptr);
}