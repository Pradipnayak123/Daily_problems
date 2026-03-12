#include <stdio.h>

int main(){
    int arr[8] = {1,7,7,7,7,7,7};
    int largest = arr[0];
    for(int i = 0;i<8;i++){
     if(arr[i]>largest){
        largest = arr[i];
     }
    }
    // for(int i =6;i>=0;i-- ){
    //     if(arr[i]!=largest){
    //         printf("The Second Largest is %d",arr[i]);
    //         break;
            
    //     }
    // }
    int secondLargest = -1;
    for(int i = 0;i<8;i++){
        if((arr[i]>secondLargest)&&(arr[i]!=largest))
        secondLargest = arr[i];
    }
    printf("The Second Largest is %d",secondLargest);
    


    return 0;
}