#include <stdio.h>

struct point{
    int x, y;
};

void print(struct point *ptr){
    printf("%d %d\n", ptr->x, ptr->y);
}

int main(){
    struct point p1 = {1,2};
    struct point p2 = {3,4};
    print(&p1);
    print(&p2);
    return 0;
}