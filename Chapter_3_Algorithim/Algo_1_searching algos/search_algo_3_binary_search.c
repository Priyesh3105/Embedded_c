#include <stdio.h>

int binary_search(int arr[], int l, int r, int s)
{
    while(l<=r)
    {
        int mid = l + (r-1)/2;

        //check s at mid
        if(arr[mid] == s)
        {
            return mid;
        }
        else if(arr[mid] < s)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 23, 45, 53, 76, 78, 86};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 54;

    int ans = binary_search(arr, 0, n-1, key);
     if(ans == -1)
     {
        printf("Element is not present in array");
     }
     else
     {
        printf("%d is present at index %d", key, ans);
     }
}