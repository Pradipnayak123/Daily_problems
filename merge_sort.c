#include <stdio.h>

void merge(int arr[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int temp[100]; // Tamporary Array
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= ub)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // copy Back to Original Array

    for (int x = lb; x <= ub; x++)
    {
        arr[x] = temp[x];
    }
}

void merge_sort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid + 1, ub);

        merge(arr, lb, mid, ub);
    }
}
// Print Array

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;

    printf("Enter The Number of Element:");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter Array Element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nBefore Sorting: ");
    printArray(arr, n);

    merge_sort(arr, 0, n - 1);

    printf("\nAfter Sorting: ");
    printArray(arr, n);

    return 0;
} 