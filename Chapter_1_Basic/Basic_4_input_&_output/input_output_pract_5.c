#include<stdio.h>

//fgets() Reads a line of text from a specified input stream and stores it in a string.

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("%s",str);
    return 0;
}