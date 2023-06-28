#include<stdio.h>
#include<string.h>

//general question

void fun1(char *str1, char *str2){
    char *temp;
    temp = str1;
    str1 = str2;
    str2 = temp;
}

void fun2(char **str1, char **str2){
    char *temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main(){
    char *str1 = "Hi", *str2 = "Bye";

    fun1(str1, str2); printf("%s %s ", str1, str2);
    fun2(&str1, &str2); printf("%s %s ", str1, str2);
}