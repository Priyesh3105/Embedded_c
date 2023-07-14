#include<stdio.h>

//Size of union

union abc{
    int p;
    char q;
    float r;
    double s;
};

int main(){
    printf("%d", sizeof(union abc));
    return 0;
}