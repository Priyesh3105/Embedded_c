#include<stdio.h>

int areaOfRect(int length, int breadth){
        int area;
        area = length * breadth;
        return area;
}

int main(){
    int l, b;
    printf("enter the length: ");
    scanf("%d",&l);
    printf("enter the breadth: ");
    scanf("%d",&b);
    int area = areaOfRect(l,b);
    printf("%d is the area of rectangle.", area);

    return 0;    
}