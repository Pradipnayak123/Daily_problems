#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    int arr[n];

    // Input original array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find maximum element to size the new array
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // New array initialized with 0
    int newArr[max + 1];
    for (int i = 0; i <= max; i++) {
        newArr[i] = 0;
    }

    // Check duplicates
    for (int i = 0; i < n; i++) {
        if (newArr[arr[i]] == 0) {
            newArr[arr[i]] = 1;   // mark as seen
        } else {
            printf("Duplicate element found: %d\n", arr[i]);
        }
    }

    return 0;
}