#include <stdio.h>

typedef int* IntPtr;

int main() {
    int a = 10, b=20, c=30;
    IntPtr p, q, r;  // Define a pointer using the typedef

    p = &a;  // Assign the address of variables to the pointer
    q = &b;
    r = &c;

    printf("Value of a: %d\n", a);
    printf("Value pointed by p: %d\n\n", *p);
    printf("Value of b: %d\n", b);
    printf("Value pointed by q: %d\n\n", *q);
    printf("Value of c: %d\n", c);
    printf("Value pointed by r: %d\n\n\n", *r);

    *p = 30;  // Change the value of variable using the pointer
    *q = 20;
    *r = 10;

    printf("Updated value of num a: %d\n\n", a);
    printf("Updated value of num b: %d\n\n", b);
    printf("Updated value of num c: %d\n\n", c);

    return 0;
}
