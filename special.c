#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int min = 0;
    for (int i = 1; i <= 2*n - 1 ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
          if (i<j) min = i;
         else min = j;
         printf("%d",min);
         
          
        } 
        printf("\n");

        }
        
    
    
    
    return 0;
}