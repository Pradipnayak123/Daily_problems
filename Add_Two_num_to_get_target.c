#include <stdio.h>

int main(){
    int found = 0;
    int target = 8;
    int n=7;int i,j;
    int num1,num2;
    int arr[]={1,2,3,4,5,8,9,10};
    for( i=0;i<n-1;i++){
        for( j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                found = 1;
                 num1 = arr[i];
                 num2=arr[j];
                break;
            }
        }
    }
    if(found == 0){
        printf("Not Found");
        
    }
    else{
        printf("Two Numbers are %d and %d",num1,num2);
        
    }
    return 0;
}