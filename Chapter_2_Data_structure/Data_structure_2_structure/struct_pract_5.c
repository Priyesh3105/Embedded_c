#include<stdio.h>

//Designated Initialization in Structures

struct abc {
    int x;
    int y;
    int z;
};

int main(){
    struct abc a= {.y =8, .z=10, .x=6};
    printf("%d %d %d",a.x, a.y, a.z);
    return 0;
}