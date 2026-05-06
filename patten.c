#include <stdio.h>

int main(){
    int n;
    printf("ENter a Number :");
    scanf("%d",&n);
    int nsp = n-1;
    
    for (int i = 1; i <= n; i++)
    {
        {
            
            printf(" ");
            
        }
        nsp--;
        for (int m = 1; m <=nsp; m++)
        
        for (int j = 1; j <= i; j++)
        {
            char ch = (char)(j+64);
            printf("%c",ch);
            
        }
        int a = i - 1;
        for (int k = 1; k <= i -1; k++)
        {
            
            char ch = (char)(a+64);
            printf("%c",ch);
            a--;
            
        }
        
        printf("\n");
        
        
    }
    
    
    return 0;
}