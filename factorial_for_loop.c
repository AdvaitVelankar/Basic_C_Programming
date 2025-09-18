#include <stdio.h>

int main()
{
    int n, i, multiply=1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    multiply*=(i);
    printf("factorial of %d is %d",n, multiply);
    return 0;
}