#include<stdio.h>
#include<string.h>

//general question

int main(){
    char c[] = "GATE2023";
    char *p = c;
    printf("%s", p + p[3] -p[1]);
    return 0;
}