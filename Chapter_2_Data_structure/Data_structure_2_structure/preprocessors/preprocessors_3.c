#include <stdio.h>
#include <string.h>

#define area(l, b) (l * b)
#define perimeter(l, b) (2 * (l + b))


int main() {
    int l, b;
    char oprt[20];

    printf("Enter the values for l and b: \n");
    scanf("%d %d", &l, &b);

    printf("Enter the operation you want: \n");
    scanf("%s", oprt);

    // Evaluate the operation using preprocessor directives
    #if defined(area) && defined(perimeter)
        if (strcmp(oprt, "area") == 0) {
            printf("Area of the rectangle is: %d\n", area(l, b));
        } else if (strcmp(oprt, "perimeter") == 0) {
            printf("Perimeter of the rectangle is: %d\n", perimeter(l, b));
        } else {
            printf("Sorry, choose a valid operation.\n");
        }
    #else
        printf("Error: Preprocessor macros 'area' and 'perimeter' are not defined.\n");
    #endif

    return 0;
}

