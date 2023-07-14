#include<stdio.h>

//structure variables

struct
{
    char *engine;
}car1, car2;

int main(){
    car1.engine = "JDSBUD_623_JMNC";
    car2.engine = "FCDA_JNCVD_1256";
    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);
    return 0;
}