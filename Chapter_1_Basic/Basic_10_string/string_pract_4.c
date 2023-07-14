#include<stdio.h>

//make an input funbction using getchar() function

int input(char str[], int n){
    int ch, i=0;
    while((ch = getchar()) != '\n')
    if(i < n)
    str[i++] = ch;
    str[i] = '\0';
    return i;
}

int main(){
    char str[100];
    int n = input(str, 9);
    printf("%d %s", n, str);
    return 0;
}