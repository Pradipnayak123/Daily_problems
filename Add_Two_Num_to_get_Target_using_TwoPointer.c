#include <stdio.h>

int main(){
    int n;
    int arr[50];
    printf("Enter The Size of The Array:");
    scanf("%d",&n);
    printf("\nEnter Array Elements:");
    for(int m=0;m<n;m++){
        scanf("%d",&arr[m]);
    }
    
    int target;
    printf("Enter The Target Value:");
    scanf("%d",&target);
    
    
    int i=0;
    int j=n-1;
    int found =0;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("The Two Numbers are:%d and %d",arr[i],arr[j]);
            found =1;
            break;
            
        }
        if(arr[i]+arr[j]<target){
            i++;
        }
        if(arr[i]+arr[j]>target){
            j--;
        }
    }
    if(found==0){
        printf("No pair Found");
        
    }
    return 0;
}