// #include <stdio.h>

// int main(){
//     int a = 1,b = 1,sum =1;
//     int num;
//     printf("Enter a Number:");
//     scanf("%d",&num);
//     for (int i = 0; i < num-2; i++)
//     {
//         sum = a +b;
//         a = b;
//         b = sum;
//     }
//     printf("The Fibonacci of %d is %d",num,sum);
    
    
    
    
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int a = 0,b = 1,sum=0;
//     int num;
//     printf("Enter a Number:");
//     scanf("%d",&num);
//     for (int i = 0; i < num; i++)
//     {
//         sum = a +b;
//         a = b;
//         b = sum;
//         printf("\n %d",sum);
//     }
    
    
    
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int a = 0, b = 1, sum;
    int num = 7;   // number of terms

    printf("%d %d ", a, b);

    for (int i = 3; i <= num; i++) {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    return 0;
}
