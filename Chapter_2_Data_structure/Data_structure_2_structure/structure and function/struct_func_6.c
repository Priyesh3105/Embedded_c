#include<stdio.h>

struct point{
    int x;
    char y;
};

void print(struct point arr[]){
    for (int i=0; i<2; i++)
    printf("%d -> %c\n", arr[i].x, arr[i].y);
}

int main(){
    struct point arr[2] ={{1,68}, {2, 76}};
    print(arr);
    return 0;
}