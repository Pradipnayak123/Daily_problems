#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[50];
    int n;
    printf("Enter The Array Size:");
    scanf("%d", &n);
    printf("Enter Array Element:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted  Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                mindx = j;
            }
        } 
        // Swap min and First Element of Unsorted Part
        //swap min indes and i;
        int temp = arr[mindx];
        arr[mindx] = arr[i];
        arr[i] = temp;

    }
    printf("\n");

    printf("sorted  Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
