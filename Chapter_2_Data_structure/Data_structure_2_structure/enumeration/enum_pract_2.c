#include<stdio.h>

int main(){
    enum bool {False, True};
    enum bool var;
    var = True;
    printf("%d",var);
    return 0;
}