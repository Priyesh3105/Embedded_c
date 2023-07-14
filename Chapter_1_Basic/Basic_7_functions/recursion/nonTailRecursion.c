#include <stdio.h>

int fun(int n) {
    if (n == 1) {
        return 0;
    } else {
        return (1 + fun(n / 2));
    }
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int result = fun(num);
    printf("Result: %d\n", result);
    return 0;
}
