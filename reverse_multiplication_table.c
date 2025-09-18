#include <stdio.h>

int main()
{
    int n, i, t;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(i=10; i; i--)
    {
        t=(n*i);
        printf("%d x %d = %d\n", n, i, t);
    }
    return 0;
}