
#include<stdio.h>

int main(){
    int x, y;
    printf("please enter the first number: ");
    scanf("%d", &x);
    printf("please enter the second number: ");
    scanf("%d", &y);

    if(y>0){
        while (y!=0)
            {
                x++;
                y--;
            }
    }
    else if(y<0){
        while (y!=0)
            {
                x--;
                y++;
            }
    }
    
    
    printf("%d is the addition of two numbers", x);
    return 0;
}