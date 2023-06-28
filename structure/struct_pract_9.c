#include<stdio.h>
#pragma pack(1)

//Structure Packing in C

struct abc{
    char a;
    int b;
    char c;
};

int main(){
    struct abc var;
    printf("size of struct var is %d.", sizeof(var));
    return 0;
}