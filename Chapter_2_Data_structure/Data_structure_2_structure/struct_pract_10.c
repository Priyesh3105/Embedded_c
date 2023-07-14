#include<stdio.h>

//general question

struct point{
    int x, y, z;
};

int main(){
struct point p1 = {.y =0, .z=89, .x=32};
printf("%d %d %d", p1.x, p1.y, p1.z);
return 0;
}