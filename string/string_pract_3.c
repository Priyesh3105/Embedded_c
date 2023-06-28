#include<stdio.h>

int main(){
    //using scanf function 
    char ab[10];
    printf("enter the string: ");
    scanf("%s",ab);
    printf("\n%s\n",ab);

    //using gets function which is unsafe and compiler doesn't compiles this code
    char *c;
    printf("\nenter the string: \n");
    gets(c);
    printf("%s",c);
}