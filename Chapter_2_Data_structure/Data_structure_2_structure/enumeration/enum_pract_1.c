#include<stdio.h>

enum bool {False, True};

int main(){
    enum bool var;
    var = True;
    printf("%d",var);
    return 0;
}