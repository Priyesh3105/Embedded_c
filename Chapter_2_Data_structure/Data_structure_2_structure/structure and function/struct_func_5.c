#include <stdio.h>
#include <stdlib.h>

struct point{
    int x, y;
};

struct point* fun(int a, int b){
    struct point *ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = a;
    ptr->y = b +5;
    return ptr;
}

void print(struct point *ptr){
    printf("%d %d\n", ptr->x, ptr->y);
}

int main(){
    struct point *ptr1 , *ptr2;
    ptr1 = fun(1,2);
    ptr2 = fun(3,4);
    print(ptr1);
    print(ptr2);
    return 0;
}