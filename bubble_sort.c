#include <stdio.h>

int main(){
    int arr[50];
    int n;
    printf("Enter The Array Size:");
    scanf("%d",&n);
    printf("Enter Array Element:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Original Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //Bubble Sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    
     printf("sorted  Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
