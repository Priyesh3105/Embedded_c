#include<stdio.h>
#if !defined(MOOD)
    #define MOOD "bekkkkkkar"
#endif

int main(){
    printf("your mood is: %s\n", MOOD);
    return 0;
}