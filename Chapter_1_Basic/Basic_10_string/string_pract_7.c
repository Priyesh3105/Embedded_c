#include<stdio.h>
#include<string.h>

//comparing strlen() and sizeof() function

int main(){
    char str[100] = "hello world!";
    printf("%d\n", strlen(str));
    printf("%d\n", sizeof(str)/sizeof(str[0]));
    return 0;
}