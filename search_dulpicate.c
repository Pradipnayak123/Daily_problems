#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,5,6,7,8,9};
    int n = 9;  // numbers should be from 1 to 9
    int sum = 0;

    // Sum of ALL array elements (size = 10)
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    int result = sum - expectedSum;

    printf("The Duplicate Element in The Array is %d\n", result);

    return 0;
}