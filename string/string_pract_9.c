#include<stdio.h>
#include<string.h>

//using strlen() function

int main(){
    char str1[5], str2[100];
    strcpy(str1, "he");
    strcpy(str2, "llo!");
    printf("%s\n",str1);
    printf("%s\n",str2);
    strncat(str1, str2, sizeof(str1)-strlen(str1)-1);
    printf("%s",str1);
    return 0;
}
