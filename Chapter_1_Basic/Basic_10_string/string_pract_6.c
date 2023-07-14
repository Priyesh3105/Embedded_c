#include<stdio.h>
#include<string.h>

//using strcpy() function

int main(){
    char str1[6] = "hello";
    char str2[6];
    printf("%s\n",strcpy(str2, str1));
    printf("%s", str2);

    char a[4] = "abc";
    char b[4];
    char c[4];
    strcpy(c,strcpy(b,a));
    printf("%s\n%s\n%s\n",a,b,c);

    char p[9] = "himalaya";
    char q[6];
    strncpy(q , p, sizeof(q));
    printf("%s\n%s\n%s\n",a,b,c);

    return 0;
}