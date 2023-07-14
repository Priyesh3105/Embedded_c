#include<stdio.h>

//Declaring an Array of Structure

struct car
{
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main(){
    struct car c[2];
    int i;
    for(i=0; i<2; i++){
        printf("enter the fuel_tank_cap for car %d: ", i+1);
        scanf("%d", &c[i].fuel_tank_cap);
        printf("enter the seating_cap for car %d: ", i+1);
        scanf("%d", &c[i].seating_cap);
        printf("enter the fuel_tank_cap for car %d: ", i+1);
        scanf("%d", &c[i].city_mileage);
        printf("\n");
    }
    printf("\n");
    for(i=0; i<2; i++){
        printf("\ncar details of %d car\n", i+1);
        printf("fuel_tank_cap for car %d: %d \n", i+1, c[i].fuel_tank_cap);        
        printf("seating_cap for car %d: %d \n", i+1, c[i].seating_cap);
        printf("fuel_tank_cap for car %d: %d\n", i+1, c[i].city_mileage);        
    }
}