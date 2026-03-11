#include <stdio.h>

int main(){
    int arr[6] = {1,2,4,7,7,5};
    int largest = arr[0]; 
    int secondLargest = -1;
    for(int i = 0;i<6;i++){
        if(arr[i]>largest){
            largest = arr[i];// Largest Element
            secondLargest = arr[i];
        }

    }
    printf("The Largest Number is %d and Second Largest Number is %d",largest,secondLargest);
    
    return 0;
}