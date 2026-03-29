#include <stdio.h>

int main(){
    int n=9;
    int arr[10]= {1,2,3,5,4,7,6,8,9,7};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
                   if(arr[i]==arr[j]){
                    printf("The Duplicate Element is %d",i);
                    break;
                    
                   }
        }
    }
    return 0;
}