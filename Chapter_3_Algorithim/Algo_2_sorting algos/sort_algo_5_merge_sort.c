#include <stdio.h>

int count = 0;

void print(int *arr, int n)
{
    printf("array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k, brr[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            brr[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        brr[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        brr[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i < k; i++)
    {
        arr[i] = brr[i];
    }
    count++;
}

void merge_sort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
        printf("Quick sort pass: %d -> ", count);
        print(arr, high);
    }
}

int main()
{
    int arr[] = {23, 89, 38, 28, 5789, 8};
    int n = 6;

    print(arr, n);
    printf("merge sort running...\n");
    merge_sort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}