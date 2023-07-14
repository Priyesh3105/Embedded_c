#include<stdio.h>
#include<string.h>

//GENERAL QUESTION

void foo(char *a){
    if(*a && *a != ' '){
        foo(a+1);
        putchar(*a);
    }

}

int main(){
    foo("Priyesh shahi");
}