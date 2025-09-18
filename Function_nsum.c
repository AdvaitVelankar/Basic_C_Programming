#include <stdio.h>

int sum(int);

int sum(int n)
{
    if(n==1)
    return 1;
    else
    return (sum(n-1)+n);
}

int main()
{
    int n;
    printf("Enter the nth number for sum\n");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is %d", n, sum(n));
    return 0;
}