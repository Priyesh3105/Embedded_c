#include<stdio.h>

//fputs() Writes a string to the specified output stream.

int main(){
    char str[100] = "fputs function is working";
    fputs(str, stdout);
    fputs("\nOk! thik hai", stdout);
    return 0;
}