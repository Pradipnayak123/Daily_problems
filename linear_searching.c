#include <stdio.h>

int main(){
    int n;
    printf("Enter The Size:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter The Array Elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);   // ✅ fixed
    }

    int key;
    printf("Enter The Element Which You Want:\n");
    scanf("%d", &key);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            printf("The Element %d is Found at index %d\n", key, i);
            found = 1;
            break;  // optional (stop after first match)
        }
    }

    if(found == 0){
        printf("Element not found\n");
    }

    return 0;
}