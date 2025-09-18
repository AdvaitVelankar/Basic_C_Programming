#include <stdio.h>

int series (int);

int series (int n)
{
    if(n==1 || n==2)
    return n-1;
    else
    return series(n-1)+series(n-2);
}
int main()
{
    int n;
    printf("Enter number for nth Fibonacci Series\n");
    scanf("%d", &n);
    printf("The value on number %d is %d",n, series(n));
    return 0;
}