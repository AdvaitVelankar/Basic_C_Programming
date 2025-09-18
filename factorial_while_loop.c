#include <stdio.h>

int main()
{
    int n, i=1, multiply = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        multiply *= (i);
        i++;
    }
    printf("factorial of %d is %d", n, multiply);
    return 0;
}