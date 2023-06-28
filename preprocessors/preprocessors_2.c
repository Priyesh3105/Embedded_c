#include<stdio.h>
#define PI 3.14

int main() {
    int r;
    printf("Enter the value of r: ");
    scanf("%d", &r);
    
    while (r != 0) {
#ifndef area
        #define area(r) (PI * r * r)
        printf("Now the value of r is %d\n", r);
        printf("The area of the circle is: %.2f\n", area(r));
#endif

#ifdef area
        printf("\n------------------------\n| Here undefining area. |\n------------------------\n\n");
        #undef area
#endif

        r--;
    }
   
    return 0;
}