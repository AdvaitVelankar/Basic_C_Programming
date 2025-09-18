#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(int i=1; i<=10; i++)
    {
        int t= (n*i);
        printf("%d x %d = %d\n", n, i, t);
    }
    return 0;
}