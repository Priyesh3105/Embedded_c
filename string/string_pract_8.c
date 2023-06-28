#include<stdio.h>
#include<string.h>

//using strcat() function

int main(){
    char str1[100], str2[100];
    strcpy(str1, "welcome to ");
    strcpy(str2, "D&K technologies.");
    printf("%s\n",str1);
    printf("%s\n",str2);
    strcat(str1, str2);
    printf("%s",str1);
    return 0;
}