#include<stdio.h>

//area of rectangle using two points

struct point{
    int x, y;
};

struct rectangle{
    struct point upper_left;
    struct point lower_right;
};

int area(struct rectangle r){
    int length, breadth;
    length =  r.lower_right.x - r.upper_left.x;
    breadth = r.upper_left.y - r.lower_right.y;
    return length * breadth;
}

int main(){
    struct rectangle r;
    printf("enter the dimensons of uper left point: ");
    scanf("%d %d",&r.upper_left.x, &r.upper_left.y);
    printf("enter the dimensons of lower right point: ");
    scanf("%d %d",&r.lower_right.x, &r.lower_right.y);
    printf("area of rectangle r is %d", area(r));
    return 0;    
}