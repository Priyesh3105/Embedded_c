#include<stdio.h>

int main(){
    int a = 2;
    int b = 5;
    printf("the value of a before xor swap %d\n", a);
    printf("the value of b before xor swap %d\n", b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("the value of a after xor swap %d\n", a);
    printf("the value of b after xor swap %d\n", b);

    return 0;
}

