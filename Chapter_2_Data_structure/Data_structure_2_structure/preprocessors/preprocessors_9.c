#include<stdio.h>
#define square(x) ((x) * (x))

int main(){
    int n;
    printf("enter the value for n: \n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("%d  ", square(i));
    }
}