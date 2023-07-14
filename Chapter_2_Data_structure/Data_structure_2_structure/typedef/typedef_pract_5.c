#include <stdio.h>

typedef int (*ArithmeticFunction)(int, int);

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int main() {
    ArithmeticFunction operation;

    // Assigning the 'add' function to the 'operation' pointer
    operation = add;
    printf("Addition: %d\n", operation(5, 3));

    // Assigning the 'subtract' function to the 'operation' pointer
    operation = subtract;
    printf("Subtraction: %d\n", operation(10, 4));

    // Assigning the 'multiplication' function to the 'operation' pointer
    operation = multiplication;
    printf("Multiplication: %d\n", operation(5, 8));

    // Assigning the 'division' function to the 'operation' pointer
    operation = division;
    printf("Division: %d\n", operation(121, 11));

    return 0;
}
