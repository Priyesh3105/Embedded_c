#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int count = 0, q = num;
    while (q != 0) {
        q = q / 10;
        count++;
    }

    int cnt = count, rem, mul, result = 0;
    q = num; // Reset q to num
    while (q != 0) {
        rem = q % 10;
        mul = 1; // Initialize mul to 1
        while (cnt != 0) {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q / 10;
    }

    if (result == num)
        printf("This is an Armstrong number.\n");
    else
        printf("This is not an Armstrong number.\n");

    return 0;
}
