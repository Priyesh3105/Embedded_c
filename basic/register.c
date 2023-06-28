#include <stdio.h>

int main() {
    register int count = 0;
    int i;

    for (i = 0; i < 1000000; i++) {
        count++;
    }

    printf("Count: %d\n", count);

    return 0;
}
