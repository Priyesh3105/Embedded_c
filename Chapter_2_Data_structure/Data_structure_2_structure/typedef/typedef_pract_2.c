#include <stdio.h>
#include <string.h>

//typedef with struct

typedef struct order {
    char name[100];
    float price;
    int discount;
} dish;

int main() {
    dish a, b, c;
    strcpy(a.name, "chhole bhature");
    a.price = 149.0;
    a.discount = 50;

    // Print the values
    printf("Name: %s\n", a.name);
    printf("Price: %.2f\n", a.price);
    printf("Discount: %d%%\n\n", a.discount);

    strcpy(b.name, "idli sambhar");
    b.price = 99.0;
    b.discount = 25;

    // Print the values
    printf("Name: %s\n", b.name);
    printf("Price: %.2f\n", b.price);
    printf("Discount: %d%%\n\n", b.discount);

    strcpy(c.name, "vada pav");
    c.price = 49.0;
    c.discount = 12;

    // Print the values
    printf("Name: %s\n", c.name);
    printf("Price: %.2f\n", c.price);
    printf("Discount: %d%%\n\n", c.discount);

    return 0;
}
