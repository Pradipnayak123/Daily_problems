#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of Array");
    scanf("%d",&n);
    int arr[n];
    printf("ENter The Array Elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int largest = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("The Largest Element is %d",largest);
    
    
    return 0;
}