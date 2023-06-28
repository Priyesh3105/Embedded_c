#include <stdio.h>

#define PI 3.14159
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    printf("The value of PI is: %f\n", PI);

    int x , y;
    printf("enter the value\n");
    scanf("%d %d",&x , &y);
    int max = MAX(x, y);
    printf("The maximum value between %d and %d is: %d\n", x, y, max);

    #undef PI
    #define PI 3.14

    printf("The new value of PI is: %f\n", PI);

    return 0;
}