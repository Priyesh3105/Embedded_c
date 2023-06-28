#include<stdio.h>
#include<string.h>
 
//array of strings 
int main(){
    char *fruits[] = {"2 Orranges", "2 Apples" ,"3 Banana","1 Pineapples"};
    int cmp = strcmp(fruits[1],fruits[2]);
    if(cmp < 0)
        printf("%s are lesser than %s", fruits[1], fruits[2]);
    else if (cmp > 0)
        printf("%s are greater than %s", fruits[1], fruits[2]);
    return 0;
}