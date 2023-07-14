#include <stdio.h>

int k = 0;

void print(int *arr, int n);

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    k++;
    return j;
}

void quick_sort(int *arr, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        if (k % 2 == 0)
        {
            printf("Quick sort pass: %d -> ", k / 2);
            print(arr, 15);
        }
        quick_sort(arr, low, partitionIndex - 1);
        quick_sort(arr, partitionIndex + 1, high);
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
    int arr[] = {25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    int n = 15;

    print(arr, n);
    printf("Quick sort running...\n");
    quick_sort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}
