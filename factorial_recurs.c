#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1; // Base  Case
    int recAns = n * factorial(n - 1);
    return recAns;
}

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);

    return 0;
}