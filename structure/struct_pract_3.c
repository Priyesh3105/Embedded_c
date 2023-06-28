#include<stdio.h>

//declearation using typedef

typedef struct car
{
    char *engine;
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
}car;

int main(){
    car c1;
    c1.engine="DDis 190 Engine";
    printf("%s",c1.engine);
    return 0;
}
