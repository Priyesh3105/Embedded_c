#include<stdio.h>
#include<string.h>

// printing reverse of a string using pointers

int main(){
    char p[20];
    char *s = "string";
    int len = strlen(s);
    int i;
    for (i = 0; i < len; i++)
        p[i] = s[len - i - 1];
    p[len] = '\0'; // add null-terminator
    printf("%s", p);
    return 0;
}