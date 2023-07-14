#include <stdio.h>

void print(int *arr, int n);

void insertion_sort(int *arr, int n)
{
    int key, j, count = 0, check = 0, k = 1;
    printf("Insertion sort running...\n");
    for (int i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = key;
        if (count > check)
        {
            printf("sorting in pass %d -> ", k);
            print(arr, n);
            k++;
            check = count;
        }
    }
}

void print(int *arr, int n)
{
    printf("array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {54, 356, 78, 43, 890, 234, 189};
    int n = 7;

    print(arr, n);
    insertion_sort(arr, n);
    print(arr, n);
    return 0;
}