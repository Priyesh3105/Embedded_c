#include <stdio.h>

int counter = 0;

void increment() {
    counter++;
    printf("Counter: %d\n", counter);
}

int main() {
    increment();  // Output: Counter: 1
    increment();  // Output: Counter: 2
    increment();  // Output: Counter: 3

    return 0;
}
