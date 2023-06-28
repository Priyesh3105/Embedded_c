#include<stdio.h>

//Pointer to Structure Variable

struct abc{
    int x;
    int y;
};

int main(){
    struct abc a = {12, 5};
    struct abc *ptr = &a;

    printf("%d %d", ptr->x, ptr->y);
    return 0;
}