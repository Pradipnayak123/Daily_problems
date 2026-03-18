#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("The Value of a is %d and b is %d before Swaping",a,b);
    a = (a+b) - (b=a);
    printf("\nThe Value of a is %d and b is %d After Swaping",a,b);

    return 0;
}