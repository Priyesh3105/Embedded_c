#include <stdio.h>
#include <math.h>

void printCircle(int radius) {
    int diameter = 2 * radius;

    for (int y = -radius; y <= radius; y++) {
        for (int x = -radius; x <= radius; x++) {
            double distance = sqrt(x * x + y * y);
            if (distance <= radius + 0.5 && distance >= radius ) {
                printf(". ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    printCircle(radius);

    return 0;
}
