#include<stdio.h>
#include<string.h>

// using strcmp()

int main(){
    char *str1 = "abcd";
    char *str2 = "abce";

    printf("%d\n", strcmp(str1, str2));
    if(strcmp(str1, str2)<0)
    printf("str1 isd lesser than str2");
    else if (strcmp(str1, str2)==0)  
    printf("str1 and str2 are equal.");
    else
    printf("str1 is greater than str2");

    return 0;
}