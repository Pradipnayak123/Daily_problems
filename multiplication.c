#include <stdio.h>

int main(){
    //1st order
    int m;
    printf("Enter no of rows of 1 St matrix:");
    scanf("%d",&m);
    int n;
    printf("\nEnter no of coloum of 1 St matrix:");
    scanf("%d",&n);
    // Input the First Matrix
    int a[m][n];
    printf("\n Enter The Elements of 1St MAtrix:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        
    }
    
    
    //2nd matrix order
    int p;
    printf("Enter no of rows of 2 St matrix:");
    scanf("%d",&p);
    int q;
    printf("Enter no of coloum of 2 St matrix:");
    scanf("%d",&q);
     // Input the second Matrix 
    int b[m][n];
    printf("\n Enter The Elements of 2nd MAtrix:");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d",&b[i][j]);
            
        }
        
    }
    //Check
    if(n!=p){
        printf("The Matrix Can not be Multiply");
        
    }
    else{
        //multiplication
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                // i row , j colum
                for (int k = 0; k < n; k++)
                {
                   res[i][j] += a[i][k] * b[k][j];
                }
                
            }
        }
        // print 
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ",res[i][j]);
                
            }
            printf("\n");
            
            
        }
        
    }


    
    return 0;
}`