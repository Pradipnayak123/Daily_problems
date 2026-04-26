#include <stdio.h>
void insertation_sort(int arr[],int n){
int temp;
int j;
for (int i = 1; i <n; i++)
{
    temp = i;
    j=i-1;
    while (j>=0 && arr[j]>temp)
    {
        arr[j+1]  = arr[j];
        
    }
    j--;
    arr[j+1] =  temp;
    
}

}




int main(){
    int arr[] = {5,4,3,2,1};
    int n=5;
    insertation_sort(arr,n);
    return 0;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        
    }
}
