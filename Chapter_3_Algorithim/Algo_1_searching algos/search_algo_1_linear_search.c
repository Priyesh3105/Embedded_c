#include <stdio.h>

int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Found the target, return its index
        }
    }
    return -1;  // Target not found in the array
}

int main() {
    int my_array[] = {1, 3, 5, 7, 9, 11, 13};
    int target_value = 0;
    int n = sizeof(my_array) / sizeof(my_array[0]);

    int result = linear_search(my_array, n, target_value);
    if (result != -1) {
        printf("Target %d found at index %d.\n", target_value, result);
    } else {
        printf("Target %d not found in the array.\n", target_value);
    }

    return 0;
}