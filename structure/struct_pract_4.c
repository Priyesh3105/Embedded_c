#include<stdio.h>

//Initializing & Accessing the Structure Members

struct car
{
    char *engine;
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main(){
    struct car c1 = {"DDis 190 Engine","Disel",37,5,19.74};
    struct car c2 = {"kappa","petrol",22,8,14.5};
    printf("%s %s %d %d %f\n", c1.engine, c1.fuel_type, c1.fuel_tank_cap, c1.seating_cap, c1.city_mileage);
    printf("%s %s %d %d %f\n", c2.engine, c2.fuel_type, c2.fuel_tank_cap, c2.seating_cap, c2.city_mileage);
    return 0;
}